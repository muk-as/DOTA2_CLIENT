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
        // activate the non-featured heroes immediately
        for (var i = 1; i < 5; ++i) {
            scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'StartGestureOverride', 'ACT_DOTA_LOADOUT');
            scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'SetPlaybackRateOnAllLayers', 0.6);
        }
        // meanwhile, delay playback the featured hero so their VO roughly queues up with 
        // their (delayed) meteor impact
        $.Schedule(3.5, function () {
            scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(0), 'StartGestureOverride', 'ACT_DOTA_SPAWN');
            scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(0), 'SetPlaybackRateOnAllLayers', 1);
        });
    }));
    mainSeq.actions.push(new PlaySoundEffectAction('versus_sfx_open'));
    if (bRadiantTeam) {
        mainSeq.actions.push(new PlaySoundEffectAction('versus_stinger_2022_radiant'));
    }
    else {
        mainSeq.actions.push(new PlaySoundEffectAction('versus_stinger_2022_dire'));
    }
    mainSeq.actions.push(new WaitAction(0.5));
    mainSeq.actions.push(new AddClassAction(mainPanel, 'RevealScene'));
    //
    // play sequences and FX that start immediately on load
    //
    mainSeq.actions.push(new RunFunctionAction(function () {
        // entities (animation start)
        scenePanel.FireEntityInput('versus_layout', 'SetAnimation', 'bp22_meteor_versus_layout');
        scenePanel.FireEntityInput('meteor_model_placeholder', 'SetAnimation', 'vs_meteors_anim');
        // FX
        let particle_systems2 = [
            'stars',
            'star1',
            //'meteor_twinkle', 
            'meteor_simple_1', 'meteor_simple_2', 'meteor_simple_3', 'meteor_simple_4',
            'meteor_simple_5', 'meteor_simple_6', 'meteor_simple_7', 'meteor_simple_8',
            'meteor_simple_9', 'meteor_simple_10', 'meteor_simple_11', 'meteor_simple_12',
            'meteor_simple_13', 'meteor_simple_14', 'meteor_simple_15', 'meteor_simple_16'
        ];
        for (let fx_name of particle_systems2) {
            scenePanel.FireEntityInput(fx_name, 'start', 0);
        }
    }));
    //
    // queue in sequences + FX requiring specific playback timings
    //
    // particle FX
    mainSeq.actions.push(new RunFunctionAction(function () {
        $.Schedule(0.45, function () {
            scenePanel.FireEntityInput('star4', 'start', 0);
        });
        $.Schedule(0.65, function () {
            scenePanel.FireEntityInput('star2', 'start', 0);
        });
        $.Schedule(0.95, function () {
            scenePanel.FireEntityInput('star3', 'start', 0);
        });
        $.Schedule(1.25, function () {
            scenePanel.FireEntityInput('star5', 'start', 0);
        });
        $.Schedule(2.65, function () {
            scenePanel.FireEntityInput('meteor_near_1', 'start', 0);
        });
        $.Schedule(2.97, function () {
            scenePanel.FireEntityInput('meteor_near_3', 'start', 0);
        });
        $.Schedule(3.1, function () {
            scenePanel.FireEntityInput('meteor_near_2', 'start', 0);
        });
        $.Schedule(4.29, function () {
            scenePanel.FireEntityInput('meteor_near_4', 'start', 0);
        });
    }));
    // sound FX
    mainSeq.actions.push(new RunFunctionAction(function () {
        //let charge_sfx = 'Outpost.Reward'; 'Shrine.Cast';  // working candidates
        let charge_sfx = 'versus_sfx_meteor';
        //let impact_sfx = 'Block_Tower.Player'; // working candidates
        let impact_sfx = 'versus_sfx_impact';
        $.Schedule(1.0, function () {
            $.DispatchEvent('PlaySoundEffect', charge_sfx);
        });
        $.Schedule(2.1667, function () {
            $.DispatchEvent('PlaySoundEffect', impact_sfx);
        });
        $.Schedule(2.9667, function () {
            $.DispatchEvent('PlaySoundEffect', impact_sfx);
        });
        $.Schedule(3.3, function () {
            $.DispatchEvent('PlaySoundEffect', impact_sfx);
        });
        $.Schedule(3.533, function () {
            $.DispatchEvent('PlaySoundEffect', impact_sfx);
        });
        $.Schedule(4.633, function () {
            $.DispatchEvent('PlaySoundEffect', impact_sfx);
        });
        //$.Schedule(4.8, function () {
        //    $.DispatchEvent('PlaySoundEffect', 'Building_RadiantTower.Destruction.Distant');
        //});
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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZG90YV9odWRfdmVyc3VzX3NjZW5lX2JwMjJfbWV0ZW9yLmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsiZG90YV9odWRfdmVyc3VzX3NjZW5lX2JwMjJfbWV0ZW9yLnRzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiI7QUFBQSx3Q0FBd0M7QUFDeEMsc0NBQXNDO0FBQ3RDLHVEQUF1RDtBQUN2RCx3REFBd0Q7QUFFeEQsd0NBQXdDO0FBQ3hDLElBQUksU0FBUyxHQUFHO0lBRVosSUFBSSxTQUFTLEdBQUcsQ0FBQyxDQUFDLGVBQWUsRUFBd0IsQ0FBQztJQUMxRCxJQUFJLFVBQVUsR0FBRyxDQUFDLENBQW9CLGNBQWMsQ0FBRSxDQUFDO0lBQ3ZELElBQUksWUFBWSxHQUFHLENBQUMsQ0FBRSxXQUFXLENBQUcsQ0FBQyxTQUFTLENBQUUsYUFBYSxDQUFFLENBQUM7SUFFaEUsZ0JBQWdCO0lBQ2hCLFNBQVMsQ0FBQyxXQUFXLENBQUUsbUJBQW1CLENBQUUsQ0FBQztJQUM3QyxTQUFTLENBQUMsV0FBVyxDQUFFLDJCQUEyQixDQUFFLENBQUM7SUFFckQsOENBQThDO0lBQzlDLElBQUksT0FBTyxHQUFHLElBQUksb0JBQW9CLEVBQUUsQ0FBQztJQUN6QyxJQUFLLFlBQVksRUFDakI7UUFDSSxPQUFPLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBQyxJQUFJLHFCQUFxQixDQUFDLHNCQUFzQixDQUFDLENBQUMsQ0FBQztLQUMzRTtJQUNELE9BQU8sQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUkseUJBQXlCLENBQUUsVUFBVSxDQUFFLENBQUUsQ0FBQztJQUNwRSxPQUFPLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGlCQUFpQixDQUFFO1FBRXpDLCtDQUErQztRQUMvQyxLQUFLLElBQUksQ0FBQyxHQUFHLENBQUMsRUFBRSxDQUFDLEdBQUcsQ0FBQyxFQUFFLEVBQUUsQ0FBQyxFQUFFO1lBQ3hCLFVBQVUsQ0FBQyxlQUFlLENBQUMsU0FBUyxDQUFD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