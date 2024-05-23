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
var g_nDiscoSoundGuid = 0;
// Called from C++
function SetDiscountModeActive(bActive) {
    if (g_nDiscoSoundGuid) {
        StopUISoundScript(g_nDiscoSoundGuid);
        g_nDiscoSoundGuid = 0;
    }
    const pScene = $('#DiscountModePageFX');
    const pSceneForeground = $('#DiscountModePageFXForeground');
    if (bActive) {
        $.GetContextPanel().AddClass('DiscountActive');
        pScene.FireEntityInput("background_fx", "Start", "1");
        pSceneForeground.FireEntityInput("foreground_fx", "Start", "1");
        g_nDiscoSoundGuid = PlayUISoundScript('crownfall_store_disco');
    }
    else {
        $.GetContextPanel().RemoveClass('DiscountActive');
        pScene.FireEntityInput("background_fx", "StopPlayEndCap", "1");
        pSceneForeground.FireEntityInput("foreground_fx", "StopPlayEndCap", "1");
    }
}
var SetupTreasurePreview_I = function () {
    const pScene = $('#TreasurePreview_I');
    pScene.FireEntityInput('hero_cm', 'SetPlaybackRateOnAllLayers', 0.8);
    pScene.FireEntityInput('hero_wk', 'SetPlaybackRateOnAllLayers', 0.8);
    pScene.FireEntityInput('hero_meepo', 'SetPlaybackRateOnAllLayers', 0.7);
};
var SetupTreasurePreview_II = function () {
    const pScene = $('#TreasurePreview_II');
    pScene.FireEntityInput('hero_ursa', 'SetPlaybackRateOnAllLayers', 0.3);
    pScene.FireEntityInput('hero_drow', 'SetPlaybackRateOnAllLayers', 0.7);
    pScene.FireEntityInput('hero_hoodwink', 'SetPlaybackRateOnAllLayers', 0.4);
};
var SetupTreasurePreview_III = function () {
    const pScene = $('#TreasurePreview_III');
    pScene.FireEntityInput('hero_antimage', 'SetPlaybackRateOnAllLayers', 0.3);
    pScene.FireEntityInput('hero_phantom_lancer', 'SetPlaybackRateOnAllLayers', 0.7);
    pScene.FireEntityInput('hero_oracle', 'SetPlaybackRateOnAllLayers', 0.4);
};
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiYnBfcGFnZV9jcm93bmZhbGxfc3RvcmUuanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyIuLi8uLi8uLi8uLi8uLi8uLi9jb250ZW50L2RvdGEvcGFub3JhbWEvc2NyaXB0cy9iYXR0bGVfcGFzcy9jcm93bmZhbGwvYnBfcGFnZV9jcm93bmZhbGxfc3RvcmUudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IjtBQUFBLHdDQUF3QztBQUN4Qyw4Q0FBOEM7QUFROUMsU0FBUywwQkFBMEIsQ0FBRSxNQUFlLEVBQUUsU0FBaUI7SUFFbkUsSUFBSSxRQUFRLEdBQW1CLEVBQUUsQ0FBQztJQUVsQyxLQUFNLElBQUksQ0FBQyxHQUFHLENBQUMsRUFBRSxDQUFDLEdBQUcsTUFBTSxDQUFDLGFBQWEsRUFBRSxFQUFFLEVBQUUsQ0FBQyxFQUNoRDtRQUNJLElBQUksS0FBSyxHQUFZLE1BQU0sQ0FBQyxRQUFRLENBQUUsQ0FBQyxDQUFFLENBQUM7UUFFMUMsSUFBSyxLQUFLLENBQUMsU0FBUyxJQUFJLFNBQVMsRUFDakM7WUFDSSxRQUFRLENBQUMsSUFBSSxDQUFFLEtBQUssQ0FBRSxDQUFDO1NBQzFCO1FBRUQsUUFBUSxDQUFDLElBQUksQ0FBRSxHQUFHLDBCQUEwQixDQUFFLEtBQUssRUFBRSxTQUFTLENBQUUsQ0FBRSxDQUFDO0tBQ3RFO0lBRUQsT0FBTyxRQUFRLENBQUM7QUFDcEIsQ0FBQztBQUdELFNBQVMscUJBQXFCO0lBRTFCLE1BQU0sUUFBUSxHQUFlLENBQUMsQ0FBRSxnQkFBZ0IsQ0FBRSxDQUFDO0lBQ25ELE1BQU0sUUFBUSxHQUFZLFFBQVEsQ0FBQyxhQUFhLEVBQUUsQ0FBQztJQUVuRCxJQUFJLFNBQVMsR0FBVyxRQUFRLENBQUMsYUFBYSxFQUFFLENBQUM7SUFDakQsS0FBTSxJQUFJLENBQUMsR0FBVyxDQUFDLEVBQUUsQ0FBQyxHQUFHLFNBQVMsRUFBRSxFQUFFLENBQUMsRUFDM0M7UUFDSSxJQUFJLFNBQVMsR0FBWSxRQUFRLENBQUMsUUFBUSxD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