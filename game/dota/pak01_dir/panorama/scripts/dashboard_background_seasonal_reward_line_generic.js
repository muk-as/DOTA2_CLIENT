"use strict";
/// <reference path="dota.d.ts" />
/// <reference path="util.ts" />
/// <reference path="dota_sequence_actions.ts" />
function Tier1ButtonPressed() {
    PlayUISoundScript('quartero.tier_button.pressed');
    SwitchToTier1();
}
function Tier2ButtonPressed() {
    PlayUISoundScript('quartero.tier_button.pressed');
    SwitchToTier2();
}
function SwitchToTier1() {
    if ($.GetContextPanel().BHasClass("Tier1"))
        return;
    $("#Reward_CenterHero").SwapInEconSet(36141);
    $.GetContextPanel().SwitchClass("CenterStyle", "Tier1");
    //($("#CenterSetNameLabel") as Label_t).SetLocString( "#DOTA_Seasonal_Winter_2025_Axe_Bundle" );
}
function SwitchToTier2() {
    if ($.GetContextPanel().BHasClass("Tier2"))
        return;
    $("#Reward_CenterHero").SwapInEconSet(31373);
    $.GetContextPanel().SwitchClass("CenterStyle", "Tier2");
    //($("#CenterSetNameLabel") as Label_t).SetLocString( "#DOTA_Seasonal_Winter_2025_Axe_Bundle2" );
}
$.RegisterEventHandler("DOTAFrontPageSeasonalRewardsSetNextUnclaimedLevelWithVNContent", $.GetContextPanel(), (nEventLevel) => {
    var contextPanel = $.GetContextPanel();
    if (nEventLevel <= 30) {
        SwitchToTier1();
    }
    else {
        SwitchToTier2();
    }
});
$.RegisterEventHandler("DOTAFrontPageSeasonalRewardsSetLevel", $.GetContextPanel(), (nEventLevel) => {
    var contextPanel = $.GetContextPanel();
    if (nEventLevel < 30) {
        SwitchToTier1();
    }
    else {
        SwitchToTier2();
    }
});
$("#Tier1Button")?.SetPanelEvent("onactivate", Tier1ButtonPressed);
$("#Tier2Button")?.SetPanelEvent("onactivate", Tier2ButtonPressed);
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZGFzaGJvYXJkX2JhY2tncm91bmRfc2Vhc29uYWxfcmV3YXJkX2xpbmVfZ2VuZXJpYy5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbIi4uLy4uLy4uLy4uL2NvbnRlbnQvZG90YS9wYW5vcmFtYS9zY3JpcHRzL2Rhc2hib2FyZF9iYWNrZ3JvdW5kX3NlYXNvbmFsX3Jld2FyZF9saW5lX2dlbmVyaWMudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IjtBQUFBLGtDQUFrQztBQUNsQyxnQ0FBZ0M7QUFDaEMsaURBQWlEO0FBRWpELFNBQVMsa0JBQWtCO0lBQzFCLGlCQUFpQixDQUFFLDhCQUE4QixDQUFFLENBQUM7SUFDcEQsYUFBYSxFQUFFLENBQUM7QUFDakIsQ0FBQztBQUVELFNBQVMsa0JBQWtCO0lBQzFCLGlCQUFpQixDQUFFLDhCQUE4QixDQUFFLENBQUM7SUFDcEQsYUFBYSxFQUFFLENBQUM7QUFDakIsQ0FBQztBQUVELFNBQVMsYUFBYTtJQUNyQixJQUFJLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQyxTQUFTLENBQUMsT0FBTyxDQUFDO1FBQ3pDLE9BQU87SUFDUCxDQUFDLENBQUMsb0JBQW9CLENBQThCLENBQUMsYUFBYSxDQUFDLEtBQUssQ0FBQyxDQUFDO0lBQzNFLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQyxXQUFXLENBQUMsYUFBYSxFQUFFLE9BQU8sQ0FBQyxDQUFDO0lBQ3hELGdHQUFnRztBQUNqRyxDQUFDO0FBQ0QsU0FBUyxhQUFhO0lBQ3JCLElBQUksQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDLFNBQVMsQ0FBQyxPQUFPLENBQUM7UUFDekMsT0FBTztJQUNQLENBQUMsQ0FBQyxvQkFBb0IsQ0FBOEIsQ0FBQyxhQUFhLENBQUMsS0FBSyxDQUFDLENBQUM7SUFDM0UsQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDLFdBQVcsQ0FBQyxhQUFhLEVBQUUsT0FBTyxDQUFDLENBQUM7SUFDeEQsaUdBQWlHO0FBQ2xHLENBQUM7QUFFRCxDQUFDLENBQUMsb0JBQW9CLENBQUMsZ0VBQWdFLEVBQUUsQ0FBQyxDQUFDLGVBQWUsRUFBRSxFQUFFLENBQUMsV0FBbUIsRUFBRSxFQUFFO0lBQ3JJLElBQUksWUFBWSxHQUFZLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQztJQUVoRCxJQUFLLFdBQVcsSUFBSSxFQUFFLEVBQUc7UUFDeEIsYUFBYSxFQUFFLENBQUM7S0FDaEI7U0FBTTtRQUNOLGFBQWEsRUFBRSxDQUFDO0tBQ2hCO0FBQ0YsQ0FBQyxDQUFFLENBQUM7QUFFSixDQUFDLENBQUMsb0JBQW9CLENBQUUsc0NBQXNDLEVBQUUsQ0FBQyxDQUFDLGVBQWUsRUFBRSxFQUFFLENBQUUsV0FBbUIsRUFBRyxFQUFFO0lBRTlHLElBQUksWUFBWSxHQUFZLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQztJQUNoRCxJQUFLLFdBQVcsR0FBRyxFQUFFLEVBQUc7UUFDdkIsYUFBYSxFQUFFLENBQUM7S0FDaEI7U0FDSTtRQUNKLGFBQWEsRUFBRSxDQUFDO0tBQ2hCO0FBQ0YsQ0FBQyxDQUFFLENBQUM7QUFFSixDQUFDLENBQUMsY0FBYyxDQUFDLEVBQUUsYUFBYSxDQUFDLFlBQVksRUFBRSxrQkFBa0IsQ0FBQyxDQUFDO0FBQ25FLENBQUMsQ0FBQyxjQUFjLENBQUMsRUFBRSxhQUFhLENBQUMsWUFBWSxFQUFFLGtCQUFrQixDQUFDLENBQUMifQ==