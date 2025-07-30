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
function UnlockPremiumQuest1(unNodeId) {
    $.Msg("UnlockPremiumQuest1");
    const pPremiumRope = GetAnimatedImage("PremiumRope", true);
    pPremiumRope.StartAnimating();
    pPremiumRope.StopAnimatingAtFrame(pPremiumRope.GetFrameCount() - 1);
}
function UnlockPremiumQuest2(unNodeId) {
    $.Msg("UnlockPremiumQuest2");
    const pPremiumRope = GetAnimatedImage("PremiumRope2", true);
    pPremiumRope.StartAnimating();
    pPremiumRope.StopAnimatingAtFrame(pPremiumRope.GetFrameCount() - 1);
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiYnBfbWFwX2Nyb3duZmFsbF9hY3QxLmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsiLi4vLi4vLi4vLi4vLi4vLi4vY29udGVudC9kb3RhL3Bhbm9yYW1hL3NjcmlwdHMvYmF0dGxlX3Bhc3MvY3Jvd25mYWxsL2JwX21hcF9jcm93bmZhbGxfYWN0MS50cyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiO0FBQUEsd0NBQXdDO0FBQ3hDLDhDQUE4QztBQUM5Qyx1REFBdUQ7QUFJdkQsU0FBUyxPQUFPO0FBRWhCLENBQUM7QUFPRCxTQUFTLGtCQUFrQjtJQUV2QixPQUFPLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQyxTQUFTLEVBQUUsQ0FBQyxxQkFBcUIsQ0FBRSxxQkFBcUIsQ0FBRSxDQUFDO0FBQzFGLENBQUM7QUFFRCxTQUFTLE9BQU8sQ0FBRSxLQUFhLEVBQUUsY0FBdUIsS0FBSztJQUV6RCxJQUFLLFdBQVcsRUFDaEI7UUFDSSxPQUFPLGtCQUFrQixFQUFFLENBQUMsaUJBQWlCLENBQUUsS0FBSyxDQUFhLENBQUM7S0FDckU7U0FFRDtRQUNJLE9BQU8sQ0FBQyxDQUFFLEdBQUcsR0FBRyxLQUFLLENBQWMsQ0FBQztLQUN2QztBQUNMLENBQUM7QUFFRCxTQUFTLGdCQUFnQixDQUFFLEtBQWEsRUFBRSxjQUF1QixLQUFLO0lBRWxFLE9BQU8sT0FBTyxDQUFFLEtBQUssRUFBRSxXQUFXLENBQTBCLENBQUM7QUFDakUsQ0FBQztBQUtELFNBQVMsVUFBVSxDQUFFLFNBQWlCLEVBQUUsV0FBb0IsRUFBRSxTQUFrQjtBQUVoRixDQUFDO0FBS0QsU0FBUyxjQUFjLENBQUUsUUFBZTtJQUVwQyxDQUFDLENBQUMsR0FBRyxDQUFFLGtCQUFrQixHQUFHLFFBQVEsQ0FBRSxDQUFDO0FBQzNDLENBQUM7QUFNRCxTQUFTLG1CQUFtQixDQUFFLFFBQWdCO0lBRTFDLENBQUMsQ0FBQyxHQUFHLENBQUUscUJBQXFCLENBQUUsQ0FBQztJQUUvQixNQUFNLFlBQVksR0FBeUIsZ0JBQWdCLENBQUUsYUFBYSxFQUFFLElBQUksQ0FBRSxDQUFDO0lBQ25GLFlBQVksQ0FBQyxjQUFjLEVBQUUsQ0FBQztJQUM5QixZQUFZLENBQUMsb0JBQW9CLENBQUUsWUFBWSxDQUFDLGFBQWEsRUFBRSxHQUFHLENBQUMsQ0FBRSxDQUFDO0FBQzFFLENBQUM7QUFFRCxTQUFTLG1CQUFtQixDQUFFLFFBQWdCO0lBRTFDLENBQUMsQ0FBQyxHQUFHLENBQUUscUJBQXFCLENBQUUsQ0FBQztJQUUvQixNQUFNLFlBQVksR0FBeUIsZ0JBQWdCLENBQUUsY0FBYyxFQUFFLElBQUksQ0FBRSxDQUFDO0lBQ3BGLFlBQVksQ0FBQyxjQUFjLEVBQUUsQ0FBQztJQUM5QixZQUFZLENBQUMsb0JBQW9CLENBQUUsWUFBWSxDQUFDLGFBQWEsRUFBRSxHQUFHLENBQUMsQ0FBRSxDQUFDO0FBQzFFLENBQUMifQ==