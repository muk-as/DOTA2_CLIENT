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
        for ( var i = 0; i < 5; ++i ) {
            scenePanel.FireEntityInput( mainPanel.GetHeroEntityNameByHeroSlot( i ), 'Disable', '' );
            scenePanel.FireEntityInput( mainPanel.GetHeroEffigyNameByHeroSlot( i ), 'Enable', '' );
        }

                                                       
        scenePanel.FireEntityInput( mainPanel.GetHeroEntityNameByHeroSlot( 0 ), 'StartGestureOverride', 'ACT_DOTA_ATTACK' );
		scenePanel.FireEntityInput( mainPanel.GetHeroEntityNameByHeroSlot( 0 ), 'SetPlaybackRateOnAllLayers', 0.5 );

        for (var i = 1; i < 5; ++i) {
            scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'StartGestureOverride', 'ACT_DOTA_LOADOUT');
            scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'SetPlaybackRateOnAllLayers', 0.4);
        }

                          
            scenePanel.FireEntityInput('light_hero_0', 'TurnOff', 0);
            scenePanel.FireEntityInput('light_hero_1', 'TurnOff', 0);
            scenePanel.FireEntityInput('light_hero_2', 'TurnOff', 0);
            scenePanel.FireEntityInput('light_hero_3', 'TurnOff', 0);
            scenePanel.FireEntityInput('light_hero_4', 'TurnOff', 0);

            scenePanel.FireEntityInput('rimlight_hero_0', 'TurnOff', 0);
            scenePanel.FireEntityInput('rimlight_hero_1', 'TurnOff', 0);
            scenePanel.FireEntityInput('rimlight_hero_2', 'TurnOff', 0);
            scenePanel.FireEntityInput('rimlight_hero_3', 'TurnOff', 0);
            scenePanel.FireEntityInput('rimlight_hero_4', 'TurnOff', 0);



            scenePanel.FireEntityInput('spotlight_hero_0', 'TurnOff', 0);
            scenePanel.FireEntityInput('spotlight_hero_1', 'TurnOff', 0);
            scenePanel.FireEntityInput('spotlight_hero_2', 'TurnOff', 0);
            scenePanel.FireEntityInput('spotlight_hero_3', 'TurnOff', 0);
            scenePanel.FireEntityInput('spotlight_hero_4', 'TurnOff', 0);

            scenePanel.FireEntityInput('fx_hero_0', 'Stop', 0);
            scenePanel.FireEntityInput('fx_hero_1', 'Stop', 0);
            scenePanel.FireEntityInput('fx_hero_2', 'Stop', 0);
            scenePanel.FireEntityInput('fx_hero_3', 'Stop', 0);
            scenePanel.FireEntityInput('fx_hero_4', 'Stop', 0);


                      
        scenePanel.FireEntityInput('versus_camera', 'EnableDOF', '');
        scenePanel.FireEntityInput('versus_camera_shake', 'SetAnimation', 'versus_camera_shake_static');
                                                                        

        scenePanel.FireEntityInput('versus_camera', 'SetDOFNearBlurry', 10);
        scenePanel.FireEntityInput('versus_camera', 'SetDOFNearCrisp', 250);
        scenePanel.FireEntityInput('versus_camera', 'SetDOFFarCrisp', 500);
        scenePanel.FireEntityInput('versus_camera', 'SetDOFFarBlurry', 4000);
        
    } ) );

    	                                              
	                      
         
                                                                                        
         

                                                                       
                      
     
                                                                                       
            
                                                                                    
        

    mainSeq.actions.push(new WaitAction( 0.5 ));
    mainSeq.actions.push(new AddClassAction(mainPanel, 'RevealScene'));
    mainSeq.actions.push( new PlaySoundEffectAction( bRadiantTeam ? 'versus_2024.radiant' : 'versus_2024.dire' ) );
    

      
                                                           
      
    mainSeq.actions.push( new RunFunctionAction( function ()
    {
                                     

        if( bRadiantTeam )
            {
                scenePanel.FireEntityInput('versus_layout', 'SetAnimation', 'ACT_DOTA_DIE');
            } else {
                scenePanel.FireEntityInput('versus_layout', 'SetAnimation', 'ACT_DOTA_DEFEAT');
            }

                                         
                                                                                                      
                                                                                                      
                                                                                                   
                                                                                                   
    } ) );




                                                           
    mainSeq.actions.push( new RunFunctionAction( function ()
    {

        $.Schedule(2.8, function () {
            scenePanel.FireEntityInput('spotlight_hero_4', 'TurnOn', 0);
            scenePanel.FireEntityInput('rimlight_hero_4', 'TurnOn', 0);
            scenePanel.FireEntityInput('light_hero_4', 'TurnOn', 0);
            scenePanel.FireEntityInput('fx_hero_4', 'Start', '');
                                                                                                
            PlayUISoundScript('versus_2024_sfx');

            $.Schedule(0.2, function () {

                scenePanel.FireEntityInput( mainPanel.GetHeroEntityNameByHeroSlot( 4 ), 'Enable', '' );
                scenePanel.FireEntityInput( mainPanel.GetHeroEffigyNameByHeroSlot( 4 ), 'Disable', '' );
            })
        });
        $.Schedule(2.6, function () {
            scenePanel.FireEntityInput('spotlight_hero_3', 'TurnOn', 0);
            scenePanel.FireEntityInput('rimlight_hero_3', 'TurnOn', 0);
            scenePanel.FireEntityInput('light_hero_3', 'TurnOn', 0);
            scenePanel.FireEntityInput('fx_hero_3', 'Start', '');
                                                                                                
            PlayUISoundScript('versus_2024_sfx');

            $.Schedule(0.2, function () {
                scenePanel.FireEntityInput( mainPanel.GetHeroEntityNameByHeroSlot( 3 ), 'Enable', '' );
                scenePanel.FireEntityInput( mainPanel.GetHeroEffigyNameByHeroSlot( 3 ), 'Disable', '' );
            })
        });
        $.Schedule(2.4, function () {
            scenePanel.FireEntityInput('spotlight_hero_2', 'TurnOn', 0);
            scenePanel.FireEntityInput('rimlight_hero_2', 'TurnOn', 0);
            scenePanel.FireEntityInput('light_hero_2', 'TurnOn', 0);
            scenePanel.FireEntityInput('fx_hero_2', 'Start', '');
                                                                                                
            PlayUISoundScript('versus_2024_sfx');
            $.Schedule(0.2, function () {
                scenePanel.FireEntityInput( mainPanel.GetHeroEntityNameByHeroSlot( 2 ), 'Enable', '' );
                scenePanel.FireEntityInput( mainPanel.GetHeroEffigyNameByHeroSlot( 2 ), 'Disable', '' );
            })
        });
        $.Schedule(2.2, function () {
            scenePanel.FireEntityInput('spotlight_hero_1', 'TurnOn', 0);
            scenePanel.FireEntityInput('rimlight_hero_1', 'TurnOn', 0);
            scenePanel.FireEntityInput('light_hero_1', 'TurnOn', 0);
            scenePanel.FireEntityInput('fx_hero_1', 'Start', '');
            scenePanel.FireEntityInput('versus_camera_shake', 'SetAnimation', 'ACT_DOTA_DIE');
            PlayUISoundScript('versus_2024_sfx');
            $.Schedule(0.2, function () {
                scenePanel.FireEntityInput( mainPanel.GetHeroEntityNameByHeroSlot( 1 ), 'Enable', '' );
                scenePanel.FireEntityInput( mainPanel.GetHeroEffigyNameByHeroSlot( 1 ), 'Disable', '' );

            })
        });
        $.Schedule(4.2 , function () {
                                                           
        });
        $.Schedule(4.8 , function () {
            scenePanel.FireEntityInput('spotlight_hero_0', 'TurnOn', 0);
            scenePanel.FireEntityInput('rimlight_hero_0', 'TurnOn', 0);
            scenePanel.FireEntityInput('light_hero_0', 'TurnOn', 0);
            scenePanel.FireEntityInput('fx_hero_0', 'Start', '');
            scenePanel.FireEntityInput('versus_camera_shake', 'SetAnimation', 'versus_camera_shake_anim_large');
            PlayUISoundScript('ui_explosion');
            PlayUISoundScript('versus_2024_sfx');
            $.Schedule(0.2, function () {

                scenePanel.FireEntityInput( mainPanel.GetHeroEntityNameByHeroSlot( 0 ), 'Enable', '' );
                scenePanel.FireEntityInput( mainPanel.GetHeroEffigyNameByHeroSlot( 0 ), 'Disable', '' );
            })
        });
    }));


                                   
    mainSeq.actions.push( new AddClassAction( mainPanel, 'RevealTeamDetails' ) );
    mainSeq.actions.push( new WaitAction( 5.0 ) );
    mainSeq.actions.push( new AddClassAction( mainPanel, 'RevealFeaturedHeroDetails' ) );
    mainSeq.actions.push( new WaitAction( 4.0 ) );

                              
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
