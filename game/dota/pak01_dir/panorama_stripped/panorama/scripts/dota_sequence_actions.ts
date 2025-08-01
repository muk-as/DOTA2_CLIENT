/// <reference path="dota.d.ts" />
/// <reference path="util.ts" />
/// <reference path="sequence_actions.ts" />

                                 
                                                                                         

   
                                                            
   
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

                                         
class StartDuckingUIMusicAction extends RunFunctionAction
{
	constructor( panel: Panel_t )
	{
		super( () => { SetDuckingUIMusic( panel, true ); } );
	}
}

                                        
class StopDuckingUIMusicAction extends RunFunctionAction
{
	constructor( panel: Panel_t )
	{
		super( () => { SetDuckingUIMusic( panel, false ); } );
	}
}

const g_trackedSoundEvents: number[] = [];
                                                                  
                                                                         
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
