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
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiYnBfbWFwX2Nyb3duZmFsbF9hY3QzLmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsiLi4vLi4vLi4vLi4vLi4vLi4vY29udGVudC9kb3RhL3Bhbm9yYW1hL3NjcmlwdHMvYmF0dGxlX3Bhc3MvY3Jvd25mYWxsL2JwX21hcF9jcm93bmZhbGxfYWN0My50cyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiO0FBQUEsd0NBQXdDO0FBQ3hDLDhDQUE4QztBQUM5Qyx1REFBdUQ7QUFFdkQseURBQXlEO0FBQ3pELFNBQVMsT0FBTztBQUVoQixDQUFDO0FBRUQscUNBQXFDO0FBQ3JDLG1CQUFtQjtBQUNuQixxQ0FBcUM7QUFFckMscUhBQXFIO0FBQ3JILFNBQVMsa0JBQWtCO0lBRXZCLE9BQU8sQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDLFNBQVMsRUFBRSxDQUFDLHFCQUFxQixDQUFFLHFCQUFxQixDQUFFLENBQUM7QUFDMUYsQ0FBQztBQUVELFNBQVMsT0FBTyxDQUFFLEtBQWEsRUFBRSxjQUF1QixLQUFLO0lBRXpELElBQUssV0FBVyxFQUNoQjtRQUNJLE9BQU8sa0JBQWtCLEVBQUUsQ0FBQyxpQkFBaUIsQ0FBRSxLQUFLLENBQWEsQ0FBQztLQUNyRTtTQUVEO1FBQ0ksT0FBTyxDQUFDLENBQUUsR0FBRyxHQUFHLEtBQUssQ0FBYyxDQUFDO0tBQ3ZDO0FBQ0wsQ0FBQztBQUVELFNBQVMsZ0JBQWdCLENBQUUsS0FBYSxFQUFFLGNBQXVCLEtBQUs7SUFFbEUsT0FBTyxPQUFPLENBQUUsS0FBSyxFQUFFLFdBQVcsQ0FBMEIsQ0FBQztBQUNqRSxDQUFDO0FBRUQsU0FBUyxXQUFXLENBQUUsTUFBYyxFQUFFLE1BQWM7SUFFaEQsT0FBTyxJQUFJLENBQUMsR0FBRyxDQUFFLE1BQU0sR0FBRyxNQUFNLEVBQUUsSUFBSSxDQUFDLE1BQU0sRUFBRSxHQUFHLENBQUUsTUFBTSxHQUFHLE1BQU0sQ0FBRSxDQUFFLEdBQUcsTUFBTSxDQUFDO0FBQ3JGLENBQUM7QUFFRCxTQUFTLFNBQVMsQ0FBRSxNQUFjLEVBQUUsTUFBYztJQUU5QyxPQUFPLElBQUksQ0FBQyxLQUFLLENBQUUsV0FBVyxDQUFFLE1BQU0sRUFBRSxNQUFNLENBQUUsQ0FBRSxDQUFDO0FBQ3ZELENBQUM7QUFFRCxxQ0FBcUM7QUFDckMsMEJBQTBCO0FBQzFCLHFDQUFxQztBQUNyQyxTQUFTLFVBQVUsQ0FBRSxTQUFrQixFQUFFLFdBQXFCLEVBQUUsU0FBbUI7SUFFL0UsSUFBSyxTQUFTLElBQUksWUFBWSxFQUM5QjtRQUNJLG9CQUFvQjtRQUNwQixJQUFJLFVBQVUsR0FBRyxPQUFPLENBQUUsU0FBUyxFQUFFLFdBQVcsQ0FBRSxDQUFDO1FBQ25ELElBQUksQ0FBQyxHQUFHLElBQUksR0FBRyxTQUFTLENBQUUsQ0FBQyxHQUFHLEVBQUUsR0FBRyxDQUFFLENBQUM7UUFDdEMsSUFBSSxDQUFDLEdBQUcsSUFBSSxHQUFHLFNBQVMsQ0FBRSxDQUFDLEdBQUcsRUFBRSxHQUFHLENBQUUsQ0FBQztRQUN0QyxVQUFVLENBQUMsbUJBQW1CLENBQUUsQ0FBQyxFQUFFLENBQUMsRUFBRSxDQUFDLENBQUUsQ0FBQztLQUM3QztTQUNJLElBQUssU0FBUyxDQUFDLFVBQVUsQ0FBRSxNQUFNLENBQUUsRUFDeEM7UUFDSSxJQUFJLFVBQVUsR0FBRyxPQUFPLENBQUUsU0FBUyxFQUFFLFdBQVcsQ0FBRSxDQUFDO1FBQ25ELElBQUksQ0FBQyxHQUFHLElBQUksR0FBRyxTQUFTLENBQUUsQ0FBQyxHQUFHLEVBQUUsR0FBRyxDQUFFLENBQUM7UUFDdEMsSUFBSSxDQUFDLEdBQUcsSUFBSSxHQUFHLFNBQVMsQ0FBRSxDQUFDLEdBQUcsRUFBRSxHQUFHLENBQUUsQ0FBQztRQUN0QyxVQUFVLENBQUMsbUJBQW1CLENBQUUsQ0FBQyxFQUFFLENBQUMsRUFBRSxDQUFDLENBQUUsQ0FBQztRQUUxQyxJQUFJLGNBQWMsR0FBMEIsZ0JBQWdCLENBQUUsVUFBVSxHQUFHLFNBQVMsRUFBRSxXQUFXLENBQUUsQ0FBQztRQUNwRyxjQUFjLENBQUMsbUJBQW1CLENBQUUsQ0FBQyxFQUFFLENBQUMsRUFBRSxDQUFDLENBQUUsQ0FBQztRQUM5QyxjQUFjLENBQUMsY0FBYyxFQUFFLENBQUM7S0FDbkM7QUFDTCxDQUFDO0FBRUQscUNBQXFDO0FBQ3JDLGdDQUFnQztBQUNoQyxxQ0FBcUM7QUFDckMsU0FBUyxjQUFjLENBQUUsUUFBZTtJQUVwQyxDQUFDLENBQUMsR0FBRyxDQUFFLGtCQUFrQixHQUFHLFFBQVEsQ0FBRSxDQUFDO0FBQzNDLENBQUMifQ==