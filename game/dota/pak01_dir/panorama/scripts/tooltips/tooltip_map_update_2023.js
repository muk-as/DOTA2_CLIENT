/// <reference path="../dota.d.ts" />
/// <reference path="../common/async.ts" />
async function setupTooltip() {
    await Async.NextFrame();
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
    Async.RunSequence(updateLoop, abortController.signal);
    // Wait for the tooltip to be hidden, then end the loop
    await Async.UnhandledEvent("UIHideCustomLayoutTooltip");
    abortController.abort();
}
function* updateLoop() {
    const mapUpdatePanel = $.GetContextPanel().FindAncestor("DashboardCenter").FindChildrenWithClassTraverse("MapUpdateBackground")[0];
    const strFeatureName = $.GetContextPanel().GetAttributeString("feature", "not-found");
    $.GetContextPanel().SetHasClass("HideStats", true);
    const strDialogVarName = getDialogVariableForFeatureName(strFeatureName.toLowerCase());
    let prevValue = -1;
    while (true) {
        const curValue = mapUpdatePanel.GetMapStatValue(strFeatureName);
        if (prevValue != curValue) {
            // TODO: Some kind of animation and maybe play a sound effect
            $.GetContextPanel().SetDialogVariableInt(strDialogVarName, curValue);
            prevValue = curValue;
            $.GetContextPanel().SetHasClass("HideStats", curValue == -1);
        }
        yield Async.Delay(1.0);
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
    if (featureName == "rune")
        return "global_wisdom_runes_gained";
    if (featureName == "portal")
        return "global_portals_used";
    if (featureName == "outpost")
        return "global_outposts_captured";
    if (featureName == "shieldrune")
        return "global_shield_runes_gained";
    return "";
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoidG9vbHRpcF9tYXBfdXBkYXRlXzIwMjMuanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyJ0b29sdGlwX21hcF91cGRhdGVfMjAyMy50cyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiQUFBQSxxQ0FBcUM7QUFDckMsMkNBQTJDO0FBTzNDLEtBQUssVUFBVSxZQUFZO0lBRTFCLE1BQU0sS0FBSyxDQUFDLFNBQVMsRUFBRSxDQUFDO0lBRXhCLElBQUksZ0JBQWdCLEdBQUcsQ0FBQyxDQUFFLGFBQWEsQ0FBYSxDQUFDO0lBQ3JELElBQUksaUJBQWlCLEdBQUcsQ0FBQyxDQUFFLGVBQWUsQ0FBYSxDQUFDO0lBQ3hELElBQUksaUJBQWlCLEdBQUcsQ0FBQyxDQUFFLG1CQUFtQixDQUFhLENBQUM7SUFDNUQsSUFBSSxtQkFBbUIsR0FBRyxDQUFDLENBQUUscUJBQXFCLENBQWEsQ0FBQztJQUVoRSxJQUFJLGNBQWMsR0FBRyxDQUFDLENBQUMsZUFBZSxFQUFFLENBQUMsa0JBQWtCLENBQUUsU0FBUyxFQUFFLFdBQVcsQ0FBRSxDQUFDO0lBQ3RGLElBQUksVUFBVSxHQUFHLG9DQUFvQyxHQUFHLGNBQWMsQ0FBQztJQUN2RSxJQUFJLGVBQWUsR0FBRyx5Q0FBeUMsR0FBRyxjQUFjLENBQUM7SUFDakYsSUFBSSxjQUFjLEdBQUcsd0NBQXdDLEdBQUcsY0FBYyxDQUFDO0lBQy9FLElBQUksZ0JBQWdCLEdBQUcsMENBQTBDLEdBQUcsY0FBYyxDQUFDO0lBQ25GLElBQUksb0JBQW9CLEdBQUcsOENBQThDLEdBQUcsY0FBYyxDQUFDO0lBQzNGLElBQUksc0JBQXNCLEdBQUcsZ0RBQWdELEdBQUcsY0FBYyxDQUFDO0lBQy9GLElBQUksUUFBUSxHQUFHLG1FQUFtRSxHQUFHLGNBQWMsQ0FBQyxXQUFXLEVBQUUsR0FBRyxPQUFPLENBQUM7SUFFNUgsQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDLDBCQUEwQixDQUFFLGFBQWEsRUFBRSxVQUFVLENBQUUsQ0FBQztJQUM1RSxDQUFD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