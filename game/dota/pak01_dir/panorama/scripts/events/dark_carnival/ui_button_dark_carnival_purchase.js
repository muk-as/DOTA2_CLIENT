"use strict";
/// <reference path="../../dota.d.ts" />
/// <reference path="../../common/async.ts" />
/// <reference path="../../dota_sequence_actions.ts" />
var g_seq;
function ResetPriceCutFX() {
    $.Msg("Reset price cut FX");
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
    $.Msg("OnStoreItemFocusChanged( " + bFocused + " )");
    var button = $.GetContextPanel();
    if (bFocused && button.isDiscountModeActive) {
        DoDiscountAnimation();
    }
}
function OnDiscountModeActiveChanged(bActive) {
    ResetPriceCutFX();
    $.Msg("OnDiscountModeActiveChanged( " + bActive + " )");
    var button = $.GetContextPanel();
    if (bActive && button.isStoreItemFocused) {
        DoDiscountAnimation();
    }
}
function DoDiscountAnimation() {
    $.Msg("DoDiscountAnimation");
    var button = $.GetContextPanel();
    if (!button.BHasClass('HasDiscountPrice'))
        return;
    var scenePanel = $('#PurchaseSlashFX');
    var defaultPricePanel = $('#DefaultPriceCutContainer');
    var discountPricePanel = $('#DiscountPriceCutContainer');
    var priceInfoIDPanel = $('#PriceInfoID');
    g_seq = new RunSequentialActions();
    g_seq.actions.push(new WaitAction(0.3));
    // g_seq.actions.push( new RunFunctionAction( function() 
    // {
    //     // scenePanel.StopParticlesImmediately( true );
    //     // scenePanel.StartParticles();
    // }));
    g_seq.actions.push(new PlaySoundAction("Hero_PhantomAssassin.PreAttack"));
    g_seq.actions.push(new WaitAction(0.1));
    g_seq.actions.push(new AddClassAction(defaultPricePanel, 'CutPriceTransition'));
    g_seq.actions.push(new AddClassAction(discountPricePanel, 'CutPriceTransition'));
    g_seq.actions.push(new AddClassAction(priceInfoIDPanel, 'CutPriceTransition'));
    g_seq.actions.push(new AddClassAction(scenePanel, 'CutPriceTransition'));
    RunSingleAction(g_seq);
    $.Msg("anim done");
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoidWlfYnV0dG9uX2RhcmtfY2Fybml2YWxfcHVyY2hhc2UuanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyIuLi8uLi8uLi8uLi8uLi8uLi9jb250ZW50L2RvdGEvcGFub3JhbWEvc2NyaXB0cy9ldmVudHMvZGFya19jYXJuaXZhbC91aV9idXR0b25fZGFya19jYXJuaXZhbF9wdXJjaGFzZS50cyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiO0FBQUEsd0NBQXdDO0FBQ3hDLDhDQUE4QztBQUM5Qyx1REFBdUQ7QUFFdkQsSUFBSSxLQUFLLENBQUM7QUFPVixTQUFTLGVBQWU7SUFFcEIsQ0FBQyxDQUFDLEdBQUcsQ0FBQyxvQkFBb0IsQ0FBQyxDQUFDO0lBQzVCLElBQUksVUFBVSxHQUE0QixDQUFDLENBQUUsa0JBQWtCLENBQUUsQ0FBQztJQUNsRSxJQUFJLGlCQUFpQixHQUE0QixDQUFDLENBQUUsMkJBQTJCLENBQUUsQ0FBQztJQUNsRixJQUFJLGtCQUFrQixHQUE0QixDQUFDLENBQUUsNEJBQTRCLENBQUUsQ0FBQztJQUNwRixJQUFJLGdCQUFnQixHQUE0QixDQUFDLENBQUUsY0FBYyxDQUFFLENBQUM7SUFFcEUsVUFBVSxDQUFDLHdCQUF3QixDQUFFLElBQUksQ0FBRSxDQUFDO0lBQzVDLGlCQUFpQixDQUFDLFdBQVcsQ0FBRSxvQkFBb0IsQ0FBQyxDQUFDO0lBQ3JELGtCQUFrQixDQUFDLFdBQVcsQ0FBRSxvQkFBb0IsQ0FBQyxDQUFDO0lBQ3RELGdCQUFnQixDQUFDLFdBQVcsQ0FBRSxvQkFBb0IsQ0FBQyxDQUFDO0lBQ3BELFVBQVUsQ0FBQyxXQUFXLENBQUUsb0JBQW9CLENBQUMsQ0FBQztBQUNsRCxDQUFDO0FBRUQsU0FBUyx1QkFBdUIsQ0FBRSxRQUFpQjtJQUUvQyxlQUFlLEVBQUUsQ0FBQztJQUVsQixDQUFDLENBQUMsR0FBRyxDQUFFLDJCQUEyQixHQUFHLFFBQVEsR0FBRyxJQUFJLENBQUUsQ0FBQTtJQUN0RCxJQUFJLE1BQU0sR0FBcUMsQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDO0lBQ25FLElBQUssUUFBUSxJQUFJLE1BQU0sQ0FBQyxvQkFBb0IsRUFDNUM7UUFDSSxtQkFBbUIsRUFBRSxDQUFDO0tBQ3pCO0FBQ0wsQ0FBQztBQUVELFNBQVMsMkJBQTJCLENBQUUsT0FBZ0I7SUFFbEQsZUFBZSxFQUFFLENBQUM7SUFFbEIsQ0FBQyxDQUFDLEdBQUcsQ0FBRSwrQkFBK0IsR0FBRyxPQUFPLEdBQUcsSUFBSSxDQUFFLENBQUE7SUFDekQsSUFBSSxNQUFNLEdBQXFDLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQztJQUNuRSxJQUFLLE9BQU8sSUFBSSxNQUFNLENBQUMsa0JBQWtCLEVBQ3pDO1FBQ0ksbUJBQW1CLEVBQUUsQ0FBQztLQUN6QjtBQUNMLENBQUM7QUFFRCxTQUFTLG1CQUFtQjtJQUV4QixDQUFDLENBQUMsR0FBRyxDQUFDLHFCQUFxQixDQUFDLENBQUE7SUFDNUIsSUFBSSxNQUFNLEdBQXFDLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQztJQUNuRSxJQUFLLENBQUMsTUFBTSxDQUFDLFNBQVMsQ0FBRSxrQkFBa0IsQ0FBRTtRQUN4QyxPQUFPO0lBRVgsSUFBSSxVQUFVLEdBQTRCLENBQUMsQ0FBRSxrQkFBa0IsQ0FBRSxDQUFDO0lBQ2xFLElBQUksaUJBQWlCLEdBQTRCLENBQUMsQ0FBRSwyQkFBMkIsQ0FBRSxDQUFDO0lBQ2xGLElBQUksa0JBQWtCLEdBQTRCLENBQUMsQ0FBRSw0QkFBNEIsQ0FBRSxDQUFDO0lBQ3BGLElBQUksZ0JBQWdCLEdBQTRCLENBQUMsQ0FBRSxjQUFjLENBQUUsQ0FBQztJQUVwRSxLQUFLLEdBQUcsSUFBSSxvQkFBb0IsRUFBRSxDQUFDO0lBQ25DLEtBQUssQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksVUFBVSxDQUFFLEdBQUcsQ0FBRSxDQUFFLENBQUM7SUFDNUMseURBQXlEO0lBQ3pELElBQUk7SUFDSixzREFBc0Q7SUFDdEQsc0NBQXNDO0lBQ3RDLE9BQU87SUFDUCxLQUFLLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGVBQWUsQ0FBRSxnQ0FBZ0MsQ0FBRSxDQUFFLENBQUM7SUFDOUUsS0FBSyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxVQUFVLENBQUUsR0FBRyxDQUFFLENBQUUsQ0FBQztJQUM1QyxLQUFLLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGNBQWMsQ0FBRSxpQkFBaUIsRUFBRSxvQkFBb0IsQ0FBRSxDQUFFLENBQUM7SUFDcEYsS0FBSyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxjQUFjLENBQUUsa0JBQWtCLEVBQUUsb0JBQW9CLENBQUUsQ0FBRSxDQUFDO0lBQ3JGLEtBQUssQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksY0FBYyxDQUFFLGdCQUFnQixFQUFFLG9CQUFvQixDQUFFLENBQUUsQ0FBQztJQUNuRixLQUFLLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGNBQWMsQ0FBRSxVQUFVLEVBQUUsb0JBQW9CLENBQUUsQ0FBRSxDQUFDO0lBRTdFLGVBQWUsQ0FBQyxLQUFLLENBQUMsQ0FBQztJQUV2QixDQUFDLENBQUMsR0FBRyxDQUFDLFdBQVcsQ0FBQyxDQUFBO0FBQ3RCLENBQUMifQ==