"use strict";
/// <reference path="../../dota.d.ts" />
/// <reference path="../../util.ts" />
/// <reference path="../../dota_sequence_actions.ts" />
/// <reference path="dota_hud_versus_scene_shared.ts" />
// Called from C++ when the scene starts
var PlayScene = function () {
    var mainPanel = $.GetContextPanel();
    var scenePanel = $('#VersusScene');
    //	var scenePanelBG = $('#VersusScene_bg') as DOTAScenePanel_t;
    var bRadiantTeam = $('#TeamInfo').BHasClass('RadiantTeam');
    var mainSeq = new RunSequentialActions();
    // Initial Setup
    mainPanel.RemoveClass('RevealTeamDetails');
    mainPanel.RemoveClass('RevealFeaturedHeroDetails');
    // Wait for the fade-in, then reveal the scene
    if (bRadiantTeam) {
        mainSeq.actions.push(new PlaySoundEffectAction('versus_screen.whoosh'));
    }
    mainSeq.actions.push(new WaitForScenesToLoadAction(scenePanel));
    mainSeq.actions.push(new RunFunctionAction(function () {
        scenePanel.FireEntityInput('movement_dummy', 'SetAnimation', 'versus_movement_dummy_anim');
        scenePanel.FireEntityInput('explosion', 'Stop', '');
        scenePanel.FireEntityInput('explosion', 'Start', '');
        for (var i = 0; i < 5; ++i) {
            scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'StartGestureOverride', 'ACT_DOTA_RUN');
            scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'SetPlaybackRateOnAllLayers', 0.2);
        }
        // Run loop cycle
        $.Schedule(1, function () {
            $.Schedule(0.5, function () {
                for (var i = 0; i < 5; ++i) {
                    scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'SetActivity', 'ACT_DOTA_RUN');
                    scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'SetPlaybackRateOnAllLayers', 0.2);
                }
            });
            $.Schedule(0.5, function () {
                for (var i = 0; i < 5; ++i) {
                    scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'SetActivity', 'ACT_DOTA_RUN');
                    scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'SetPlaybackRateOnAllLayers', 0.2);
                }
            });
            $.Schedule(1, function () {
                for (var i = 0; i < 5; ++i) {
                    scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'SetActivity', 'ACT_DOTA_RUN');
                    scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'SetPlaybackRateOnAllLayers', 0.2);
                }
            });
            $.Schedule(1.5, function () {
                for (var i = 0; i < 5; ++i) {
                    scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'SetActivity', 'ACT_DOTA_RUN');
                    scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'SetPlaybackRateOnAllLayers', 0.2);
                }
            });
            $.Schedule(2, function () {
                for (var i = 0; i < 5; ++i) {
                    scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'SetActivity', 'ACT_DOTA_RUN');
                    scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'SetPlaybackRateOnAllLayers', 0.2);
                }
            });
            $.Schedule(2.5, function () {
                for (var i = 0; i < 5; ++i) {
                    scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'SetActivity', 'ACT_DOTA_RUN');
                    scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'SetPlaybackRateOnAllLayers', 0.2);
                }
            });
            $.Schedule(3, function () {
                for (var i = 0; i < 5; ++i) {
                    scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'SetActivity', 'ACT_DOTA_RUN');
                    scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'SetPlaybackRateOnAllLayers', 0.2);
                }
            });
        });
    }));
    mainSeq.actions.push(new WaitAction(0.5));
    mainSeq.actions.push(new AddClassAction(mainPanel, 'RevealScene'));
    mainSeq.actions.push(new PlaySoundEffectAction(bRadiantTeam ? 'versus_screen.radiant' : 'versus_screen.dire'));
    // The UI will appear in pieces
    var uiSeq = new RunSequentialActions();
    uiSeq.actions.push(new AddClassAction(mainPanel, 'RevealTeamDetails'));
    uiSeq.actions.push(new WaitAction(2.0));
    uiSeq.actions.push(new AddClassAction(mainPanel, 'RevealFeaturedHeroDetails'));
    // Script the entities
    var entitySeq = new RunSequentialActions();
    entitySeq.actions.push(new FireEntityInputAction(scenePanel, 'debut_camera', 'SetAnimation', 'versus_camera_walking_anim'));
    //entitySeq.actions.push(new FireEntityInputAction(scenePanelBG, 'debut_camera', 'SetAnimation', 'versus_camera_walking_anim'));
    entitySeq.actions.push(new WaitAction(7.0));
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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZG90YV9odWRfdmVyc3VzX3NjZW5lX3dhbGtpbmcuanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyJkb3RhX2h1ZF92ZXJzdXNfc2NlbmVfd2Fsa2luZy50cyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiO0FBQUEsd0NBQXdDO0FBQ3hDLHNDQUFzQztBQUN0Qyx1REFBdUQ7QUFDdkQsd0RBQXdEO0FBRXhELHdDQUF3QztBQUN4QyxJQUFJLFNBQVMsR0FBRztJQUVmLElBQUksU0FBUyxHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQTBCLENBQUM7SUFDNUQsSUFBSSxVQUFVLEdBQUcsQ0FBQyxDQUFDLGNBQWMsQ0FBcUIsQ0FBQztJQUN4RCwrREFBK0Q7SUFDOUQsSUFBSSxZQUFZLEdBQUcsQ0FBQyxDQUFFLFdBQVcsQ0FBRyxDQUFDLFNBQVMsQ0FBRSxhQUFhLENBQUUsQ0FBQztJQUVoRSxJQUFJLE9BQU8sR0FBRyxJQUFJLG9CQUFvQixFQUFFLENBQUM7SUFFekMsZ0JBQWdCO0lBQ2hCLFNBQVMsQ0FBQyxXQUFXLENBQUUsbUJBQW1CLENBQUUsQ0FBQztJQUM3QyxTQUFTLENBQUMsV0FBVyxDQUFFLDJCQUEyQixDQUFFLENBQUM7SUFFckQsOENBQThDO0lBQzlDLElBQUssWUFBWSxFQUNqQjtRQUNDLE9BQU8sQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUkscUJBQXFCLENBQUUsc0JBQXNCLENBQUUsQ0FBRSxDQUFDO0tBQzVFO0lBQ0QsT0FBTyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSx5QkFBeUIsQ0FBRSxVQUFVLENBQUUsQ0FBRSxDQUFDO0lBQ3BFLE9BQU8sQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksaUJBQWlCLENBQUU7UUFFNUMsVUFBVSxDQUFDLGVBQWUsQ0FBRSxnQkFBZ0IsRUFBRSxjQUFjLEVBQUUsNEJBQTRCLENBQUUsQ0FBQztRQUM3RixVQUFVLENBQUMsZUFBZSxDQUFFLFdBQVcsRUFBRSxNQUFNLEVBQUUsRUFB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