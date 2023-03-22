"use strict";

//-----------------------------------------------------------------------------------------
$.Schedule( 0.0, function() 
{
	// Startup code
	OnGameGlobalChanged( )

} );

CustomNetTables.SubscribeNetTableListener( "game_global", OnGameGlobalChanged );

//-----------------------------------------------------------------------------------------
function OnGameInfoDismissed()
{
	$( "#GameInfoPopup" ).SetHasClass( "Visible", false );
}

var g_bHasShownGameInfo = false;
function OnShowGameInfo()
{
	g_bHasShownGameInfo = true;
	$( "#GameInfoPopup" ).SetHasClass( "Visible", true );
}

//-----------------------------------------------------------------------------------------
function OnGameGlobalChanged( )
{
	if ( g_bHasShownGameInfo == true )
		return;

	var nPlayerID = Players.GetLocalPlayer();
	var NewPlayers = CustomNetTables.GetTableValue( "game_global", "new_players" );
    if ( NewPlayers == null )
    	return;

	var value;
	Object.keys(NewPlayers).some(function(key) 
	{
		if ( nPlayerID == NewPlayers[key] )
		{
			OnShowGameInfo();
			return true;
		}
		return false;
	});
}
