/// <reference path="../winter2022.d.ts" />
/// <reference path="util.ts" />

/**
 * Sequence actions are objects that you can use to queue up work to happen in a sequence over time.  
 */
interface ISequenceAction
{
	/**
	 * Initialization code for the sequence action
	 */
	start (): void;
	/**
	 * Called per frame. First call will be on the same frame as `start()` is called;
	 * Return false when this action is complete.
	 */
	update (): boolean;
	/**
	 * Finalization code for the sequence action.
	 * Set the state to final values.
	 * Will be called on the same frame as `update()` returns `false`.
	 */
	finish (): void;
}

/**
 * Call RunSingleAction to start a single action and continue ticking it until it's done
 */
function RunSingleAction ( action: ISequenceAction ): void
{
	action.start();
	UpdateSingleActionUntilFinished( action );
}

/**
 * asynchronously tick a single action until it's finished, then call finish on it.
 */
function UpdateSingleActionUntilFinished ( action: ISequenceAction ): void
{
	function callback (): void
	{
		if ( !action.update() )
		{
			action.finish();
		}
		else
		{
			$.Schedule( 0.0, callback );
		}
	};
	callback();
}

/** Empty sequence action implementation useful for creating new actions that only implement a few of the functions */
class BaseAction implements ISequenceAction
{
	start (): void { }
	update (): boolean { return false; }
	finish (): void { }
}

/**
 * Action to run a group of other actions in sequence
 */
class RunSequentialActions implements ISequenceAction
{
	actions: ISequenceAction[];
	currentActionIndex = 0;
	currentActionStarted = false;

	constructor( actions: ISequenceAction[] = [] )
	{
		this.actions = actions;
	}

	start (): void
	{
		this.currentActionIndex = 0;
		this.currentActionStarted = false;
	}

	update (): boolean
	{
		while ( this.currentActionIndex < this.actions.length )
		{
			if ( !this.currentActionStarted )
			{
				this.actions[ this.currentActionIndex ].start();
				this.currentActionStarted = true;
			}

			if ( !this.actions[ this.currentActionIndex ].update() )
			{
				this.actions[ this.currentActionIndex ].finish();

				this.currentActionIndex++;
				this.currentActionStarted = false;
			}
			else
			{
				return true;
			}
		}

		return false;
	}

	finish (): void
	{
		while ( this.currentActionIndex < this.actions.length )
		{
			if ( !this.currentActionStarted )
			{
				this.actions[ this.currentActionIndex ].start();
				this.currentActionStarted = true;

				this.actions[ this.currentActionIndex ].update();
			}

			this.actions[ this.currentActionIndex ].finish();

			this.currentActionIndex++;
			this.currentActionStarted = false;
		}
	}
}

/**
 * Action to run multiple actions all at once. The action is complete once all sub actions are done.
 */
class RunParallelActions implements ISequenceAction
{
	actions: ISequenceAction[];
	actionsFinished: boolean[] = [];

	constructor( actions: ISequenceAction[] = [] )
	{
		this.actions = actions;
	}

	start (): void
	{
		this.actionsFinished = new Array( this.actions.length ).fill( false );
		this.actions.forEach( a => a.start() );
	}

	update (): boolean
	{
		let anyTicking = false;
		this.actions.forEach( ( action, index ) =>
		{
			if ( !this.actionsFinished[ index ] )
			{
				if ( !action.update() )
				{
					action.finish();
					this.actionsFinished[ index ] = true;
				}
				else
				{
					anyTicking = true;
				}
			}
		} );

		return anyTicking;
	}

	finish (): void
	{
		this.actions.forEach( ( action, index ) => 
		{
			if ( !this.actionsFinished[ index ] )
			{
				action.finish();
				this.actionsFinished[ index ] = true;
			}
		} );
	}
}

/**
 * Action to run actions looping infinitely until finish is called.
 */
class RunLoopingActions implements ISequenceAction
{
	actions: ISequenceAction[];
	currentActionIndex = 0;
	currentActionStarted = false;
	isStopped = false;

	constructor( actions: ISequenceAction[] = [] )
	{
		this.actions = actions;
	}

	start (): void
	{
		this.currentActionIndex = 0;
		this.currentActionStarted = false;
	}

	update (): boolean
	{
		while ( this.currentActionIndex < this.actions.length )
		{
			if ( !this.currentActionStarted )
			{
				this.actions[ this.currentActionIndex ].start();
				this.currentActionStarted = true;
			}

			if ( !this.actions[ this.currentActionIndex ].update() )
			{
				this.actions[ this.currentActionIndex ].finish();

				this.currentActionIndex++;
				this.currentActionIndex = this.currentActionIndex % this.actions.length;
				this.currentActionStarted = false;
			}
			else
			{
				return true;
			}
		}

		return false;
	}

	finish (): void
	{
		while ( this.currentActionIndex < this.actions.length )
		{
			if ( !this.currentActionStarted )
			{
				this.actions[ this.currentActionIndex ].start();
				this.currentActionStarted = true;

				this.actions[ this.currentActionIndex ].update();
			}

			this.actions[ this.currentActionIndex ].finish();

			this.currentActionIndex++;
			this.currentActionStarted = false;
		}
	}
}

/**
 * Action to wait for some amount of seconds before resuming
 */
class WaitAction implements ISequenceAction
{
	endTimestamp = 0;
	constructor( public seconds: number ) { }
	start (): void { this.endTimestamp = Game.Time() + this.seconds; };
	update (): boolean { return Game.Time() < this.endTimestamp; }
	finish (): void { }
}

/**
 * Action to run multiple actions in parallel, but with a slight stagger start between each of them.
 */
class RunStaggeredActions implements ISequenceAction
{
	staggerSeconds: number;
	actions: ISequenceAction[];
	par!: RunParallelActions;

	constructor( staggerSeconds: number, actions: ISequenceAction[] = [] )
	{
		this.staggerSeconds = staggerSeconds;
		this.actions = actions;
	}

	start (): void
	{
		const parallelActions = this.actions.map( ( action, index ) =>
		{
			if ( index === 0 )
			{
				return action;
			}
			return new RunSequentialActions( [ new WaitAction( index * this.staggerSeconds ), action ] );
		} );

		this.par = new RunParallelActions( parallelActions );
		this.par.start();
	}

	update (): boolean { return this.par.update(); }

	finish (): void { return this.par.finish(); }
}

/**
 * Runs a set of actions but stops as soon as any of them are finished.
 * `continueOtherActions` is a bool that determines whether to continue ticking the remaining actions, or whether to just finish them immediately.
 */
class RunUntilSingleActionFinishedAction
{
	continueOtherActions: boolean;
	actions: ISequenceAction[];
	actionsFinished: boolean[] = [];

	constructor( continueOtherActions: boolean = false, actions: ISequenceAction[] = [] )
	{
		this.continueOtherActions = continueOtherActions;
		this.actions = actions;
	}

	start (): void
	{
		this.actionsFinished = new Array( this.actions.length ).fill( false );
		this.actions.forEach( a => a.start() );
	}

	update (): boolean
	{
		if ( this.actions.length == 0 )
			return false;

		let anyFinished = false;
		this.actions.forEach( ( action, index ) =>
		{
			if ( !action.update() )
			{
				action.finish();
				this.actionsFinished[ index ] = true;
				anyFinished = true;
			}
		} );

		return !anyFinished;
	}

	finish (): void
	{
		this.actions.forEach( ( action, index ) =>
		{
			if ( !this.actionsFinished[ index ] )
			{
				if ( this.continueOtherActions )
					UpdateSingleActionUntilFinished( action );
				else
					action.finish();
			}
		} );
	}
}

class WaitForConditionAction extends BaseAction
{
	f: ( ...args: any[] ) => boolean;
	argsArray: any[];

	constructor( f: ( ...args: any[] ) => boolean, ...argsArray: any[] )
	{
		super();
		this.f = f;
		this.argsArray = argsArray;
	}

	update (): boolean
	{
		return !this.f.apply( null, this.argsArray );
	}
}

/** Action to wait a single frame */
class WaitOneFrameAction extends BaseAction
{
	updated = false;
	update (): boolean
	{
		if ( this.updated )
			return false;
		this.updated = true;
		return true;
	}
}

/**
 * Run an action until it's complete, or until it hits a timeout.
 * `continueAfterTimeout` is a bool determining whether to continue ticking the action after it has timed out
 */
class ActionWithTimeout implements ISequenceAction
{
	action: ISequenceAction;
	timeoutDuration: number;
	continueAfterTimeout: boolean;
	allAction!: RunUntilSingleActionFinishedAction;

	constructor( action: ISequenceAction, timeoutDuration: number, continueAfterTimeout?: boolean )
	{
		this.action = action;
		this.timeoutDuration = timeoutDuration;
		this.continueAfterTimeout = !!continueAfterTimeout;
	}

	start (): void
	{
		this.allAction = new RunUntilSingleActionFinishedAction( this.continueAfterTimeout, [ this.action, new WaitAction( this.timeoutDuration ) ] );
		this.allAction.start();
	}

	update (): boolean
	{
		return this.allAction.update();
	}

	finish (): void
	{
		this.allAction.finish();
	}
}

/**
 * Action that simply runs a passed in function.
 * You may include extra arguments and they will be passed to the called function.
 */
class RunFunctionAction extends BaseAction
{
	f: Function;
	argsArray: any[];

	constructor( f: Function, ...argsArray: any[] )
	{
		super();
		this.f = f;
		this.argsArray = argsArray;
	}

	update (): boolean
	{
		this.f.apply( null, this.argsArray );
		return false;
	}
}

/**
 * Action that calls $.DispatchEvent.
 * You may include extra arguments and they will be passed to event.
 */
class DispatchEventAction<E extends keyof DotaEventHandlers> extends RunFunctionAction
{
	constructor( public eventName: E, ...argsArray: EventParams<DotaEventHandlers[ E ]> )
	{
		super( () => $.DispatchEvent( eventName, ...argsArray ) );
	}
}

/** Action that waits for a specific event type to be fired on the given panel. */
class WaitForEventAction extends BaseAction
{
	panel: Panel_t;
	eventName: keyof DotaEventHandlers;
	receievedEvent = false;

	constructor( panel: Panel_t, eventName: keyof DotaEventHandlers )
	{
		super();
		this.panel = panel;
		this.eventName = eventName;
	}

	start (): void
	{
		$.RegisterEventHandler( this.eventName, this.panel, () => this.receievedEvent = true );
	}

	update (): boolean
	{
		return !this.receievedEvent;
	}
}

/** Action to print a debug message */
class PrintAction extends RunFunctionAction
{
	constructor( public msg: string )
	{
		super( () => $.Msg( this.msg ) );
	}
}

/** Action to add a class to a panel */
class AddClassAction extends RunFunctionAction
{
	constructor( panel: Panel_t | null | undefined, panelClass: string )
	{
		super( () =>
		{
			if ( panel != null )
				panel.AddClass( panelClass );
		} );
	}
}

/** Action to remove a class from a panel */
class RemoveClassAction extends RunFunctionAction
{
	constructor( panel: Panel_t | null | undefined, panelClass: string )
	{
		super( () =>
		{
			if ( panel != null )
				panel.RemoveClass( panelClass );
		} );
	}
}

/** Switch a class on a panel */
class SwitchClassAction extends RunFunctionAction
{
	constructor( panel: Panel_t | null | undefined, panelSlot: string, panelClass: string )
	{
		super( () =>
		{
			if ( panel != null )
				panel.SwitchClass( panelSlot, panelClass );
		} );
	}
}

/** Action to trigger a class on a panel */
class TriggerClassAction extends RunFunctionAction
{
	constructor( panel: Panel_t | null | undefined, panelClass: string )
	{
		super( () =>
		{
			if ( panel != null )
				panel.TriggerClass( panelClass );
		} );
	}
}

/** Action to wait for a class to appear on a panel */
class WaitForClassAction extends WaitForConditionAction
{
	constructor( panel: Panel_t | null | undefined, panelClass: string )
	{
		super( () =>
		{
			return !!( panel && panel.IsValid() && panel.BHasClass( panelClass ) );
		} );
	}
}

/** Action to set an integer dialog variable */
class SetDialogVariableIntAction extends RunFunctionAction
{
	constructor( panel: Panel_t | null | undefined, dialogVariable: string, value: number )
	{
		super( () =>
		{
			if ( panel != null )
				panel.SetDialogVariableInt( dialogVariable, value );
		} );
	}
}

/** Action to animate an integer dialog variable over some duration of seconds */
class AnimateDialogVariableIntAction implements ISequenceAction
{
	startTimestamp = 0;
	endTimestamp = 0;
	constructor( public panel: Panel_t, public dialogVariable: string, public startValue: number, public endValue: number, public seconds: number ) { }

	start (): void
	{
		this.startTimestamp = Game.Time();
		this.endTimestamp = this.startTimestamp + this.seconds;
	}

	update (): boolean
	{
		const now = Game.Time();
		if ( now >= this.endTimestamp )
			return false;

		const ratio = ( now - this.startTimestamp ) / ( this.endTimestamp - this.startTimestamp );

		if ( this.panel && this.panel.IsValid() )
			this.panel.SetDialogVariableInt( this.dialogVariable, Math.floor( this.startValue + ( this.endValue - this.startValue ) * ratio ) );

		return true;
	}

	finish (): void
	{
		if ( this.panel && this.panel.IsValid() )
			this.panel.SetDialogVariableInt( this.dialogVariable, this.endValue );
	}
}

/** Action to set a string dialog variable */
class SetDialogVariableStringAction extends RunFunctionAction
{
	constructor( panel: Panel_t | null | undefined, dialogVariable: string, value: string )
	{
		super( () =>
		{
			if ( panel != null && panel.IsValid() )
				panel.SetDialogVariable( dialogVariable, value );
		} );
	}
}

/** Action to set a progress bar's value */
class SetProgressBarValueAction extends RunFunctionAction
{
	constructor( progressBar: ProgressBar_t, value: number )
	{
		super( () => progressBar.value = value );
	}
}

/** Action to animate a progress bar */
class AnimateProgressBarAction implements ISequenceAction
{
	startTimestamp = 0;
	endTimestamp = 0;
	constructor( public progressBar: ProgressBar_t, public startValue: number, public endValue: number, public seconds: number ) { }

	start (): void
	{
		this.startTimestamp = Game.Time();
		this.endTimestamp = this.startTimestamp + this.seconds;
	}

	update (): boolean
	{
		const now = Game.Time();
		if ( now >= this.endTimestamp )
			return false;

		const ratio = ( now - this.startTimestamp ) / ( this.endTimestamp - this.startTimestamp );
		this.progressBar.value = this.startValue + ( this.endValue - this.startValue ) * ratio;
		return true;
	}

	finish (): void
	{
		this.progressBar.value = this.endValue;
	}
}

/** Action to set a progress bar with middle's upper and lower values */
class SetProgressBarWithMiddleValueAction extends RunFunctionAction
{
	constructor( progressBar: ProgressBarWithMiddle_t, upperValue: number, lowerValue: number )
	{
		super( () =>
		{
			progressBar.uppervalue = upperValue;
			progressBar.lowervalue = lowerValue;
		} );
	}
}

/** Action to animate a progress bar with middle */
class AnimateProgressBarWithMiddleAction implements ISequenceAction
{
	startTimestamp = 0;
	endTimestamp = 0;
	constructor( public progressBar: ProgressBarWithMiddle_t, public startValue: number, public endValue: number, public seconds: number ) { }

	start (): void
	{
		this.startTimestamp = Game.Time();
		this.endTimestamp = this.startTimestamp + this.seconds;
	}

	update (): boolean
	{
		const now = Game.Time();
		if ( now >= this.endTimestamp )
			return false;

		const ratio = ( now - this.startTimestamp ) / ( this.endTimestamp - this.startTimestamp );
		this.progressBar.uppervalue = this.startValue + ( this.endValue - this.startValue ) * ratio;
		return true;
	}

	finish (): void
	{
		this.progressBar.uppervalue = this.endValue;
	}
}

/** Convenience  */
function PlaySoundEffect ( soundName: string ): void
{
	$.DispatchEvent( 'PlaySoundEffect', soundName );
}

/** Action to play a sound effect */
class PlaySoundEffectAction extends RunFunctionAction
{
	constructor( soundName: string )
	{
		super( () => PlaySoundEffect( soundName ) );
	}
}

class PlaySoundAction extends RunFunctionAction
{
	constructor( soundName: string )
	{
		super( () => PlayUISoundScript( soundName ) );
	}
}

class PlaySoundForDurationAction extends RunSequentialActions
{
	private soundEventGuid = 0;
	constructor( public soundName: string, public duration: number )
	{
		super( [
			new RunFunctionAction( () => this.soundEventGuid = PlayUISoundScript( soundName ) ),
			new WaitAction( duration ),
			new RunFunctionAction( () => StopUISoundScript( this.soundEventGuid ) )
		] );
	}
}

class PlaySoundUntilFinishedAction extends RunSequentialActions
{
	private soundEventGuid = 0;
	constructor( public soundName: string )
	{
		super( [
			new RunFunctionAction( () => this.soundEventGuid = PlayUISoundScript( soundName ) ),
			new WaitForConditionAction( () => !IsUISoundScriptPlaying( this.soundEventGuid ) )
		] );
	}
}

/** Base class that you can override an `applyProgress` to do a simple Lerp over X seconds. */
class LerpAction implements ISequenceAction
{
	startTimestamp = 0;
	endTimestamp = 0;

	constructor( public seconds: number ) { }

	start (): void
	{
		this.startTimestamp = Game.Time();
		this.endTimestamp = this.startTimestamp + this.seconds;
	}

	update (): boolean
	{
		const now = Game.Time();
		if ( now >= this.endTimestamp )
			return false;

		const ratio = ( now - this.startTimestamp ) / ( this.endTimestamp - this.startTimestamp );
		this.applyProgress( ratio );
		return true;
	}

	finish (): void
	{
		this.applyProgress( 1.0 );
	}

	applyProgress ( progress: number ): void
	{
		// Override this method to apply your progress
	}
}

/**
 * Runs a contained action, except that it's immediately aborted if the passed-in guard function ever returns false -- not even finishing the contained action.
 * Alternatively you can keep a reference to the GuardedAction and just set guardFailed to true to trigger this abort.
 */
class GuardedAction implements ISequenceAction
{
	guardFailed = false;

	constructor( public action: ISequenceAction, public guard: null | ( () => boolean ) ) { }

	TriggerFailure (): void
	{
		this.guardFailed = true;
	}

	checkGuardFailure (): boolean 
	{
		if ( this.guardFailed )
		{
			return true;
		}

		if ( this.guard && !this.guard() )
		{
			this.guardFailed = true;
		}

		return this.guardFailed;
	}

	start (): void
	{
		if ( !this.checkGuardFailure() )
			this.action.start();
	}

	update (): boolean
	{
		return !this.checkGuardFailure() || this.action.update();
	}

	finish (): void
	{
		if ( !this.checkGuardFailure() )
			this.action.finish();
	}
}

class PlayMovieAction extends RunSequentialActions
{
	constructor( moviePanel: Movie_t )
	{
		let isMovieFinished = false;
		$.RegisterEventHandler( 'MoviePlayerPlaybackEnded', moviePanel, () => isMovieFinished = true );
		super( [
			new RunFunctionAction( () => moviePanel.Play() ),
			new WaitForConditionAction( () => isMovieFinished )
		] );
	}
}

/// <reference path="dota.d.ts" />
/// <reference path="util.ts" />
/// <reference path="sequence_actions.ts" />

// Dota specific sequence actions
// Depends on util.ts and sequence_actions.ts being included first in the XML layout file

/**
 * Action to lerp the rotation parameters of a Scene Panel_t
 */
class LerpRotateAction extends LerpAction
{
	constructor( public panel: DOTAScenePanel_t, public yawMinStart: number, public yawMaxStart: number, public pitchMinStart: number, public pitchMaxStart: number, public yawMinEnd: number, public yawMaxEnd: number, public pitchMinEnd: number, public pitchMaxEnd: number, public seconds: number )
	{
		super( seconds );
	}

	applyProgress( progress: number )
	{
		this.panel.SetRotateParams(
			Lerp( progress, this.yawMinStart, this.yawMinEnd ),
			Lerp( progress, this.yawMaxStart, this.yawMaxEnd ),
			Lerp( progress, this.pitchMinStart, this.pitchMinEnd ),
			Lerp( progress, this.pitchMaxStart, this.pitchMaxEnd )
		);
	}
}

/** Action to lerp the Depth of Field parameters of a Scene Panel_t */
class LerpDepthOfFieldAction extends LerpAction
{
	constructor( public panel: DOTAScenePanel_t, public cameraName: string, public nearBlurryDistanceStart: number, public nearCrispDistanceStart: number, public farCrispDistanceStart: number, public farBlurryDistanceStart: number, public nearBlurryDistanceEnd: number, public nearCrispDistanceEnd: number, public farCrispDistanceEnd: number, public farBlurryDistanceEnd: number, public seconds: number )
	{
		super( seconds );
	}

	applyProgress( progress: number )
	{
		this.panel.FireEntityInput( this.cameraName, 'SetDOFNearBlurry', Lerp( progress, this.nearBlurryDistanceStart, this.nearBlurryDistanceEnd ) );
		this.panel.FireEntityInput( this.cameraName, 'SetDOFNearCrisp', Lerp( progress, this.nearCrispDistanceStart, this.nearCrispDistanceEnd ) );
		this.panel.FireEntityInput( this.cameraName, 'SetDOFFarCrisp', Lerp( progress, this.farCrispDistanceStart, this.farCrispDistanceEnd ) );
		this.panel.FireEntityInput( this.cameraName, 'SetDOFFarBlurry', Lerp( progress, this.farBlurryDistanceStart, this.farBlurryDistanceEnd ) );
	}
}

/** Action to fire entity input on a scene panel */
class FireEntityInputAction extends RunFunctionAction
{
	constructor( scenePanel: DOTAScenePanel_t, entityName: string, entityInput: string, entityInputValue: string | number )
	{
		super( () =>
		{
			scenePanel.FireEntityInput( entityName, entityInput, entityInputValue );
		} );
	}
}

/** Action to animate an entity input value */
class AnimateEntityInputAction implements ISequenceAction
{
	startTimestamp = 0;
	endTimestamp = 0;
	constructor( public scenePanel: DOTAScenePanel_t, public entityName: string, public entityInput: string, public startValue: number, public endValue: number, public seconds: number ) { }

	start(): void
	{
		this.startTimestamp = Game.Time();
		this.endTimestamp = this.startTimestamp + this.seconds;
	}

	update(): boolean
	{
		const now = Game.Time();
		if ( now >= this.endTimestamp )
			return false;

		this.scenePanel.FireEntityInput( this.entityName, this.entityInput, RemapValClamped( now, this.startTimestamp, this.endTimestamp, this.startValue, this.endValue ) );
		return true;
	}

	finish(): void
	{
		this.scenePanel.FireEntityInput( this.entityName, this.entityInput, this.endValue );
	}
}

/** Starts ducking all UI music. Quack */
class StartDuckingUIMusicAction extends RunFunctionAction
{
	constructor( panel: Panel_t )
	{
		super( () => { SetDuckingUIMusic( panel, true ); } );
	}
}

/** Stops ducking all UI music. Quack */
class StopDuckingUIMusicAction extends RunFunctionAction
{
	constructor( panel: Panel_t )
	{
		super( () => { SetDuckingUIMusic( panel, false ); } );
	}
}

const g_trackedSoundEvents: number[] = [];
/** Helper action that keeps track of any sounds that are playing.
 *  Call `StopAllTrackedSounds` when the page is closing to stop them. */
class PlayAndTrackSoundAction extends RunFunctionAction
{
    constructor( soundName: string )
    {
        super( () => g_trackedSoundEvents.push( PlayUISoundScript( soundName ) ) );
    }

	static StopAllTrackedSounds()
	{
		g_trackedSoundEvents.forEach( handle => StopUISoundScript( handle ) );
		g_trackedSoundEvents.length = 0;
	}
}
