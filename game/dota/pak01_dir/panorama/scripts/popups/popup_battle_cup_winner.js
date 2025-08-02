//var debugNoClose = false;	// set this to true to stop the popup from automatically closing iteself

function ResetAnim()
{
	$.DispatchEvent( "DOTAGlobalSceneFireEntityInput", "ExplosionsLong", "Explosions", "treasure_opened_generic_part", "stopplayendcap", 1 );
	$( '#TeamContainer').RemoveClass( "FadeIn" );
	//debugNoClose = true;
}

function EventDOTAPopupBattleCupWinnerAnimate()
{
	$.Schedule( 1.0, Sequence_ShowWinnerTeam );	
	$.DispatchEvent( 'PlaySoundEffect', "ui.weekend_tournament_winner_screen" );
}

function Sequence_ShowWinnerTeam()
{
	$.DispatchEvent( "DOTAGlobalSceneFireEntityInput", "ExplosionsLong", "battle_cup_background_particle", "stopplayendcap", 1 );
	$.DispatchEvent( "DOTAGlobalSceneFireEntityInput", "ExplosionsLong", "battle_cup_background_particle", "start", 1 );
	$.DispatchEvent( "DOTAGlobalSceneFireEntityInput", "Explosions", "treasure_opened_generic_part", "stopplayendcap", 1 );
	$.DispatchEvent( "DOTAGlobalSceneFireEntityInput", "Explosions", "treasure_opened_generic_part", "start", 1 );
	$( '#TeamContainer').AddClass( "FadeIn" );

		
	// $.DispatchEventAsync( .9, 'PlaySoundEffect', "ui.weekend_tournament_winner_screen" );
}

function Sequence_Close()
{
	//if ( !debugNoClose )
	$.DispatchEvent( "DOTAPopupBattleCupWinnerClose" );
}

(function()
{
	$.RegisterForUnhandledEvent( "DOTAPopupBattleCupWinnerAnimate", EventDOTAPopupBattleCupWinnerAnimate );
	$.Schedule( 8.0, Sequence_Close );	
})();