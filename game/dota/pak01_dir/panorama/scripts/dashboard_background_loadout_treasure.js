"use strict";
/// <reference path="dota.d.ts" />
/// <reference path="util.ts" />
/// <reference path="dota_sequence_actions.ts" />
/// <reference path="hud/versus/dota_hud_versus_scene_shared.ts" />
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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZGFzaGJvYXJkX2JhY2tncm91bmRfbG9hZG91dF90cmVhc3VyZS5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbImRhc2hib2FyZF9iYWNrZ3JvdW5kX2xvYWRvdXRfdHJlYXN1cmUudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IjtBQUFBLGtDQUFrQztBQUNsQyxnQ0FBZ0M7QUFDaEMsaURBQWlEO0FBQ2pELG1FQUFtRTtBQTZCbkUsQ0FBQyxDQUFFLGlCQUFpQixDQUFHLENBQUMsV0FBVyxDQUFFLGFBQWEsQ0FBRSxDQUFDO0FBQ3BELENBQUMsQ0FBQyxVQUFVLENBQXNCLENBQUMsZUFBZSxDQUFFLFNBQVMsRUFBRSxNQUFNLEVBQUUsQ0FBQyxDQUFFLENBQUM7QUFFNUUsSUFBSSxXQUFXLEdBQUc7SUFFYixDQUFDLENBQUMsVUFBVSxDQUFzQixDQUFDLGVBQWUsQ0FBRSxTQUFTLEVBQUUsT0FBTyxFQUFFLENBQUMsQ0FBRSxDQUFDO0lBQzdFLENBQUMsQ0FBQyxRQUFRLENBQUUsR0FBRyxFQUFFO1FBRWIsQ0FBQyxDQUFFLGlCQUFpQixDQUFHLENBQUMsUUFBUSxDQUFFLGFBQWEsQ0FBRSxDQUFDO0lBQ3RELENBQUMsQ0FBRSxDQUFDO0FBQ1IsQ0FBQyxDQUFDO0FBRUYsSUFBSSxhQUFhLEdBQUc7SUFFaEIsTUFBTSxJQUFJLEdBQUcsQ0FBQyxDQUFDLGVBQWUsRUFBZ0MsQ0FBQztJQUUvRCxTQUFTLENBQUMsZUFBZSxDQUFFLGVBQWUsRUFBRSxzQkFBc0IsRUFBRSxpQkFBaUIsQ0FBRSxDQUFDO0lBRXhGLENBQUMsQ0FBQyxRQUFRLENBQUUsR0FBRyxFQUFFO1FBRWIsSUFBSSxDQUFDLGdCQUFnQixDQUFFLElBQUksQ0FBRSxDQUFDO0lBQ2xDLENBQUMsQ0FBRSxDQUFDO0lBRUosQ0FBQyxDQUFDLFFBQVEsQ0FBRSxHQUFHLEVBQUU7UUFFYixJQUFJLENBQUMsZ0JBQWdCLENBQUUsS0FBSyxDQUFFLENBQUM7SUFDbkMsQ0FBQyxDQUFFLENBQUM7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