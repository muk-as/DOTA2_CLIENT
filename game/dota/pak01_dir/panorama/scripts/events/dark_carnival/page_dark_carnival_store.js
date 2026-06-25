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
        var purchaseButtons = FindChildrenOfTypeTraverse(storeItem, "DOTADarkCarnivalPurchaseButton");
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
        StopUISoundEvent(g_nDiscoSoundGuid);
        g_nDiscoSoundGuid = 0;
    }
    const pScene = $('#DiscountModePageFX');
    const pSceneForeground = $('#DiscountModePageFXForeground');
    if (bActive) {
        $.GetContextPanel().AddClass('DiscountActive');
        // pScene.FireEntityInput( "background_fx", "Start", "1" );
        pSceneForeground.FireEntityInput("foreground_fx", "Start", "1");
        g_nDiscoSoundGuid = PlayUISoundEvent('crownfall_store_disco');
        {
            let econPreview = $("#MainPageBristleback");
            let scenePanel = econPreview?.FindChildTraverse("Preview3DItems");
            scenePanel.FireEntityInput('hero', 'SetActivity', 'ACT_DOTA_VICTORY');
        }
        {
            let econPreview = $("#MainPageAxe");
            let scenePanel = econPreview?.FindChildTraverse("Preview3DItems");
            scenePanel.FireEntityInput('hero', 'SetActivity', 'ACT_DOTA_VICTORY');
        }
        {
            let econPreview = $("#MainPageMorphling");
            let scenePanel = econPreview?.FindChildTraverse("Preview3DItems");
            scenePanel.FireEntityInput('hero', 'SetActivity', 'ACT_DOTA_VICTORY');
        }
        {
            let econPreview = $("#MainPageLegionCommander");
            let scenePanel = econPreview?.FindChildTraverse("Preview3DItems");
            scenePanel.FireEntityInput('hero', 'SetActivity', 'ACT_DOTA_VICTORY');
        }
        {
            let econPreview = $("#MainPageOracle");
            let scenePanel = econPreview?.FindChildTraverse("Preview3DItems");
            scenePanel.FireEntityInput('hero', 'SetActivity', 'ACT_DOTA_VICTORY');
        }
    }
    else {
        $.GetContextPanel().RemoveClass('DiscountActive');
        // pScene.FireEntityInput( "background_fx", "StopPlayEndCap", "1" );
        pSceneForeground.FireEntityInput("foreground_fx", "StopPlayEndCap", "1");
        {
            let econPreview = $("#MainPageBristleback");
            let scenePanel = econPreview?.FindChildTraverse("Preview3DItems");
            scenePanel.FireEntityInput('hero', 'SetActivity', 'ACT_DOTA_LOADOUT');
        }
        {
            let econPreview = $("#MainPageAxe");
            let scenePanel = econPreview?.FindChildTraverse("Preview3DItems");
            scenePanel.FireEntityInput('hero', 'SetActivity', 'ACT_DOTA_LOADOUT');
        }
        {
            let econPreview = $("#MainPageMorphling");
            let scenePanel = econPreview?.FindChildTraverse("Preview3DItems");
            scenePanel.FireEntityInput('hero', 'SetActivity', 'ACT_DOTA_LOADOUT');
        }
        {
            let econPreview = $("#MainPageLegionCommander");
            let scenePanel = econPreview?.FindChildTraverse("Preview3DItems");
            scenePanel.FireEntityInput('hero', 'SetActivity', 'ACT_DOTA_LOADOUT');
        }
        {
            let econPreview = $("#MainPageOracle");
            let scenePanel = econPreview?.FindChildTraverse("Preview3DItems");
            scenePanel.FireEntityInput('hero', 'SetActivity', 'ACT_DOTA_LOADOUT');
        }
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
var SetupTreasurePreview_Cache = function () {
    const pScene = $('#TreasurePreview_Cache');
    //pScene.FireEntityInput( 'hero_antimage', 'SetPlaybackRateOnAllLayers', 0.3 );
    //pScene.FireEntityInput( 'hero_phantom_lancer', 'SetPlaybackRateOnAllLayers', 0.7 );
    //pScene.FireEntityInput( 'hero_oracle', 'SetPlaybackRateOnAllLayers', 0.4 );
};
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoicGFnZV9kYXJrX2Nhcm5pdmFsX3N0b3JlLmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsiLi4vLi4vLi4vLi4vLi4vLi4vY29udGVudC9kb3RhL3Bhbm9yYW1hL3NjcmlwdHMvZXZlbnRzL2RhcmtfY2Fybml2YWwvcGFnZV9kYXJrX2Nhcm5pdmFsX3N0b3JlLnRzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiI7QUFBQSx3Q0FBd0M7QUFDeEMsOENBQThDO0FBUTlDLFNBQVMsMEJBQTBCLENBQUUsTUFBZSxFQUFFLFNBQWlCO0lBRW5FLElBQUksUUFBUSxHQUFtQixFQUFFLENBQUM7SUFFbEMsS0FBTSxJQUFJLENBQUMsR0FBRyxDQUFDLEVBQUUsQ0FBQyxHQUFHLE1BQU0sQ0FBQyxhQUFhLEVBQUUsRUFBRSxFQUFFLENBQUMsRUFDaEQ7UUFDSSxJQUFJLEtBQUssR0FBWSxNQUFNLENBQUMsUUFBUSxDQUFFLENBQUMsQ0FBRSxDQUFDO1FBRTFDLElBQUssS0FBSyxDQUFDLFNBQVMsSUFBSSxTQUFTLEVBQ2pDO1lBQ0ksUUFBUSxDQUFDLElBQUksQ0FBRSxLQUFLLENBQUUsQ0FBQztTQUMxQjtRQUVELFFBQVEsQ0FBQyxJQUFJLENBQUUsR0FBRywwQkFBMEIsQ0FBRSxLQUFLLEVBQUUsU0FBUyxDQUFFLENBQUUsQ0FBQztLQUN0RTtJQUVELE9BQU8sUUFBUSxDQUFDO0FBQ3BCLENBQUM7QUFFRCxTQUFTLHFCQUFxQjtJQUUxQixNQUFNLFFBQVEsR0FBZSxDQUFDLENBQUUsZ0JBQWdCLENBQUUsQ0FBQztJQUNuRCxNQUFNLFFBQVEsR0FBWSxRQUFRLENBQUMsYUFBYSxFQUFFLENBQUM7SUFFbkQsSUFBSSxTQUFTLEdBQVcsUUFBUSxDQUFDLGFBQWEsRUFBRSxDQUFDO0lBQ2pELEtBQU0sSUFBSSxDQUFDLEdBQVcsQ0FBQyxFQUFFLENBQUMsR0FBRyxTQUFTLEVBQUUsRUFBRSxDQUFDLEVBQzNDO1FBQ0ksSUFBSSxTQUFTLEdBQVksUUFBUSxDQUFDLFFBQVEs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