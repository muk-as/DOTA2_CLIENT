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
/////////////////////////////////////
// Clickable Custom Events
/////////////////////////////////////
function OnPropPlay(sPropName, bForeground, bAutoplay) {
}
/////////////////////////////////////
// Node Completion Custom Events
/////////////////////////////////////
function OnNodeComplete(unNodeId) {
    $.Msg("OnNodeComplete: " + unNodeId);
}
/////////////////////////////////////
// Node Completion Custom Events
/////////////////////////////////////
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiYnBfbWFwX2Nyb3duZmFsbF9hY3Q0LmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsiLi4vLi4vLi4vLi4vLi4vLi4vY29udGVudC9kb3RhL3Bhbm9yYW1hL3NjcmlwdHMvYmF0dGxlX3Bhc3MvY3Jvd25mYWxsL2JwX21hcF9jcm93bmZhbGxfYWN0NC50cyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiO0FBQUEsd0NBQXdDO0FBQ3hDLDhDQUE4QztBQUM5Qyx1REFBdUQ7QUFFdkQseURBQXlEO0FBQ3pELFNBQVMsT0FBTztBQUVoQixDQUFDO0FBRUQscUNBQXFDO0FBQ3JDLG1CQUFtQjtBQUNuQixxQ0FBcUM7QUFFckMscUhBQXFIO0FBQ3JILFNBQVMsa0JBQWtCO0lBRXZCLE9BQU8sQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDLFNBQVMsRUFBRSxDQUFDLHFCQUFxQixDQUFFLHFCQUFxQixDQUFFLENBQUM7QUFDMUYsQ0FBQztBQUNELFNBQVMsT0FBTyxDQUFFLEtBQWEsRUFBRSxjQUF1QixLQUFLO0lBRXpELElBQUssV0FBVyxFQUNoQjtRQUNJLE9BQU8sa0JBQWtCLEVBQUUsQ0FBQyxpQkFBaUIsQ0FBRSxLQUFLLENBQWEsQ0FBQztLQUNyRTtTQUVEO1FBQ0ksT0FBTyxDQUFDLENBQUUsR0FBRyxHQUFHLEtBQUssQ0FBYyxDQUFDO0tBQ3ZDO0FBQ0wsQ0FBQztBQUVELFNBQVMsZ0JBQWdCLENBQUUsS0FBYSxFQUFFLGNBQXVCLEtBQUs7SUFFbEUsT0FBTyxPQUFPLENBQUUsS0FBSyxFQUFFLFdBQVcsQ0FBMEIsQ0FBQztBQUNqRSxDQUFDO0FBRUQscUNBQXFDO0FBQ3JDLDBCQUEwQjtBQUMxQixxQ0FBcUM7QUFDckMsU0FBUyxVQUFVLENBQUUsU0FBaUIsRUFBRSxXQUFvQixFQUFFLFNBQWtCO0FBRWhGLENBQUM7QUFFRCxxQ0FBcUM7QUFDckMsZ0NBQWdDO0FBQ2hDLHFDQUFxQztBQUNyQyxTQUFTLGNBQWMsQ0FBRSxRQUFlO0lBRXBDLENBQUMsQ0FBQyxHQUFHLENBQUUsa0JBQWtCLEdBQUcsUUFBUSxDQUFFLENBQUM7QUFDM0MsQ0FBQztBQUVELHFDQUFxQztBQUNyQyxnQ0FBZ0M7QUFDaEMscUNBQXFDIn0=