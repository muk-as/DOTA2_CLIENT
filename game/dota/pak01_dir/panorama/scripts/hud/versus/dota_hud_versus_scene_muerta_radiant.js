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
        scenePanel.FireEntityInput('versus_layout', 'SetAnimation', 'muerta_radiant_versus_layout_x0');
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
        scenePanel.FireEntityInput('versus_layout', 'SetAnimation', 'muerta_radiant_versus_layout');
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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZG90YV9odWRfdmVyc3VzX3NjZW5lX211ZXJ0YV9yYWRpYW50LmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsiZG90YV9odWRfdmVyc3VzX3NjZW5lX211ZXJ0YV9yYWRpYW50LnRzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiJBQUFBLHdDQUF3QztBQUN4QyxzQ0FBc0M7QUFDdEMsdURBQXVEO0FBQ3ZELHdEQUF3RDtBQUV4RCx3Q0FBd0M7QUFDeEMsSUFBSSxTQUFTLEdBQUc7SUFFZixJQUFJLFNBQVMsR0FBRyxDQUFDLENBQUMsZUFBZSxFQUF3QixDQUFDO0lBQzFELElBQUksVUFBVSxHQUFHLENBQUMsQ0FBb0IsY0FBYyxDQUFFLENBQUM7SUFDdkQsSUFBSSxZQUFZLEdBQUcsQ0FBQyxDQUFFLFdBQVcsQ0FBRyxDQUFDLFNBQVMsQ0FBRSxhQUFhLENBQUUsQ0FBQztJQUVoRSxnQkFBZ0I7SUFDaEIsU0FBUyxDQUFDLFdBQVcsQ0FBRSxtQkFBbUIsQ0FBRSxDQUFDO0lBQzdDLFNBQVMsQ0FBQyxXQUFXLENBQUUsMkJBQTJCLENBQUUsQ0FBQztJQUVyRCw4Q0FBOEM7SUFDOUMsSUFBSSxPQUFPLEdBQUcsSUFBSSxvQkFBb0IsRUFBRSxDQUFDO0lBQ3pDLElBQUssWUFBWSxFQUNqQjtRQUNDLE9BQU8sQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFDLElBQUkscUJBQXFCLENBQUMsc0JBQXNCLENBQUMsQ0FBQyxDQUFDO0tBQ3hFO0lBQ0QsT0FBTyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSx5QkFBeUIsQ0FBRSxVQUFVLENBQUUsQ0FBRSxDQUFDO0lBQ3BFLE9BQU8sQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksaUJBQWlCLENBQUU7UUFFNUMsVUFBVSxDQUFDLGVBQWUsQ0FBQyxTQUFTLENBQUMsMkJBQTJCLENBQUMsQ0FBQyxDQUFDLEVBQUUsc0JBQXNCLEVBQUUsZ0JBQWdCLENBQUUsQ0FBQztRQUNoSCxVQUFVLENBQUMsZUFBZSxD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