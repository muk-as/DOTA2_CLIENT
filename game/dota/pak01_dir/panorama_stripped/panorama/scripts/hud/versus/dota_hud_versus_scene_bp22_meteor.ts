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
                                                       
        for (var i = 1; i < 5; ++i) {
            scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'StartGestureOverride', 'ACT_DOTA_LOADOUT');
            scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'SetPlaybackRateOnAllLayers', 0.6);
        }

                                                                                          
                                        
        $.Schedule(3.5, function () {
            scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(0), 'StartGestureOverride', 'ACT_DOTA_SPAWN' );
            scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(0), 'SetPlaybackRateOnAllLayers', 1);
        });
    
    } ) );

    mainSeq.actions.push(new PlaySoundEffectAction('versus_sfx_open'));
    if( bRadiantTeam )
    {
        mainSeq.actions.push(new PlaySoundEffectAction('versus_stinger_2022_radiant'));
    } else {
        mainSeq.actions.push(new PlaySoundEffectAction('versus_stinger_2022_dire'));
    }

    mainSeq.actions.push(new WaitAction( 0.5 ));
    mainSeq.actions.push(new AddClassAction(mainPanel, 'RevealScene'));

      
                                                           
      
    mainSeq.actions.push( new RunFunctionAction( function ()
    {
                                     
        scenePanel.FireEntityInput('versus_layout', 'SetAnimation', 'bp22_meteor_versus_layout');
        scenePanel.FireEntityInput('meteor_model_placeholder', 'SetAnimation', 'vs_meteors_anim');

             
        let particle_systems2: Array<string> = [
                'stars', 
                'star1', 
                                    
                'meteor_simple_1', 'meteor_simple_2', 'meteor_simple_3', 'meteor_simple_4', 
                'meteor_simple_5', 'meteor_simple_6', 'meteor_simple_7', 'meteor_simple_8', 
                'meteor_simple_9', 'meteor_simple_10', 'meteor_simple_11', 'meteor_simple_12', 
                'meteor_simple_13', 'meteor_simple_14', 'meteor_simple_15', 'meteor_simple_16'
        ];
        for (let fx_name of particle_systems2) {
            scenePanel.FireEntityInput(fx_name, 'start', 0);
        }
    } ) );

      
                                                                  
      
                  
    mainSeq.actions.push( new RunFunctionAction( function ()
    {
        $.Schedule(0.45, function () {
            scenePanel.FireEntityInput('star4', 'start', 0);
        });
        $.Schedule(0.65, function () {
            scenePanel.FireEntityInput('star2', 'start', 0);
        });
        $.Schedule(0.95, function () {
            scenePanel.FireEntityInput('star3', 'start', 0);
        });
        $.Schedule(1.25, function () {
            scenePanel.FireEntityInput('star5', 'start', 0);
        });
        $.Schedule(2.65, function () {
            scenePanel.FireEntityInput('meteor_near_1', 'start', 0);
        });
        $.Schedule(2.97, function () {
            scenePanel.FireEntityInput('meteor_near_3', 'start', 0);
        });
        $.Schedule(3.1, function () {
            scenePanel.FireEntityInput('meteor_near_2', 'start', 0);
        });
        $.Schedule(4.29, function () {
            scenePanel.FireEntityInput('meteor_near_4', 'start', 0);
        });
    }));

               
    mainSeq.actions.push( new RunFunctionAction( function ()
    {
                                                                                  
        let charge_sfx = 'versus_sfx_meteor';

                                                                      
        let impact_sfx = 'versus_sfx_impact';

        $.Schedule(1.0, function () {
            $.DispatchEvent('PlaySoundEffect', charge_sfx);
        });

        $.Schedule(2.1667, function () {
            $.DispatchEvent('PlaySoundEffect', impact_sfx);
        });
        $.Schedule(2.9667, function () {
            $.DispatchEvent('PlaySoundEffect', impact_sfx);
        });
        $.Schedule(3.3, function () {
            $.DispatchEvent('PlaySoundEffect', impact_sfx);
        });
        $.Schedule(3.533, function () {
            $.DispatchEvent('PlaySoundEffect', impact_sfx);
        });
        $.Schedule(4.633, function () {
            $.DispatchEvent('PlaySoundEffect', impact_sfx);
        });

                                       
                                                                                              
             
    }));

                                   
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
