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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZG90YV9odWRfbG9hZG91dF8yMDIyLmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsiLi4vLi4vLi4vLi4vLi4vY29udGVudC9kb3RhL3Bhbm9yYW1hL3NjcmlwdHMvaHVkL2RvdGFfaHVkX2xvYWRvdXRfMjAyMi50cyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiO0FBQUEscUNBQXFDO0FBQ3JDLG1DQUFtQztBQUNuQyxvREFBb0Q7QUFFcEQsSUFBSSxnQkFBZ0IsR0FBRztJQUVuQixNQUFNLGVBQWUsR0FBRyxDQUFDLENBQUUsa0JBQWtCLENBQXNCLENBQUM7SUFFcEUsTUFBTSxHQUFHLEdBQUcsSUFBSSxvQkFBb0IsRUFBRSxDQUFDO0lBQ3ZDLEdBQUcsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksVUFBVSxDQUFFLElBQUksQ0FBRSxDQUFFLENBQUM7SUFDM0MsR0FBRyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxrQkFBa0IsQ0FBRSxlQUFlLEVBQUUsYUFBYSxDQUFFLENBQUUsQ0FBQztJQUM3RSxHQUFHLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLHNCQUFzQixDQUFFLGVBQWUsRUFBRSxhQUFhLEVBQUUsQ0FBQyxFQUFFLENBQUMsRUFBRSxDQUFDLEVBQUUsQ0FBQyxFQUFFLEdBQUcsRUFBRSxHQUFHLEVBQUUsR0FBRyxFQUFFLEdBQUcsRUFBRSxHQUFHLENBQUUsQ0FBRSxDQUFDO0lBRXRILGVBQWUsQ0FBRSxHQUFHLENBQUUsQ0FBQztBQUMzQixDQUFDLENBQUM7QUFFRixDQUFDLENBQUMsUUFBUSxDQUFFLEdBQUcsRUFBRTtJQUViLE1BQU0sZUFBZSxHQUFHLENBQUMsQ0FBRSxrQkFBa0IsQ0FBc0IsQ0FBQztJQUNwRSxDQUFDLENBQUMsb0JBQW9CLENBQUUsMkJBQTJCLEVBQUUsZUFBZSxFQUFFO1FBRWxFLGVBQWUsQ0FBQyxlQUFlLENBQUUsaUNBQWlDLEVBQUUsU0FBUyxFQUFFLEVBQUUsQ0FBRSxDQUFDO1FBQ3BGLENBQUMsQ0FBQyxhQUFhLENBQUUsdUNBQXVDLEVBQUUsSUFBSSxDQUFFLENBQUM7SUFDckUsQ0FBQyxDQUFFLENBQUM7QUFDUixDQUFDLENBQUUsQ0FBQztBQUVKLElBQUksVUFBVSxHQUFHLFVBQVcsU0FBaUI7SUFFekMsTUFBTSxlQUFlLEdBQUcsQ0FBQyxDQUFFLGtCQUFrQixDQUFzQixDQUFDO0lBQ3BFLE1BQU0saUJBQWlCLEdBQUcsQ0FBQyxDQUFFLG9CQUFvQixDQUFzQixDQUFDO0lBRXhFLGVBQWUsQ0FBQyxlQUFlLENBQUUsbUJBQW1CLEVBQUUsU0FBUyxFQUFFLEVBQUUsQ0FBRSxDQUFDO0lBQ3RFLGVBQWUsQ0FBQyxlQUFlLENBQUUsbUJBQW1CLEVBQUUsU0FBUyxFQUFFLEVBQUUsQ0FBRSxDQUFDO0lBQ3RFLGVBQWUsQ0FBQyxlQUFlLENBQUUsb0JBQW9CLEVBQUUsU0FBUyxFQUFFLEVBQUUsQ0FBRSxDQUFDO0lBQ3ZFLGVBQWUsQ0FBQyxlQUFlLENBQUUsNkJBQTZCLEVBQUUsU0FBUyxFQUFFLEVBQUUsQ0FBRSxDQUFDO0lBQ2hGLGVBQWUsQ0FBQyxlQUFlLENBQUUsMkJBQTJCLEVBQUUsU0FBUyxFQUFFLEVBQUUsQ0FBRSxDQUFDO0lBQzlFLGVBQWUsQ0FBQyxlQUFlLENBQUUsMkJBQTJCLEVBQUUsU0FBUyxFQUFFLEVBQUUsQ0FBRSxDQUFDO0lBQzlFLGVBQWUsQ0FBQyxlQUFlLENBQUUscUJBQXFCLEVBQUUsU0FBUyxFQUFFLEVBQUUsQ0FBRSxDQUFDO0lBQ3hFLGVBQWUsQ0FBQyxlQUFlLENBQUUsaUNBQWlDLEVBQUUsU0FBUyxFQUFFLEVBQUUsQ0FBRSxDQUFDO0lBQ3BGLGVBQWUsQ0FBQyxlQUFlLENBQUUsb0JBQW9CLEVBQUUsU0FBUyxFQUFFLEVBQUUsQ0FBRSxDQUFDO0lBRXZFLElBQUssU0FBUyxLQUFLLENBQUMsRUFDcEI7UUFDSSxlQUFlLENBQUMsZUFBZSxDQUFFLG1CQUFtQixFQUFFLFFBQVEsRUFBRSxFQUFFLENBQUUsQ0FBQztRQUNyRSxlQUFlLENBQUMsZUFBZSxDQUFFLG9CQUFvQixFQUFFLFFBQVEsRUFBRSxFQUFFLENBQUUsQ0FBQztRQUN0RSxpQkFBaUIsQ0FBQyxXQUFXLENBQUUsWUFBWSxDQUFFLENBQUM7S0FHakQ7SUFDRCxJQUFLLFNBQVMsS0FBSyxDQUFDLEVBQ3BCO1FBQ0ksZUFBZSxDQUFDLFFBQVEsQ0FBRSxZQUFZLENBQUUsQ0FBQztRQUV6QyxlQUFlLENBQUMsZUFBZSxDQUFFLG1CQUFtQixFQUFFLFFBQVEsRUFBRSxFQUFFLENBQUUsQ0FBQztRQUNyRSxlQUFlLENBQUMsZUFBZSxDQUFFLG9CQUFvQixFQUFFLFFBQVEsRUFBRSxFQUFFLENBQUUsQ0FBQztRQUN0RSxpQkFBaUIsQ0FBQyxXQUFXLENBQUUsWUFBWSxDQUFFLENBQUM7S0FFakQ7SUFDRCxJQUFLLFNBQVMsS0FBSyxDQUFDLEVBQ3BCO1FBQ0ksZUFBZSxDQUFDLGVBQWUsQ0FBRSxvQkFBb0IsRUFBRSxRQUFRLEVBQUUsRUFBRSxDQUFFLENBQUM7UUFDdEUsZUFBZSxDQUFDLGVBQWUsQ0FBRSxvQkFBb0IsRUFBRSxRQUFRLEVBQUUsRUFBRSxDQUFFLENBQUM7UUFDdEUsaUJBQWlCLENBQUMsV0FBVyxDQUFFLFlBQVksQ0FBRSxDQUFDO0tBRWpEO0lBQ0QsSUFBSyxTQUFTLEtBQUssQ0FBQyxFQUNwQjtRQUNJLGVBQWUsQ0FBQyxlQUFlLENBQUUsNkJBQTZCLEVBQUUsUUFBUSxFQUFFLEVBQUUsQ0FBRSxDQUFDO1FBQy9FLGVBQWUsQ0FBQyxlQUFlLENBQUUsb0JBQW9CLEVBQUUsUUFBUSxFQUFFLEVBQUUsQ0FBRSxDQUFDO1FBQ3RFLGlCQUFpQixDQUFDLFdBQVcsQ0FBRSxZQUFZLENBQUUsQ0FBQztLQUdqRDtJQUNELElBQUssU0FBUyxLQUFLLENBQUMsRUFDcEI7UUFDSSxlQUFlLENBQUMsZUFBZSxDQUFFLDJCQUEyQixFQUFFLFFBQVEsRUFBRSxFQUFFLENBQUUsQ0FBQztRQUM3RSxlQUFlLENBQUMsZUFBZSxDQUFFLG9CQUFvQixFQUFFLFFBQVEsRUFBRSxFQUFFLENBQUUsQ0FBQztRQUN0RSxpQkFBaUIsQ0FBQyxXQUFXLENBQUUsWUFBWSxDQUFFLENBQUM7S0FFakQ7SUFFRCxJQUFLLFNBQVMsS0FBSyxDQUFDLEVBQ3BCO1FBQ0ksZUFBZSxDQUFDLGVBQWUsQ0FBRSwyQkFBMkIsRUFBRSxRQUFRLEVBQUUsRUFBRSxDQUFFLENBQUM7UUFDN0UsZUFBZSxDQUFDLGVBQWUsQ0FBRSxpQ0FBaUMsRUFBRSxRQUFRLEVBQUUsRUFBRSxDQUFFLENBQUM7UUFDbkYsaUJBQWlCLENBQUMsV0FBVyxDQUFFLFlBQVksQ0FBRSxDQUFDO0tBRWpEO0lBRUQsSUFBSyxTQUFTLEtBQUssQ0FBQyxFQUNwQjtRQUNJLGVBQWUsQ0FBQyxlQUFlLENBQUUscUJBQXFCLEVBQUUsUUFBUSxFQUFFLEVBQUUsQ0FBRSxDQUFDO1FBQ3ZFLGVBQWUsQ0FBQyxlQUFlLENBQUUsb0JBQW9CLEVBQUUsUUFBUSxFQUFFLEVBQUUsQ0FBRSxDQUFDO1FBQ3RFLGlCQUFpQixDQUFDLFdBQVcsQ0FBRSxZQUFZLENBQUUsQ0FBQztLQUVqRDtBQUVMLENBQUMsQ0FBQztBQUdGLElBQUksUUFBUSxHQUFHLEtBQUssQ0FBQztBQUNyQixJQUFJLGVBQWUsR0FBRztJQU1sQixJQUFJLFdBQVcsR0FBRyxRQUFRLENBQUMsQ0FBQyxDQUFDLFFBQVEsQ0FBQyxDQUFDLENBQUMsU0FBUyxDQUFDO0lBQ2xELFFBQVEsR0FBRyxDQUFDLFFBQVEsQ0FBQztJQUVuQixDQUFDLENBQUUsa0JBQWtCLENBQXdCLENBQUMsZUFBZSxDQUFFLFlBQVksRUFBRSxXQUFXLEVBQUUsRUFBRSxDQUFFLENBQUM7QUFDckcsQ0FBQyxDQUFDO0FBRUYsSUFBSSxVQUFVLEdBQUcsS0FBSyxDQUFDO0FBQ3ZCLElBQUksWUFBWSxHQUFHO0lBSWYsSUFBSSxXQUFXLEdBQUcsVUFBVSxDQUFDLENBQUMsQ0FBQyxRQUFRLENBQUMsQ0FBQyxDQUFDLFNBQVMsQ0FBQztJQUNwRCxVQUFVLEdBQUcsQ0FBQyxVQUFVLENBQUM7SUFDdkIsQ0FBQyxDQUFFLGtCQUFrQixDQUF3QixDQUFDLGVBQWUsQ0FBRSxVQUFVLEVBQUUsV0FBVyxFQUFFLEVBQUUsQ0FBRSxDQUFDO0FBQ25HLENBQUMsQ0FBQztBQUdGLElBQUksV0FBVyxHQUFHLEtBQUssQ0FBQztBQUN4QixJQUFJLGFBQWEsR0FBRztJQUloQixJQUFJLFdBQVcsR0FBRyxXQUFXLENBQUMsQ0FBQyxDQUFDLFFBQVEsQ0FBQyxDQUFDLENBQUMsU0FBUyxDQUFDO0lBQ3JELFdBQVcsR0FBRyxDQUFDLFdBQVcsQ0FBQztJQUN6QixDQUFDLENBQUUsa0JBQWtCLENBQXdCLENBQUMsZUFBZSxDQUFFLFlBQVksRUFBRSxXQUFXLEVBQUUsRUFBRSxDQUFFLENBQUM7QUFDckcsQ0FBQyxDQUFDO0FBR0YsSUFBSSxNQUFNLEdBQUcsVUFBVyxjQUFzQjtJQUcxQyxJQUFLLGNBQWMsS0FBSyxDQUFDLEVBQ3pCO1FBQ0ksTUFBTSxHQUFHLEdBQUcsSUFBSSxvQkFBb0IsRUFBRSxDQUFDO1FBQ3JDLENBQUMsQ0FBRSxrQkFBa0IsQ0FBd0IsQ0FBQyxlQUFlLENBQUUsc0JBQXNCLEVBQUUsdUJBQXVCLEVBQUUsc0JBQXNCLENBQUUsQ0FBQztRQUV6SSxDQUFDLENBQUUsb0JBQW9CLENBQXdCLENBQUMsZUFBZSxDQUFFLHNCQUFzQixFQUFFLHVCQUF1QixFQUFFLHNCQUFzQixDQUFFLENBQUM7UUFDN0ksR0FBRyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxzQkFBc0IsQ0FBRSxDQUFDLENBQUUsa0JBQWtCLENBQUUsRUFBRSxhQUFhLEVBQUUsR0FBRyxFQUFFLEdBQUcsRUFBRSxHQUFHLEVBQUUsR0FBRyxFQUFFLEdBQUcsRUFBRSxHQUFHLEVBQUUsR0FBRyxFQUFFLEdBQUcsRUFBRSxHQUFHLENBQUUsQ0FBRSxDQUFDO1FBQ3RJLGVBQWUsQ0FBRSxHQUFHLENBQUUsQ0FBQztLQUMxQjtJQUNELElBQUssY0FBYyxLQUFLLENBQUMsRUFDekI7UUFDSSxNQUFNLEdBQUcsR0FBRyxJQUFJLG9CQUFvQixFQUFFLENBQUM7UUFFckMsQ0FBQyxDQUFFLGtCQUFrQixDQUF3QixDQUFDLGVBQWUsQ0FBRSxzQkFBc0IsRUFBRSx1QkFBdUIsRUFBRSxvQkFBb0IsQ0FBRSxDQUFDO1FBRXZJLENBQUMsQ0FBRSxvQkFBb0IsQ0FBd0IsQ0FBQyxlQUFlLENBQUUsc0JBQXNCLEVBQUUsdUJBQXVCLEVBQUUsb0JBQW9CLENBQUUsQ0FBQztRQUUzSSxHQUFHLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLHNCQUFzQixDQUFFLENBQUMsQ0FBRSxrQkFBa0IsQ0FBRSxFQUFFLGFBQWEsRUFBRSxHQUFHLEVBQUUsR0FBRyxFQUFFLEdBQUcsRUFBRSxHQUFHLEVBQUUsR0FBRyxFQUFFLEdBQUcsRUFBRSxHQUFHLEVBQUUsR0FBRyxFQUFFLEdBQUcsQ0FBRSxDQUFFLENBQUM7UUFFdEksZUFBZSxDQUFFLEdBQUcsQ0FBRSxDQUFDO0tBQzFCO0FBQ0wsQ0FBQyxDQUFDO0FBR0YsSUFBSSxTQUFTLEdBQUc7SUFHVixDQUFDLENBQUUsb0JBQW9CLENBQXdCLENBQUMsUUFBUSxDQUFFLFlBQVksQ0FBRSxDQUFDO0FBQy9FLENBQUMsQ0FBQztBQUlGLFNBQVMsa0JBQWtCO0lBRXZCLElBQUksVUFBVSxHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQztJQUNyQyxJQUFJLFVBQVUsR0FBRyxVQUFVLENBQUMsU0FBUyxDQUFFLFdBQVcsQ0FBRSxDQUFDO0lBR3JELFVBQVUsQ0FBQyxXQUFXLENBQUUsV0FBVyxDQUFFLENBQUM7QUFFMUMsQ0FBQztBQUNELFNBQVMsdUJBQXVCO0lBRTVCLENBQUMsQ0FBRSxtQkFBbUIsQ0FBRyxDQUFDLFdBQVcsQ0FBRSxXQUFXLENBQUUsQ0FBQztBQUV6RCxDQUFDIn0=