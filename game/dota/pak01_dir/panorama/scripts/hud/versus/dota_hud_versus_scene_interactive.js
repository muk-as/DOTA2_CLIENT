"use strict";
/// <reference path="../../dota.d.ts" />
/// <reference path="../../util.ts" />
/// <reference path="../../dota_sequence_actions.ts" />
/// <reference path="dota_hud_versus_scene_shared.ts" />
// Called from C++ when the scene starts
var PlayScene = function () {
    const mainPanel = $.GetContextPanel();
    const scenePanel = $('#VersusScene');
    const bRadiantTeam = $('#TeamInfo').BHasClass('RadiantTeam');
    // Initial Setup
    mainPanel.RemoveClass('RevealTeamDetails');
    mainPanel.RemoveClass('RevealFeaturedHeroDetails');
    // Wait for the fade-in, then reveal the scene
    const mainSeq = new RunSequentialActions();
    if (bRadiantTeam) {
        mainSeq.actions.push(new PlaySoundEffectAction('versus_screen.whoosh'));
    }
    mainSeq.actions.push(new WaitForScenesToLoadAction(scenePanel));
    mainSeq.actions.push(new RunFunctionAction(function () {
        // IDLE is also specified as a fallback if loadout doesn't exist
        scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(0), 'StartGestureOverride', 'ACT_DOTA_LOADOUT;ACT_DOTA_IDLE');
        scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(0), 'SetPlaybackRateOnAllLayers', 1.0);
        for (let i = 1; i < 5; ++i) {
            scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'StartGestureOverride', 'ACT_DOTA_LOADOUT;ACT_DOTA_IDLE');
            scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'SetPlaybackRateOnAllLayers', 1.0);
        }
    }));
    mainSeq.actions.push(new WaitAction(0.5));
    mainSeq.actions.push(new AddClassAction(mainPanel, 'RevealScene'));
    mainSeq.actions.push(new PlaySoundEffectAction(bRadiantTeam ? 'versus_screen.radiant' : 'versus_screen.dire'));
    // The UI will appear in pieces
    const uiSeq = new RunSequentialActions();
    uiSeq.actions.push(new AddClassAction(mainPanel, 'RevealTeamDetails'));
    uiSeq.actions.push(new WaitAction(2.0));
    uiSeq.actions.push(new AddClassAction(mainPanel, 'RevealFeaturedHeroDetails'));
    // Script the entities
    const entitySeq = new RunSequentialActions();
    entitySeq.actions.push(new FireEntityInputAction(scenePanel, 'debut_camera', 'SetAnimation', 'versus_camera_radiant_anim'));
    entitySeq.actions.push(new WaitAction(10.0));
    // Run both the UI and Entity sequence in parallel
    const par = new RunParallelActions();
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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZG90YV9odWRfdmVyc3VzX3NjZW5lX2ludGVyYWN0aXZlLmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsiZG90YV9odWRfdmVyc3VzX3NjZW5lX2ludGVyYWN0aXZlLnRzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiI7QUFBQSx3Q0FBd0M7QUFDeEMsc0NBQXNDO0FBQ3RDLHVEQUF1RDtBQUN2RCx3REFBd0Q7QUFFeEQsd0NBQXdDO0FBQ3hDLElBQUksU0FBUyxHQUFHO0lBRWYsTUFBTSxTQUFTLEdBQUcsQ0FBQyxDQUFDLGVBQWUsRUFBMEIsQ0FBQztJQUM5RCxNQUFNLFVBQVUsR0FBRyxDQUFDLENBQUUsY0FBYyxDQUFzQixDQUFDO0lBQzNELE1BQU0sWUFBWSxHQUFHLENBQUMsQ0FBRSxXQUFXLENBQUcsQ0FBQyxTQUFTLENBQUUsYUFBYSxDQUFFLENBQUM7SUFFbEUsZ0JBQWdCO0lBQ2hCLFNBQVMsQ0FBQyxXQUFXLENBQUUsbUJBQW1CLENBQUUsQ0FBQztJQUM3QyxTQUFTLENBQUMsV0FBVyxDQUFFLDJCQUEyQixDQUFFLENBQUM7SUFFckQsOENBQThDO0lBQzlDLE1BQU0sT0FBTyxHQUFHLElBQUksb0JBQW9CLEVBQUUsQ0FBQztJQUMzQyxJQUFLLFlBQVksRUFDakI7UUFDQyxPQUFPLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLHFCQUFxQixDQUFFLHNCQUFzQixDQUFFLENBQUUsQ0FBQztLQUM1RTtJQUNELE9BQU8sQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUkseUJBQXlCLENBQUUsVUFBVSxDQUFFLENBQUUsQ0FBQztJQUNwRSxPQUFPLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGlCQUFpQixDQUFFO1FBRXRDLGdFQUFnRTtRQUN0RSxVQUFVLENBQUMsZUFBZSxDQUFFLFNBQVMsQ0FBQywyQkFBMkIsQ0FBRSxDQUFDLENBQUUsRUFBRSxzQkFBc0IsRUFBRSxnQ0FBZ0MsQ0FBRSxDQUFDO1FBQ25JLFVBQVUsQ0FB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