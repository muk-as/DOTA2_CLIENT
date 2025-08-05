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
    if ($.GetContextPanel().BHasClass("LegionCommanderTier1"))
        return;
    $("#PremiumReward_LegionCommander").SwapInEconSet(31106);
    $.GetContextPanel().SwitchClass("LegionCommanderStyle", "LegionCommanderTier1");
    $("#LCSetNameLabel").SetLocString("#DOTA_Seasonal_Fall_2025_LC_Bundle");
}
function SwitchToTier2() {
    if ($.GetContextPanel().BHasClass("LegionCommanderTier2"))
        return;
    $("#PremiumReward_LegionCommander").SwapInEconSet(34333);
    $.GetContextPanel().SwitchClass("LegionCommanderStyle", "LegionCommanderTier2");
    $("#LCSetNameLabel").SetLocString("#DOTA_Seasonal_Fall_2025_LC_Bundle2");
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
    // We _know_ we can't have any unclaimed nodes > level 30
    if (nEventLevel <= 30) {
        SwitchToTier1();
    }
    else {
        SwitchToTier2();
    }
});
$.RegisterForUnhandledEvent("DOTAEventActionsUpdated", (eventID, actionID, oldValue, newValue) => {
    if (eventID == 53 && actionID == 1030) {
        SwitchToTier2();
    }
});
$("#LegionCommanderTier1Button")?.SetPanelEvent("onactivate", Tier1ButtonPressed);
$("#LegionCommanderTier2Button")?.SetPanelEvent("onactivate", Tier2ButtonPressed);
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZGFzaGJvYXJkX2JhY2tncm91bmRfc2Vhc29uYWxfcmV3YXJkX2xpbmVfZmFsbF8yMDI1LmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsiLi4vLi4vLi4vLi4vY29udGVudC9kb3RhL3Bhbm9yYW1hL3NjcmlwdHMvZGFzaGJvYXJkX2JhY2tncm91bmRfc2Vhc29uYWxfcmV3YXJkX2xpbmVfZmFsbF8yMDI1LnRzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiI7QUFBQSxrQ0FBa0M7QUFDbEMsZ0NBQWdDO0FBQ2hDLGlEQUFpRDtBQUVqRCxTQUFTLGtCQUFrQjtJQUMxQixpQkFBaUIsQ0FBRSw4QkFBOEIsQ0FBRSxDQUFDO0lBQ3BELGFBQWEsRUFBRSxDQUFDO0FBQ2pCLENBQUM7QUFFRCxTQUFTLGtCQUFrQjtJQUMxQixpQkFBaUIsQ0FBRSw4QkFBOEIsQ0FBRSxDQUFDO0lBQ3BELGFBQWEsRUFBRSxDQUFDO0FBQ2pCLENBQUM7QUFFRCxTQUFTLGFBQWE7SUFDckIsSUFBSSxDQUFDLENBQUMsZUFBZSxFQUFFLENBQUMsU0FBUyxDQUFDLHNCQUFzQixDQUFDO1FBQ3hELE9BQU87SUFDUCxDQUFDLENBQUMsZ0NBQWdDLENBQThCLENBQUMsYUFBYSxDQUFDLEtBQUssQ0FBQyxDQUFDO0lBQ3ZGLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQyxXQUFXLENBQUMsc0JBQXNCLEVBQUUsc0JBQXNCLENBQUMsQ0FBQztJQUMvRSxDQUFDLENBQUMsaUJBQWlCLENBQWEsQ0FBQyxZQUFZLENBQUUsb0NBQW9DLENBQUUsQ0FBQztBQUN4RixDQUFDO0FBQ0QsU0FBUyxhQUFhO0lBQ3JCLElBQUksQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDLFNBQVMsQ0FBQyxzQkFBc0IsQ0FBQztRQUN4RCxPQUFPO0lBQ1AsQ0FBQyxDQUFDLGdDQUFnQyxDQUE4QixDQUFDLGFBQWEsQ0FBQyxLQUFLLENBQUMsQ0FBQztJQUN2RixDQUFDLENBQUMsZUFBZSxFQUFFLENBQUMsV0FBVyxDQUFDLHNCQUFzQixFQUFFLHNCQUFzQixDQUFDLENBQUM7SUFDL0UsQ0FBQyxDQUFDLGlCQUFpQixDQUFhLENBQUMsWUFBWSxDQUFFLHFDQUFxQyxDQUFFLENBQUM7QUFDekYsQ0FBQztBQUVELENBQUMsQ0FBQyxvQkFBb0IsQ0FBQyxnRUFBZ0UsRUFBRSxDQUFDLENBQUMsZUFBZSxFQUFFLEVBQUUsQ0FBQyxXQUFtQixFQUFFLEVBQUU7SUFDckksSUFBSSxZQUFZLEdBQVksQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDO0lBRWhELElBQUksV0FBVyxJQUFJLEVBQUUsRUFBRTtRQUN0QixhQUFhLEVBQUUsQ0FBQztLQUNoQjtTQUFNO1FBQ04sYUFBYSxFQUFFLENBQUM7S0FDaEI7QUFDRixDQUFDLENBQUUsQ0FBQztBQUVKLENBQUMsQ0FBQyxvQkFBb0IsQ0FBRSxzQ0FBc0MsRUFBRSxDQUFDLENBQUMsZUFBZSxFQUFFLEVBQUUsQ0FBRSxXQUFtQixFQUFHLEVBQUU7SUFFOUcsSUFBSSxZQUFZLEdBQVksQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDO0lBRWhELHlEQUF5RDtJQUN6RCxJQUFJLFdBQVcsSUFBSSxFQUFFLEVBQUU7UUFDdEIsYUFBYSxFQUFFLENBQUM7S0FDaEI7U0FDSTtRQUNKLGFBQWEsRUFBRSxDQUFDO0tBQ2hCO0FBQ0YsQ0FBQyxDQUFFLENBQUM7QUFFSixDQUFDLENBQUMseUJBQXlCLENBQUMseUJBQXlCLEVBQUUsQ0FBQyxPQUFlLEVBQUUsUUFBZ0IsRUFBRSxRQUFnQixFQUFFLFFBQWdCLEVBQUUsRUFBRTtJQUNoSSxJQUFJLE9BQU8sSUFBSSxFQUFFLElBQUksUUFBUSxJQUFJLElBQUksRUFBRTtRQUN0QyxhQUFhLEVBQUUsQ0FBQztLQUNoQjtBQUNGLENBQUMsQ0FBQyxDQUFDO0FBRUgsQ0FBQyxDQUFDLDZCQUE2QixDQUFDLEVBQUUsYUFBYSxDQUFDLFlBQVksRUFBRSxrQkFBa0IsQ0FBQyxDQUFDO0FBQ2xGLENBQUMsQ0FBQyw2QkFBNkIsQ0FBQyxFQUFFLGFBQWEsQ0FBQyxZQUFZLEVBQUUsa0JBQWtCLENBQUMsQ0FBQyJ9