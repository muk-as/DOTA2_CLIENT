function OnWraithKingStateUpdated()
{
	$.GetContextPanel().SetHasClass( "WKArcanaHasClaimableHeroes", WKArcanaGetNumUnclaimedHeroes() > 0 );
}

(function()
{
	$.GetContextPanel().SetHasClass( "WKArcanaHasClaimableHeroes", WKArcanaGetNumUnclaimedHeroes() > 0 );
	$.RegisterForUnhandledEvent( "DOTAWraithKingArcanaStateChanged", OnWraithKingStateUpdated );
})();