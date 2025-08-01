/// <reference path="../../dota.d.ts" />
/// <reference path="../../util.ts" />
/// <reference path="../../dota_sequence_actions.ts" />
/// <reference path="dota_hud_versus_scene_shared.ts" />

                                        
var PlayScene = function ()
{
	var mainPanel = $.GetContextPanel<DOTAHudVersusScene_t>();
	var scenePanel = $<DOTAScenePanel_t>( '#VersusScene' );
	var bRadiantTeam = $( '#TeamInfo' )!.BHasClass( 'RadiantTeam' );

	                
	mainPanel.RemoveClass( 'RevealTeamDetails' );
	mainPanel.RemoveClass( 'RevealFeaturedHeroDetails' );

	                                              
	var mainSeq = new RunSequentialActions();
	if ( bRadiantTeam )
	{
		mainSeq.actions.push(new PlaySoundEffectAction('versus_screen.whoosh'));
	}
	mainSeq.actions.push( new WaitForScenesToLoadAction( scenePanel ) );
	mainSeq.actions.push( new RunFunctionAction( function ()
	{
		scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(0), 'StartGestureOverride', 'ACT_DOTA_SPAWN' );
		scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(0), 'SetPlaybackRateOnAllLayers', 1);
		for (var i = 1; i < 5; ++i) {
			scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'StartGestureOverride', 'ACT_DOTA_LOADOUT');
			scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'SetPlaybackRateOnAllLayers', 0.6);
		}
    
                                                                          
                      
        scenePanel.FireEntityInput(
                'versus_layout', 'SetAnimation', 'muerta_dire_versus_layout_x0'
        );


	} ) );
    mainSeq.actions.push(new WaitAction( 0.5 ));
	mainSeq.actions.push( new AddClassAction( mainPanel, 'RevealScene' ) );
	mainSeq.actions.push( new PlaySoundEffectAction( 'versus_muerta_stinger' ) );

      
                                                           
      
    mainSeq.actions.push( new RunFunctionAction( function ()
    {
                                     
                                                                                                   
        scenePanel.FireEntityInput(
                'versus_layout', 'SetAnimation', 'muerta_dire_versus_layout'
        );

    } ) );

	                               
	var uiSeq = new RunSequentialActions();
	uiSeq.actions.push( new AddClassAction( mainPanel, 'RevealTeamDetails' ) );
	uiSeq.actions.push( new WaitAction( 2.0 ) );
	uiSeq.actions.push( new AddClassAction( mainPanel, 'RevealFeaturedHeroDetails' ) );

	                      
	var entitySeq = new RunSequentialActions();
	entitySeq.actions.push( new WaitAction( 7.0 ) );

	                                                  
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
