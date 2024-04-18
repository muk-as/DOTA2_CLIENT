/// <reference path="../winter2022.d.ts" />
/// <reference path="sequence_actions.ts" />
/// <reference path="dota_hud_versus_scene_shared.ts" />

// Called from C++ when the scene starts
function PlayScene(): void
{
	const mainPanel = $.GetContextPanel<DOTAHudVersusScene_t>();
	const scenePanel = $<DOTAScenePanel_t>( '#VersusScene' );

	//$.Msg( "diretide2020_versus!" );

	// Initial Setup
	//	mainPanel.RemoveClass( 'RevealTeamDetails' );
	//	mainPanel.RemoveClass( 'RevealFeaturedHeroDetails' );

	// Wait for the fade-in, then reveal the scene
	const mainSeq = new RunSequentialActions();
	mainSeq.actions.push( new PlaySoundEffectAction( 'MatchBegin.Underscore' ) );
	mainSeq.actions.push( new WaitForScenesToLoadAction( scenePanel ) );
	/*
		mainSeq.actions.push( new RunFunctionAction( function ()
		{
			scenePanel.FireEntityInput( mainPanel.GetHeroEntityNameByHeroSlot( 0 ), 'StartGestureOverride', 'ACT_DOTA_LOADOUT' );
			scenePanel.FireEntityInput( mainPanel.GetHeroEntityNameByHeroSlot( 0 ), 'SetPlaybackRateOnAllLayers', 0.5 );
			for ( let i = 1; i < 5; ++i )
			{
				scenePanel.FireEntityInput( mainPanel.GetHeroEntityNameByHeroSlot( i ), 'StartGestureOverride', 'ACT_DOTA_LOADOUT' );
				scenePanel.FireEntityInput( mainPanel.GetHeroEntityNameByHeroSlot( i ), 'SetPlaybackRateOnAllLayers', 0.3 );
			}
		} ) );
	*/
	mainSeq.actions.push( new WaitAction( 0.5 ) );
	mainSeq.actions.push( new AddClassAction( mainPanel, 'RevealScene' ) );
	//	mainSeq.actions.push( new PlaySoundEffectAction( 'versus_screen.radiant' ) );

	// The UI will appear in pieces
	const uiSeq = new RunSequentialActions();
	//	uiSeq.actions.push( new AddClassAction( mainPanel, 'RevealTeamDetails' ) );
	uiSeq.actions.push( new WaitAction( 10 ) );
	uiSeq.actions.push( new AddClassAction( mainPanel, "RevealTitleCard" ) );
	uiSeq.actions.push( new WaitAction( 4.5 ) );
	uiSeq.actions.push( new RemoveClassAction( mainPanel, "RevealScene" ) );
	//	uiSeq.actions.push( new AddClassAction( mainPanel, 'RevealFeaturedHeroDetails' ) );

	// Script the entities
	const entitySeq = new RunSequentialActions();
	entitySeq.actions.push( new FireEntityInputAction( scenePanel, 'intro_camera', 'SetAnimation', 'diretide_intro_cam3' ) );
	// Add an action
	entitySeq.actions.push( new WaitAction( 16.0 ) );

	// Script the shader effect with a little local action definition.
	class PostProcessFadeLerpAction extends LerpAction
	{
		applyProgress( progress: number )
		{
			scenePanel.SetPostProcessFade( progress * ( 0.85 - 0.2 ) + 0.2 );
		}
	}

	// Run both the UI and Entity sequence in parallel
	const par = new RunParallelActions();
	par.actions.push( uiSeq );
	par.actions.push( entitySeq );
	//par.actions.push( new PostProcessFadeLerpAction( 4.6 ) );
	mainSeq.actions.push( par );

	// All done, fade to black
	mainSeq.actions.push( new RunFunctionAction( function ()
	{
		if ( IsFadeOutEnabled() )
		{
			//			PlaySoundEffect( 'versus_screen.whoosh' );
			mainPanel.RemoveClass( 'RevealScene' );
		}
	} ) );

	// Now that the sequence is created, actually run the thing
	RunSingleAction( mainSeq );
}
