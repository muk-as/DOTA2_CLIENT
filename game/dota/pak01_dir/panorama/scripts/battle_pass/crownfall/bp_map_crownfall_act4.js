"use strict";
/// <reference path="../../dota.d.ts" />
/// <reference path="../../common/async.ts" />
/// <reference path="../../dota_sequence_actions.ts" />
function MapInit() {
}
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
function OnPropPlay(sPropName, bForeground, bAutoplay) {
}
function OnNodeComplete(unNodeId) {
    $.Msg("OnNodeComplete: " + unNodeId);
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiYnBfbWFwX2Nyb3duZmFsbF9hY3Q0LmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsiLi4vLi4vLi4vLi4vLi4vLi4vY29udGVudC9kb3RhL3Bhbm9yYW1hL3NjcmlwdHMvYmF0dGxlX3Bhc3MvY3Jvd25mYWxsL2JwX21hcF9jcm93bmZhbGxfYWN0NC50cyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiO0FBQUEsd0NBQXdDO0FBQ3hDLDhDQUE4QztBQUM5Qyx1REFBdUQ7QUFHdkQsU0FBUyxPQUFPO0FBRWhCLENBQUM7QUFPRCxTQUFTLGtCQUFrQjtJQUV2QixPQUFPLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQyxTQUFTLEVBQUUsQ0FBQyxxQkFBcUIsQ0FBRSxxQkFBcUIsQ0FBRSxDQUFDO0FBQzFGLENBQUM7QUFDRCxTQUFTLE9BQU8sQ0FBRSxLQUFhLEVBQUUsY0FBdUIsS0FBSztJQUV6RCxJQUFLLFdBQVcsRUFDaEI7UUFDSSxPQUFPLGtCQUFrQixFQUFFLENBQUMsaUJBQWlCLENBQUUsS0FBSyxDQUFhLENBQUM7S0FDckU7U0FFRDtRQUNJLE9BQU8sQ0FBQyxDQUFFLEdBQUcsR0FBRyxLQUFLLENBQWMsQ0FBQztLQUN2QztBQUNMLENBQUM7QUFFRCxTQUFTLGdCQUFnQixDQUFFLEtBQWEsRUFBRSxjQUF1QixLQUFLO0lBRWxFLE9BQU8sT0FBTyxDQUFFLEtBQUssRUFBRSxXQUFXLENBQTBCLENBQUM7QUFDakUsQ0FBQztBQUtELFNBQVMsVUFBVSxDQUFFLFNBQWlCLEVBQUUsV0FBb0IsRUFBRSxTQUFrQjtBQUVoRixDQUFDO0FBS0QsU0FBUyxjQUFjLENBQUUsUUFBZTtJQUVwQyxDQUFDLENBQUMsR0FBRyxDQUFFLGtCQUFrQixHQUFHLFFBQVEsQ0FBRSxDQUFDO0FBQzNDLENBQUMifQ==