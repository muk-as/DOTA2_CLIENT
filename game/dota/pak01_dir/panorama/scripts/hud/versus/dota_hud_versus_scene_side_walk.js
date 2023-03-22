/// <reference path="../../dota.d.ts" />
/// <reference path="../../util.ts" />
/// <reference path="../../dota_sequence_actions.ts" />
/// <reference path="dota_hud_versus_scene_shared.ts" />
// Called from C++ when the scene starts
var PlayScene = function () {
    var mainPanel = $.GetContextPanel();
    var scenePanel = $('#VersusScene');
    var bRadiantTeam = $('#TeamInfo').BHasClass('RadiantTeam');
    // Initial Setup
    mainPanel.RemoveClass('RevealTeamDetails');
    mainPanel.RemoveClass('RevealFeaturedHeroDetails');
    // Wait for the fade-in, then reveal the scene
    var mainSeq = new RunSequentialActions();
    if (bRadiantTeam) {
        mainSeq.actions.push(new PlaySoundEffectAction('versus_screen.whoosh'));
    }
    mainSeq.actions.push(new WaitForScenesToLoadAction(scenePanel));
    scenePanel.FireEntityInput('side_movement', 'SetAnimGraphParameter', 'sequence=idle');
    mainSeq.actions.push(new RunFunctionAction(function () {
        scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(0), 'StartGestureOverride', 'ACT_DOTA_RUN');
        scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(0), 'SetPlaybackRateOnAllLayers', 0.7);
        for (var i = 1; i < 5; ++i) {
            scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'StartGestureOverride', 'ACT_DOTA_RUN');
            scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'SetPlaybackRateOnAllLayers', 0.7);
        }
        // trigger playback of the hero pawn controllers, roshan, and the camera 
        // (moved out of the sequential actions portion)
        scenePanel.FireEntityInput('side_movement', 'SetAnimGraphParameter', 'sequence=side_movement');
        scenePanel.FireEntityInput('side_movement', 'SetPlaybackRate', 1.0);
        scenePanel.FireEntityInput('versus_camera_anim', 'SetAnimation', 'versus_camera_2022_side_movement_diretide');
        scenePanel.FireEntityInput('versus_camera_shake', 'SetAnimation', 'versus_camera_2022_shake_copy');
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
        });
        $.Schedule(5.65, function () {
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
    entitySeq.actions.push(new WaitAction(8.0));
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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZG90YV9odWRfdmVyc3VzX3NjZW5lX3NpZGVfd2Fsay5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbImRvdGFfaHVkX3ZlcnN1c19zY2VuZV9zaWRlX3dhbGsudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IkFBQUEsd0NBQXdDO0FBQ3hDLHNDQUFzQztBQUN0Qyx1REFBdUQ7QUFDdkQsd0RBQXdEO0FBRXhELHdDQUF3QztBQUN4QyxJQUFJLFNBQVMsR0FBRztJQUVaLElBQUksU0FBUyxHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQTBCLENBQUM7SUFDNUQsSUFBSSxVQUFVLEdBQUcsQ0FBQyxDQUFFLGNBQWMsQ0FBc0IsQ0FBQztJQUN6RCxJQUFJLFlBQVksR0FBRyxDQUFDLENBQUUsV0FBVyxDQUFHLENBQUMsU0FBUyxDQUFFLGFBQWEsQ0FBRSxDQUFDO0lBRWhFLGdCQUFnQjtJQUNoQixTQUFTLENBQUMsV0FBVyxDQUFFLG1CQUFtQixDQUFFLENBQUM7SUFDN0MsU0FBUyxDQUFDLFdBQVcsQ0FBRSwyQkFBMkIsQ0FBRSxDQUFDO0lBRXJELDhDQUE4QztJQUM5QyxJQUFJLE9BQU8sR0FBRyxJQUFJLG9CQUFvQixFQUFFLENBQUM7SUFDekMsSUFBSyxZQUFZLEVBQ2pCO1FBQ0ksT0FBTyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUMsSUFBSSxxQkFBcUIsQ0FBQyxzQkFBc0IsQ0FBQyxDQUFDLENBQUM7S0FDM0U7SUFDRCxPQUFPLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLHlCQUF5QixDQUFFLFVBQVUsQ0FBRSxDQUFFLENBQUM7SUFDcEUsVUFBVSxDQUFDLGVBQWUsQ0FBQyxlQUFlLEVBQUUsdUJBQXVCLEVBQUUsZUFBZSxDQUFDLENBQUM7SUFDdEYsT0FBTyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxpQkFBaUIsQ0FBRTtRQUV6QyxVQUFVLENBQUMsZUFBZSxDQUFDLFNBQVMsQ0FBQywyQkFBMkIsQ0FBQyxDQUFDLENBQUMsRUFB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