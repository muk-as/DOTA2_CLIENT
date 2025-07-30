"use strict";
/// <reference path="../../dota.d.ts" />
/// <reference path="../../util.ts" />
/// <reference path="../../dota_sequence_actions.ts" />
/// <reference path="dota_hud_versus_scene_shared.ts" />
var PlayScene = function () {
    var mainPanel = $.GetContextPanel();
    var scenePanel = $('#VersusScene');
    var bRadiantTeam = $('#TeamInfo').BHasClass('RadiantTeam');
    mainPanel.RemoveClass('RevealTeamDetails');
    mainPanel.RemoveClass('RevealFeaturedHeroDetails');
    var mainSeq = new RunSequentialActions();
    if (bRadiantTeam) {
        mainSeq.actions.push(new PlaySoundEffectAction('versus_screen.whoosh'));
    }
    mainSeq.actions.push(new WaitForScenesToLoadAction(scenePanel));
    mainSeq.actions.push(new RunFunctionAction(function () {
        for (var i = 1; i < 5; ++i) {
            scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'StartGestureOverride', 'ACT_DOTA_LOADOUT');
            scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'SetPlaybackRateOnAllLayers', 0.6);
        }
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
    mainSeq.actions.push(new RunFunctionAction(function () {
        scenePanel.FireEntityInput('versus_layout', 'SetAnimation', 'bp22_meteor_versus_layout');
        scenePanel.FireEntityInput('meteor_model_placeholder', 'SetAnimation', 'vs_meteors_anim');
        let particle_systems2 = [
            'stars',
            'star1',
            'meteor_simple_1', 'meteor_simple_2', 'meteor_simple_3', 'meteor_simple_4',
            'meteor_simple_5', 'meteor_simple_6', 'meteor_simple_7', 'meteor_simple_8',
            'meteor_simple_9', 'meteor_simple_10', 'meteor_simple_11', 'meteor_simple_12',
            'meteor_simple_13', 'meteor_simple_14', 'meteor_simple_15', 'meteor_simple_16'
        ];
        for (let fx_name of particle_systems2) {
            scenePanel.FireEntityInput(fx_name, 'start', 0);
        }
    }));
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
    mainSeq.actions.push(new RunFunctionAction(function () {
        let charge_sfx = 'versus_sfx_meteor';
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
    }));
    var uiSeq = new RunSequentialActions();
    uiSeq.actions.push(new AddClassAction(mainPanel, 'RevealTeamDetails'));
    uiSeq.actions.push(new WaitAction(2.0));
    uiSeq.actions.push(new AddClassAction(mainPanel, 'RevealFeaturedHeroDetails'));
    var entitySeq = new RunSequentialActions();
    entitySeq.actions.push(new WaitAction(7.0));
    var par = new RunParallelActions();
    par.actions.push(uiSeq);
    par.actions.push(entitySeq);
    mainSeq.actions.push(par);
    mainSeq.actions.push(new RunFunctionAction(function () {
        if (IsFadeOutEnabled()) {
            PlaySoundEffect('versus_screen.whoosh');
            mainPanel.RemoveClass('RevealScene');
        }
    }));
    RunSingleAction(mainSeq);
};
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZG90YV9odWRfdmVyc3VzX3NjZW5lX2JwMjJfbWV0ZW9yLmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsiLi4vLi4vLi4vLi4vLi4vLi4vY29udGVudC9kb3RhL3Bhbm9yYW1hL3NjcmlwdHMvaHVkL3ZlcnN1cy9kb3RhX2h1ZF92ZXJzdXNfc2NlbmVfYnAyMl9tZXRlb3IudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IjtBQUFBLHdDQUF3QztBQUN4QyxzQ0FBc0M7QUFDdEMsdURBQXVEO0FBQ3ZELHdEQUF3RDtBQUd4RCxJQUFJLFNBQVMsR0FBRztJQUVaLElBQUksU0FBUyxHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQXdCLENBQUM7SUFDMUQsSUFBSSxVQUFVLEdBQUcsQ0FBQyxDQUFvQixjQUFjLENBQUUsQ0FBQztJQUN2RCxJQUFJLFlBQVksR0FBRyxDQUFDLENBQUUsV0FBVyxDQUFHLENBQUMsU0FBUyxDQUFFLGFBQWEsQ0FBRSxDQUFDO0lBR2hFLFNBQVMsQ0FBQyxXQUFXLENBQUUsbUJBQW1CLENBQUUsQ0FBQztJQUM3QyxTQUFTLENBQUMsV0FBVyxDQUFFLDJCQUEyQixDQUFFLENBQUM7SUFHckQsSUFBSSxPQUFPLEdBQUcsSUFBSSxvQkFBb0IsRUFBRSxDQUFDO0lBQ3pDLElBQUssWUFBWSxFQUNqQjtRQUNJLE9BQU8sQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFDLElBQUkscUJBQXFCLENBQUMsc0JBQXNCLENBQUMsQ0FBQyxDQUFDO0tBQzNFO0lBQ0QsT0FBTyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSx5QkFBeUIsQ0FBRSxVQUFVLENBQUUsQ0FBRSxDQUFDO0lBQ3BFLE9BQU8sQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksaUJBQWlCLENBQUU7UUFHekMsS0FBSyxJQUFJLENBQUMsR0FBRyxDQUFDLEVBQUUsQ0FBQyxHQUFHLENBQUMsRUFBRSxFQUFFLENBQUMsRUFBRTtZQUN4QixVQUFVLENBQUMsZUFBZSxDQUFDLFNB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