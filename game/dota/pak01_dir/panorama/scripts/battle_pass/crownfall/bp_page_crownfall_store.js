"use strict";
/// <reference path="../../dota.d.ts" />
/// <reference path="../../common/async.ts" />
function FindChildrenOfTypeTraverse(parent, panelType) {
    var children = [];
    for (var i = 0; i < parent.GetChildCount(); ++i) {
        var child = parent.GetChild(i);
        if (child.paneltype == panelType) {
            children.push(child);
        }
        children.push(...FindChildrenOfTypeTraverse(child, panelType));
    }
    return children;
}
function OnSelectedItemChanged() {
    const carousel = $('#StoreCarousel');
    const selected = carousel.GetFocusChild();
    var nChildren = carousel.GetChildCount();
    for (var i = 0; i < nChildren; ++i) {
        var storeItem = carousel.GetChild(i);
        var purchaseButtons = FindChildrenOfTypeTraverse(storeItem, "DOTACrownfallPurchaseButton");
        for (var button of purchaseButtons) {
            const purchaseButton = button;
            purchaseButton.isStoreItemFocused = (storeItem == selected);
        }
    }
}
function OnPageLoad() {
    const carousel = $('#StoreCarousel');
    $.RegisterEventHandler('SetCarouselSelectedChild', carousel, OnSelectedItemChanged);
}
// Called from C++
function SetDiscountModeActive(bActive) {
    const pScene = $('#DiscountModePageFX');
    const pSceneForeground = $('#DiscountModePageFXForeground');
    if (bActive) {
        $.GetContextPanel().AddClass('DiscountActive');
        pScene.FireEntityInput("background_fx", "Start", "1");
        pSceneForeground.FireEntityInput("foreground_fx", "Start", "1");
        PlayUISoundScript('Hero_Leshrac.PartyOn');
        // todo(ericl): play looping music? do crazy animation?
    }
    else {
        $.GetContextPanel().RemoveClass('DiscountActive');
        pScene.FireEntityInput("background_fx", "StopPlayEndCap", "1");
        pSceneForeground.FireEntityInput("foreground_fx", "StopPlayEndCap", "1");
    }
}
var RunPageAnimation = function () {
    const pScene = $('#TreasurePreview');
    pScene.FireEntityInput('hero_cm', 'SetPlaybackRateOnAllLayers', 0.8);
    pScene.FireEntityInput('hero_wk', 'SetPlaybackRateOnAllLayers', 0.8);
    pScene.FireEntityInput('hero_meepo', 'SetPlaybackRateOnAllLayers', 0.7);
};
var RunPageAnimationii = function () {
    const pScene = $('#TreasurePreviewii');
    pScene.FireEntityInput('hero_ursa', 'SetPlaybackRateOnAllLayers', 0.3);
    pScene.FireEntityInput('hero_drow', 'SetPlaybackRateOnAllLayers', 0.7);
    pScene.FireEntityInput('hero_hoodwink', 'SetPlaybackRateOnAllLayers', 0.4);
};
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiYnBfcGFnZV9jcm93bmZhbGxfc3RvcmUuanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyIuLi8uLi8uLi8uLi8uLi8uLi9jb250ZW50L2RvdGEvcGFub3JhbWEvc2NyaXB0cy9iYXR0bGVfcGFzcy9jcm93bmZhbGwvYnBfcGFnZV9jcm93bmZhbGxfc3RvcmUudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IjtBQUFBLHdDQUF3QztBQUN4Qyw4Q0FBOEM7QUFROUMsU0FBUywwQkFBMEIsQ0FBRSxNQUFlLEVBQUUsU0FBaUI7SUFFbkUsSUFBSSxRQUFRLEdBQW1CLEVBQUUsQ0FBQztJQUVsQyxLQUFNLElBQUksQ0FBQyxHQUFHLENBQUMsRUFBRSxDQUFDLEdBQUcsTUFBTSxDQUFDLGFBQWEsRUFBRSxFQUFFLEVBQUUsQ0FBQyxFQUNoRDtRQUNJLElBQUksS0FBSyxHQUFZLE1BQU0sQ0FBQyxRQUFRLENBQUUsQ0FBQyxDQUFFLENBQUM7UUFFMUMsSUFBSyxLQUFLLENBQUMsU0FBUyxJQUFJLFNBQVMsRUFDakM7WUFDSSxRQUFRLENBQUMsSUFBSSxDQUFFLEtBQUssQ0FBRSxDQUFDO1NBQzFCO1FBRUQsUUFBUSxDQUFDLElBQUksQ0FBRSxHQUFHLDBCQUEwQixDQUFFLEtBQUssRUFBRSxTQUFTLENBQUUsQ0FBRSxDQUFDO0tBQ3RFO0lBRUQsT0FBTyxRQUFRLENBQUM7QUFDcEIsQ0FBQztBQUdELFNBQVMscUJBQXFCO0lBRTFCLE1BQU0sUUFBUSxHQUFlLENBQUMsQ0FBRSxnQkFBZ0IsQ0FBRSxDQUFDO0lBQ25ELE1BQU0sUUFBUSxHQUFZLFFBQVEsQ0FBQyxhQUFhLEVBQUUsQ0FBQztJQUVuRCxJQUFJLFNBQVMsR0FBVyxRQUFRLENBQUMsYUFBYSxFQUFFLENBQUM7SUFDakQsS0FBTSxJQUFJLENBQUMsR0FBVyxDQUFDLEVBQUUsQ0FBQyxHQUFHLFNBQVMsRUFBRSxFQUFFLENBQUMsRUFDM0M7UUFDSSxJQUFJLFNBQVMsR0FBWSxRQUFRLENBQUMsUUFBUSxD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