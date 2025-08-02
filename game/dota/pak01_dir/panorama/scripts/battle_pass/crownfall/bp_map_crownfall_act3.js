"use strict";
/// <reference path="../../dota.d.ts" />
/// <reference path="../../common/async.ts" />
/// <reference path="../../dota_sequence_actions.ts" />
// this gets called once when the overworld map is loaded
function MapInit() {
}
/////////////////////////////////////
// Helper Functions
/////////////////////////////////////
// Events are sent to the background panel by default, so we need to grab the foreground panel to affect things there
function GetForegroundPanel() {
    return $.GetContextPanel().GetParent().FindChildInLayoutFile("MapForegroundLayers");
}
function IsNodeUnlocked(nodeID) {
    let hPanel = $.GetContextPanel().GetParent().FindChildInLayoutFile("Map").FindChild("Node" + nodeID);
    if (hPanel) {
        return hPanel.BHasClass("Node__Completed");
    }
    return false;
}
function GetProp(sName, bForeground = false) {
    if (bForeground) {
        return GetForegroundPanel().FindChildTraverse(sName);
    }
    else {
        return $("#" + sName);
    }
}
function GetAnimatedImage(sName, bForeground = false) {
    return GetProp(sName, bForeground);
}
function RandomFloat(lbound, ubound) {
    return Math.min(ubound - lbound, Math.random() * (ubound - lbound)) + lbound;
}
function RandomInt(lbound, ubound) {
    return Math.floor(RandomFloat(lbound, ubound));
}
/////////////////////////////////////
// Clickable Custom Events
/////////////////////////////////////
function OnPropPlay(sPropName, bForeground, bAutoplay) {
    if (sPropName == "WolfAppear") {
        // $.Msg( "awooo" );
        let hPropPanel = GetProp(sPropName, bForeground);
        var x = 2450 + RandomInt(-300, 300);
        var y = 1450 + RandomInt(-200, 200);
        hPropPanel.SetPositionInPixels(x, y, 0);
    }
    else if (sPropName.startsWith("Snow")) {
        let hPropPanel = GetProp(sPropName, bForeground);
        var x = 2450 + RandomInt(-200, 200);
        var y = 1450 + RandomInt(-150, 150);
        hPropPanel.SetPositionInPixels(x, y, 0);
        let hTopLayerPanel = GetAnimatedImage("TopLayer" + sPropName, bForeground);
        hTopLayerPanel.SetPositionInPixels(x, y, 0);
        hTopLayerPanel.StartAnimating();
    }
}
/////////////////////////////////////
// Node Completion Custom Events
/////////////////////////////////////
function OnNodeComplete(unNodeId) {
    $.Msg("OnNodeComplete: " + unNodeId);
    if (unNodeId == 26) {
        $.DispatchEvent('DotaOverworldMapProp_PlayPanelID', 'ZaugDragon', true);
        GetAnimatedImage('ZaugDragon', true).AddClass('FadeDragon');
    }
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiYnBfbWFwX2Nyb3duZmFsbF9hY3QzLmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsiLi4vLi4vLi4vLi4vLi4vLi4vY29udGVudC9kb3RhL3Bhbm9yYW1hL3NjcmlwdHMvYmF0dGxlX3Bhc3MvY3Jvd25mYWxsL2JwX21hcF9jcm93bmZhbGxfYWN0My50cyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiO0FBQUEsd0NBQXdDO0FBQ3hDLDhDQUE4QztBQUM5Qyx1REFBdUQ7QUFFdkQseURBQXlEO0FBQ3pELFNBQVMsT0FBTztBQUVoQixDQUFDO0FBRUQscUNBQXFDO0FBQ3JDLG1CQUFtQjtBQUNuQixxQ0FBcUM7QUFFckMscUhBQXFIO0FBQ3JILFNBQVMsa0JBQWtCO0lBRXZCLE9BQU8sQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDLFNBQVMsRUFBRSxDQUFDLHFCQUFxQixDQUFFLHFCQUFxQixDQUFFLENBQUM7QUFDMUYsQ0FBQztBQUVELFNBQVMsY0FBYyxDQUFFLE1BQWU7SUFFcEMsSUFBSSxNQUFNLEdBQUcsQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDLFNBQVMsRUFBRSxDQUFDLHFCQUFxQixDQUFDLEtBQUssQ0FBQyxDQUFDLFNBQVMsQ0FBRSxNQUFNLEdBQUcsTUFBTSxDQUFhLENBQUM7SUFDbEgsSUFBSyxNQUFNLEVBQ1g7UUFDSSxPQUFPLE1BQU0sQ0FBQyxTQUFTLENBQUUsaUJBQWlCLENBQUUsQ0FBQztLQUNoRDtJQUVELE9BQU8sS0FBSyxDQUFDO0FBQ2pCLENBQUM7QUFFRCxTQUFTLE9BQU8sQ0FBRSxLQUFhLEVBQUUsY0FBdUIsS0FBSztJQUV6RCxJQUFLLFdBQVcsRUFDaEI7UUFDSSxPQUFPLGtCQUFrQixFQUFFLENBQUMsaUJBQWlCLENBQUUsS0FBSyxDQUFhLENBQUM7S0FDckU7U0FFRDtRQUNJLE9BQU8sQ0FBQyxDQUFFLEdBQUcsR0FBRyxLQUFLLENBQWMsQ0FBQztLQUN2QztBQUNMLENBQUM7QUFFRCxTQUFTLGdCQUFnQixDQUFFLEtB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