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
var mainPanel = $('#DarkCarnivalDashboard');
var RunPageAnimation = function () {
    var mainSeq = new RunSequentialActions();
    mainSeq.actions.push(new RunFunctionAction(function () {
        mainPanel.FireEntityInput('axe', 'SetActivity', 'ACT_DOTA_LOADOUT_FRONTPAGE');
        mainPanel.FireEntityInput('axe', 'SetPlaybackRateOnAllLayers', 0.6);
        mainPanel.FireEntityInput('oracle', 'SetActivity', 'ACT_DOTA_LOADOUT_FRONTPAGE');
        mainPanel.FireEntityInput('oracle', 'SetPlaybackRateOnAllLayers', 0.6);
        mainPanel.FireEntityInput('bristleback', 'SetActivity', 'ACT_DOTA_LOADOUT_FRONTPAGE');
        mainPanel.FireEntityInput('bristleback', 'SetPlaybackRateOnAllLayers', 0.6);
        //mainPanel.FireEntityInput('morphling', 'SetActivityModifier', 'ACT_DOTA_LOADOUT_FRONTPAGE');
        //mainPanel.FireEntityInput('morphling', 'SetPlaybackRateOnAllLayers', 0.6);
        mainPanel.FireEntityInput('debut_camera', 'SetAnimation', 'versus_camera_radiant_anim_endframe');
        mainPanel.FireEntityInput("light_highlight_hero_1", "Intensity", 0.0);
        mainPanel.FireEntityInput("light_highlight_hero_2", "Intensity", 0.0);
        mainPanel.FireEntityInput("light_highlight_hero_3", "Intensity", 0.0);
    }));
    //$.Msg( "WORKED" );
    RunSingleAction(mainSeq);
};
function HeroLightReset(heroName) {
    if (heroName === "axe") {
        mainPanel.FireEntityInput("light_highlight_hero_1", "Intensity", 0.0);
        mainPanel.FireEntityInput("fx_highlight_1", "StopPlayEndCap");
    }
    if (heroName === "oracle") {
        mainPanel.FireEntityInput("light_highlight_hero_2", "Intensity", 0.0);
        mainPanel.FireEntityInput("fx_highlight_2", "StopPlayEndCap");
    }
    if (heroName === "bristleback") {
        mainPanel.FireEntityInput("light_highlight_hero_3", "Intensity", 0.0);
        mainPanel.FireEntityInput("fx_highlight_3", "StopPlayEndCap");
    }
}
const heroGestureCooldown = 4000; // seconds
const allHeroesGestureCooldown = 1000; // seconds
const gestureDelay = 0.3; // 1 second, Panorama uses seconds here, 
const lastHeroGestureTime = {};
let lastAnyHeroGestureTime = 0;
// Stores pending delayed gestures by hero
const pendingHeroGestureSchedule = {};
function CanPlayHeroGesture(heroName) {
    const now = Date.now();
    const lastThisHeroTime = lastHeroGestureTime[heroName] ?? 0;
    // 1. This specific hero must wait 9 seconds
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
        // Clear the pending handle because this scheduled action is now running
        pendingHeroGestureSchedule[heroName] = undefined;
        // Check cooldowns again right before playing
        // This prevents another hero from sneaking through during the 1-second delay
        if (!CanPlayHeroGesture(heroName)) {
            return;
        }
        const now = Date.now();
        // Cooldowns start when the gesture actually plays
        lastHeroGestureTime[heroName] = now;
        lastAnyHeroGestureTime = now;
        mainPanel.FireEntityInput(heroName, "StartGestureOverride", "ACT_DOTA_SHAKE");
    });
}
function CancelPendingHeroGesture(heroName) {
    const scheduleHandle = pendingHeroGestureSchedule[heroName];
    if (scheduleHandle !== undefined) {
        $.CancelScheduled(scheduleHandle);
        pendingHeroGestureSchedule[heroName] = undefined;
        mainPanel.FireEntityInput(heroName, "RemoveGesture", "ACT_DOTA_SHAKE");
    }
}
function OnHeroSceneFocus(heroName) {
    if (heroName === "axe") {
        mainPanel.FireEntityInput("light_highlight_hero_1", "Intensity", 3.0);
        mainPanel.FireEntityInput("fx_highlight_1", "Start");
    }
    if (heroName === "oracle") {
        mainPanel.FireEntityInput("light_highlight_hero_2", "Intensity", 6.0);
        mainPanel.FireEntityInput("fx_highlight_2", "Start");
    }
    if (heroName === "bristleback") {
        mainPanel.FireEntityInput("light_highlight_hero_3", "Intensity", 3.0);
        mainPanel.FireEntityInput("fx_highlight_3", "Start");
    }
}
function OnHeroSceneClicked(heroName) {
    PlayHeroGesture(heroName);
}
function OnHeroSceneMouseOut(heroName) {
    CancelPendingHeroGesture(heroName);
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZGFzaGJvYXJkX2RhcmtfY2Fybml2YWwuanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyIuLi8uLi8uLi8uLi9jb250ZW50L2RvdGEvcGFub3JhbWEvc2NyaXB0cy9kYXNoYm9hcmRfZGFya19jYXJuaXZhbC50cyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiO0FBQUEsa0NBQWtDO0FBQ2xDLGdDQUFnQztBQUNoQyxpREFBaUQ7QUFDakQsbUVBQW1FO0FBRW5FLGdDQUFnQztBQUNoQyxTQUFTO0FBQ1QsVUFBVTtBQUNWLGNBQWM7QUFDZCxzQkFBc0I7QUFDdEIsdUJBQXVCO0FBQ3ZCLGdCQUFnQjtBQUNoQix3QkFBd0I7QUFDeEIsNkJBQTZCO0FBQzdCLGVBQWU7QUFFZixvQkFBb0I7QUFHcEIsSUFBSSxTQUFTLEdBQUcsQ0FBQyxDQUFDLHdCQUF3QixDQUFxQixDQUFDO0FBQ2hFLElBQUksZ0JBQWdCLEdBQUc7SUFHbkIsSUFBSSxPQUFPLEdBQUcsSUFBSSxvQkFBb0IsRUFBRSxDQUFDO0lBRTVDLE9BQU8sQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksaUJBQWlCLENBQUU7UUFHdEMsU0FBUyxDQUFDLGVBQWUsQ0FBQyxLQUFLLEVBQUUsYUFBYSxFQUFFLDRCQUE0QixDQUFDLENBQUM7UUFDOUUsU0FBUyxDQUFDLGVBQWUsQ0FBQyxLQUFLLEVBQUUsNEJBQTRCLEVBQUUsR0FBRyxDQUFDLENBQUM7UUFFcEUsU0FBUyxDQUFDLGVBQWUsQ0FBQyxRQUFRLEVBQUUsYUFBYSxFQUFFLDRCQUE0QixDQUFDLENBQUM7UUFDakYsU0FBUyxDQUFDLGVBQWUsQ0FBQyxRQUFRLEVBQUUsNEJBQTRCLEVBQUUsR0FBRyxDQUFDLENBQUM7UUFFdkUsU0FBUyxDQUFDLGVBQWUsQ0FBQyxhQUFhLEVBQUUsYUFBYSxFQUFFLDRCQUE0QixDQUFDLENBQUM7UUFDdEYsU0FBUyxDQUFDLGVBQWUsQ0FBQyxhQUFhLEVBQUUsNEJBQTRCLEVBQUUsR0FBRyxDQUFDLENBQUM7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