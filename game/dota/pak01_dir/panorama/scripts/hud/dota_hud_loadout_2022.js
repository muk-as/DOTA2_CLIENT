"use strict";
/// <reference path="../dota.d.ts" />
/// <reference path="../util.ts" />
/// <reference path="../dota_sequence_actions.ts" />
var RunPageAnimation = function () {
    const modelBackground = $('#ModelBackground');
    const seq = new RunSequentialActions();
    seq.actions.push(new WaitAction(0.01));
    seq.actions.push(new WaitForClassAction(modelBackground, 'SceneLoaded'));
    seq.actions.push(new LerpDepthOfFieldAction(modelBackground, "hero_camera", 0, 0, 0, 0, 200, 300, 400, 900, 2.0));
    RunSingleAction(seq);
};
$.Schedule(0.0, function () {
    const modelBackground = $('#ModelBackground');
    $.RegisterEventHandler('DOTAScenePanelSceneLoaded', modelBackground, function () {
        modelBackground.FireEntityInput('loadout_background_witch_doctor', "Disable", '');
        $.DispatchEvent('DOTASetCurrentDashboardPageFullscreen', true);
    });
});
var changeHero = function (heroModel) {
    const modelBackground = $('#ModelBackground');
    const modelBackgroundWK = $('#ModelBackgroundWK');
    modelBackground.FireEntityInput('hero_loadout_lion', "Disable", '');
    modelBackground.FireEntityInput('hero_loadout_drow', "Disable", '');
    modelBackground.FireEntityInput('hero_loadout_pudge', "Disable", '');
    modelBackground.FireEntityInput('hero_loadout_crystal_maiden', "Disable", '');
    modelBackground.FireEntityInput('hero_loadout_primal_beast', "Disable", '');
    modelBackground.FireEntityInput('hero_loadout_witch_doctor', "Disable", '');
    modelBackground.FireEntityInput('hero_loadout_muerta', "Disable", '');
    modelBackground.FireEntityInput('loadout_background_witch_doctor', "Disable", '');
    modelBackground.FireEntityInput('loadout_background', "Disable", '');
    if (heroModel === 1) {
        modelBackground.FireEntityInput('hero_loadout_lion', "Enable", '');
        modelBackground.FireEntityInput('loadout_background', "Enable", '');
        modelBackgroundWK.RemoveClass('Initialize');
    }
    if (heroModel === 2) {
        modelBackground.AddClass('Initialize');
        // $('#ModelBackground').FireEntityInput('hero_light', "TurnOn", '');
        modelBackground.FireEntityInput('hero_loadout_drow', "Enable", '');
        modelBackground.FireEntityInput('loadout_background', "Enable", '');
        modelBackgroundWK.RemoveClass('Initialize');
    }
    if (heroModel === 3) {
        modelBackground.FireEntityInput('hero_loadout_pudge', "Enable", '');
        modelBackground.FireEntityInput('loadout_background', "Enable", '');
        modelBackgroundWK.RemoveClass('Initialize');
    }
    if (heroModel === 4) {
        modelBackground.FireEntityInput('hero_loadout_crystal_maiden', "Enable", '');
        modelBackground.FireEntityInput('loadout_background', "Enable", '');
        modelBackgroundWK.RemoveClass('Initialize');
    }
    if (heroModel === 5) {
        modelBackground.FireEntityInput('hero_loadout_primal_beast', "Enable", '');
        modelBackground.FireEntityInput('loadout_background', "Enable", '');
        modelBackgroundWK.RemoveClass('Initialize');
    }
    if (heroModel === 6) {
        modelBackground.FireEntityInput('hero_loadout_witch_doctor', "Enable", '');
        modelBackground.FireEntityInput('loadout_background_witch_doctor', "Enable", '');
        modelBackgroundWK.RemoveClass('Initialize');
    }
    if (heroModel === 7) {
        modelBackground.FireEntityInput('hero_loadout_muerta', "Enable", '');
        modelBackground.FireEntityInput('loadout_background', "Enable", '');
        modelBackgroundWK.RemoveClass('Initialize');
    }
};
var l_Toggle = false;
var TestGlobalLight = function () {
    //var flIntensity = g_Toggle ? 5.0 : 0.5;
    //g_Toggle = !g_Toggle;
    //$( '#Model' ).FireEntityInput( 'light_hero', 'Intensity', flIntensity );
    var strFunction = l_Toggle ? "TurnOn" : "TurnOff";
    l_Toggle = !l_Toggle;
    $('#ModelBackground').FireEntityInput('hero_light', strFunction, '');
};
var rim_Toggle = false;
var TestRimLight = function () {
    var strFunction = rim_Toggle ? "TurnOn" : "TurnOff";
    rim_Toggle = !rim_Toggle;
    $('#ModelBackground').FireEntityInput('rim_cool', strFunction, '');
};
var fill_Toggle = false;
var TestFillLight = function () {
    var strFunction = fill_Toggle ? "TurnOn" : "TurnOff";
    fill_Toggle = !fill_Toggle;
    $('#ModelBackground').FireEntityInput('fill_light', strFunction, '');
};
var Camera = function (cameraPosition) {
    if (cameraPosition === 0) {
        const seq = new RunSequentialActions();
        $('#ModelBackground').FireEntityInput('loadout_camera_model', 'SetAnimGraphParameter', 'camera_anim=fullbody');
        $('#ModelBackgroundWK').FireEntityInput('loadout_camera_model', 'SetAnimGraphParameter', 'camera_anim=fullbody');
        seq.actions.push(new LerpDepthOfFieldAction($('#ModelBackground'), "hero_camera", 200, 300, 400, 900, 400, 550, 700, 900, 0.3));
        RunSingleAction(seq);
    }
    if (cameraPosition === 1) {
        const seq = new RunSequentialActions();
        $('#ModelBackground').FireEntityInput('loadout_camera_model', 'SetAnimGraphParameter', 'camera_anim=cowboy');
        $('#ModelBackgroundWK').FireEntityInput('loadout_camera_model', 'SetAnimGraphParameter', 'camera_anim=cowboy');
        seq.actions.push(new LerpDepthOfFieldAction($('#ModelBackground'), "hero_camera", 400, 550, 700, 900, 200, 300, 400, 900, 0.3));
        RunSingleAction(seq);
    }
};
var TestScene = function () {
    $('#ModelBackgroundWK').AddClass('Initialize');
};
function SlideThumbActivate() {
    var slideThumb = $.GetContextPanel();
    var bMinimized = slideThumb.BHasClass('Minimized');
    slideThumb.ToggleClass('Minimized');
}
function SlideThumbActivateRight() {
    $('#DebutInformation').ToggleClass('Minimized');
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZG90YV9odWRfbG9hZG91dF8yMDIyLmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsiLi4vLi4vLi4vLi4vLi4vY29udGVudC9kb3RhL3Bhbm9yYW1hL3NjcmlwdHMvaHVkL2RvdGFfaHVkX2xvYWRvdXRfMjAyMi50cyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiO0FBQUEscUNBQXFDO0FBQ3JDLG1DQUFtQztBQUNuQyxvREFBb0Q7QUFFcEQsSUFBSSxnQkFBZ0IsR0FBRztJQUVuQixNQUFNLGVBQWUsR0FBRyxDQUFDLENBQUUsa0JBQWtCLENBQXNCLENBQUM7SUFFcEUsTUFBTSxHQUFHLEdBQUcsSUFBSSxvQkFBb0IsRUFBRSxDQUFDO0lBQ3ZDLEdBQUcsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksVUFBVSxDQUFFLElBQUksQ0FBRSxDQUFFLENBQUM7SUFDM0MsR0FBRyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxrQkFBa0IsQ0FBRSxlQUFlLEVBQUUsYUFBYSxDQUFFLENBQUUsQ0FBQztJQUM3RSxHQUFHLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLHNCQUFzQixDQUFFLGVBQWUsRUFBRSxhQUFhLEVBQUUsQ0FBQyxFQUFFLENBQUMsRUFBRSxDQUFDLEVBQUUsQ0FBQyxFQUFFLEdBQUcsRUFBRSxHQUFHLEVBQUUsR0FBRyxFQUFFLEdBQUcsRUFBRSxHQUFHLENBQUUsQ0FBRSxDQUFDO0lBRXRILGVBQWUsQ0FBRSxHQUFHLENBQUUsQ0FBQztBQUMzQixDQUFDLENBQUM7QUFFRixDQUFDLENBQUMsUUFBUSxDQUFFLEdBQUcsRUFBRTtJQUViLE1BQU0sZUFBZSxHQUFHLENBQUMsQ0FBRSxrQkFBa0IsQ0FBc0IsQ0FBQztJQUNwRSxDQUFDLENBQUMsb0JBQW9CLENBQUUsMkJBQTJCLEVBQUUsZUFBZSxFQUFFO1FBRWxFLGVBQWUsQ0FBQyxlQUFlLENBQUUsaUNBQWlDLEVBQUUsU0FBUyxFQUFFLEVBQUUsQ0FBRSxDQUFDO1FB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