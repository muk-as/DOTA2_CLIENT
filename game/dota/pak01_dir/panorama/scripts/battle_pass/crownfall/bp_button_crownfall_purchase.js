"use strict";
/// <reference path="../../dota.d.ts" />
/// <reference path="../../common/async.ts" />
/// <reference path="../../dota_sequence_actions.ts" />
var g_seq;
function ResetPriceCutFX() {
    var scenePanel = $('#PurchaseSlashFX');
    var defaultPricePanel = $('#DefaultPriceCutContainer');
    var discountPricePanel = $('#DiscountPriceCutContainer');
    var priceInfoIDPanel = $('#PriceInfoID');
    scenePanel.StopParticlesImmediately(true);
    defaultPricePanel.RemoveClass('CutPriceTransition');
    discountPricePanel.RemoveClass('CutPriceTransition');
    priceInfoIDPanel.RemoveClass('CutPriceTransition');
    scenePanel.RemoveClass('CutPriceTransition');
}
function OnStoreItemFocusChanged(bFocused) {
    ResetPriceCutFX();
    var button = $.GetContextPanel();
    if (bFocused && button.isDiscountModeActive) {
        DoDiscountAnimation();
    }
}
function OnDiscountModeActiveChanged(bActive) {
    ResetPriceCutFX();
    var button = $.GetContextPanel();
    if (bActive && button.isStoreItemFocused) {
        DoDiscountAnimation();
    }
}
function DoDiscountAnimation() {
    var button = $.GetContextPanel();
    if (!button.BHasClass('HasDiscountPrice'))
        return;
    var scenePanel = $('#PurchaseSlashFX');
    var defaultPricePanel = $('#DefaultPriceCutContainer');
    var discountPricePanel = $('#DiscountPriceCutContainer');
    var priceInfoIDPanel = $('#PriceInfoID');
    g_seq = new RunSequentialActions();
    g_seq.actions.push(new WaitAction(1.0));
    g_seq.actions.push(new RunFunctionAction(function () {
        scenePanel.StopParticlesImmediately(true);
        scenePanel.StartParticles();
    }));
    g_seq.actions.push(new PlaySoundAction("Hero_PhantomAssassin.PreAttack"));
    g_seq.actions.push(new WaitAction(0.1));
    g_seq.actions.push(new AddClassAction(defaultPricePanel, 'CutPriceTransition'));
    g_seq.actions.push(new AddClassAction(discountPricePanel, 'CutPriceTransition'));
    g_seq.actions.push(new AddClassAction(priceInfoIDPanel, 'CutPriceTransition'));
    g_seq.actions.push(new AddClassAction(scenePanel, 'CutPriceTransition'));
    RunSingleAction(g_seq);
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiYnBfYnV0dG9uX2Nyb3duZmFsbF9wdXJjaGFzZS5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbIi4uLy4uLy4uLy4uLy4uLy4uL2NvbnRlbnQvZG90YS9wYW5vcmFtYS9zY3JpcHRzL2JhdHRsZV9wYXNzL2Nyb3duZmFsbC9icF9idXR0b25fY3Jvd25mYWxsX3B1cmNoYXNlLnRzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiI7QUFBQSx3Q0FBd0M7QUFDeEMsOENBQThDO0FBQzlDLHVEQUF1RDtBQUV2RCxJQUFJLEtBQUssQ0FBQztBQVFWLFNBQVMsZUFBZTtJQUVwQixJQUFJLFVBQVUsR0FBNEIsQ0FBQyxDQUFFLGtCQUFrQixDQUFFLENBQUM7SUFDbEUsSUFBSSxpQkFBaUIsR0FBNEIsQ0FBQyxDQUFFLDJCQUEyQixDQUFFLENBQUM7SUFDbEYsSUFBSSxrQkFBa0IsR0FBNEIsQ0FBQyxDQUFFLDRCQUE0QixDQUFFLENBQUM7SUFDcEYsSUFBSSxnQkFBZ0IsR0FBNEIsQ0FBQyxDQUFFLGNBQWMsQ0FBRSxDQUFDO0lBRXBFLFVBQVUsQ0FBQyx3QkFBd0IsQ0FBRSxJQUFJLENBQUUsQ0FBQztJQUM1QyxpQkFBaUIsQ0FBQyxXQUFXLENBQUUsb0JBQW9CLENBQUMsQ0FBQztJQUNyRCxrQkFBa0IsQ0FBQyxXQUFXLENBQUUsb0JBQW9CLENBQUMsQ0FBQztJQUN0RCxnQkFBZ0IsQ0FBQyxXQUFXLENBQUUsb0JBQW9CLENBQUMsQ0FBQztJQUNwRCxVQUFVLENBQUMsV0FBVyxDQUFFLG9CQUFvQixDQUFDLENBQUM7QUFDbEQsQ0FBQztBQUVELFNBQVMsdUJBQXVCLENBQUUsUUFBaUI7SUFFL0MsZUFBZSxFQUFFLENBQUM7SUFHbEIsSUFBSSxNQUFNLEdBQWtDLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQztJQUNoRSxJQUFLLFFBQVEsSUFBSSxNQUFNLENBQUMsb0JBQW9CLEVBQzVDO1FBQ0ksbUJBQW1CLEVBQUUsQ0FBQztLQUN6QjtBQUNMLENBQUM7QUFFRCxTQUFTLDJCQUEyQixDQUFFLE9BQWdCO0lBRWxELGVBQWUsRUFBRSxDQUFDO0lBR2xCLElBQUksTUFBTSxHQUFrQyxDQUFDLENBQUMsZUFBZSxFQUFFLENBQUM7SUFDaEUsSUFBSyxPQUFPLElBQUksTUFBTSxDQUFDLGtCQUFrQixFQUN6QztRQUNJLG1CQUFtQixFQUFFLENBQUM7S0FDekI7QUFDTCxDQUFDO0FBRUQsU0FBUyxtQkFBbUI7SUFFeEIsSUFBSSxNQUFNLEdBQWtDLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQztJQUNoRSxJQUFLLENBQUMsTUFBTSxDQUFDLFNBQVMsQ0FBRSxrQkFBa0IsQ0FBRTtRQUN4QyxPQUFPO0lBRVgsSUFBSSxVQUFVLEdBQTRCLENBQUMsQ0FBRSxrQkFBa0IsQ0FBRSxDQUFDO0lBQ2xFLElBQUksaUJBQWlCLEdBQTRCLENBQUMsQ0FBRSwyQkFBMkIsQ0FBRSxDQUFDO0lBQ2xGLElBQUksa0JBQWtCLEdBQTRCLENBQUMsQ0FBRSw0QkFBNEIsQ0FBRSxDQUFDO0lBQ3BGLElBQUksZ0JBQWdCLEdBQTRCLENBQUMsQ0FBRSxjQUFjLENBQUUsQ0FBQztJQUVoRSxLQUFLLEdBQUcsSUFBSSxvQkFBb0IsRUFBRSxDQUFDO0lBQ25DLEtBQUssQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksVUFBVSxDQUFFLEdBQUcsQ0FBRSxDQUFFLENBQUM7SUFDNUMsS0FBSyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxpQkFBaUIsQ0FBRTtRQUV2QyxVQUFVLENBQUMsd0JBQXdCLENBQUUsSUFBSSxDQUFFLENBQUM7UUFDNUMsVUFBVSxDQUFDLGNBQWMsRUFBRSxDQUFDO0lBQ2hDLENBQUMsQ0FBQyxDQUFDLENBQUM7SUFDSixLQUFLLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGVBQWUsQ0FBRSxnQ0FBZ0MsQ0FBRSxDQUFFLENBQUM7SUFDOUUsS0FBSyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxVQUFVLENBQUUsR0FBRyxDQUFFLENBQUUsQ0FBQztJQUM1QyxLQUFLLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGNBQWMsQ0FBRSxpQkFBaUIsRUFBRSxvQkFBb0IsQ0FBRSxDQUFFLENBQUM7SUFDcEYsS0FBSyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxjQUFjLENBQUUsa0JBQWtCLEVBQUUsb0JBQW9CLENBQUUsQ0FBRSxDQUFDO0lBQ3JGLEtBQUssQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksY0FBYyxDQUFFLGdCQUFnQixFQUFFLG9CQUFvQixDQUFFLENBQUUsQ0FBQztJQUNuRixLQUFLLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGNBQWMsQ0FBRSxVQUFVLEVBQUUsb0JBQW9CLENBQUUsQ0FBRSxDQUFDO0lBRTdFLGVBQWUsQ0FBRSxLQUFLLENBQUUsQ0FBQztBQUNqQyxDQUFDIn0=