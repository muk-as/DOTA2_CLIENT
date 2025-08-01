/// <reference path="../../dota.d.ts" />
/// <reference path="../../common/async.ts" />
/// <reference path="../../dota_sequence_actions.ts" />

var g_seq;
declare interface DOTACrownfallPurchaseButton_t extends Panel_t
{
    isDiscountModeActive: boolean;
    isStoreItemFocused: boolean;
}


function ResetPriceCutFX()
{
    var scenePanel:DOTAParticleScenePanel_t = $( '#PurchaseSlashFX' );
    var defaultPricePanel:DOTAParticleScenePanel_t = $( '#DefaultPriceCutContainer' );
    var discountPricePanel:DOTAParticleScenePanel_t = $( '#DiscountPriceCutContainer' );
    var priceInfoIDPanel:DOTAParticleScenePanel_t = $( '#PriceInfoID' );

    scenePanel.StopParticlesImmediately( true );
    defaultPricePanel.RemoveClass( 'CutPriceTransition');
    discountPricePanel.RemoveClass( 'CutPriceTransition');
    priceInfoIDPanel.RemoveClass( 'CutPriceTransition');
    scenePanel.RemoveClass( 'CutPriceTransition');
}

function OnStoreItemFocusChanged( bFocused: boolean ): void
{
    ResetPriceCutFX();

                                                            
    var button: DOTACrownfallPurchaseButton_t = $.GetContextPanel();
    if ( bFocused && button.isDiscountModeActive )
    {
        DoDiscountAnimation();
    }
}

function OnDiscountModeActiveChanged( bActive: boolean ): void
{
    ResetPriceCutFX();

                                                               
    var button: DOTACrownfallPurchaseButton_t = $.GetContextPanel();
    if ( bActive && button.isStoreItemFocused )
    {
        DoDiscountAnimation();
    }
}

function DoDiscountAnimation()
{
    var button: DOTACrownfallPurchaseButton_t = $.GetContextPanel();
    if ( !button.BHasClass( 'HasDiscountPrice' ) )
        return;

    var scenePanel:DOTAParticleScenePanel_t = $( '#PurchaseSlashFX' );
    var defaultPricePanel:DOTAParticleScenePanel_t = $( '#DefaultPriceCutContainer' );
    var discountPricePanel:DOTAParticleScenePanel_t = $( '#DiscountPriceCutContainer' );
    var priceInfoIDPanel:DOTAParticleScenePanel_t = $( '#PriceInfoID' );

        g_seq = new RunSequentialActions();
        g_seq.actions.push( new WaitAction( 1.0 ) );
        g_seq.actions.push( new RunFunctionAction( function() 
        {
            scenePanel.StopParticlesImmediately( true );
            scenePanel.StartParticles();
        }));
        g_seq.actions.push( new PlaySoundAction( "Hero_PhantomAssassin.PreAttack" ) );
        g_seq.actions.push( new WaitAction( 0.1 ) );
        g_seq.actions.push( new AddClassAction( defaultPricePanel, 'CutPriceTransition' ) );
        g_seq.actions.push( new AddClassAction( discountPricePanel, 'CutPriceTransition' ) );
        g_seq.actions.push( new AddClassAction( priceInfoIDPanel, 'CutPriceTransition' ) );
        g_seq.actions.push( new AddClassAction( scenePanel, 'CutPriceTransition' ) );
        
        RunSingleAction( g_seq );
}