"use strict";
/// <reference path="dota.d.ts" />
/// <reference path="util.ts" />
/// <reference path="dota_sequence_actions.ts" />
/// <reference path="hud/versus/dota_hud_versus_scene_shared.ts" />
//ANIMATION FireEntityInput LIST
// Enable
// Disable
// SetActivity
// SetActivityModifier
// StartGestureOverride
// RemoveGesture
// FadeAndDestroyGesture
// DisableAutoFadeAndAutoKill
// ForceLooping
//$.Msg( "loaded" );
var scenePanels = [$('#DarkCarnivalDashboard1'), $('#DarkCarnivalDashboard2')];
function FireSceneEntityInput(targetName, inputName, value) {
    for (const scenePanel of scenePanels) {
        if (!scenePanel)
            continue;
        scenePanel.FireEntityInput(targetName, inputName, value);
    }
}
var RunPageAnimation = function (panelId) {
    var mainPanel = $('#' + panelId);
    if (!mainPanel)
        return;
    var mainSeq = new RunSequentialActions();
    mainSeq.actions.push(new RunFunctionAction(function () {
        mainPanel.FireEntityInput('axe', 'SetActivity', 'ACT_DOTA_LOADOUT_FRONTPAGE');
        mainPanel.FireEntityInput('oracle', 'SetActivity', 'ACT_DOTA_LOADOUT_FRONTPAGE');
        mainPanel.FireEntityInput('bristleback', 'SetActivity', 'ACT_DOTA_LOADOUT_FRONTPAGE');
        mainPanel.FireEntityInput('axe', 'SetPlaybackRateOnAllLayers', 0.6);
        mainPanel.FireEntityInput('oracle', 'SetPlaybackRateOnAllLayers', 0.6);
        mainPanel.FireEntityInput('bristleback', 'SetPlaybackRateOnAllLayers', 0.6);
        mainPanel.FireEntityInput('debut_camera', 'SetAnimation', 'versus_camera_radiant_anim_endframe');
        mainPanel.FireEntityInput("light_highlight_hero_1", "Intensity", 0.0);
        mainPanel.FireEntityInput("light_highlight_hero_2", "Intensity", 0.0);
        mainPanel.FireEntityInput("light_highlight_hero_3", "Intensity", 0.0);
    }));
    RunSingleAction(mainSeq);
};
function HeroLightReset(heroName) {
    if (heroName === "axe") {
        FireSceneEntityInput("light_highlight_hero_1", "Intensity", 0.0);
        FireSceneEntityInput("fx_highlight_1", "StopPlayEndCap");
    }
    if (heroName === "oracle") {
        FireSceneEntityInput("light_highlight_hero_2", "Intensity", 0.0);
        FireSceneEntityInput("fx_highlight_2", "StopPlayEndCap");
    }
    if (heroName === "bristleback") {
        FireSceneEntityInput("light_highlight_hero_3", "Intensity", 0.0);
        FireSceneEntityInput("fx_highlight_3", "StopPlayEndCap");
    }
}
const heroGestureCooldown = 4000;
const allHeroesGestureCooldown = 1000;
const gestureDelay = 0.3;
const lastHeroGestureTime = {};
let lastAnyHeroGestureTime = 0;
// Stores pending delayed gestures by hero
const pendingHeroGestureSchedule = {};
function CanPlayHeroGesture(heroName) {
    const now = Date.now();
    const lastThisHeroTime = lastHeroGestureTime[heroName] ?? 0;
    if (now - lastThisHeroTime < heroGestureCooldown) {
        //$.Msg(heroName + " is still on individual cooldown.");
        return false;
    }
    // 2. Any hero must wait 1 second after another hero played
    if (now - lastAnyHeroGestureTime < allHeroesGestureCooldown) {
        //$.Msg("Global hero gesture cooldown active.");
        return false;
    }
    return true;
}
function PlayHeroGesture(heroName) {
    if (!CanPlayHeroGesture(heroName)) {
        return;
    }
    // Cancel any previous pending gesture for this hero
    CancelPendingHeroGesture(heroName);
    pendingHeroGestureSchedule[heroName] = $.Schedule(gestureDelay, () => {
        pendingHeroGestureSchedule[heroName] = undefined;
        if (!CanPlayHeroGesture(heroName)) {
            return;
        }
        const now = Date.now();
        lastHeroGestureTime[heroName] = now;
        lastAnyHeroGestureTime = now;
        FireSceneEntityInput(heroName, "StartGestureOverride", "ACT_DOTA_SHAKE");
    });
}
function CancelPendingHeroGesture(heroName) {
    const scheduleHandle = pendingHeroGestureSchedule[heroName];
    if (scheduleHandle !== undefined) {
        $.CancelScheduled(scheduleHandle);
        pendingHeroGestureSchedule[heroName] = undefined;
        FireSceneEntityInput(heroName, "RemoveGesture", "ACT_DOTA_SHAKE");
    }
}
function OnHeroSceneFocus(heroName) {
    if (heroName === "axe") {
        FireSceneEntityInput("light_highlight_hero_1", "Intensity", 3.0);
        FireSceneEntityInput("fx_highlight_1", "Start");
        PlayHeroGesture(heroName);
    }
    if (heroName === "oracle") {
        FireSceneEntityInput("light_highlight_hero_2", "Intensity", 3.0);
        FireSceneEntityInput("fx_highlight_2", "Start");
        PlayHeroGesture(heroName);
    }
    if (heroName === "bristleback") {
        FireSceneEntityInput("light_highlight_hero_3", "Intensity", 3.0);
        FireSceneEntityInput("fx_highlight_3", "Start");
        PlayHeroGesture(heroName);
    }
}
// Act 2 reuses act 1's entity names: axe = Tidehunter, oracle = Lich, bristleback = Pugna
const act1HeroStoreItems = { axe: 31367, oracle: 31357, bristleback: 36214 };
const act2HeroStoreItems = { axe: 31356, oracle: 36192, bristleback: 33977 };
function OnHeroSceneActivated(heroName) {
    const heroStoreItems = $.GetContextPanel().BHasClass("OverworldAct12") ? act2HeroStoreItems : act1HeroStoreItems;
    $.DispatchEvent("DOTAShowDarkCarnivalStoreItem", heroStoreItems[heroName]);
}
function OnHeroSceneMouseOut(heroName) {
    CancelPendingHeroGesture(heroName);
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZGFzaGJvYXJkX2RhcmtfY2Fybml2YWwuanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyIuLi8uLi8uLi8uLi9jb250ZW50L2RvdGEvcGFub3JhbWEvc2NyaXB0cy9kYXNoYm9hcmRfZGFya19jYXJuaXZhbC50cyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiO0FBQUEsa0NBQWtDO0FBQ2xDLGdDQUFnQztBQUNoQyxpREFBaUQ7QUFDakQsbUVBQW1FO0FBRW5FLGdDQUFnQztBQUNoQyxTQUFTO0FBQ1QsVUFBVTtBQUNWLGNBQWM7QUFDZCxzQkFBc0I7QUFDdEIsdUJBQXVCO0FBQ3ZCLGdCQUFnQjtBQUNoQix3QkFBd0I7QUFDeEIsNkJBQTZCO0FBQzdCLGVBQWU7QUFFZixvQkFBb0I7QUFHcEIsSUFBSSxXQUFXLEdBQUcsQ0FBRSxDQUFDLENBQUMseUJBQXlCLENBQUMsRUFBRSxDQUFDLENBQUMseUJBQXlCLENBQUMsQ0FBd0IsQ0FBQztBQUV2RyxTQUFTLG9CQUFvQixDQUFFLFVBQWtCLEVBQUUsU0FBaUIsRUFBRSxLQUF1QjtJQUV6RixLQUFNLE1BQU0sVUFBVSxJQUFJLFdBQVcsRUFDckM7UUFDSSxJQUFJLENBQUMsVUFBVTtZQUNYLFNBQVM7UUFDYixVQUFVLENBQUMsZUFBZSxDQUFFLFVBQVUsRUFBRSxTQUFTLEVBQUUsS0FBSyxDQUFFLENBQUM7S0FDOUQ7QUFDTCxDQUFDO0FBRUQsSUFBSSxnQkFBZ0IsR0FBRyxVQUFXLE9BQWU7SUFHN0MsSUFBSSxTQUFTLEdBQUcsQ0FBQyxDQUFDLEdBQUcsR0FBRyxPQUFPLENBQXFCLENBQUM7SUFDckQsSUFBSSxDQUFDLFNBQVM7UUFDVixPQUFPO0lBQ1gsSUFBSSxPQUFPLEdBQUcsSUFBSSxvQkFBb0IsRUFBRSxDQUFDO0lBRTVDLE9BQU8sQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksaUJBQWlCLENBQUU7UUFJdEMsU0FBUyxDQUFDLGVBQWUsQ0FBQyxLQUFLLEVBQUUsYUFBYSxFQUFFLDRCQUE0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