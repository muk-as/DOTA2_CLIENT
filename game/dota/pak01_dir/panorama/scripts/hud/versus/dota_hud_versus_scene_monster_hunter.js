"use strict";
/// <reference path="../../dota.d.ts" />
/// <reference path="../../util.ts" />
/// <reference path="../../dota_sequence_actions.ts" />
/// <reference path="dota_hud_versus_scene_shared.ts" />
// Called from C++ when the scene starts
let previouslySelectedInvestigation = -1;
var PlayScene = function () {
    const mainPanel = $.GetContextPanel();
    const scenePanel = $('#VersusScene');
    const scenePanelBG = $('#VersusSceneBackground');
    const investigationsContainer = $('#MonsterHunterInvestigationsContainer');
    const headerContainer = $('#HeaderContainer');
    const countdownContainer = $('#CountdownContainer');
    $.RegisterForUnhandledEvent('DOTAMonsterHunterInvestigationSelected', (nSelectedHero) => {
        if (nSelectedHero == previouslySelectedInvestigation) {
            return;
        }
        previouslySelectedInvestigation = nSelectedHero;
        Hero(nSelectedHero + 1);
    });
    const countdown = $('#Countdown');
    const debug = false;
    // Initial Setup
    mainPanel.RemoveClass('RevealTeamDetails');
    mainPanel.RemoveClass('RevealFeaturedHeroDetails');
    headerContainer.RemoveClass('Reveal');
    investigationsContainer.RemoveClass('Reveal');
    countdownContainer.RemoveClass('Reveal');
    mainPanel.hittestchildren = true;
    if (debug) {
        investigationsContainer.AddClass('GenerateInvestigations');
    }
    // Wait for the fade-in, then reveal the scene
    const mainSeq = new RunSequentialActions();
    mainSeq.actions.push(new PlaySoundEffectAction('versus_screen.whoosh'));
    mainSeq.actions.push(new WaitForScenesToLoadAction(scenePanel));
    mainSeq.actions.push(new WaitForScenesToLoadAction(scenePanelBG));
    mainSeq.actions.push(new RunFunctionAction(function () {
        scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(0), 'SetActivity', 'ACT_DOTA_LOADOUT');
        scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(0), 'SetPlaybackRateOnAllLayers', 0.3);
        for (let i = 1; i < 5; ++i) {
            scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'SetActivity', 'ACT_DOTA_LOADOUT');
            scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i), 'SetPlaybackRateOnAllLayers', 0.3);
        }
    }));
    mainSeq.actions.push(new WaitAction(0.5));
    mainSeq.actions.push(new AddClassAction(mainPanel, 'RevealScene'));
    mainSeq.actions.push(new PlaySoundEffectAction('monster_hunter.quest_intro'));
    mainSeq.actions.push(new AddClassAction(headerContainer, 'Reveal'));
    mainSeq.actions.push(new AddClassAction(investigationsContainer, 'Reveal'));
    mainSeq.actions.push(new AddClassAction(countdownContainer, 'Reveal'));
    // Script the entities
    const entitySeq = new RunSequentialActions();
    entitySeq.actions.push(new FireEntityInputAction(scenePanel, 'debut_camera', 'SetAnimation', 'versus_camera_radiant_anim'));
    entitySeq.actions.push(new FireEntityInputAction(scenePanelBG, 'debut_camera', 'SetAnimation', 'versus_camera_radiant_anim'));
    entitySeq.actions.push(new FireEntityInputAction(scenePanel, 'gore_magala', 'SetAnimation', 'versus_screen_animation'));
    //entitySeq.actions.push(new FireEntityInputAction(scenePanel, 'rathalos', 'SetAnimation', 'versus_screen_animation'));
    scenePanel.FireEntityInput('light_highlight_hero_1_b', 'Intensity', highlightDefault);
    scenePanel.FireEntityInput('light_highlight_hero_2_b', 'Intensity', highlightDefault);
    scenePanel.FireEntityInput('light_highlight_hero_3_b', 'Intensity', highlightDefault);
    //entitySeq.actions.push(new WaitAction(2));
    //entitySeq.actions.push(new FireEntityInputAction(scenePanel, 'light_highlight_hero_1', 'Intensity', '4'));
    //entitySeq.actions.push(new PlaySoundEffectAction('ui.chat_open'));
    //entitySeq.actions.push(new WaitAction(0.4));
    //entitySeq.actions.push(new FireEntityInputAction(scenePanel, 'light_highlight_hero_2', 'Intensity', '4'));
    //entitySeq.actions.push(new PlaySoundEffectAction('ui.chat_open'));
    //entitySeq.actions.push(new WaitAction(0.4));
    //entitySeq.actions.push(new FireEntityInputAction(scenePanel, 'light_highlight_hero_3', 'Intensity', '4'));
    //entitySeq.actions.push(new PlaySoundEffectAction('ui.chat_open'));
    entitySeq.actions.push(new WaitAction(11.0));
    // Run both the UI and Entity sequence in parallel
    const par = new RunParallelActions();
    // par.actions.push( uiSeq );
    par.actions.push(entitySeq);
    par.actions.push(new AnimateDialogVariableIntAction(mainPanel, 'seconds', 11, 0, 11));
    mainSeq.actions.push(par);
    if (!debug) {
        mainSeq.actions.push(new PlaySoundEffectAction('versus_screen.whoosh'));
        mainSeq.actions.push(new RemoveClassAction(mainPanel, 'RevealScene'));
    }
    // Now that the sequence is created, actually run the thing
    RunSingleAction(mainSeq);
};
var lightIntensity = '0.1';
var lightIntensitySelected = '8';
var highlightDefault = '0.1';
var highlightSelected = '1';
var heroAnimSpeed = '0.4';
var heroAnimSpeedHighlight = '0.9';
function HeroReset() {
    const scenePanel = $('#VersusScene');
    $.Msg("HeroUnfocus");
    scenePanel.FireEntityInput('light_highlight_hero_1', 'Intensity', lightIntensity);
    scenePanel.FireEntityInput('light_highlight_hero_2', 'Intensity', lightIntensity);
    scenePanel.FireEntityInput('light_highlight_hero_3', 'Intensity', lightIntensity);
    scenePanel.FireEntityInput('fx_highlight_1', 'StopPlayEndCap', '');
    scenePanel.FireEntityInput('fx_highlight_2', 'StopPlayEndCap', '');
    scenePanel.FireEntityInput('fx_highlight_3', 'StopPlayEndCap', '');
    scenePanel.FireEntityInput('light_highlight_hero_1_b', 'Intensity', highlightDefault);
    scenePanel.FireEntityInput('light_highlight_hero_2_b', 'Intensity', highlightDefault);
    scenePanel.FireEntityInput('light_highlight_hero_3_b', 'Intensity', highlightDefault);
}
function Hero(heroNumber) {
    const mainPanel = $.GetContextPanel();
    const scenePanel = $('#VersusScene');
    scenePanel.FireEntityInput('light_highlight_hero_1', 'Intensity', (heroNumber == 1) ? lightIntensitySelected : lightIntensity);
    scenePanel.FireEntityInput('light_highlight_hero_2', 'Intensity', (heroNumber == 2) ? lightIntensitySelected : lightIntensity);
    scenePanel.FireEntityInput('light_highlight_hero_3', 'Intensity', (heroNumber == 3) ? lightIntensitySelected : lightIntensity);
    scenePanel.FireEntityInput('light_highlight_hero_1_b', 'Intensity', (heroNumber == 1) ? highlightSelected : highlightDefault);
    scenePanel.FireEntityInput('light_highlight_hero_2_b', 'Intensity', (heroNumber == 2) ? highlightSelected : highlightDefault);
    scenePanel.FireEntityInput('light_highlight_hero_3_b', 'Intensity', (heroNumber == 3) ? highlightSelected : highlightDefault);
    scenePanel.FireEntityInput('fx_highlight_1', (heroNumber == 1) ? 'start' : 'StopPlayEndCap', '');
    scenePanel.FireEntityInput('fx_highlight_2', (heroNumber == 2) ? 'start' : 'StopPlayEndCap', '');
    scenePanel.FireEntityInput('fx_highlight_3', (heroNumber == 3) ? 'start' : 'StopPlayEndCap', '');
    for (let i = 1; i <= 3; i++) {
        if (i === heroNumber) {
            scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i - 1), 'SetPlaybackRateOnAllLayers', heroAnimSpeedHighlight);
            ;
            scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i - 1), 'StartGestureOverride', 'ACT_DOTA_ATTACK');
            //	$.Msg("Hero Numer is " + heroNumber)
        }
        else {
            //scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(1), 'SetActivity', 'ACT_DOTA_LOADOUT');
            scenePanel.FireEntityInput(mainPanel.GetHeroEntityNameByHeroSlot(i - 1), 'SetPlaybackRateOnAllLayers', heroAnimSpeed);
        }
    }
}
//scenePanel.FireEntityInput('versus_camera', 'SetDOFNearBlurry', 100);
//scenePanel.FireEntityInput('versus_camera', 'SetDOFNearCrisp', 700);
//scenePanel.FireEntityInput('versus_camera', 'SetDOFFarCrisp', 1000);
//scenePanel.FireEntityInput('versus_camera', 'SetDOFFarBlurry', 2400);
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZG90YV9odWRfdmVyc3VzX3NjZW5lX21vbnN0ZXJfaHVudGVyLmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsiLi4vLi4vLi4vLi4vLi4vLi4vY29udGVudC9kb3RhL3Bhbm9yYW1hL3NjcmlwdHMvaHVkL3ZlcnN1cy9kb3RhX2h1ZF92ZXJzdXNfc2NlbmVfbW9uc3Rlcl9odW50ZXIudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IjtBQUFBLHdDQUF3QztBQUN4QyxzQ0FBc0M7QUFDdEMsdURBQXVEO0FBQ3ZELHdEQUF3RDtBQUV4RCx3Q0FBd0M7QUFFeEMsSUFBSSwrQkFBK0IsR0FBRyxDQUFDLENBQUMsQ0FBQztBQUV6QyxJQUFJLFNBQVMsR0FBRztJQUVmLE1BQU0sU0FBUyxHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQTBCLENBQUM7SUFDOUQsTUFBTSxVQUFVLEdBQUcsQ0FBQyxDQUFDLGNBQWMsQ0FBcUIsQ0FBQztJQUN6RCxNQUFNLFlBQVksR0FBRyxDQUFDLENBQUMsd0JBQXdCLENBQXFCLENBQUM7SUFDckUsTUFBTSx1QkFBdUIsR0FBRyxDQUFDLENBQUUsdUNBQXVDLENBQWEsQ0FBQztJQUN4RixNQUFNLGVBQWUsR0FBRyxDQUFDLENBQUUsa0JBQWtCLENBQWEsQ0FBQztJQUMzRCxNQUFNLGtCQUFrQixHQUFHLENBQUMsQ0FBRSxxQkFBcUIsQ0FBYSxDQUFDO0lBQ2pFLENBQUMsQ0FBQyx5QkFBeUIsQ0FBRSx3Q0FBd0MsRUFBRSxDQUFFLGFBQXFCLEVBQUcsRUFBRTtRQUVsRyxJQUFLLGFBQWEsSUFBSSwrQkFBK0IsRUFDckQ7WUFDQyxPQUFPO1NBQ1A7UUFFRCwrQkFBK0IsR0FBRyxhQUFhLENBQUM7UUFDaEQsSUFBSSxDQUFDLGFBQWEsR0FBRyxDQUFDLENBQUMsQ0FBQztJQUN6QixDQUFDLENBQUUsQ0FBQztJQUVKLE1BQU0sU0FBUyxHQUFHLENBQUMsQ0FBRSxZQUFZLENBQWEsQ0FBQztJQUUvQyxNQUFNLEtBQUssR0FBRyxLQUFLLENB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