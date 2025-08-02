"use strict";
/// <reference path="../dota.d.ts" />
/// <reference path="../common/async.ts" />
async function Init() {
    await Async.NextFrame(); // Wait one frame for panel to set itself up
    let globalStatsLabel = $("#GlobalStat");
    let personalStatsText = $("#PersonalStat");
    let globalStatsNumber = $("#GlobalStatNumber");
    let personalStatsNumber = $("#PersonalStatNumber");
    let strFeatureName = $.GetContextPanel().GetAttributeString("feature", "not-found");
    let headerText = "#DOTA_MapUpdate2023Tooltip_Header_" + strFeatureName;
    let descriptionText = "#DOTA_MapUpdate2023Tooltip_Description_" + strFeatureName;
    let globalStatText = "#DOTA_MapUpdate2023Tooltip_GlobalStat_" + strFeatureName;
    let personalStatText = "#DOTA_MapUpdate2023Tooltip_PersonalStat_" + strFeatureName;
    let globalStatNumberText = "#DOTA_MapUpdate2023Tooltip_GlobalStatNumber_" + strFeatureName;
    let personalStatNumberText = "#DOTA_MapUpdate2023Tooltip_PersonalStatNumber_" + strFeatureName;
    let movieSrc = "file://{resources}/videos/events/map_update_2023/map_update_2023_" + strFeatureName.toLowerCase() + ".webm";
    $.GetContextPanel().SetDialogVariableLocString('header_text', headerText);
    $.GetContextPanel().SetDialogVariableLocString('description_text', descriptionText);
    globalStatsLabel.text = globalStatText;
    personalStatsText.text = personalStatText;
    globalStatsNumber.text = globalStatNumberText;
    personalStatsNumber.text = personalStatNumberText;
    let moviePanel = $('#Movie');
    moviePanel.SetRepeat(false);
    moviePanel.SetMovie(movieSrc);
    moviePanel.SetRepeat(true);
    moviePanel.Play();
    const abortController = new Async.AbortController();
    UpdateLoop(abortController.signal);
    await Async.UnhandledEvent("UIHideCustomLayoutTooltip"); // Wait for the tooltip to be hidden, then end the loop
    abortController.abort();
}
async function UpdateLoop(signal) {
    const mapUpdatePanel = $.GetContextPanel().FindAncestor("DashboardCenter").FindChildrenWithClassTraverse("MapUpdateBackground")[0];
    const strFeatureName = $.GetContextPanel().GetAttributeString("feature", "not-found");
    $.GetContextPanel().SetHasClass("HideStats", true);
    const strDialogVarName = getDialogVariableForFeatureName(strFeatureName.toLowerCase());
    let prevValue = -1;
    while (!signal.aborted) {
        const curValue = mapUpdatePanel.GetMapStatValue(strFeatureName);
        if (prevValue != curValue) {
            // TODO: Some kind of animation and maybe play a sound effect
            $.GetContextPanel().SetDialogVariableInt(strDialogVarName, curValue);
            prevValue = curValue;
            $.GetContextPanel().SetHasClass("HideStats", curValue == -1);
        }
        await Async.Delay(1.0);
    }
}
function getDialogVariableForFeatureName(featureName) {
    if (featureName == "watcher")
        return "global_lanterns_lit";
    if (featureName == "sentinel")
        return "global_miniboss_kills";
    if (featureName == "roshan")
        return "global_roshan_kills";
    if (featureName == "tree")
        return "global_famangos_gained";
    if (featureName == "wisdomrune")
        return "global_wisdom_runes_gained";
    if (featureName == "portal")
        return "global_portals_used";
    if (featureName == "outpost")
        return "global_outposts_captured";
    if (featureName == "shieldrune")
        return "global_shield_runes_gained";
    return "";
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoidG9vbHRpcF9tYXBfdXBkYXRlXzIwMjMuanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyIuLi8uLi8uLi8uLi8uLi9jb250ZW50L2RvdGEvcGFub3JhbWEvc2NyaXB0cy90b29sdGlwcy90b29sdGlwX21hcF91cGRhdGVfMjAyMy50cyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiO0FBQUEscUNBQXFDO0FBQ3JDLDJDQUEyQztBQU8zQyxLQUFLLFVBQVUsSUFBSTtJQUVsQixNQUFNLEtBQUssQ0FBQyxTQUFTLEVBQUUsQ0FBQyxDQUFDLDRDQUE0QztJQUVyRSxJQUFJLGdCQUFnQixHQUFHLENBQUMsQ0FBRSxhQUFhLENBQWEsQ0FBQztJQUNyRCxJQUFJLGlCQUFpQixHQUFHLENBQUMsQ0FBRSxlQUFlLENBQWEsQ0FBQztJQUN4RCxJQUFJLGlCQUFpQixHQUFHLENBQUMsQ0FBRSxtQkFBbUIsQ0FBYSxDQUFDO0lBQzVELElBQUksbUJBQW1CLEdBQUcsQ0FBQyxDQUFFLHFCQUFxQixDQUFhLENBQUM7SUFFaEUsSUFBSSxjQUFjLEdBQUcsQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDLGtCQUFrQixDQUFFLFNBQVMsRUFBRSxXQUFXLENBQUUsQ0FBQztJQUN0RixJQUFJLFVBQVUsR0FBRyxvQ0FBb0MsR0FBRyxjQUFjLENBQUM7SUFDdkUsSUFBSSxlQUFlLEdBQUcseUNBQXlDLEdBQUcsY0FBYyxDQUFDO0lBQ2pGLElBQUksY0FBYyxHQUFHLHdDQUF3QyxHQUFHLGNBQWMsQ0FBQztJQUMvRSxJQUFJLGdCQUFnQixHQUFHLDBDQUEwQyxHQUFHLGNBQWMsQ0FBQztJQUNuRixJQUFJLG9CQUFvQixHQUFHLDhDQUE4QyxHQUFHLGNBQWMsQ0FBQztJQUMzRixJQUFJLHNCQUFzQixHQUFHLGdEQUFnRCxHQUFHLGNBQWMsQ0FBQztJQUMvRixJQUFJLFFBQVEsR0FBRyxtRUFBbUUsR0FBRyxjQUFjLENBQUMsV0FBVyxFQUFFLEdBQUcsT0FBTyxDQUFDO0lBRTVILENBQUMs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