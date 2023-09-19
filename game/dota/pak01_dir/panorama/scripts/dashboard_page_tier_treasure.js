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
const strCalaveraTreasureEntityName = 'calavera_chest';
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
function LoadEventTitle() {
    if ($("#LogoContainer").BAscendantHasClass("Language_schinese") || $("#LogoContainer").BAscendantHasClass("Language_tchinese")) {
        $("#LogoContainer").BLoadLayoutSnippet("MuertaEventTitleChinese");
    }
    else {
        $("#LogoContainer").BLoadLayoutSnippet("MuertaEventTitleEnglish");
    }
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZGFzaGJvYXJkX3BhZ2VfdGllcl90cmVhc3VyZS5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbImRhc2hib2FyZF9wYWdlX3RpZXJfdHJlYXN1cmUudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IjtBQUFBLGtDQUFrQztBQUNsQyw0Q0FBNEM7QUFDNUMsaURBQWlEO0FBRWpELElBQUssOEJBT0o7QUFQRCxXQUFLLDhCQUE4QjtJQUVsQyxtRkFBUSxDQUFBO0lBQ1IsMkZBQVksQ0FBQTtJQUNaLHVGQUFVLENBQUE7SUFDVix5R0FBbUIsQ0FBQTtJQUNuQixtRkFBUSxDQUFBO0FBQ1QsQ0FBQyxFQVBJLDhCQUE4QixLQUE5Qiw4QkFBOEIsUUFPbEM7QUFFRCxNQUFNLDZCQUE2QixHQUFHLGdCQUFnQixDQUFDO0FBRXZELENBQUMsQ0FBQyxRQUFRLENBQUUsR0FBRyxFQUFFO0lBRWhCLE1BQU0sa0JBQWtCLEdBQUcsQ0FBQyxDQUFFLGdCQUFnQixDQUFzQixDQUFDO0lBRXJFLElBQUssa0JBQWtCLElBQUksSUFBSTtRQUM5QixPQUFPO0lBRVIsQ0FBQyxDQUFDLG9CQUFvQixDQUFFLDJCQUEyQixFQUFFLGtCQUFrQixFQUFFO1FBRXhFLGtCQUFrQixDQUFDLGVBQWUsQ0FBRSw2QkFBNkIsRUFBRSxjQUFjLEVBQUUscUJBQXFCLENBQUUsQ0FBQztJQUM1RyxDQUFDLENBQUUsQ0FBQztBQUNMLENBQUMsQ0FBRSxDQUFDO0FBRUosU0FBUyx5QkFBeUIsQ0FBRSxnQkFBd0IsRUFBRSxPQUFlO0lBRTVFLE1BQU0sUUFBUSxHQUFHLElBQUksb0JBQW9CLEVBQUUsQ0FBQztJQUU1QyxJQUFLLE9BQU8sR0FBRyxHQUFHLEVBQ2xCO1FBQ0MsUUFBUSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxVQUFVLENBQUUsT0FBTyxDQUFFLENBQUUsQ0FBQztLQUNuRDtJQUVELFFBQVEsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksaUJBQWlCLENBQUU7UUFFN0MsTUFBTSxrQkFBa0IsR0FBRyxDQUFDLENBQUMsZUFBZSxFQUFFLENBQUMsaUJBQWlCLENBQUUsZUFBZSxDQUFzQixDQUFDO1FBRXhHLElBQUssa0JBQWtCLElBQUksSUFBSTtZQUM5QixPQUFPO1FBRVIsa0JBQWtCLENBQUMsZUFBZSxDQUFFLDZCQUE2QixFQUFFLGNBQWMsRUFBRSxnQkFBZ0IsQ0FBRSxDQUFDO0lBQ3ZHLENBQUMsQ0FBRSxDQUFFLENBQUM7SUFFTixlQUFlLENBQUUsUUFBUSxDQUFFLENBQUM7QUFDN0IsQ0FBQztBQUVELFNBQVMsdUJBQXVCLENBQUUsZUFBK0M7SUFFaEYsSUFBSyxlQUFlLElBQUksOEJBQThCLENBQUMsUUFBUSxFQUMvRDtRQUNDLHlCQUF5QixDQUFFLDZCQUE2QixFQUFFLENBQUMsQ0FBRSxDQUFDO0tBQzlEO1NBQ0ksSUFBSyxlQUFlLElBQUksOEJBQThCLENBQUMsZUFBZSxFQUMzRTtRQUNDLHlCQUF5QixDQUFFLHFCQUFxQixFQUFFLENBQUMsQ0FBRSxDQUFDO0tBQ3REO1NBQ0ksSUFBSyxlQUFlLElBQUksOEJBQThCLENBQUMsSUFBSSxJQUFJLGVBQWUsSUFBSSw4QkFBOEIsQ0FBQyxJQUFJLEVBQzFIO1FBQ0MseUJBQXlCLENBQUUscUJBQXFCLEVBQUUsR0FBRyxDQUFFLENBQUM7S0FDeEQ7QUFDRixDQUFDO0FBRUQsU0FBUyxjQUFjO0lBQ3RCLElBQUssQ0FBQyxDQUFFLGdCQUFnQixDQUFHLENBQUMsa0JBQWtCLENBQUUsbUJBQW1CLENBQUUsSUFBSSxDQUFDLENBQUUsZ0JBQWdCLENBQUcsQ0FBQyxrQkFBa0IsQ0FBQyxtQkFBbUIsQ0FBQyxFQUFHO1FBQ3pJLENBQUMsQ0FBRSxnQkFBZ0IsQ0FBRyxDQUFDLGtCQUFrQixDQUFFLHlCQUF5QixDQUFFLENBQUM7S0FDdkU7U0FBTTtRQUNOLENBQUMsQ0FBRSxnQkFBZ0IsQ0FBRyxDQUFDLGtCQUFrQixDQUFFLHlCQUF5QixDQUFFLENBQUM7S0FDdkU7QUFDRixDQUFDIn0=