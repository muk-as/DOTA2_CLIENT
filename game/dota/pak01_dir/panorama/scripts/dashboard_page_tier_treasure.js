"use strict";
/// <reference path="dota.d.ts" />
/// <reference path="sequence_actions.ts" />
/// <reference path="dota_sequence_actions.ts" />
var ETreasureOpeningAnimationState;
(function (ETreasureOpeningAnimationState) {
    ETreasureOpeningAnimationState[ETreasureOpeningAnimationState["None"] = 0] = "None";
    ETreasureOpeningAnimationState[ETreasureOpeningAnimationState["Entrance"] = 1] = "Entrance";
    ETreasureOpeningAnimationState[ETreasureOpeningAnimationState["SpinUp"] = 2] = "SpinUp";
    ETreasureOpeningAnimationState[ETreasureOpeningAnimationState["AnimateContents"] = 3] = "AnimateContents";
    ETreasureOpeningAnimationState[ETreasureOpeningAnimationState["Exit"] = 4] = "Exit";
})(ETreasureOpeningAnimationState || (ETreasureOpeningAnimationState = {}));
const strCalaveraTreasureEntityName = 'treasure';
$.Schedule(0.0, function () {
    const treasureModelScene = $('#TreasureModel');
    if (treasureModelScene == null)
        return;
    $.RegisterEventHandler('DOTAScenePanelSceneLoaded', treasureModelScene, function () {
        treasureModelScene.FireEntityInput(strCalaveraTreasureEntityName, 'SetAnimation', 'calavera_chest_idle');
    });
});
function SetTreasureModelAnimation(strAnimationName, flDelay) {
    const sequence = new RunSequentialActions();
    if (flDelay > 0.0) {
        sequence.actions.push(new WaitAction(flDelay));
    }
    sequence.actions.push(new RunFunctionAction(function () {
        const treasureModelScene = $.GetContextPanel().FindChildTraverse('TreasureModel');
        if (treasureModelScene == null)
            return;
        treasureModelScene.FireEntityInput(strCalaveraTreasureEntityName, 'SetAnimation', strAnimationName);
    }));
    RunSingleAction(sequence);
}
function OnAnimationStateChanged(nAnimationState) {
    if (nAnimationState == ETreasureOpeningAnimationState.Entrance) {
        SetTreasureModelAnimation('calavera_chest_antecipation', 0);
    }
    else if (nAnimationState == ETreasureOpeningAnimationState.AnimateContents) {
        SetTreasureModelAnimation('calavera_chest_open', 0);
    }
    else if (nAnimationState == ETreasureOpeningAnimationState.Exit || nAnimationState == ETreasureOpeningAnimationState.None) {
        SetTreasureModelAnimation('calavera_chest_idle', 0.3);
    }
}
function OnUnusualAdded() {
    const sequence = new RunSequentialActions();
    sequence.actions.push(new RunFunctionAction(function () {
        $.GetContextPanel().AddClass("ItemQuality_unusual");
    }));
    sequence.actions.push(new WaitAction(1));
    sequence.actions.push(new RunFunctionAction(function () {
        $.GetContextPanel().AddClass("UnusualPopupAnimation_RevealContainer");
    }));
    sequence.actions.push(new WaitAction(0.5));
    sequence.actions.push(new RunFunctionAction(function () {
        $.GetContextPanel().AddClass("UnusualPopupAnimation_RevealTitle");
    }));
    sequence.actions.push(new WaitAction(2));
    sequence.actions.push(new RunFunctionAction(function () {
        $.GetContextPanel().AddClass("UnusualPopupAnimation_RevealInformation");
    }));
    sequence.actions.push(new WaitAction(0.8));
    sequence.actions.push(new RunFunctionAction(function () {
        $.GetContextPanel().AddClass("UnusualPopupAnimation_ShowButton");
    }));
    RunSingleAction(sequence);
}
function OnUnusualAcknowledged() {
    $('#DOTATierTreasureDetails').RemoveClass('ItemQuality_unusual');
    $.GetContextPanel().RemoveClass("ItemQuality_unusual_intro");
    $.GetContextPanel().RemoveClass("ItemQuality_unusual");
}
function LoadEventTitle() {
    if ($("#LogoContainer").BAscendantHasClass("Language_schinese") || $("#LogoContainer").BAscendantHasClass("Language_tchinese")) {
        $("#LogoContainer").BLoadLayoutSnippet("MuertaEventTitleChinese");
    }
    else {
        $("#LogoContainer").BLoadLayoutSnippet("MuertaEventTitleEnglish");
    }
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZGFzaGJvYXJkX3BhZ2VfdGllcl90cmVhc3VyZS5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbImRhc2hib2FyZF9wYWdlX3RpZXJfdHJlYXN1cmUudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IjtBQUFBLGtDQUFrQztBQUNsQyw0Q0FBNEM7QUFDNUMsaURBQWlEO0FBRWpELElBQUssOEJBT0o7QUFQRCxXQUFLLDhCQUE4QjtJQUVsQyxtRkFBUSxDQUFBO0lBQ1IsMkZBQVksQ0FBQTtJQUNaLHVGQUFVLENBQUE7SUFDVix5R0FBbUIsQ0FBQTtJQUNuQixtRkFBUSxDQUFBO0FBQ1QsQ0FBQyxFQVBJLDhCQUE4QixLQUE5Qiw4QkFBOEIsUUFPbEM7QUFFRCxNQUFNLDZCQUE2QixHQUFHLFVBQVUsQ0FBQztBQUVqRCxDQUFDLENBQUMsUUFBUSxDQUFFLEdBQUcsRUFBRTtJQUVoQixNQUFNLGtCQUFrQixHQUFHLENBQUMsQ0FBRSxnQkFBZ0IsQ0FBc0IsQ0FBQztJQUVyRSxJQUFLLGtCQUFrQixJQUFJLElBQUk7UUFDOUIsT0FBTztJQUVSLENBQUMsQ0FBQyxvQkFBb0IsQ0FBRSwyQkFBMkIsRUFBRSxrQkFBa0IsRUFBRTtRQUV4RSxrQkFBa0IsQ0FBQyxlQUFlLENBQUUsNkJBQTZCLEVBQUUsY0FBYyxFQUFFLHFCQUFxQixDQUFFLENBQUM7SUFDNUcsQ0FBQyxDQUFFLENBQUM7QUFDTCxDQUFDLENBQUUsQ0FBQztBQUVKLFNBQVMseUJBQXlCLENBQUUsZ0JBQXdCLEVBQUUsT0FBZTtJQUU1RSxNQUFNLFFBQVEsR0FBRyxJQUFJLG9CQUFvQixFQUFFLENBQUM7SUFFNUMsSUFBSyxPQUFPLEdBQUcsR0FBRyxFQUNsQjtRQUNDLFFBQVEsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksVUFBVSxDQUFFLE9BQU8sQ0FBRSxDQUFFLENBQUM7S0FDbkQ7SUFFRCxRQUFRLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGlCQUFpQixDQUFFO1FBRTdDLE1BQU0sa0JBQWtCLEdBQUcsQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDLGlCQUFpQixDQUFFLGVBQWUsQ0FBc0IsQ0FBQztRQUV4RyxJQUFLLGtCQUFrQixJQUFJLElBQUk7WUFDOUIsT0FBTztRQUVSLGtCQUFrQixDQUFDLGVBQWUsQ0FBRSw2QkFBNkIsRUFBRSxjQUFjLEVBQUUsZ0JBQWdCLENBQUUsQ0FBQztJQUN2RyxDQUFDLENBQUUsQ0FBRSxDQUFDO0lBRU4sZUFBZSxDQUFFLFFBQVEsQ0FBRSxDQUFDO0FBQzdCLENBQUM7QUFFRCxTQUFTLHVCQUF1QixDQUFFLGVBQStDO0lBRWhGLElBQUssZUFBZSxJQUFJLDhCQUE4QixDQUFDLFFBQVEsRUFDL0Q7UUFDQyx5QkFBeUIsQ0FBRSw2QkFBNkIsRUFBRSxDQUFDLENBQUUsQ0FBQztLQUM5RDtTQUNJLElBQUssZUFBZSxJQUFJLDhCQUE4QixDQUFDLGVBQWUsRUFDM0U7UUFDQyx5QkFBeUIsQ0FBRSxxQkFBcUIsRUFBRSxDQUFDLENBQUUsQ0FBQztLQUN0RDtTQUNJLElBQUssZUFBZSxJQUFJLDhCQUE4QixDQUFDLElBQUksSUFBSSxlQUFlLElBQUksOEJBQThCLENBQUMsSUFBSSxFQUMxSDtRQUNDLHlCQUF5QixDQUFFLHFCQUFxQixFQUFFLEdBQUcsQ0FBRSxDQUFDO0tBQ3hEO0FBQ0YsQ0FBQztBQUVELFNBQVMsY0FBYztJQUN0QixNQUFNLFFBQVEsR0FBRyxJQUFJLG9CQUFvQixFQUFFLENBQUM7SUFFNUMsUUFBUSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUMsSUFBSSxpQkFBaUIsQ0FBQztRQUMzQyxDQUFDLENBQUMsZUFBZSxFQUFHLENBQUMsUUFBUSxDQUFDLHFCQUFxQixDQUFDLENBQUM7SUFDdEQsQ0FBQyxDQUFDLENBQUMsQ0FBQztJQUVKLFFBQVEsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFDLElBQUksVUFBVSxDQUFFLENBQUMsQ0FBRSxDQUFDLENBQUM7SUFFM0MsUUFBUSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUMsSUFBSSxpQkFBaUIsQ0FBQztRQUMzQyxDQUFDLENBQUMsZUFBZSxFQUFHLENBQUMsUUFBUSxDQUFDLHVDQUF1QyxDQUFDLENBQUM7SUFDeEUsQ0FBQyxDQUFDLENBQUMsQ0FBQztJQUVKLFFBQVEsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFDLElBQUksVUFBVSxDQUFFLEdBQUcsQ0FBRSxDQUFDLENBQUM7SUFFN0MsUUFBUSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUMsSUFBSSxpQkFBaUIsQ0FBQztRQUMzQyxDQUFDLENBQUMsZUFBZSxFQUFHLENBQUMsUUFBUSxDQUFDLG1DQUFtQyxDQUFDLENBQUM7SUFDcEUsQ0FBQyxDQUFDLENBQUMsQ0FBQztJQUVKLFFBQVEsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFDLElBQUksVUFBVSxDQUFFLENBQUMsQ0FBRSxDQUFDLENBQUM7SUFFM0MsUUFBUSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUMsSUFBSSxpQkFBaUIsQ0FBQztRQUMzQyxDQUFDLENBQUMsZUFBZSxFQUFHLENBQUMsUUFBUSxDQUFDLHlDQUF5QyxDQUFDLENBQUM7SUFDMUUsQ0FBQyxDQUFDLENBQUMsQ0FBQztJQUVKLFFBQVEsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFDLElBQUksVUFBVSxDQUFFLEdBQUcsQ0FBRSxDQUFDLENBQUM7SUFFN0MsUUFBUSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUMsSUFBSSxpQkFBaUIsQ0FBQztRQUMzQyxDQUFDLENBQUMsZUFBZSxFQUFHLENBQUMsUUFBUSxDQUFDLGtDQUFrQyxDQUFDLENBQUM7SUFDbkUsQ0FBQyxDQUFDLENBQUMsQ0FBQztJQUVKLGVBQWUsQ0FBQyxRQUFRLENBQUMsQ0FBQztBQUMzQixDQUFDO0FBQ0QsU0FBUyxxQkFBcUI7SUFDN0IsQ0FBQyxDQUFDLDBCQUEwQixDQUFFLENBQUMsV0FBVyxDQUFDLHFCQUFxQixDQUFDLENBQUM7SUFDbEUsQ0FBQyxDQUFDLGVBQWUsRUFBRyxDQUFDLFdBQVcsQ0FBQywyQkFBMkIsQ0FBQyxDQUFDO0lBQzlELENBQUMsQ0FBQyxlQUFlLEVBQUcsQ0FBQyxXQUFXLENBQUMscUJBQXFCLENBQUMsQ0FBQztBQUN6RCxDQUFDO0FBRUQsU0FBUyxjQUFjO0lBQ3RCLElBQUssQ0FBQyxDQUFFLGdCQUFnQixDQUFHLENBQUMsa0JBQWtCLENBQUUsbUJBQW1CLENBQUUsSUFBSSxDQUFDLENBQUUsZ0JBQWdCLENBQUcsQ0FBQyxrQkFBa0IsQ0FBQyxtQkFBbUIsQ0FBQyxFQUFHO1FBQ3pJLENBQUMsQ0FBRSxnQkFBZ0IsQ0FBRyxDQUFDLGtCQUFrQixDQUFFLHlCQUF5QixDQUFFLENBQUM7S0FDdkU7U0FBTTtRQUNOLENBQUMsQ0FBRSxnQkFBZ0IsQ0FBRyxDQUFDLGtCQUFrQixDQUFFLHlCQUF5QixDQUFFLENBQUM7S0FDdkU7QUFDRixDQUFDIn0=