/// <reference path="../../dota.d.ts" />
/// <reference path="../../util.ts" />
/// <reference path="../../dota_sequence_actions.ts" />
/// <reference path="dota_hud_versus_scene_shared.ts" />

                                        
var PlayScene = function ()
{
    const mainPanel = $.GetContextPanel() as DOTAHudVersusScene_t;
    const scenePanel = $( '#VersusScene' ) as DOTAScenePanel_t;
    const bRadiantTeam = $( '#TeamInfo' )!.BHasClass( 'RadiantTeam' );
    const runAnimSpeed = 0.7;

                    
    mainPanel.RemoveClass( 'RevealTeamDetails' );
    mainPanel.RemoveClass( 'RevealFeaturedHeroDetails' );

                                                  
    const mainSeq = new RunSequentialActions();
    if ( bRadiantTeam )
    {
        mainSeq.actions.push(new PlaySoundEffectAction('versus_screen.whoosh'));
    }
    mainSeq.actions.push( new WaitForScenesToLoadAction( scenePanel ) );
    mainSeq.actions.push( new RunFunctionAction( function ()
    {
                                 

                $.Schedule(0, function () {
                    for ( let i = 0; i < 5; ++i )
                    {
                    scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot( i ), 'StartGestureOverride', 'ACT_DOTA_RUN' );
                    scenePanel.FireEntityInput( mainPanel.GetHeroEntityNameByHeroSlot( i ), 'SetPlaybackRateOnAllLayers', runAnimSpeed );
                    }});


                for ( let t = 0; t < 5; t += 0.5 )
                    {
                    $.Schedule(t, function () {
                    for ( let i = 0; i < 5; ++i )
                    {
                    scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot( i ), 'SetActivity', 'ACT_DOTA_RUN' );
                    scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot( i ), 'SetPlaybackRateOnAllLayers', runAnimSpeed);
                    }});
                    }

                                                                                
                                                        
        scenePanel.FireEntityInput('side_movement', 'SetAnimation', 'versus_dummy_side_movement');
        scenePanel.FireEntityInput('side_movement', 'SetPlaybackRate', 1.13);

        scenePanel.FireEntityInput('versus_camera_anim', 'SetAnimation', 'versus_camera_2022_side_movement_diretide');


        $.Schedule(0, function () {
                                                               
            $.DispatchEvent('PlaySoundEffect', 'versus_stinger_diretide');
        });

        $.Schedule(8.0, function () {
            $.DispatchEvent('PlaySoundEffect', 'Default.Null');
        });

        scenePanel.FireEntityInput('roshan', 'SetAnimation', 'bindPose');
        $.Schedule(2.44, function () {
            scenePanel.FireEntityInput('roshan', 'SetAnimation', 'roshan_run');
            scenePanel.FireEntityInput('roshan', 'SetPlaybackRate', 0.55 );

            $.Schedule(3.21, function () {
                scenePanel.FireEntityInput('versus_camera_shake', 'SetAnimation', 'versus_camera_2022_shake');
                $.DispatchEvent('PlaySoundEffect', 'Roshan.Footstep.VS');
                $.Schedule(1.2, function () {
                    scenePanel.FireEntityInput('versus_camera_shake', 'SetAnimation', 'versus_camera_2022_shake');
                    $.DispatchEvent('PlaySoundEffect', 'Roshan.Footstep.VS');
                });
                $.Schedule(2.4, function () {
                    scenePanel.FireEntityInput('versus_camera_shake', 'SetAnimation', 'versus_camera_2022_shake');
                    $.DispatchEvent('PlaySoundEffect', 'Roshan.Footstep.VS');
                });
            })
        });
    }));
    mainSeq.actions.push( new WaitAction( 0.5 ) );
    mainSeq.actions.push(new AddClassAction(mainPanel, 'RevealScene'));

                                   
    var uiSeq = new RunSequentialActions();
    uiSeq.actions.push( new AddClassAction( mainPanel, 'RevealTeamDetails' ) );
    uiSeq.actions.push( new WaitAction( 4.5 ) );
    uiSeq.actions.push( new AddClassAction( mainPanel, 'RevealFeaturedHeroDetails' ) );

                          
    var entitySeq = new RunSequentialActions();
    entitySeq.actions.push( new WaitAction( 8 ) );

                                                      
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
