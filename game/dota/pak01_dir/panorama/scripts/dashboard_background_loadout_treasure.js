"use strict";
/// <reference path="dota.d.ts" />
/// <reference path="util.ts" />
/// <reference path="dota_sequence_actions.ts" />
/// <reference path="dota_hud_versus_scene_shared.ts" />
$('#TitleContainer').RemoveClass('LogoTrigger');
$('#FxScene').FireEntityInput('logo_fx', 'Stop', 0);
var LogoTrigger = function () {
    $('#FxScene').FireEntityInput('logo_fx', 'Start', 0);
    $.Schedule(2.5, function () {
        $('#TitleContainer').AddClass('LogoTrigger');
    });
};
var RunPageLookat = function () {
    const page = $.GetContextPanel();
    mainPanel.FireEntityInput('hero_antimage', 'StartGestureOverride', 'ACT_DOTA_AMBUSH');
    $.Schedule(0.0, function () {
        page.SetLookAtEnabled(true);
    });
    $.Schedule(6.5, function () {
        page.SetLookAtEnabled(false);
    });
    //page.ScheduleLookAtTrigger( Lerp( Math.random(), 20, 60 ) );
};
var LookTriggerActivated = function () {
    const page = $.GetContextPanel();
    if (page.IsLookAtEnabled())
        return;
    page.CancelScheduledLookAtTrigger();
    RunPageLookat();
};
var mainPanel = $('#BackgroundScene');
var RunPageAnimation = function () {
    const page = $.GetContextPanel();
    page.CancelScheduledLookAtTrigger();
    page.SetLookAtBlendTime(1.0);
    page.SetLookAtMaxWeight(0.6);
    page.SetLookAtMaxEyesWeight(4.5);
    page.SetLookAtTargetBlendTime(0.5);
    page.SetLookAtEnabled(false);
    page.SetLookAtPlaneDistance(80);
    //page.ScheduleLookAtTrigger( 10 );
    var mainSeq = new RunSequentialActions();
    mainSeq.actions.push(new RunFunctionAction(function () {
        //RESET SCENE
        mainPanel.FireEntityInput('hero_hoodwink', 'Disable', '');
        mainPanel.FireEntityInput('hero_dazzle', 'Disable', '');
        mainPanel.FireEntityInput('hero_camera_driver', 'SetAnimation', 'camera_dashboard_loadout_treasure_spin_subtle_static');
        mainPanel.FireEntityInput('hero_antimage', 'DisableDefaultActivityModifiers', 1);
        mainPanel.FireEntityInput('hero_antimage', 'StartGestureOverride', 'ACT_DOTA_SPAWN');
        mainPanel.FireEntityInput('hero_antimage', 'SetActivityModifier', 'collectors_cache');
        mainPanel.FireEntityInput('hero_antimage', 'SetPlaybackRateOnAllLayers', 0.9);
        $.Schedule(2, function () {
            mainPanel.FireEntityInput('hero_camera_driver', 'SetAnimation', 'camera_dashboard_loadout_treasure_spin_subtle');
        });
        $.Schedule(1.2, function () {
            mainPanel.FireEntityInput('hero_hoodwink', 'Enable', '');
            mainPanel.FireEntityInput('hero_hoodwink', 'SetPlaybackRateOnAllLayers', 0.6);
        });
        $.Schedule(2.0, function () {
            mainPanel.FireEntityInput('hero_dazzle', 'Enable', '');
            mainPanel.FireEntityInput('hero_dazzle', 'DisableDefaultActivityModifiers', 1);
            mainPanel.FireEntityInput('hero_dazzle', 'SetActivityModifier', 'nofx');
            mainPanel.FireEntityInput('hero_dazzle', 'StartGestureOverride', 'ACT_DOTA_SPAWN');
            mainPanel.FireEntityInput('hero_dazzle', 'SetPlaybackRateOnAllLayers', 0.6);
        });
    }));
    //$.Msg( "WORKED" );
    RunSingleAction(mainSeq);
};
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZGFzaGJvYXJkX2JhY2tncm91bmRfbG9hZG91dF90cmVhc3VyZS5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbImRhc2hib2FyZF9iYWNrZ3JvdW5kX2xvYWRvdXRfdHJlYXN1cmUudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IjtBQUFBLGtDQUFrQztBQUNsQyxnQ0FBZ0M7QUFDaEMsaURBQWlEO0FBQ2pELHdEQUF3RDtBQTZCeEQsQ0FBQyxDQUFFLGlCQUFpQixDQUFFLENBQUMsV0FBVyxDQUFFLGFBQWEsQ0FBRSxDQUFDO0FBQ3BELENBQUMsQ0FBQyxVQUFVLENBQUMsQ0FBQyxlQUFlLENBQUUsU0FBUyxFQUFFLE1BQU0sRUFBRSxDQUFDLENBQUUsQ0FBQztBQUV0RCxJQUFJLFdBQVcsR0FBRztJQUVkLENBQUMsQ0FBQyxVQUFVLENBQUMsQ0FBQyxlQUFlLENBQUUsU0FBUyxFQUFFLE9BQU8sRUFBRSxDQUFDLENBQUUsQ0FBQztJQUN2RCxDQUFDLENBQUMsUUFBUSxDQUFFLEdBQUcsRUFBRTtRQUViLENBQUMsQ0FBRSxpQkFBaUIsQ0FBRSxDQUFDLFFBQVEsQ0FBRSxhQUFhLENBQUUsQ0FBQztJQUNyRCxDQUFDLENBQUUsQ0FBQztBQUNSLENBQUMsQ0FBQztBQUVGLElBQUksYUFBYSxHQUFHO0lBRWhCLE1BQU0sSUFBSSxHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQWdDLENBQUM7SUFFL0QsU0FBUyxDQUFDLGVBQWUsQ0FBRSxlQUFlLEVBQUUsc0JBQXNCLEVBQUUsaUJBQWlCLENBQUUsQ0FBQztJQUV4RixDQUFDLENBQUMsUUFBUSxDQUFFLEdBQUcsRUFBRTtRQUViLElBQUksQ0FBQyxnQkFBZ0IsQ0FBRSxJQUFJLENBQUUsQ0FBQztJQUNsQyxDQUFDLENBQUUsQ0FBQztJQUVKLENBQUMsQ0FBQyxRQUFRLENBQUUsR0FBRyxFQUFFO1FBRWIsSUFBSSxDQUFDLGdCQUFnQixDQUFFLEtBQUssQ0FBRSxDQUFDO0lBQ25DLENBQUMsQ0FBRSxDQUFDO0lB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