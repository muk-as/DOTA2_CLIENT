var UpdateAfterPurchaseLevels = function()
{
	var nCurrentLevel = $.GetContextPanel().GetAttributeInt( "current_level", 0 );
	var nCurrentEvent = $.GetContextPanel().GetAttributeInt( "current_event", 0 );
	var nPurchasedLevelAmount = $( '#LevelsTable' ).totalLevels;
	$( '#AfterPurchaseLevelShield' ).SetEventLevel( nCurrentEvent, nCurrentLevel + nPurchasedLevelAmount );
	$( '#PurchaseButton' ).enabled = nPurchasedLevelAmount > 0;
	$.GetContextPanel().SetHasClass( 'ShowAfterPurchaseLevel', nPurchasedLevelAmount > 0 );
}

var UpdateActivateLevelsNextButton = function()
{
	var bApplyLevels = $( '#ApplyLevelsButton' ).checked;
	$( '#ApplyLevelsNextButton' ).text = bApplyLevels ? $.Localize( "#DOTA_ActivateLevels" ) : $.Localize( "#DOTA_SaveForLater" );;
}

var OnActivateLevelsNextButton = function()
{
	var bApplyLevels = $( '#ApplyLevelsButton' ).checked;
	if ( bApplyLevels )
	{
		$.DispatchEvent( 'DOTAPurchaseBattlePassLevelsApplyLevels' );
	}
	else
	{
		$.DispatchEvent( 'DOTAPurchaseBattlePassLevelsClose' );
	}
}

$.Schedule( 0.0, function()
{
	$.RegisterEventHandler( 'DOTAPurchaseEventLevelsTableQuantityChanged', $( '#LevelsTable' ), function( table ) { UpdateAfterPurchaseLevels(); } );

	UpdateAfterPurchaseLevels();
	UpdateActivateLevelsNextButton();
});