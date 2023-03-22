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
    mainSeq.actions.push(new RunFunctionAction(function () {
        scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(0), 'StartGestureOverride', 'ACT_DOTA_RUN');
        scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(0), 'SetPlaybackRateOnAllLayers', 0.7);
        for (var i = 1; i < 5; ++i) {
            scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'StartGestureOverride', 'ACT_DOTA_RUN');
            scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'SetPlaybackRateOnAllLayers', 0.7);
        }
        // trigger playback of the hero pawn controllers, roshan, and the camera 
        // (moved out of the sequential actions portion)
        scenePanel.FireEntityInput('side_movement', 'SetAnimGraphParameter', 'sequence=idle');
        scenePanel.FireEntityInput('side_movement', 'SetAnimGraphParameter', 'sequence=side_movement');
        scenePanel.FireEntityInput('side_movement', 'SetPlaybackRate', 1.13);
        scenePanel.FireEntityInput('versus_camera_anim', 'SetAnimation', 'versus_camera_2022_side_movement_diretide');
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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZG90YV9odWRfdmVyc3VzX3NjZW5lX3NpZGVfd2Fsay5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbImRvdGFfaHVkX3ZlcnN1c19zY2VuZV9zaWRlX3dhbGsudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IkFBQUEsd0NBQXdDO0FBQ3hDLHNDQUFzQztBQUN0Qyx1REFBdUQ7QUFDdkQsd0RBQXdEO0FBRXhELHdDQUF3QztBQUN4QyxJQUFJLFNBQVMsR0FBRztJQUVaLElBQUksU0FBUyxHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQTBCLENBQUM7SUFDNUQsSUFBSSxVQUFVLEdBQUcsQ0FBQyxDQUFFLGNBQWMsQ0FBc0IsQ0FBQztJQUN6RCxJQUFJLFlBQVksR0FBRyxDQUFDLENBQUUsV0FBVyxDQUFHLENBQUMsU0FBUyxDQUFFLGFBQWEsQ0FBRSxDQUFDO0lBRWhFLGdCQUFnQjtJQUNoQixTQUFTLENBQUMsV0FBVyxDQUFFLG1CQUFtQixDQUFFLENBQUM7SUFDN0MsU0FBUyxDQUFDLFdBQVcsQ0FBRSwyQkFBMkIsQ0FBRSxDQUFDO0lBRXJELDhDQUE4QztJQUM5QyxJQUFJLE9BQU8sR0FBRyxJQUFJLG9CQUFvQixFQUFFLENBQUM7SUFDekMsSUFBSyxZQUFZLEVBQ2pCO1FBQ0ksT0FBTyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUMsSUFBSSxxQkFBcUIsQ0FBQyxzQkFBc0IsQ0FBQyxDQUFDLENBQUM7S0FDM0U7SUFDRCxPQUFPLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLHlCQUF5QixDQUFFLFVBQVUsQ0FBRSxDQUFFLENBQUM7SUFDcEUsT0FBTyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxpQkFBaUIsQ0FBRTtRQUV6QyxVQUFVLENBQUMsZUFBZSxDQUFDLFNBQVMsQ0FBQywyQkFBMkIsQ0FBQyxDQUFDLENBQUMsRUFBRSxzQkFBc0IsRUFBRSxjQUFjLENBQUUsQ0FBQztRQUM5RyxVQUFVLENBQUMsZUFBZSxDQUFDLFNBQVMsQ0FB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