function EventAbilityLearnModeToggled( bInLearnMode )
{
	$.GetContextPanel().SetHasClass( "AbilityLearnMode", bInLearnMode );
}

(function()
{
	$.RegisterForUnhandledEvent( "DOTAHUDAbilityLearnModeToggled", EventAbilityLearnModeToggled );
})();