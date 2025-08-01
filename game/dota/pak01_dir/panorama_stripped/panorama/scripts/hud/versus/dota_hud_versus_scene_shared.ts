/// <reference path="../../dota.d.ts" />
/// <reference path="../../util.ts" />
/// <reference path="../../dota_sequence_actions.ts" />

                                                
let g_bFadeOutEnabled = true;
function IsFadeOutEnabled()
{
	return g_bFadeOutEnabled;
}
function SetFadeOutEnabled( bEnabled: boolean ): void
{
	g_bFadeOutEnabled = bEnabled;

	const toggleButton = $<ToggleButton_t | null>( '#ToggleFadeOut' );
	if ( toggleButton )
	{
		toggleButton.SetSelected( bEnabled );
	}
}
function ToggleFadeOutEnabled(): void
{
	SetFadeOutEnabled( !IsFadeOutEnabled() );
}

                                                       
class WaitForHeroModelsAction extends WaitForConditionAction
{
	constructor()
	{
		super( () => $.GetContextPanel<DOTAHudVersusScene_t>().AreHeroModelsLoaded() );
	}
}

                                                            
class WaitForScenesToLoadAction implements ISequenceAction
{
	scenePanels: Panel_t[];

	loadingSeq!: RunSequentialActions;
	uiSeq!: RunSequentialActions;

	constructor( ...scenePanels: Panel_t[] )
	{
		this.scenePanels = scenePanels;
	}

	start(): void
	{
		                                                        
		this.loadingSeq = new RunSequentialActions();

		const par = new RunParallelActions();
		for ( let i = 0; i < this.scenePanels.length; ++i )
		{
			par.actions.push( new WaitForClassAction( this.scenePanels[i], 'SceneLoaded' ) );
		}
		this.loadingSeq.actions.push( par );

		                                                                                       
		                                                                     
		this.loadingSeq.actions.push( new WaitOneFrameAction() );
		this.loadingSeq.actions.push( new WaitForHeroModelsAction() );

		                                                       
		this.uiSeq = new RunSequentialActions();
		this.uiSeq.actions.push( new WaitAction( 2.0 ) );
		this.uiSeq.actions.push( new AddClassAction( $.GetContextPanel<DOTAHudVersusScene_t>(), 'LoadingVersusScreen' ) );

		                          
		this.loadingSeq.start();
		this.uiSeq.start();
	}

	update(): boolean
	{
		                                                                           
		this.uiSeq.update();
		return this.loadingSeq.update();
	};

	finish(): void
	{
		this.uiSeq.finish();
		this.loadingSeq.finish();
		$.GetContextPanel<DOTAHudVersusScene_t>().RemoveClass( 'LoadingVersusScreen' );
	};
}
