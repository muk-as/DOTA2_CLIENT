function OnWraithKingStateUpdated()
{
	$.GetContextPanel().SetHasClass( "HasClaimableHeroes", WKArcanaGetNumUnclaimedHeroes() > 0 );
}

(function()
{
	$.GetContextPanel().SetHasClass( "HasClaimableHeroes", WKArcanaGetNumUnclaimedHeroes() > 0 );
	$.RegisterForUnhandledEvent( "DOTAWraithKingArcanaStateChanged", OnWraithKingStateUpdated );
})();