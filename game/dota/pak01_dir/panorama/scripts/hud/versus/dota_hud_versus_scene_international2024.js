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
        for (var i = 0; i < 5; ++i) {
            scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'Disable', '');
            scenePanel.FireEntityInput(mainPanel.GetHeroEffigyNameByHeroSlot(i), 'Enable', '');
        }
        // activate the non-featured heroes immediately
        scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(0), 'StartGestureOverride', 'ACT_DOTA_ATTACK');
        scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(0), 'SetPlaybackRateOnAllLayers', 0.5);
        for (var i = 1; i < 5; ++i) {
            scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'StartGestureOverride', 'ACT_DOTA_LOADOUT');
            scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'SetPlaybackRateOnAllLayers', 0.4);
        }
        // Turn off lights
        scenePanel.FireEntityInput('light_hero_0', 'TurnOff', 0);
        scenePanel.FireEntityInput('light_hero_1', 'TurnOff', 0);
        scenePanel.FireEntityInput('light_hero_2', 'TurnOff', 0);
        scenePanel.FireEntityInput('light_hero_3', 'TurnOff', 0);
        scenePanel.FireEntityInput('light_hero_4', 'TurnOff', 0);
        scenePanel.FireEntityInput('rimlight_hero_0', 'TurnOff', 0);
        scenePanel.FireEntityInput('rimlight_hero_1', 'TurnOff', 0);
        scenePanel.FireEntityInput('rimlight_hero_2', 'TurnOff', 0);
        scenePanel.FireEntityInput('rimlight_hero_3', 'TurnOff', 0);
        scenePanel.FireEntityInput('rimlight_hero_4', 'TurnOff', 0);
        scenePanel.FireEntityInput('spotlight_hero_0', 'TurnOff', 0);
        scenePanel.FireEntityInput('spotlight_hero_1', 'TurnOff', 0);
        scenePanel.FireEntityInput('spotlight_hero_2', 'TurnOff', 0);
        scenePanel.FireEntityInput('spotlight_hero_3', 'TurnOff', 0);
        scenePanel.FireEntityInput('spotlight_hero_4', 'TurnOff', 0);
        scenePanel.FireEntityInput('fx_hero_0', 'Stop', 0);
        scenePanel.FireEntityInput('fx_hero_1', 'Stop', 0);
        scenePanel.FireEntityInput('fx_hero_2', 'Stop', 0);
        scenePanel.FireEntityInput('fx_hero_3', 'Stop', 0);
        scenePanel.FireEntityInput('fx_hero_4', 'Stop', 0);
        //Reset Camera
        scenePanel.FireEntityInput('versus_camera', 'EnableDOF', '');
        scenePanel.FireEntityInput('versus_camera_shake', 'SetAnimation', 'versus_camera_shake_static');
        //scenePanel.FireEntityInput('versus_camera', 'DisableDOF', '');
        scenePanel.FireEntityInput('versus_camera', 'SetDOFNearBlurry', 10);
        scenePanel.FireEntityInput('versus_camera', 'SetDOFNearCrisp', 250);
        scenePanel.FireEntityInput('versus_camera', 'SetDOFFarCrisp', 500);
        scenePanel.FireEntityInput('versus_camera', 'SetDOFFarBlurry', 4000);
    }));
    // Wait for the fade-in, then reveal the scene
    /* if ( bRadiantTeam )
        {
            mainSeq.actions.push( new PlaySoundEffectAction( 'versus_screen.whoosh' ) );
        }

    mainSeq.actions.push(new PlaySoundEffectAction('versus_sfx_open'));
    if( bRadiantTeam )
    {
        mainSeq.actions.push(new PlaySoundEffectAction('versus_stinger_2022_radiant'));
    } else {
        mainSeq.actions.push(new PlaySoundEffectAction('versus_stinger_2022_dire'));
    } */
    mainSeq.actions.push(new WaitAction(0.5));
    mainSeq.actions.push(new AddClassAction(mainPanel, 'RevealScene'));
    mainSeq.actions.push(new PlaySoundEffectAction(bRadiantTeam ? 'versus_2024.radiant' : 'versus_2024.dire'));
    //
    // play sequences and FX that start immediately on load
    //
    mainSeq.actions.push(new RunFunctionAction(function () {
        // entities (animation start)
        if (bRadiantTeam) {
            scenePanel.FireEntityInput('versus_layout', 'SetAnimation', 'ACT_DOTA_DIE');
        }
        else {
            scenePanel.FireEntityInput('versus_layout', 'SetAnimation', 'ACT_DOTA_DEFEAT');
        }
        //TESTING ALL 4 CAMERA ANIMATIONS
        //scenePanel.FireEntityInput('versus_layout', 'SetAnimation', 'cp24_versus_layout_radiant_a');
        //scenePanel.FireEntityInput('versus_layout', 'SetAnimation', 'cp24_versus_layout_radiant_a');
        //scenePanel.FireEntityInput('versus_layout', 'SetAnimation', 'cp24_versus_layout_dire_a');
        //scenePanel.FireEntityInput('versus_layout', 'SetAnimation', 'cp24_versus_layout_dire_b');
    }));
    // Swap the effigy for the actual hero when the FX hits
    mainSeq.actions.push(new RunFunctionAction(function () {
        $.Schedule(2.8, function () {
            scenePanel.FireEntityInput('spotlight_hero_4', 'TurnOn', 0);
            scenePanel.FireEntityInput('rimlight_hero_4', 'TurnOn', 0);
            scenePanel.FireEntityInput('light_hero_4', 'TurnOn', 0);
            scenePanel.FireEntityInput('fx_hero_4', 'Start', '');
            //scenePanel.FireEntityInput('versus_camera_shake', 'SetAnimation', 'ACT_DOTA_DIE');
            PlayUISoundScript('versus_2024_sfx');
            $.Schedule(0.2, function () {
                scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(4), 'Enable', '');
                scenePanel.FireEntityInput(mainPanel.GetHeroEffigyNameByHeroSlot(4), 'Disable', '');
            });
        });
        $.Schedule(2.6, function () {
            scenePanel.FireEntityInput('spotlight_hero_3', 'TurnOn', 0);
            scenePanel.FireEntityInput('rimlight_hero_3', 'TurnOn', 0);
            scenePanel.FireEntityInput('light_hero_3', 'TurnOn', 0);
            scenePanel.FireEntityInput('fx_hero_3', 'Start', '');
            //scenePanel.FireEntityInput('versus_camera_shake', 'SetAnimation', 'ACT_DOTA_DIE');
            PlayUISoundScript('versus_2024_sfx');
            $.Schedule(0.2, function () {
                scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(3), 'Enable', '');
                scenePanel.FireEntityInput(mainPanel.GetHeroEffigyNameByHeroSlot(3), 'Disable', '');
            });
        });
        $.Schedule(2.4, function () {
            scenePanel.FireEntityInput('spotlight_hero_2', 'TurnOn', 0);
            scenePanel.FireEntityInput('rimlight_hero_2', 'TurnOn', 0);
            scenePanel.FireEntityInput('light_hero_2', 'TurnOn', 0);
            scenePanel.FireEntityInput('fx_hero_2', 'Start', '');
            //scenePanel.FireEntityInput('versus_camera_shake', 'SetAnimation', 'ACT_DOTA_DIE');
            PlayUISoundScript('versus_2024_sfx');
            $.Schedule(0.2, function () {
                scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(2), 'Enable', '');
                scenePanel.FireEntityInput(mainPanel.GetHeroEffigyNameByHeroSlot(2), 'Disable', '');
            });
        });
        $.Schedule(2.2, function () {
            scenePanel.FireEntityInput('spotlight_hero_1', 'TurnOn', 0);
            scenePanel.FireEntityInput('rimlight_hero_1', 'TurnOn', 0);
            scenePanel.FireEntityInput('light_hero_1', 'TurnOn', 0);
            scenePanel.FireEntityInput('fx_hero_1', 'Start', '');
            scenePanel.FireEntityInput('versus_camera_shake', 'SetAnimation', 'ACT_DOTA_DIE');
            PlayUISoundScript('versus_2024_sfx');
            $.Schedule(0.2, function () {
                scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(1), 'Enable', '');
                scenePanel.FireEntityInput(mainPanel.GetHeroEffigyNameByHeroSlot(1), 'Disable', '');
            });
        });
        $.Schedule(4.2, function () {
            //PlayUISoundScript('hero_ringmaster.box.destroy');
        });
        $.Schedule(4.8, function () {
            scenePanel.FireEntityInput('spotlight_hero_0', 'TurnOn', 0);
            scenePanel.FireEntityInput('rimlight_hero_0', 'TurnOn', 0);
            scenePanel.FireEntityInput('light_hero_0', 'TurnOn', 0);
            scenePanel.FireEntityInput('fx_hero_0', 'Start', '');
            scenePanel.FireEntityInput('versus_camera_shake', 'SetAnimation', 'versus_camera_shake_anim_large');
            PlayUISoundScript('ui_explosion');
            PlayUISoundScript('versus_2024_sfx');
            $.Schedule(0.2, function () {
                scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(0), 'Enable', '');
                scenePanel.FireEntityInput(mainPanel.GetHeroEffigyNameByHeroSlot(0), 'Disable', '');
            });
        });
    }));
    // The UI will appear in pieces
    mainSeq.actions.push(new AddClassAction(mainPanel, 'RevealTeamDetails'));
    mainSeq.actions.push(new WaitAction(5.0));
    mainSeq.actions.push(new AddClassAction(mainPanel, 'RevealFeaturedHeroDetails'));
    mainSeq.actions.push(new WaitAction(4.0));
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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZG90YV9odWRfdmVyc3VzX3NjZW5lX2ludGVybmF0aW9uYWwyMDI0LmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsiLi4vLi4vLi4vLi4vLi4vLi4vY29udGVudC9kb3RhL3Bhbm9yYW1hL3NjcmlwdHMvaHVkL3ZlcnN1cy9kb3RhX2h1ZF92ZXJzdXNfc2NlbmVfaW50ZXJuYXRpb25hbDIwMjQudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IjtBQUFBLHdDQUF3QztBQUN4QyxzQ0FBc0M7QUFDdEMsdURBQXVEO0FBQ3ZELHdEQUF3RDtBQUd4RCx3Q0FBd0M7QUFDeEMsSUFBSSxTQUFTLEdBQUc7SUFFWixJQUFJLFNBQVMsR0FBRyxDQUFDLENBQUMsZUFBZSxFQUF3QixDQUFDO0lBQzFELElBQUksVUFBVSxHQUFHLENBQUMsQ0FBb0IsY0FBYyxDQUFFLENBQUM7SUFDdkQsSUFBSSxZQUFZLEdBQUcsQ0FBQyxDQUFFLFdBQVcsQ0FBRyxDQUFDLFNBQVMsQ0FBRSxhQUFhLENBQUUsQ0FBQztJQUloRSxnQkFBZ0I7SUFDaEIsU0FBUyxDQUFDLFdBQVcsQ0FBRSxtQkFBbUIsQ0FBRSxDQUFDO0lBQzdDLFNBQVMsQ0FBQyxXQUFXLENBQUUsMkJBQTJCLENBQUUsQ0FBQztJQUVyRCw4Q0FBOEM7SUFDOUMsSUFBSSxPQUFPLEdBQUcsSUFBSSxvQkFBb0IsRUFBRSxDQUFDO0lBQ3pDLElBQUssWUFBWSxFQUNqQjtRQUNJLE9BQU8sQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFDLElBQUkscUJBQXFCLENBQUMsc0JBQXNCLENBQUMsQ0FBQyxDQUFDO0tBQzNFO0lBQ0QsT0FBTyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSx5QkFBeUIsQ0FBRSxVQUFVLENBQUUsQ0FBRSxDQUFDO0lBQ3BFLE9BQU8sQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksaUJBQWlCLENBQUU7UUFFekMsS0FBTSxJQUFJLENBQUMsR0FBRyxDQUFDLEVBQUUsQ0FBQyxHQUFHLENB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