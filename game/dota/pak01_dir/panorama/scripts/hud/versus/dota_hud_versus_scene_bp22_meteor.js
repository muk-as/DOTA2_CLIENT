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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZG90YV9odWRfdmVyc3VzX3NjZW5lX2JwMjJfbWV0ZW9yLmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsiLi4vLi4vLi4vLi4vLi4vLi4vY29udGVudC9kb3RhL3Bhbm9yYW1hL3NjcmlwdHMvaHVkL3ZlcnN1cy9kb3RhX2h1ZF92ZXJzdXNfc2NlbmVfYnAyMl9tZXRlb3IudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IjtBQUFBLHdDQUF3QztBQUN4QyxzQ0FBc0M7QUFDdEMsdURBQXVEO0FBQ3ZELHdEQUF3RDtBQUV4RCx3Q0FBd0M7QUFDeEMsSUFBSSxTQUFTLEdBQUc7SUFFWixJQUFJLFNBQVMsR0FBRyxDQUFDLENBQUMsZUFBZSxFQUF3QixDQUFDO0lBQzFELElBQUksVUFBVSxHQUFHLENBQUMsQ0FBb0IsY0FBYyxDQUFFLENBQUM7SUFDdkQsSUFBSSxZQUFZLEdBQUcsQ0FBQyxDQUFFLFdBQVcsQ0FBRyxDQUFDLFNBQVMsQ0FBRSxhQUFhLENBQUUsQ0FBQztJQUVoRSxnQkFBZ0I7SUFDaEIsU0FBUyxDQUFDLFdBQVcsQ0FBRSxtQkFBbUIsQ0FBRSxDQUFDO0lBQzdDLFNBQVMsQ0FBQyxXQUFXLENBQUUsMkJBQTJCLENBQUUsQ0FBQztJQUVyRCw4Q0FBOEM7SUFDOUMsSUFBSSxPQUFPLEdBQUcsSUFBSSxvQkFBb0IsRUFBRSxDQUFDO0lBQ3pDLElBQUssWUFBWSxFQUNqQjtRQUNJLE9BQU8sQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFDLElBQUkscUJBQXFCLENBQUMsc0JBQXNCLENBQUMsQ0FBQyxDQUFDO0tBQzNFO0lBQ0QsT0FBTyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSx5QkFBeUIsQ0FBRSxVQUFVLENBQUUsQ0FBRSxDQUFDO0lBQ3BFLE9BQU8sQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksaUJBQWlCLENBQUU7UUFFekMsK0NBQStDO1FBQy9DLEtBQUssSUFBSSxDQUFDLEdBQUcsQ0FBQyxFQUFFLENBQUMsR0FBRyxDQUFDLEVBQUUsRUFBRSxDQUFDLEVBQUU7WUFDeEIsVUFBVSxDQUFDLGVBQWUsQ0FBQyxTQUFTLENBQUMsMkJBQTJCLENBQUMsQ0FBQyxDQUFDLEVBQUUsc0JBQXNCLEVBQUUsa0JBQWtCLENBQUMsQ0FBQztZQUNqSCxVQUFVLENBQUMsZUFBZSxDQUFDLFNBQVMsQ0FBQywyQkFBMkIsQ0FBQyxDQUFDLENBQUMsRUFBRSw0QkFBNEIsRUFBRSxHQUFHLENBQUMsQ0FBQztTQUMzRztRQUVELGtGQUFrRjtRQUNsRixnQ0FBZ0M7UUFDaEMsQ0FBQyxDQUFDLFFBQVEsQ0FBQyxHQUFHLEVBQUU7WUFDWixVQUFVLENBQUMsZUFBZSxDQUFDLFNBQVMsQ0FBQywyQkFBMkIsQ0FBQyxDQUFDLENBQUMsRUFBRSxzQkFBc0IsRUFBRSxnQkFBZ0IsQ0FBRSxDQUFDO1lBQ2hILFVBQVUsQ0FBQyxlQUFlLENBQUMsU0FBUyxDQUFDLDJCQUEyQixDQUFDLENBQUMsQ0FBQyxFQUFFLDRCQUE0QixFQUFFLENBQUMsQ0FBQyxDQUFDO1FBQzFHLENBQUMsQ0FBQyxDQUFDO0lBRVAsQ0FBQyxDQUFFLENBQUUsQ0FBQztJQUVOLE9BQU8sQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFDLElBQUkscUJBQXFCLENBQUMsaUJBQWlCLENBQUMsQ0FBQyxDQUFDO0lBQ25FLElBQUksWUFBWSxFQUNoQjtRQUNJLE9BQU8sQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFDLElBQUkscUJBQXFCLENBQUMsNkJBQTZCLENBQUMsQ0FBQyxDQUFDO0tBQ2xGO1NBQU07UUFDSCxPQUFPLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBQyxJQUFJLHFCQUFxQixDQUFDLDBCQUEwQixDQUFDLENBQUMsQ0FBQztLQUMvRTtJQUVELE9BQU8sQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFDLElBQUksVUFBVSxDQUFFLEdBQUcsQ0FBRSxDQUFDLENBQUM7SUFDNUMsT0FBTyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUMsSUFBSSxjQUFjLENBQUMsU0FBUyxFQUFFLGFBQWEsQ0FBQyxDQUFDLENBQUM7SUFFbkUsRUFBRTtJQUNGLHVEQUF1RDtJQUN2RCxFQUFFO0lBQ0YsT0FBTyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxpQkFBaUIsQ0FBRTtRQUV6Qyw2QkFBNkI7UUFDN0IsVUFBVSxDQUFDLGVBQWUsQ0FBQyxlQUFlLEVBQUUsY0FBYyxFQUFFLDJCQUEyQixDQUFDLENBQUM7UUFDekYsVUFBVSxDQUFDLGVBQWUsQ0FBQywwQkFBMEIsRUFBRSxjQUFjLEVBQUUsaUJBQWlCLENBQUMsQ0FBQztRQUUxRixLQUFLO1FBQ0wsSUFBSSxpQkFBaUIsR0FBa0I7WUFDL0IsT0FBTztZQUNQLE9BQU87WUFDUCxvQkFBb0I7WUFDcEIsaUJBQWlCLEVBQUUsaUJBQWlCLEVBQUUsaUJBQWlCLEVBQUUsaUJBQWlCO1lBQzFFLGlCQUFpQixFQUFFLGlCQUFpQixFQUFFLGlCQUFpQixFQUFFLGlCQUFpQjtZQUMxRSxpQkFBaUIsRUFBRSxrQkFBa0IsRUFBRSxrQkFBa0IsRUFBRSxrQkFBa0I7WUFDN0Usa0JBQWtCLEVBQUUsa0JBQWtCLEVBQUUsa0JBQWtCLEVBQUUsa0JBQWtCO1NBQ3JGLENBQUM7UUFDRixLQUFLLElBQUksT0FBTyxJQUFJLGlCQUFpQixFQUFFO1lBQ25DLFVBQVUsQ0FBQyxlQUFlLENBQUMsT0FBTyxFQUFFLE9BQU8sRUFBRSxDQUFDLENBQUMsQ0FBQztTQUNuRDtJQUNMLENBQUMsQ0FBRSxDQUFFLENBQUM7SUFFTixFQUFFO0lBQ0YsOERBQThEO0lBQzlELEVBQUU7SUFDRixjQUFjO0lBQ2QsT0FBTyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxpQkFBaUIsQ0FBRTtRQUV6QyxDQUFDLENBQUMsUUFBUSxDQUFDLElBQUksRUFBRTtZQUNiLFVBQVUsQ0FBQyxlQUFlLENBQUMsT0FBTyxFQUFFLE9BQU8sRUFBRSxDQUFDLENBQUMsQ0FBQztRQUNwRCxDQUFDLENBQUMsQ0FBQztRQUNILENBQUMsQ0FBQyxRQUFRLENBQUMsSUFBSSxFQUFFO1lBQ2IsVUFBVSxDQUFDLGVBQWUsQ0FBQyxPQUFPLEVBQUUsT0FBTyxFQUFFLENBQUMsQ0FBQyxDQUFDO1FBQ3BELENBQUMsQ0FBQyxDQUFDO1FBQ0gsQ0FBQyxDQUFDLFFBQVEsQ0FBQyxJQUFJLEVBQUU7WUFDYixVQUFVLENBQUMsZUFBZSxDQUFDLE9BQU8sRUFBRSxPQUFPLEVBQUUsQ0FBQyxDQUFDLENBQUM7UUFDcEQsQ0FBQyxDQUFDLENBQUM7UUFDSCxDQUFDLENBQUMsUUFBUSxDQUFDLElBQUksRUFBRTtZQUNiLFVBQVUsQ0FBQyxlQUFlLENBQUMsT0FBTyxFQUFFLE9BQU8sRUFBRSxDQUFDLENBQUMsQ0FBQztRQUNwRCxDQUFDLENBQUMsQ0FBQztRQUNILENBQUMsQ0FBQyxRQUFRLENBQUMsSUFBSSxFQUFFO1lBQ2IsVUFBVSxDQUFDLGVBQWUsQ0FBQyxlQUFlLEVBQUUsT0FBTyxFQUFFLENBQUMsQ0FBQyxDQUFDO1FBQzVELENBQUMsQ0FBQyxDQUFDO1FBQ0gsQ0FBQyxDQUFDLFFBQVEsQ0FBQyxJQUFJLEVBQUU7WUFDYixVQUFVLENBQUMsZUFBZSxDQUFDLGVBQWUsRUFBRSxPQUFPLEVBQUUsQ0FBQyxDQUFDLENBQUM7UUFDNUQsQ0FBQyxDQUFDLENBQUM7UUFDSCxDQUFDLENBQUMsUUFBUSxDQUFDLEdBQUcsRUFBRTtZQUNaLFVBQVUsQ0FBQyxlQUFlLENBQUMsZUFBZSxFQUFFLE9BQU8sRUFBRSxDQUFDLENBQUMsQ0FBQztRQUM1RCxDQUFDLENBQUMsQ0FBQztRQUNILENBQUMsQ0FBQyxRQUFRLENBQUMsSUFBSSxFQUFFO1lBQ2IsVUFBVSxDQUFDLGVBQWUsQ0FBQyxlQUFlLEVBQUUsT0FBTyxFQUFFLENBQUMsQ0FBQyxDQUFDO1FBQzVELENBQUMsQ0FBQyxDQUFDO0lBQ1AsQ0FBQyxDQUFDLENBQUMsQ0FBQztJQUVKLFdBQVc7SUFDWCxPQUFPLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGlCQUFpQixDQUFFO1FBRXpDLDBFQUEwRTtRQUMxRSxJQUFJLFVBQVUsR0FBRyxtQkFBbUIsQ0FBQztRQUVyQyw4REFBOEQ7UUFDOUQsSUFBSSxVQUFVLEdBQUcsbUJBQW1CLENBQUM7UUFFckMsQ0FBQyxDQUFDLFFBQVEsQ0FBQyxHQUFHLEVBQUU7WUFDWixDQUFDLENBQUMsYUFBYSxDQUFDLGlCQUFpQixFQUFFLFVBQVUsQ0FBQyxDQUFDO1FBQ25ELENBQUMsQ0FBQyxDQUFDO1FBRUgsQ0FBQyxDQUFDLFFBQVEsQ0FBQyxNQUFNLEVBQUU7WUFDZixDQUFDLENBQUMsYUFBYSxDQUFDLGlCQUFpQixFQUFFLFVBQVUsQ0FBQyxDQUFDO1FBQ25ELENBQUMsQ0FBQyxDQUFDO1FBQ0gsQ0FBQyxDQUFDLFFBQVEsQ0FBQyxNQUFNLEVBQUU7WUFDZixDQUFDLENBQUMsYUFBYSxDQUFDLGlCQUFpQixFQUFFLFVBQVUsQ0FBQyxDQUFDO1FBQ25ELENBQUMsQ0FBQyxDQUFDO1FBQ0gsQ0FBQyxDQUFDLFFBQVEsQ0FBQyxHQUFHLEVBQUU7WUFDWixDQUFDLENBQUMsYUFBYSxDQUFDLGlCQUFpQixFQUFFLFVBQVUsQ0FBQyxDQUFDO1FBQ25ELENBQUMsQ0FBQyxDQUFDO1FBQ0gsQ0FBQyxDQUFDLFFBQVEsQ0FBQyxLQUFLLEVBQUU7WUFDZCxDQUFDLENBQUMsYUFBYSxDQUFDLGlCQUFpQixFQUFFLFVBQVUsQ0FBQyxDQUFDO1FBQ25ELENBQUMsQ0FBQyxDQUFDO1FBQ0gsQ0FBQyxDQUFDLFFBQVEsQ0FBQyxLQUFLLEVBQUU7WUFDZCxDQUFDLENBQUMsYUFBYSxDQUFDLGlCQUFpQixFQUFFLFVBQVUsQ0FBQyxDQUFDO1FBQ25ELENBQUMsQ0FBQyxDQUFDO1FBRUgsK0JBQStCO1FBQy9CLHNGQUFzRjtRQUN0RixLQUFLO0lBQ1QsQ0FBQyxDQUFDLENBQUMsQ0FBQztJQUVKLCtCQUErQjtJQUMvQixJQUFJLEtBQUssR0FBRyxJQUFJLG9CQUFvQixFQUFFLENBQUM7SUFDdkMsS0FBSyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxjQUFjLENBQUUsU0FBUyxFQUFFLG1CQUFtQixDQUFFLENBQUUsQ0FBQztJQUMzRSxLQUFLLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLFVBQVUsQ0FBRSxHQUFHLENBQUUsQ0FBRSxDQUFDO0lBQzVDLEtBQUssQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksY0FBYyxDQUFFLFNBQVMsRUFBRSwyQkFBMkIsQ0FBRSxDQUFFLENBQUM7SUFFbkYsc0JBQXNCO0lBQ3RCLElBQUksU0FBUyxHQUFHLElBQUksb0JBQW9CLEVBQUUsQ0FBQztJQUMzQyxTQUFTLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLFVBQVUsQ0FBRSxHQUFHLENBQUUsQ0FBRSxDQUFDO0lBRWhELGtEQUFrRDtJQUNsRCxJQUFJLEdBQUcsR0FBRyxJQUFJLGtCQUFrQixFQUFFLENBQUM7SUFDbkMsR0FBRyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsS0FBSyxDQUFFLENBQUM7SUFDMUIsR0FBRyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsU0FBUyxDQUFFLENBQUM7SUFDOUIsT0FBTyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsR0FBRyxDQUFFLENBQUM7SUFFNUIsMEJBQTBCO0lBQzFCLE9BQU8sQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksaUJBQWlCLENBQUU7UUFFekMsSUFBSyxnQkFBZ0IsRUFBRSxFQUN2QjtZQUNJLGVBQWUsQ0FBRSxzQkFBc0IsQ0FBRSxDQUFDO1lBQzFDLFNBQVMsQ0FBQyxXQUFXLENBQUUsYUFBYSxDQUFFLENBQUM7U0FDMUM7SUFDTCxDQUFDLENBQUMsQ0FBQyxDQUFDO0lBRUosMkRBQTJEO0lBQzNELGVBQWUsQ0FBRSxPQUFPLENBQUUsQ0FBQztBQUMvQixDQUFDLENBQUEifQ==