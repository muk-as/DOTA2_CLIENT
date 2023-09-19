"use strict";
/// <reference path="../../dota.d.ts" />
/// <reference path="../../util.ts" />
/// <reference path="../../dota_sequence_actions.ts" />
/// <reference path="dota_hud_versus_scene_shared.ts" />
// Called from C++ when the scene starts
var PlayScene = function () {
    const mainPanel = $.GetContextPanel();
    const scenePanel = $('#VersusScene');
    // const scenePanelBG = $( '#VersusScene_bg' ) as DOTAScenePanel_t;
    const bRadiantTeam = $('#TeamInfo').BHasClass('RadiantTeam');
    const mainSeq = new RunSequentialActions();
    // Initial Setup
    mainPanel.RemoveClass('RevealTeamDetails');
    mainPanel.RemoveClass('RevealFeaturedHeroDetails');
    // Wait for the fade-in, then reveal the scene
    if (bRadiantTeam) {
        mainSeq.actions.push(new PlaySoundEffectAction('versus_screen.whoosh'));
    }
    mainSeq.actions.push(new WaitForScenesToLoadAction(scenePanel));
    mainSeq.actions.push(new RunFunctionAction(function () {
        scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(0), 'StartGestureOverride', 'ACT_DOTA_SPAWN');
        scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(0), 'SetPlaybackRateOnAllLayers', 0.5);
        for (let i = 1; i < 5; ++i) {
            scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'StartGestureOverride', 'ACT_DOTA_LOADOUT');
            scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'SetPlaybackRateOnAllLayers', 0.3);
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
    entitySeq.actions.push(new FireEntityInputAction(scenePanel, 'debut_camera', 'SetAnimation', 'versus_camera_rotation_center_anim'));
    // entitySeq.actions.push( new FireEntityInputAction( scenePanelBG, 'debut_camera', 'SetAnimation', 'versus_camera_rotation_center_anim' ) );
    entitySeq.actions.push(new WaitAction(7.0));
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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZG90YV9odWRfdmVyc3VzX3NjZW5lX3JvdGF0aW5nLmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsiZG90YV9odWRfdmVyc3VzX3NjZW5lX3JvdGF0aW5nLnRzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiI7QUFBQSx3Q0FBd0M7QUFDeEMsc0NBQXNDO0FBQ3RDLHVEQUF1RDtBQUN2RCx3REFBd0Q7QUFFeEQsd0NBQXdDO0FBQ3hDLElBQUksU0FBUyxHQUFHO0lBRWYsTUFBTSxTQUFTLEdBQUcsQ0FBQyxDQUFDLGVBQWUsRUFBMEIsQ0FBQztJQUM5RCxNQUFNLFVBQVUsR0FBRyxDQUFDLENBQUUsY0FBYyxDQUFzQixDQUFDO0lBQzNELG1FQUFtRTtJQUNuRSxNQUFNLFlBQVksR0FBRyxDQUFDLENBQUUsV0FBVyxDQUFHLENBQUMsU0FBUyxDQUFFLGFBQWEsQ0FBRSxDQUFDO0lBRWxFLE1BQU0sT0FBTyxHQUFHLElBQUksb0JBQW9CLEVBQUUsQ0FBQztJQUUzQyxnQkFBZ0I7SUFDaEIsU0FBUyxDQUFDLFdBQVcsQ0FBRSxtQkFBbUIsQ0FBRSxDQUFDO0lBQzdDLFNBQVMsQ0FBQyxXQUFXLENBQUUsMkJBQTJCLENBQUUsQ0FBQztJQUVyRCw4Q0FBOEM7SUFDOUMsSUFBSyxZQUFZLEVBQ2pCO1FBQ0MsT0FBTyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxxQkFBcUIsQ0FBRSxzQkFBc0IsQ0FBRSxDQUFFLENBQUM7S0FDNUU7SUFDRCxPQUFPLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLHlCQUF5QixDQUFFLFVBQVUsQ0FBRSxDQUFFLENBQUM7SUFDcEUsT0FBTyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxpQkFBaUIsQ0FBRTtRQUU1QyxVQUFVLENBQUMsZUFBZSxDQUFFLFNBQVMsQ0FBQywyQkFBMkIsQ0FBRSxDQUFDLENBQUUsRUFBRSxzQkFBc0IsRUFBRSxnQkFBZ0IsQ0FBRSxDQUFDO1FBQ25ILFVBQVUsQ0FBQyxlQUFl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