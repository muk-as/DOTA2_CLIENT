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
    if (treasureModelScene == null || treasureModelScene.BHasClass("TreasureModelSetPreview"))
        return;
    $.RegisterEventHandler('DOTAScenePanelSceneLoaded', treasureModelScene, function () {
        treasureModelScene.FireEntityInput(strCalaveraTreasureEntityName, 'SetAnimation', 'chest_idle');
    });
});
function SetTreasureModelAnimation(strAnimationName, flDelay) {
    const sequence = new RunSequentialActions();
    if (flDelay > 0.0) {
        sequence.actions.push(new WaitAction(flDelay));
    }
    sequence.actions.push(new RunFunctionAction(function () {
        const treasureModelScene = $.GetContextPanel().FindChildTraverse('TreasureModel');
        if (treasureModelScene == null || treasureModelScene.BHasClass("TreasureModelSetPreview"))
            return;
        treasureModelScene.FireEntityInput(strCalaveraTreasureEntityName, 'SetAnimation', strAnimationName);
    }));
    RunSingleAction(sequence);
}
function OnAnimationStateChanged(nAnimationState) {
    if (nAnimationState == ETreasureOpeningAnimationState.Entrance) {
        SetTreasureModelAnimation('chest_anticipation', 0);
    }
    else if (nAnimationState == ETreasureOpeningAnimationState.AnimateContents) {
        SetTreasureModelAnimation('chest_open', 0);
    }
    else if (nAnimationState == ETreasureOpeningAnimationState.Exit || nAnimationState == ETreasureOpeningAnimationState.None) {
        SetTreasureModelAnimation('chest_idle', 0.3);
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
    var tierTreasureDetails = $('#DOTATierTreasureDetails');
    if (tierTreasureDetails != null)
        tierTreasureDetails.RemoveClass('ItemQuality_unusual');
    var treasureDetails = $('#DOTATreasureDetailsPage');
    if (treasureDetails != null)
        treasureDetails.RemoveClass('ItemQuality_unusual');
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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZGFzaGJvYXJkX3BhZ2VfdGllcl90cmVhc3VyZS5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbIi4uLy4uLy4uLy4uL2NvbnRlbnQvZG90YS9wYW5vcmFtYS9zY3JpcHRzL2Rhc2hib2FyZF9wYWdlX3RpZXJfdHJlYXN1cmUudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IjtBQUFBLGtDQUFrQztBQUNsQyw0Q0FBNEM7QUFDNUMsaURBQWlEO0FBRWpELElBQUssOEJBT0o7QUFQRCxXQUFLLDhCQUE4QjtJQUVsQyxtRkFBUSxDQUFBO0lBQ1IsMkZBQVksQ0FBQTtJQUNaLHVGQUFVLENBQUE7SUFDVix5R0FBbUIsQ0FBQTtJQUNuQixtRkFBUSxDQUFBO0FBQ1QsQ0FBQyxFQVBJLDhCQUE4QixLQUE5Qiw4QkFBOEIsUUFPbEM7QUFFRCxNQUFNLDZCQUE2QixHQUFHLFVBQVUsQ0FBQztBQUVqRCxDQUFDLENBQUMsUUFBUSxDQUFFLEdBQUcsRUFBRTtJQUVoQixNQUFNLGtCQUFrQixHQUFHLENBQUMsQ0FBRSxnQkFBZ0IsQ0FBc0IsQ0FBQztJQUVyRSxJQUFLLGtCQUFrQixJQUFJLElBQUksSUFBSSxrQkFBa0IsQ0FBQyxTQUFTLENBQUMseUJBQXlCLENBQUM7UUFDekYsT0FBTztJQUVSLENBQUMsQ0FBQyxvQkFBb0IsQ0FBRSwyQkFBMkIsRUFBRSxrQkFBa0IsRUFBRTtRQUV4RSxrQkFBa0IsQ0FBQyxlQUFlLENBQUMsNkJBQTZCLEVBQUUsY0FBYyxFQUFFLFlBQVksQ0FBRSxDQUFDO0lBQ2xHLENBQUMsQ0FBRSxDQUFDO0FBQ0wsQ0FBQyxDQUFFLENBQUM7QUFFSixTQUFTLHlCQUF5QixDQUFFLGdCQUF3QixFQUFFLE9BQWU7SUFFNUUsTUFBTSxRQUFRLEdBQUcsSUFBSSxvQkFBb0IsRUFBRSxDQUFDO0lBRTVDLElBQUssT0FBTyxHQUFHLEdBQUcsRUFDbEI7UUFDQyxRQUFRLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLFVBQVUsQ0FBRSxPQUFP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