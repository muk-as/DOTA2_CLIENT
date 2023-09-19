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
        scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(0), 'StartGestureOverride', 'ACT_DOTA_SPAWN');
        scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(0), 'SetPlaybackRateOnAllLayers', 1);
        for (var i = 1; i < 5; ++i) {
            scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'StartGestureOverride', 'ACT_DOTA_LOADOUT');
            scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'SetPlaybackRateOnAllLayers', 0.6);
        }
        // preload animation sequence to minimize popping when everything 
        // is revealed
        scenePanel.FireEntityInput('versus_layout', 'SetAnimation', 'muerta_dire_versus_layout_x0');
    }));
    mainSeq.actions.push(new WaitAction(0.5));
    mainSeq.actions.push(new AddClassAction(mainPanel, 'RevealScene'));
    mainSeq.actions.push(new PlaySoundEffectAction('versus_muerta_stinger'));
    //
    // play sequences and FX that start immediately on load
    //
    mainSeq.actions.push(new RunFunctionAction(function () {
        // entities (animation start)
        //scenePanel.FireEntityInput('versus_layout', 'SetAnimation', 'muerta_dire_versus_layout');
        scenePanel.FireEntityInput('versus_layout', 'SetAnimation', 'muerta_dire_versus_layout');
    }));
    // The UI will appear in pieces
    var uiSeq = new RunSequentialActions();
    uiSeq.actions.push(new AddClassAction(mainPanel, 'RevealTeamDetails'));
    uiSeq.actions.push(new WaitAction(2.0));
    uiSeq.actions.push(new AddClassAction(mainPanel, 'RevealFeaturedHeroDetails'));
    // Script the entities
    var entitySeq = new RunSequentialActions();
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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZG90YV9odWRfdmVyc3VzX3NjZW5lX211ZXJ0YV9kaXJlLmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsiZG90YV9odWRfdmVyc3VzX3NjZW5lX211ZXJ0YV9kaXJlLnRzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiI7QUFBQSx3Q0FBd0M7QUFDeEMsc0NBQXNDO0FBQ3RDLHVEQUF1RDtBQUN2RCx3REFBd0Q7QUFFeEQsd0NBQXdDO0FBQ3hDLElBQUksU0FBUyxHQUFHO0lBRWYsSUFBSSxTQUFTLEdBQUcsQ0FBQyxDQUFDLGVBQWUsRUFBd0IsQ0FBQztJQUMxRCxJQUFJLFVBQVUsR0FBRyxDQUFDLENBQW9CLGNBQWMsQ0FBRSxDQUFDO0lBQ3ZELElBQUksWUFBWSxHQUFHLENBQUMsQ0FBRSxXQUFXLENBQUcsQ0FBQyxTQUFTLENBQUUsYUFBYSxDQUFFLENBQUM7SUFFaEUsZ0JBQWdCO0lBQ2hCLFNBQVMsQ0FBQyxXQUFXLENBQUUsbUJBQW1CLENBQUUsQ0FBQztJQUM3QyxTQUFTLENBQUMsV0FBVyxDQUFFLDJCQUEyQixDQUFFLENBQUM7SUFFckQsOENBQThDO0lBQzlDLElBQUksT0FBTyxHQUFHLElBQUksb0JBQW9CLEVBQUUsQ0FBQztJQUN6QyxJQUFLLFlBQVksRUFDakI7UUFDQyxPQUFPLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBQyxJQUFJLHFCQUFxQixDQUFDLHNCQUFzQixDQUFDLENBQUMsQ0FBQztLQUN4RTtJQUNELE9BQU8sQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUkseUJBQXlCLENBQUUsVUFBVSxDQUFFLENBQUUsQ0FBQztJQUNwRSxPQUFPLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGlCQUFpQixDQUFFO1FBRTVDLFVBQVUsQ0FBQyxlQUFlLENBQUMsU0FBUyxDQUFDLDJCQUEyQixDQUFDLENBQUMsQ0FBQyxFQUFFLHNCQUFzQixFQUFFLGdCQUFnQixDQUFFLENBQUM7UUFDaEgsVUFBVSxDQUFDLGVBQWUsQ0FBQyxT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