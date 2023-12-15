$.Schedule( 0.0, function ()
{
	if ( !$.GetContextPanel().BHasClass( 'BattleCup' ) )
		return;

	$.DispatchEventAsync( .9, 'PlaySoundEffect', "ui.weekend_tournament_team_icon_stamp" );
	$.DispatchEventAsync( 2.7, 'PlaySoundEffect', "ui.weekend_tournament_team_icon_stamp" );
} );