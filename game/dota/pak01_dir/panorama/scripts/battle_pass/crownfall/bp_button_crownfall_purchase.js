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
    //$.Msg( "OnStoreItemFocusChanged( " + bFocused + " )" )
    var button = $.GetContextPanel();
    if (bFocused && button.isDiscountModeActive) {
        DoDiscountAnimation();
    }
}
function OnDiscountModeActiveChanged(bActive) {
    ResetPriceCutFX();
    //$.Msg( "OnDiscountModeActiveChanged( " + bActive + " )" )
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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiYnBfYnV0dG9uX2Nyb3duZmFsbF9wdXJjaGFzZS5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbIi4uLy4uLy4uLy4uLy4uLy4uL2NvbnRlbnQvZG90YS9wYW5vcmFtYS9zY3JpcHRzL2JhdHRsZV9wYXNzL2Nyb3duZmFsbC9icF9idXR0b25fY3Jvd25mYWxsX3B1cmNoYXNlLnRzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiI7QUFBQSx3Q0FBd0M7QUFDeEMsOENBQThDO0FBQzlDLHVEQUF1RDtBQUV2RCxJQUFJLEtBQUssQ0FBQztBQVFWLFNBQVMsZUFBZTtJQUVwQixJQUFJLFVBQVUsR0FBNEIsQ0FBQyxDQUFFLGtCQUFrQixDQUFFLENBQUM7SUFDbEUsSUFBSSxpQkFBaUIsR0FBNEIsQ0FBQyxDQUFFLDJCQUEyQixDQUFFLENBQUM7SUFDbEYsSUFBSSxrQkFBa0IsR0FBNEIsQ0FBQyxDQUFFLDRCQUE0QixDQUFFLENBQUM7SUFDcEYsSUFBSSxnQkFBZ0IsR0FBNEIsQ0FBQyxDQUFFLGNBQWMsQ0FBRSxDQUFDO0lBRXBFLFVBQVUsQ0FBQyx3QkFBd0IsQ0FBRSxJQUFJLENBQUUsQ0FBQztJQUM1QyxpQkFBaUIsQ0FBQyxXQUFXLENBQUUsb0JBQW9CLENBQUMsQ0FBQztJQUNyRCxrQkFBa0IsQ0FBQyxXQUFXLENBQUUsb0JBQW9CLENBQUMsQ0FBQztJQUN0RCxnQkFBZ0IsQ0FBQyxXQUFXLENBQUUsb0JBQW9CLENBQUMsQ0FBQztJQUNwRCxVQUFVLENBQUMsV0FBVyxDQUFFLG9CQUFvQixDQUFDLENBQUM7QUFDbEQsQ0FBQztBQUVELFNBQVMsdUJBQXVCLENBQUUsUUFBaUI7SUFFL0MsZUFBZSxFQUFFLENBQUM7SUFFbEIsd0RBQXdEO0lBQ3hELElBQUksTUFBTSxHQUFrQyxDQUFDLENBQUMsZUFBZSxFQUFFLENBQUM7SUFDaEUsSUFBSyxRQUFRLElBQUksTUFBTSxDQUFDLG9CQUFvQixFQUM1QztRQUNJLG1CQUFtQixFQUFFLENBQUM7S0FDekI7QUFDTCxDQUFDO0FBRUQsU0FBUywyQkFBMkIsQ0FBRSxPQUFnQjtJQUVsRCxlQUFlLEVBQUUsQ0FBQztJQUVsQiwyREFBMkQ7SUFDM0QsSUFBSSxNQUFNLEdBQWtDLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQztJQUNoRSxJQUFLLE9BQU8sSUFBSSxNQUFNLENBQUMsa0JBQWtCLEVBQ3pDO1FBQ0ksbUJBQW1CLEVBQUUsQ0FBQztLQUN6QjtBQUNMLENBQUM7QUFFRCxTQUFTLG1CQUFtQjtJQUV4QixJQUFJLE1BQU0sR0FBa0MsQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDO0lBQ2hFLElBQUssQ0FBQyxNQUFNLENBQUMsU0FBUyxDQUFFLGtCQUFrQixDQUFFO1FBQ3hDLE9BQU87SUFFWCxJQUFJLFVBQVUsR0FBNEIsQ0FBQyxDQUFFLGtCQUFrQixDQUFFLENBQUM7SUFDbEUsSUFBSSxpQkFBaUIsR0FBNEIsQ0FBQyxDQUFFLDJCQUEyQixDQUFFLENBQUM7SUFDbEYsSUFBSSxrQkFBa0IsR0FBNEIsQ0FBQyxDQUFFLDRCQUE0QixDQUFFLENBQUM7SUFDcEYsSUFBSSxnQkFBZ0IsR0FBNEIsQ0FBQyxDQUFFLGNBQWMsQ0FBRSxDQUFDO0lBRWhFLEtBQUssR0FBRyxJQUFJLG9CQUFvQixFQUFFLENBQUM7SUFDbkMsS0FBSyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxVQUFVLENBQUUsR0FBRyxDQUFFLENBQUUsQ0FBQztJQUM1QyxLQUFLLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGlCQUFpQixDQUFFO1FBRXZDLFVBQVUsQ0FBQyx3QkFBd0IsQ0FBRSxJQUFJLENBQUUsQ0FBQztRQUM1QyxVQUFVLENBQUMsY0FBYyxFQUFFLENBQUM7SUFDaEMsQ0FBQyxDQUFDLENBQUMsQ0FBQztJQUNKLEtBQUssQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksZUFBZSxDQUFFLGdDQUFnQyxDQUFFLENBQUUsQ0FBQztJQUM5RSxLQUFLLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLFVBQVUsQ0FBRSxHQUFHLENBQUUsQ0FBRSxDQUFDO0lBQzVDLEtBQUssQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksY0FBYyxDQUFFLGlCQUFpQixFQUFFLG9CQUFvQixDQUFFLENBQUUsQ0FBQztJQUNwRixLQUFLLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGNBQWMsQ0FBRSxrQkFBa0IsRUFBRSxvQkFBb0IsQ0FBRSxDQUFFLENBQUM7SUFDckYsS0FBSyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxjQUFjLENBQUUsZ0JBQWdCLEVBQUUsb0JBQW9CLENBQUUsQ0FBRSxDQUFDO0lBQ25GLEtBQUssQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksY0FBYyxDQUFFLFVBQVUsRUFBRSxvQkFBb0IsQ0FBRSxDQUFFLENBQUM7SUFFN0UsZUFBZSxDQUFFLEtBQUssQ0FBRSxDQUFDO0FBQ2pDLENBQUMifQ==