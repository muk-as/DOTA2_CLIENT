"use strict";
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
            $.DispatchEvent('PlaySoundEffect', 'Default.Null');
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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZG90YV9odWRfdmVyc3VzX3NjZW5lX3NpZGVfd2Fsa19kaXJlLmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsiLi4vLi4vLi4vLi4vLi4vLi4vY29udGVudC9kb3RhL3Bhbm9yYW1hL3NjcmlwdHMvaHVkL3ZlcnN1cy9kb3RhX2h1ZF92ZXJzdXNfc2NlbmVfc2lkZV93YWxrX2RpcmUudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IjtBQUFBLHdDQUF3QztBQUN4QyxzQ0FBc0M7QUFDdEMsdURBQXVEO0FBQ3ZELHdEQUF3RDtBQUV4RCx3Q0FBd0M7QUFDeEMsSUFBSSxTQUFTLEdBQUc7SUFFWixJQUFJLFNBQVMsR0FBRyxDQUFDLENBQUMsZUFBZSxFQUEwQixDQUFDO0lBQzVELElBQUksVUFBVSxHQUFHLENBQUMsQ0FBRSxjQUFjLENBQXNCLENBQUM7SUFDekQsSUFBSSxZQUFZLEdBQUcsQ0FBQyxDQUFFLFdBQVcsQ0FBRyxDQUFDLFNBQVMsQ0FBRSxhQUFhLENBQUUsQ0FBQztJQUNoRSxJQUFJLFlBQVksR0FBRyxHQUFHLENBQUM7SUFFdkIsZ0JBQWdCO0lBQ2hCLFNBQVMsQ0FBQyxXQUFXLENBQUUsbUJBQW1CLENBQUUsQ0FBQztJQUM3QyxTQUFTLENBQUMsV0FBVyxDQUFFLDJCQUEyQixDQUFFLENBQUM7SUFFckQsOENBQThDO0lBQzlDLElBQUksT0FBTyxHQUFHLElBQUksb0JBQW9CLEVBQUUsQ0FBQztJQUV6QyxPQUFPLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLHlCQUF5QixDQUFFLFVBQVUsQ0FBRSxDQUFFLENBQUM7SUFDcEUsT0FBTyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxpQkFBaUIsQ0FBRTtRQUVqQyxpQkFBaUI7UUFFakIsQ0FBQyxDQUFDLFFBQVEsQ0FBQyxDQUFDLEVBQUU7WUFDVixLQUFNLElBQUksQ0FBQyxHQUFHLENBQUMsRUFBRSxDQUFDLEdBQUcsQ0FBQyxFQUFFLEVBQUUsQ0FBQyxFQUMzQjtnQkFDQSxVQUFVLENBQUMsZUFBZSxDQUFDLFNBQVMsQ0FBQywyQkFBMkIsQ0FBRSxDQUFDLENBQUUsRUFBRSxzQkFBc0IsRUFBRSxjQUFjLENBQUUsQ0FBQztnQkFDaEgsVUFBVSxDQUFDLGVBQWUsQ0FBRSxTQUFTLENBQUMsMkJBQTJCLENBQUUsQ0FBQyxDQUFFLEVBQUUsNEJBQTRCLEVBQUUsWUFBWSxDQUFFLENBQUM7YUFDcEg7UUFBQSxDQUFDLENBQUMsQ0FBQztRQUdSLEtBQU0sSUFBSSxDQUFDLEdBQUcsQ0FBQyxFQUFFLENBQUMsR0FBRyxDQUFDLEVBQUUsQ0FBQyxJQUFJLEdBQUcsRUFDNUI7WUFDQSxDQUFDLENBQUMsUUFBUSxDQUFDLENBQUMsRUFBRTtnQkFDZCxLQUFNLElBQUksQ0FBQyxHQUFHLENBQUMsRUFBRSxDQUFDLEdBQUcsQ0FBQyxFQUFFLEVBQUUsQ0FBQyxFQUMzQjtvQkFDQSxVQUFVLENBQUMsZUFBZSxDQUFDLFNBQVMsQ0FBQywyQkFBMkIsQ0FBRSxDQUFDLENBQUUsRUFBRSxhQUFhLEVBQUUsY0FBYyxDQUFFLENBQUM7b0JBQ3ZHLFVBQVUsQ0FBQyxlQUFlLENBQUMsU0FBUyxDQUFDLDJCQUEyQixDQUFFLENBQUMsQ0FBRSxFQUFFLDRCQUE0QixFQUFFLFlBQVksQ0FBQyxDQUFDO2lCQUNsSDtZQUFBLENBQUMsQ0FBQyxDQUFDO1NBQ0g7UUFFYix5RUFBeUU7UUFDekUsZ0RBQWdEO1FBQ2hELFVBQVUsQ0FBQyxlQUFlLENBQUMsZUFBZSxFQUFFLGNBQWMsRUFBRSxvQ0FBb0MsQ0FBQyxDQUFDO1FBQ2xHLFVBQVUsQ0FBQyxlQUFlLENBQUMsZUFBZSxFQUFFLGlCQUFpQixFQUFFLElBQUksQ0FBQyxDQUFDO1FBR3JFLDBIQUEwSDtRQUUxSCxVQUFVLENBQUMsZUFBZSxDQUFDLG9CQUFvQixFQUFFLGNBQWMsRUFBRSxtREFBbUQsQ0FBQyxDQUFDO1FBR3RILENBQUMsQ0FBQyxRQUFRLENBQUMsQ0FBQyxFQUFFO1lBQ1YsbURBQW1EO1lBQ25ELENBQUMsQ0FBQyxhQUFhLENBQUMsaUJBQWlCLEVBQUUseUJBQXlCLENBQUMsQ0FBQztRQUNsRSxDQUFDLENBQUMsQ0FBQztRQUVILENBQUMsQ0FBQyxRQUFRLENBQUMsR0FBRyxFQUFFO1lBQ1osQ0FBQyxDQUFDLGFBQWEsQ0FBQyxpQkFBaUIsRUFBRSxjQUFjLENBQUMsQ0FBQztRQUN2RCxDQUFDLENBQUMsQ0FBQztRQUVILFVBQVUsQ0FBQyxlQUFlLENBQUMsUUFBUSxFQUFFLGNBQWMsRUFBRSxVQUFVLENBQUMsQ0FBQztRQUNqRSxDQUFDLENBQUMsUUFBUSxDQUFDLElBQUksRUFBRTtZQUNiLFVBQVUsQ0FBQyxlQUFlLENBQUMsUUFBUSxFQUFFLGNBQWMsRUFBRSxZQUFZLENBQUMsQ0FBQztZQUNuRSxVQUFVLENBQUMsZUFBZSxDQUFDLFFBQVEsRUFBRSxpQkFBaUIsRUFBRSxJQUFJLENBQUUsQ0FBQztZQUUvRCxDQUFDLENBQUMsUUFBUSxDQUFDLElBQUksRUFBRTtnQkFDYixVQUFVLENBQUMsZUFBZSxDQUFDLHFCQUFxQixFQUFFLGNBQWMsRUFBRSwwQkFBMEIsQ0FBQyxDQUFDO2dCQUM5RixDQUFDLENBQUMsYUFBYSxDQUFDLGlCQUFpQixFQUFFLGlCQUFpQixDQUFDLENBQUM7Z0JBQ3RELENBQUMsQ0FBQyxRQUFRLENBQUMsR0FBRyxFQUFFO29CQUNaLFVBQVUsQ0FBQyxlQUFlLENBQUMscUJBQXFCLEVBQUUsY0FBYyxFQUFFLDBCQUEwQixDQUFDLENBQUM7b0JBQzlGLENBQUMsQ0FBQyxhQUFhLENBQUMsaUJBQWlCLEVBQUUsaUJBQWlCLENBQUMsQ0FBQztnQkFDMUQsQ0FBQyxDQUFDLENBQUM7Z0JBQ0gsQ0FBQyxDQUFDLFFBQVEsQ0FBQyxHQUFHLEVBQUU7b0JBQ1osVUFBVSxDQUFDLGVBQWUsQ0FBQyxxQkFBcUIsRUFBRSxjQUFjLEVBQUUsMEJBQTBCLENBQUMsQ0FBQztvQkFDOUYsQ0FBQyxDQUFDLGFBQWEsQ0FBQyxpQkFBaUIsRUFBRSxpQkFBaUIsQ0FBQyxDQUFDO2dCQUMxRCxDQUFDLENBQUMsQ0FBQztZQUNQLENBQUMsQ0FBQyxDQUFBO1FBQ04sQ0FBQyxDQUFDLENBQUM7SUFDUCxDQUFDLENBQUMsQ0FBQyxDQUFDO0lBQ0osT0FBTyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxVQUFVLENBQUUsR0FBRyxDQUFFLENBQUUsQ0FBQztJQUM5QyxPQUFPLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBQyxJQUFJLGNBQWMsQ0FBQyxTQUFTLEVBQUUsYUFBYSxDQUFDLENBQUMsQ0FBQztJQUVuRSwrQkFBK0I7SUFDL0IsSUFBSSxLQUFLLEdBQUcsSUFBSSxvQkFBb0IsRUFBRSxDQUFDO0lBQ3ZDLEtBQUssQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksY0FBYyxDQUFFLFNBQVMsRUFBRSxtQkFBbUIsQ0FBRSxDQUFFLENBQUM7SUFDM0UsS0FBSyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxVQUFVLENBQUUsR0FBRyxDQUFFLENBQUUsQ0FBQztJQUM1QyxLQUFLLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGNBQWMsQ0FBRSxTQUFTLEVBQUUsMkJBQTJCLENBQUUsQ0FBRSxDQUFDO0lBRW5GLHNCQUFzQjtJQUN0QixJQUFJLFNBQVMsR0FBRyxJQUFJLG9CQUFvQixFQUFFLENBQUM7SUFDM0MsU0FBUyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxVQUFVLENBQUUsQ0FBQyxDQUFFLENBQUUsQ0FBQztJQUU5QyxrREFBa0Q7SUFDbEQsSUFBSSxHQUFHLEdBQUcsSUFBSSxrQkFBa0IsRUFBRSxDQUFDO0lBQ25DLEdBQUcsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLEtBQUssQ0FBRSxDQUFDO0lBQzFCLEdBQUcsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLFNBQVMsQ0FBRSxDQUFDO0lBQzlCLE9BQU8sQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLEdBQUcsQ0FBRSxDQUFDO0lBRTVCLDBCQUEwQjtJQUMxQixPQUFPLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGlCQUFpQixDQUFFO1FBRXpDLElBQUssZ0JBQWdCLEVBQUUsRUFDdkI7WUFDSSxlQUFlLENBQUUsc0JBQXNCLENBQUUsQ0FBQztZQUMxQyxTQUFTLENBQUMsV0FBVyxDQUFFLGFBQWEsQ0FBRSxDQUFDO1NBRTFDO0lBQ0wsQ0FBQyxDQUFDLENBQUMsQ0FBQztJQUVKLDJEQUEyRDtJQUMzRCxlQUFlLENBQUUsT0FBTyxDQUFFLENBQUM7QUFDL0IsQ0FBQyxDQUFBIn0=