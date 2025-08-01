/// <reference path="../../dota.d.ts" />
/// <reference path="../../util.ts" />
/// <reference path="../../dota_sequence_actions.ts" />
/// <reference path="dota_hud_versus_scene_shared.ts" />

                                        
var PlayScene = function ()
{
	var mainPanel = $.GetContextPanel() as DOTAHudVersusScene_t;
	var scenePanel = $('#VersusScene') as DOTAScenePanel_t;
  	                                                            
	var bRadiantTeam = $( '#TeamInfo' )!.BHasClass( 'RadiantTeam' );

	var mainSeq = new RunSequentialActions();

	                
	mainPanel.RemoveClass( 'RevealTeamDetails' );
	mainPanel.RemoveClass( 'RevealFeaturedHeroDetails' );

	                                              
	if ( bRadiantTeam )
	{
		mainSeq.actions.push( new PlaySoundEffectAction( 'versus_screen.whoosh' ) );
	}
	mainSeq.actions.push( new WaitForScenesToLoadAction( scenePanel ) );
	mainSeq.actions.push( new RunFunctionAction( function ()
	{
		scenePanel.FireEntityInput( 'movement_dummy', 'SetAnimation', 'versus_movement_dummy_anim' );
		scenePanel.FireEntityInput( 'explosion', 'Stop', '' );
		scenePanel.FireEntityInput( 'explosion', 'Start', '' );

		for ( var i = 0; i < 5; ++i )
		{
			scenePanel.FireEntityInput( mainPanel.GetHeroEntityNameByHeroSlot( i ), 'StartGestureOverride', 'ACT_DOTA_RUN' );
			scenePanel.FireEntityInput( mainPanel.GetHeroEntityNameByHeroSlot( i ), 'SetPlaybackRateOnAllLayers', 0.2 );
		}


		                 
		$.Schedule(1, function () {
			$.Schedule(0.5, function () {
				for ( var i = 0; i < 5; ++i )
				{
					scenePanel.FireEntityInput( mainPanel.GetHeroEntityNameByHeroSlot( i ), 'SetActivity', 'ACT_DOTA_RUN' );
					scenePanel.FireEntityInput( mainPanel.GetHeroEntityNameByHeroSlot( i ), 'SetPlaybackRateOnAllLayers', 0.2 );
				}
			});
			$.Schedule(0.5, function () {
				for ( var i = 0; i < 5; ++i )
				{
					scenePanel.FireEntityInput( mainPanel.GetHeroEntityNameByHeroSlot( i ), 'SetActivity', 'ACT_DOTA_RUN' );
					scenePanel.FireEntityInput( mainPanel.GetHeroEntityNameByHeroSlot( i ), 'SetPlaybackRateOnAllLayers', 0.2 );
				}
			});
			$.Schedule(1, function () {
				for ( var i = 0; i < 5; ++i )
				{
					scenePanel.FireEntityInput( mainPanel.GetHeroEntityNameByHeroSlot( i ), 'SetActivity', 'ACT_DOTA_RUN' );
					scenePanel.FireEntityInput( mainPanel.GetHeroEntityNameByHeroSlot( i ), 'SetPlaybackRateOnAllLayers', 0.2 );
				}
			});
			$.Schedule(1.5, function () {
				for ( var i = 0; i < 5; ++i )
				{
					scenePanel.FireEntityInput( mainPanel.GetHeroEntityNameByHeroSlot( i ), 'SetActivity', 'ACT_DOTA_RUN' );
					scenePanel.FireEntityInput( mainPanel.GetHeroEntityNameByHeroSlot( i ), 'SetPlaybackRateOnAllLayers', 0.2 );
				}
			});
			$.Schedule(2, function () {
				for ( var i = 0; i < 5; ++i )
				{
					scenePanel.FireEntityInput( mainPanel.GetHeroEntityNameByHeroSlot( i ), 'SetActivity', 'ACT_DOTA_RUN' );
					scenePanel.FireEntityInput( mainPanel.GetHeroEntityNameByHeroSlot( i ), 'SetPlaybackRateOnAllLayers', 0.2 );
				}
			});
			$.Schedule(2.5, function () {
				for ( var i = 0; i < 5; ++i )
				{
					scenePanel.FireEntityInput( mainPanel.GetHeroEntityNameByHeroSlot( i ), 'SetActivity', 'ACT_DOTA_RUN' );
					scenePanel.FireEntityInput( mainPanel.GetHeroEntityNameByHeroSlot( i ), 'SetPlaybackRateOnAllLayers', 0.2 );
				}
			});
			$.Schedule(3, function () {
				for ( var i = 0; i < 5; ++i )
				{
					scenePanel.FireEntityInput( mainPanel.GetHeroEntityNameByHeroSlot( i ), 'SetActivity', 'ACT_DOTA_RUN' );
					scenePanel.FireEntityInput( mainPanel.GetHeroEntityNameByHeroSlot( i ), 'SetPlaybackRateOnAllLayers', 0.2 );
				}
			});
		});



				
	}
	) );
	mainSeq.actions.push( new WaitAction( 0.5 ) );
	mainSeq.actions.push( new AddClassAction( mainPanel, 'RevealScene' ) );
	mainSeq.actions.push( new PlaySoundEffectAction( bRadiantTeam ? 'versus_screen.radiant' : 'versus_screen.dire' ) );

	                               
	var uiSeq = new RunSequentialActions();
	uiSeq.actions.push( new AddClassAction( mainPanel, 'RevealTeamDetails' ) );
	uiSeq.actions.push( new WaitAction( 2.0 ) );
	uiSeq.actions.push( new AddClassAction( mainPanel, 'RevealFeaturedHeroDetails' ) );

	                      
	var entitySeq = new RunSequentialActions();
	entitySeq.actions.push(new FireEntityInputAction(scenePanel, 'debut_camera', 'SetAnimation', 'versus_camera_walking_anim'));
	                                                                                                                                
	entitySeq.actions.push(new WaitAction(7.0));

	                                                  
	var par = new RunParallelActions();
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
	}));

	                                                           
	RunSingleAction( mainSeq );
}
