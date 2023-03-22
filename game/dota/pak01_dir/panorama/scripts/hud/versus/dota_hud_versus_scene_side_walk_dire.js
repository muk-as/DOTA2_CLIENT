/// <reference path="../../dota.d.ts" />
/// <reference path="../../util.ts" />
/// <reference path="../../dota_sequence_actions.ts" />
/// <reference path="dota_hud_versus_scene_shared.ts" />
// Called from C++ when the scene starts
var PlayScene = function () {
    var mainPanel = $.GetContextPanel();
    var scenePanel = $('#VersusScene');
    var bRadiantTeam = $('#TeamInfo').BHasClass('RadiantTeam');
    var runAnimSpeed = 0.7;
    // Initial Setup
    mainPanel.RemoveClass('RevealTeamDetails');
    mainPanel.RemoveClass('RevealFeaturedHeroDetails');
    // Wait for the fade-in, then reveal the scene
    var mainSeq = new RunSequentialActions();
    mainSeq.actions.push(new WaitForScenesToLoadAction(scenePanel));
    mainSeq.actions.push(new RunFunctionAction(function () {
        // Run loop cycle
        $.Schedule(0, function () {
            for (let i = 0; i < 5; ++i) {
                scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'StartGestureOverride', 'ACT_DOTA_RUN');
                scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'SetPlaybackRateOnAllLayers', runAnimSpeed);
            }
        });
        for (let t = 0; t < 5; t += 0.5) {
            $.Schedule(t, function () {
                for (let i = 0; i < 5; ++i) {
                    scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'SetActivity', 'ACT_DOTA_RUN');
                    scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'SetPlaybackRateOnAllLayers', runAnimSpeed);
                }
            });
        }
        // trigger playback of the hero pawn controllers, roshan, and the camera 
        // (moved out of the sequential actions portion)
        scenePanel.FireEntityInput('side_movement', 'SetAnimation', 'versus_dummy_side_movement_reverse');
        scenePanel.FireEntityInput('side_movement', 'SetPlaybackRate', 1.13);
        //  scenePanel.FireEntityInput('versus_camera_anim', 'SetAnimation', 'versus_camera_2022_side_movement_diretide_reverse');
        scenePanel.FireEntityInput('versus_camera_anim', 'SetAnimation', 'versus_camera_2022_side_movement_diretide_reverse');
        $.Schedule(0, function () {
            //$.DispatchEvent('PlaySoundEffect', 'general_01');
            $.DispatchEvent('PlaySoundEffect', 'versus_stinger_diretide');
        });
        $.Schedule(8.0, function () {
            $.DispatchEvent('PlaySoundEffect', 'RoshanDT.Scream');
        });
        scenePanel.FireEntityInput('roshan', 'SetAnimation', 'bindPose');
        $.Schedule(2.44, function () {
            scenePanel.FireEntityInput('roshan', 'SetAnimation', 'roshan_run');
            scenePanel.FireEntityInput('roshan', 'SetPlaybackRate', 0.55);
            $.Schedule(3.21, function () {
                scenePanel.FireEntityInput('versus_camera_shake', 'SetAnimation', 'versus_camera_2022_shake');
                $.DispatchEvent('PlaySoundEffect', 'Roshan.Footstep');
                $.Schedule(1.2, function () {
                    scenePanel.FireEntityInput('versus_camera_shake', 'SetAnimation', 'versus_camera_2022_shake');
                    $.DispatchEvent('PlaySoundEffect', 'Roshan.Footstep');
                });
                $.Schedule(2.4, function () {
                    scenePanel.FireEntityInput('versus_camera_shake', 'SetAnimation', 'versus_camera_2022_shake');
                    $.DispatchEvent('PlaySoundEffect', 'Roshan.Footstep');
                });
            });
        });
    }));
    mainSeq.actions.push(new WaitAction(0.5));
    mainSeq.actions.push(new AddClassAction(mainPanel, 'RevealScene'));
    // The UI will appear in pieces
    var uiSeq = new RunSequentialActions();
    uiSeq.actions.push(new AddClassAction(mainPanel, 'RevealTeamDetails'));
    uiSeq.actions.push(new WaitAction(4.5));
    uiSeq.actions.push(new AddClassAction(mainPanel, 'RevealFeaturedHeroDetails'));
    // Script the entities
    var entitySeq = new RunSequentialActions();
    entitySeq.actions.push(new WaitAction(8));
    // Run both the UI and Entity sequence in parallel
    var par = new RunParallelActions();
    par.actions.push(uiSeq);
    par.actions.push(entitySeq);
    mainSeq.actions.push(par);
    // All done, fade to black
    mainSeq.actions.push(new RunFunctionAction(function () {
        if (IsFadeOutEnabled()) {
            PlaySoundEffect('versus_screen.whoosh');
            mainPanel.RemoveClass('RevealScene');
        }
    }));
    // Now that the sequence is created, actually run the thing
    RunSingleAction(mainSeq);
};
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZG90YV9odWRfdmVyc3VzX3NjZW5lX3NpZGVfd2Fsa19kaXJlLmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsiZG90YV9odWRfdmVyc3VzX3NjZW5lX3NpZGVfd2Fsa19kaXJlLnRzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiJBQUFBLHdDQUF3QztBQUN4QyxzQ0FBc0M7QUFDdEMsdURBQXVEO0FBQ3ZELHdEQUF3RDtBQUV4RCx3Q0FBd0M7QUFDeEMsSUFBSSxTQUFTLEdBQUc7SUFFWixJQUFJLFNBQVMsR0FBRyxDQUFDLENBQUMsZUFBZSxFQUEwQixDQUFDO0lBQzVELElBQUksVUFBVSxHQUFHLENBQUMsQ0FBRSxjQUFjLENBQXNCLENBQUM7SUFDekQsSUFBSSxZQUFZLEdBQUcsQ0FBQyxDQUFFLFdBQVcsQ0FBRyxDQUFDLFNBQVMsQ0FBRSxhQUFhLENBQUUsQ0FBQztJQUNoRSxJQUFJLFlBQVksR0FBRyxHQUFHLENBQUM7SUFFdkIsZ0JBQWdCO0lBQ2hCLFNBQVMsQ0FBQyxXQUFXLENBQUUsbUJBQW1CLENBQUUsQ0FBQztJQUM3QyxTQUFTLENBQUMsV0FBVyxDQUFFLDJCQUEyQixDQUFFLENBQUM7SUFFckQsOENBQThDO0lBQzlDLElBQUksT0FBTyxHQUFHLElBQUksb0JBQW9CLEVBQUUsQ0FBQztJQUV6QyxPQUFPLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLHlCQUF5QixDQUFFLFVBQVUsQ0FBRSxDQUFFLENBQUM7SUFDcEUsT0FBTyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxpQkFBaUIsQ0FBRTtRQUVqQyxpQkFBaUI7UUFFakIsQ0FBQyxDQUFDLFFBQVEsQ0FBQyxDQUFDLEVBQUU7WUFDVixLQUFNLElBQUksQ0FBQyxHQUFHLENBQUMsRUFBRSxDQUFDLEdBQUcsQ0FBQyxFQUFFLEVBQUUsQ0FBQyxFQUMzQjtnQkFDQSxVQUFVLENBQUMsZUFBZSxDQUFDLFNBQVMsQ0FBQywyQkFBMkIsQ0FBRSxDQUFDLENBQUUsRUFBRSxzQkFBc0IsRUFBRSxjQUFjLENBQUUsQ0FBQztnQkFDaEgsVUFBVSxDQUFDLGVBQWUsQ0FBRSxTQUFTLENBQUMsMkJBQTJCLENBQUUsQ0FBQyxDQUFFLEVBQUUsNEJBQTRCLEVBQUUsWUFBWSxDQUFFLENBQUM7YUFDcEg7UUFBQSxDQUFDLENBQUMsQ0FBQztRQUdSLEtBQU0sSUFBSSxDQUFDLEdBQUcsQ0FBQyxFQUFFLENBQUMsR0FBRyxDQUFDLEVBQUUsQ0FBQyxJQUFJLEdBQUcsRUFDNUI7WUFDQSxDQUFDLENBQUMsUUFBUSxDQUFDLENBQUMsRUFBRTtnQkFDZCxLQUFNLElBQUksQ0FBQyxHQUFHLENBQUMsRUFBRSxDQUFDLEdBQUcsQ0FBQyxFQUFFLEVBQUUsQ0FBQyxFQUMzQjtvQkFDQSxVQUFVLENBQUMsZUFBZSxDQUFDLFNBQVMsQ0FBQywyQkFBMkIsQ0FBRSxDQUFDLENBQUUsRUFBRSxhQUFhLEVBQUUsY0FBYyxDQUFFLENBQUM7b0JBQ3ZHLFVBQVUsQ0FBQyxlQUFlLENBQUMsU0FBUyxDQUFDLDJCQUEyQixDQUFFLENBQUMsQ0FBRSxFQUFFLDRCQUE0QixFQUFFLFlBQVksQ0FBQyxDQUFDO2lCQUNsSDtZQUFBLENBQUMsQ0FBQyxDQUFDO1NBQ0g7UUFFYix5RUFBeUU7UUFDekUsZ0RBQWdEO1FBQ2hELFVBQVUsQ0FBQyxlQUFlLENBQUMsZUFBZSxFQUFFLGNBQWMsRUFBRSxvQ0FBb0MsQ0FBQyxDQUFDO1FBQ2xHLFVBQVUsQ0FBQyxlQUFlLENBQUMsZUFBZSxFQUFFLGlCQUFpQixFQUFFLElBQUksQ0FBQyxDQUFDO1FBR3JFLDBIQUEwSDtRQUUxSCxVQUFVLENBQUMsZUFBZSxDQUFDLG9CQUFvQixFQUFFLGNBQWMsRUFBRSxtREFBbUQsQ0FBQyxDQUFDO1FBR3RILENBQUMsQ0FBQyxRQUFRLENBQUMsQ0FBQyxFQUFFO1lBQ1YsbURBQW1EO1lBQ25ELENBQUMsQ0FBQyxhQUFhLENBQUMsaUJBQWlCLEVBQUUseUJBQXlCLENBQUMsQ0FBQztRQUNsRSxDQUFDLENBQUMsQ0FBQztRQUVILENBQUMsQ0FBQyxRQUFRLENBQUMsR0FBRyxFQUFFO1lBQ1osQ0FBQyxDQUFDLGFBQWEsQ0FBQyxpQkFBaUIsRUFBRSxpQkFBaUIsQ0FBQyxDQUFDO1FBQzFELENBQUMsQ0FBQyxDQUFDO1FBRUgsVUFBVSxDQUFDLGVBQWUsQ0FBQyxRQUFRLEVBQUUsY0FBYyxFQUFFLFVBQVUsQ0FBQyxDQUFDO1FBQ2pFLENBQUMsQ0FBQyxRQUFRLENBQUMsSUFBSSxFQUFFO1lBQ2IsVUFBVSxDQUFDLGVBQWUsQ0FBQyxRQUFRLEVBQUUsY0FBYyxFQUFFLFlBQVksQ0FBQyxDQUFDO1lBQ25FLFVBQVUsQ0FBQyxlQUFlLENBQUMsUUFBUSxFQUFFLGlCQUFpQixFQUFFLElBQUksQ0FBRSxDQUFDO1lBRS9ELENBQUMsQ0FBQyxRQUFRLENBQUMsSUFBSSxFQUFFO2dCQUNiLFVBQVUsQ0FBQyxlQUFlLENBQUMscUJBQXFCLEVBQUUsY0FBYyxFQUFFLDBCQUEwQixDQUFDLENBQUM7Z0JBQzlGLENBQUMsQ0FBQyxhQUFhLENBQUMsaUJBQWlCLEVBQUUsaUJBQWlCLENBQUMsQ0FBQztnQkFDdEQsQ0FBQyxDQUFDLFFBQVEsQ0FBQyxHQUFHLEVBQUU7b0JBQ1osVUFBVSxDQUFDLGVBQWUsQ0FBQyxxQkFBcUIsRUFBRSxjQUFjLEVBQUUsMEJBQTBCLENBQUMsQ0FBQztvQkFDOUYsQ0FBQyxDQUFDLGFBQWEsQ0FBQyxpQkFBaUIsRUFBRSxpQkFBaUIsQ0FBQyxDQUFDO2dCQUMxRCxDQUFDLENBQUMsQ0FBQztnQkFDSCxDQUFDLENBQUMsUUFBUSxDQUFDLEdBQUcsRUFBRTtvQkFDWixVQUFVLENBQUMsZUFBZSxDQUFDLHFCQUFxQixFQUFFLGNBQWMsRUFBRSwwQkFBMEIsQ0FBQyxDQUFDO29CQUM5RixDQUFDLENBQUMsYUFBYSxDQUFDLGlCQUFpQixFQUFFLGlCQUFpQixDQUFDLENBQUM7Z0JBQzFELENBQUMsQ0FBQyxDQUFDO1lBQ1AsQ0FBQyxDQUFDLENBQUE7UUFDTixDQUFDLENBQUMsQ0FBQztJQUNQLENBQUMsQ0FBQyxDQUFDLENBQUM7SUFDSixPQUFPLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLFVBQVUsQ0FBRSxHQUFHLENBQUUsQ0FBRSxDQUFDO0lBQzlDLE9BQU8sQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFDLElBQUksY0FBYyxDQUFDLFNBQVMsRUFBRSxhQUFhLENBQUMsQ0FBQyxDQUFDO0lBRW5FLCtCQUErQjtJQUMvQixJQUFJLEtBQUssR0FBRyxJQUFJLG9CQUFvQixFQUFFLENBQUM7SUFDdkMsS0FBSyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxjQUFjLENBQUUsU0FBUyxFQUFFLG1CQUFtQixDQUFFLENBQUUsQ0FBQztJQUMzRSxLQUFLLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLFVBQVUsQ0FBRSxHQUFHLENBQUUsQ0FBRSxDQUFDO0lBQzVDLEtBQUssQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksY0FBYyxDQUFFLFNBQVMsRUFBRSwyQkFBMkIsQ0FBRSxDQUFFLENBQUM7SUFFbkYsc0JBQXNCO0lBQ3RCLElBQUksU0FBUyxHQUFHLElBQUksb0JBQW9CLEVBQUUsQ0FBQztJQUMzQyxTQUFTLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLFVBQVUsQ0FBRSxDQUFDLENBQUUsQ0FBRSxDQUFDO0lBRTlDLGtEQUFrRDtJQUNsRCxJQUFJLEdBQUcsR0FBRyxJQUFJLGtCQUFrQixFQUFFLENBQUM7SUFDbkMsR0FBRyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsS0FBSyxDQUFFLENBQUM7SUFDMUIsR0FBRyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsU0FBUyxDQUFFLENBQUM7SUFDOUIsT0FBTyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsR0FBRyxDQUFFLENBQUM7SUFFNUIsMEJBQTBCO0lBQzFCLE9BQU8sQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksaUJBQWlCLENBQUU7UUFFekMsSUFBSyxnQkFBZ0IsRUFBRSxFQUN2QjtZQUNJLGVBQWUsQ0FBRSxzQkFBc0IsQ0FBRSxDQUFDO1lBQzFDLFNBQVMsQ0FBQyxXQUFXLENBQUUsYUFBYSxDQUFFLENBQUM7U0FFMUM7SUFDTCxDQUFDLENBQUMsQ0FBQyxDQUFDO0lBRUosMkRBQTJEO0lBQzNELGVBQWUsQ0FBRSxPQUFPLENBQUUsQ0FBQztBQUMvQixDQUFDLENBQUEifQ==