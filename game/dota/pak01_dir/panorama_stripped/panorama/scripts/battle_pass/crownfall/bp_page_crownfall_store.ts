/// <reference path="../../dota.d.ts" />
/// <reference path="../../common/async.ts" />

declare interface DOTACrownfallPurchaseButton_t extends Panel_t
{
    isDiscountModeActive: boolean;
    isStoreItemFocused: boolean;
}

function FindChildrenOfTypeTraverse( parent: Panel_t, panelType: string ) : Array< Panel_t >
{
    var children: Array<Panel_t> = [];

    for ( var i = 0; i < parent.GetChildCount(); ++i )
    {
        var child: Panel_t = parent.GetChild( i );

        if ( child.paneltype == panelType )
        {
            children.push( child );
        }

        children.push( ...FindChildrenOfTypeTraverse( child, panelType ) );
    }

    return children;
}


function OnSelectedItemChanged(): void
{
    const carousel: Carousel_t = $( '#StoreCarousel' );
    const selected: Panel_t = carousel.GetFocusChild();

    var nChildren: number = carousel.GetChildCount();
    for ( var i: number = 0; i < nChildren; ++i )
    {
        var storeItem: Panel_t = carousel.GetChild( i );

        var purchaseButtons: Array<Panel_t> = FindChildrenOfTypeTraverse( storeItem, "DOTACrownfallPurchaseButton" );
        for ( var button of purchaseButtons )
        {
            const purchaseButton: DOTACrownfallPurchaseButton_t = button as DOTACrownfallPurchaseButton_t;
            purchaseButton.isStoreItemFocused = ( storeItem == selected );
        }
    }
}

function OnPageLoad(): void
{
    const carousel: Carousel_t = $( '#StoreCarousel' );
    $.RegisterEventHandler( 'SetCarouselSelectedChild', carousel, OnSelectedItemChanged );
}


var g_nDiscoSoundGuid : number = 0;

                  
function SetDiscountModeActive( bActive: boolean ): void
{
    if ( g_nDiscoSoundGuid )
    {
        StopUISoundScript( g_nDiscoSoundGuid );
        g_nDiscoSoundGuid = 0;
    }

    const pScene = $( '#DiscountModePageFX' ) as DOTAScenePanel_t;
    const pSceneForeground = $( '#DiscountModePageFXForeground' ) as DOTAScenePanel_t;
    if ( bActive )
    {
        $.GetContextPanel().AddClass( 'DiscountActive' );
        pScene.FireEntityInput( "background_fx", "Start", "1" );
        pSceneForeground.FireEntityInput( "foreground_fx", "Start", "1" );
        g_nDiscoSoundGuid = PlayUISoundScript( 'crownfall_store_disco' );
    }
    else
    {
        $.GetContextPanel().RemoveClass( 'DiscountActive' );
        pScene.FireEntityInput( "background_fx", "StopPlayEndCap", "1" );
        pSceneForeground.FireEntityInput( "foreground_fx", "StopPlayEndCap", "1" );
    }
}


var SetupTreasurePreview_I = function ()
{
    const pScene = $( '#TreasurePreview_I' ) as DOTAScenePanel_t;

    pScene.FireEntityInput( 'hero_cm', 'SetPlaybackRateOnAllLayers', 0.8 );
    pScene.FireEntityInput( 'hero_wk', 'SetPlaybackRateOnAllLayers', 0.8 );
    pScene.FireEntityInput( 'hero_meepo', 'SetPlaybackRateOnAllLayers', 0.7 );

};

var SetupTreasurePreview_II = function ()
{
    const pScene = $( '#TreasurePreview_II' ) as DOTAScenePanel_t;

    pScene.FireEntityInput( 'hero_ursa', 'SetPlaybackRateOnAllLayers', 0.3 );
    pScene.FireEntityInput( 'hero_drow', 'SetPlaybackRateOnAllLayers', 0.7 );
    pScene.FireEntityInput( 'hero_hoodwink', 'SetPlaybackRateOnAllLayers', 0.4 );
};

var SetupTreasurePreview_III = function ()
{
    const pScene = $( '#TreasurePreview_III' ) as DOTAScenePanel_t;

    pScene.FireEntityInput( 'hero_antimage', 'SetPlaybackRateOnAllLayers', 0.3 );
    pScene.FireEntityInput( 'hero_phantom_lancer', 'SetPlaybackRateOnAllLayers', 0.7 );
    pScene.FireEntityInput( 'hero_oracle', 'SetPlaybackRateOnAllLayers', 0.4 );
};
var SetupTreasurePreview_Cache = function ()
{
    const pScene = $( '#TreasurePreview_Cache' ) as DOTAScenePanel_t;

                                                                                   
                                                                                         
                                                                                 
};
