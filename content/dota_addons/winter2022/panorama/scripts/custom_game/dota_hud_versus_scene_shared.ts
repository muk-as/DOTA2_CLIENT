/// <reference path="../winter2022.d.ts" />
/// <reference path="util.ts" />
/// <reference path="sequence_actions.ts" />

// For debugging, allow turning off the fade out
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

/** Wait for any hero models to finish async loading */
class WaitForHeroModelsAction extends WaitForConditionAction
{
	constructor()
	{
		super( () => $.GetContextPanel<DOTAHudVersusScene_t>().AreHeroModelsLoaded() );
	}
}

/** Action to wait until a set of scene panels has loaded */
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
		// Setup a sequence to track the things that are loading
		this.loadingSeq = new RunSequentialActions();

		const par = new RunParallelActions();
		for ( let i = 0; i < this.scenePanels.length; ++i )
		{
			par.actions.push( new WaitForClassAction( this.scenePanels[i], 'SceneLoaded' ) );
		}
		this.loadingSeq.actions.push( par );

		// Wait at least one frame before checking that hero models are loaded. This is to make
		// sure that the update that starts the spawning has a chance to run.
		this.loadingSeq.actions.push( new WaitOneFrameAction() );
		this.loadingSeq.actions.push( new WaitForHeroModelsAction() );

		// Setup a sequence to show loading state after a delay
		this.uiSeq = new RunSequentialActions();
		this.uiSeq.actions.push( new WaitAction( 2.0 ) );
		this.uiSeq.actions.push( new AddClassAction( $.GetContextPanel<DOTAHudVersusScene_t>(), 'LoadingVersusScreen' ) );

		// Start up both sequences
		this.loadingSeq.start();
		this.uiSeq.start();
	}

	update(): boolean
	{
		// Tick both sequences, but move on the minute the loading sequence is done
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
