/// <reference path="../../../../../dota/panorama/scripts/dota.d.ts" />

//-----------------------------------------------------------------------------------------
$.Schedule( 2.0, function () 
{
	// Startup code
	OnShowGameInfo();
} );

//-----------------------------------------------------------------------------------------
function OnGameInfoDismissed()
{
	$( "#GameInfoPopup" )!.SetHasClass( "Visible", false );
	Game.EmitSound( "ui_find_match_slide_out" );
}

//-----------------------------------------------------------------------------------------
function OnShowGameInfo()
{
	const bShowGameInfo = Game.Winter2022ShouldShowGameInfo();
	if ( bShowGameInfo )
	{
		$( "#GameInfoPopup" )!.SetHasClass( "Visible", true );

		Game.EmitSound( "ui_find_match_slide_in" );
	}
}

//-----------------------------------------------------------------------------------------
let g_bDontShowCheckBox = false;
function OnGameInfoDontShowAgain()
{
	$.Msg( "winter2022_hero_selection.js - OnGameInfoDontShowAgain()!" )
	g_bDontShowCheckBox = !g_bDontShowCheckBox;
	Game.Winter2022SetShowGameInfo( !g_bDontShowCheckBox );

	$.GetContextPanel().FindChildInLayoutFile( "DontShowAgainButton" )!.SetHasClass( "CheckboxActive", g_bDontShowCheckBox );
}
