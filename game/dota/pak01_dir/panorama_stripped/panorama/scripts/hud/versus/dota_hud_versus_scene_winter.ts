/// <reference path="../../dota.d.ts" />
/// <reference path="../../util.ts" />
/// <reference path="../../dota_sequence_actions.ts" />
/// <reference path="dota_hud_versus_scene_shared.ts" />

                                        
var PlayScene = function ()
{
	const mainPanel = $.GetContextPanel() as DOTAHudVersusScene_t;
	const scenePanel = $( '#VersusScene' ) as DOTAScenePanel_t;
	const bRadiantTeam = $( '#TeamInfo' )!.BHasClass( 'RadiantTeam' );

	                
	mainPanel.RemoveClass( 'RevealTeamDetails' );
	mainPanel.RemoveClass( 'RevealFeaturedHeroDetails' );

	                                              
	const mainSeq = new RunSequentialActions();
	if ( bRadiantTeam )
	{
		mainSeq.actions.push( new PlaySoundEffectAction( 'versus_screen.whoosh' ) );
	}
	mainSeq.actions.push( new WaitForScenesToLoadAction( scenePanel ) );
	mainSeq.actions.push( new RunFunctionAction( function ()
	{
		scenePanel.FireEntityInput( mainPanel.GetHeroEntityNameByHeroSlot( 0 ), 'StartGestureOverride', 'ACT_DOTA_LOADOUT' );
		scenePanel.FireEntityInput( mainPanel.GetHeroEntityNameByHeroSlot( 0 ), 'SetPlaybackRateOnAllLayers', 0.5 );
		for ( let i = 1; i < 5; ++i )
		{
			scenePanel.FireEntityInput( mainPanel.GetHeroEntityNameByHeroSlot( i ), 'StartGestureOverride', 'ACT_DOTA_IDLE' );
			scenePanel.FireEntityInput( mainPanel.GetHeroEntityNameByHeroSlot( i ), 'SetPlaybackRateOnAllLayers', 0.25 );
		}
	} ) );
	mainSeq.actions.push( new WaitAction( 0.5 ) );
	mainSeq.actions.push( new AddClassAction( mainPanel, 'RevealScene' ) );
	mainSeq.actions.push( new PlaySoundEffectAction( bRadiantTeam ? 'versus_screen.radiant' : 'versus_screen.dire' ) );

	                               
	const uiSeq = new RunSequentialActions();
	uiSeq.actions.push( new AddClassAction( mainPanel, 'RevealTeamDetails' ) );
	uiSeq.actions.push( new WaitAction( 2.0 ) );
	uiSeq.actions.push( new AddClassAction( mainPanel, 'RevealFeaturedHeroDetails' ) );

	                      
	const entitySeq = new RunSequentialActions();
	entitySeq.actions.push( new FireEntityInputAction( scenePanel, 'layout', 'SetAnimation', 'versus_camera_radiant_anim' ) );
	entitySeq.actions.push( new WaitAction( 7.0 ) );

	                                                  
	const par = new RunParallelActions();
	par.actions.push( uiSeq );
	par.actions.push( entitySeq );
	mainSeq.actions.push( par );

	                          
	mainSeq.actions.push( new RunFunctionAction( function ()
	{
		if ( IsFadeOutEnabled() )
		{
			PlaySoundEffect( 'versus_screen.whoosh' );
			mainPanel.RemoveClass( 'RevealScene' );
		}
	} ) );

	                                                           
	RunSingleAction( mainSeq );
};
