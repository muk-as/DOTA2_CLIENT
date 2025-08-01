/// <reference path="dota.d.ts" />

   
                                                                                                      
   
interface ISequenceAction
{
	   
	                                              
	   
	start (): void;
	   
	                                                                                 
	                                             
	   
	update (): boolean;
	   
	                                             
	                                 
	                                                                  
	   
	finish (): void;
}

   
                                                                                        
   
function RunSingleAction ( action: ISequenceAction ): void
{
	action.start();
	UpdateSingleActionUntilFinished( action );
}

   
                                                                                   
   
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

                                                                                                                      
class BaseAction implements ISequenceAction
{
	start (): void { }
	update (): boolean { return false; }
	finish (): void { }
}

   
                                                     
   
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

   
                                                            
   
class WaitAction implements ISequenceAction
{
	endTimestamp = 0;
	constructor( public seconds: number ) { }
	start (): void { this.endTimestamp = Game.Time() + this.seconds; };
	update (): boolean { return Game.Time() < this.endTimestamp; }
	finish (): void { }
}

   
                                                                                                    
   
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

   
                                     
                                                                    
   
class DispatchEventAction<E extends keyof DotaEventHandlers> extends RunFunctionAction
{
	constructor( public eventName: E, ...argsArray: EventParams<DotaEventHandlers[ E ]> )
	{
		super( () => $.DispatchEvent( eventName, ...argsArray ) );
	}
}

                                                                                  
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

                                      
class PrintAction extends RunFunctionAction
{
	constructor( public msg: string )
	{
		super( () => $.Msg( this.msg ) );
	}
}

                                       
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

                                           
class SetProgressBarValueAction extends RunFunctionAction
{
	constructor( progressBar: ProgressBar_t, value: number )
	{
		super( () => progressBar.value = value );
	}
}

                                       
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

                   
function PlaySoundEffect ( soundName: string ): void
{
	$.DispatchEvent( 'PlaySoundEffect', soundName );
}

                                    
class PlaySoundEffectAction extends RunFunctionAction
{
	constructor( soundName: string )
	{
		super( () => PlaySoundEffect( soundName ) );
	}
}

class PlaySoundAction extends RunFunctionAction
{
	private soundEventGuid = 0;

	constructor(soundName: string)
	{
		super(() => this.soundEventGuid = PlayUISoundScript( soundName ) );
	}

	GetSoundEventGuid(): number {
		return this.soundEventGuid;
	}
}

class StopSoundAction extends RunFunctionAction
{
	constructor(action: PlaySoundAction)
	{
		super(() => StopUISoundScript(action.GetSoundEventGuid()));
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
		                                              
	}
}

   
                                                                                                                                                               
                                                                                                                      
   
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

