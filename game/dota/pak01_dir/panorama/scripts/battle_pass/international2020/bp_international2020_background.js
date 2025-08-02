const EVENT_ID_INTERNATIONAL_2020 = 29;

var UpdateBadgeTier = function ( nBadgeTier )
{
	if ( nBadgeTier >= 1 )
	{
		$.DispatchEvent( 'DOTASceneFireEntityInput', $( '#flag1' ), 'flag', 'Skin', ( nBadgeTier - 1 )+ "" );
	}
	else
	{
		$.DispatchEvent( 'DOTASceneFireEntityInput', $( '#flag1' ), 'flag', 'Skin', nBadgeTier + "" );
	}
}

var SetCurrentBadgeTier = function()
{
	// deprecated: GetEventBadgeTier( EVENT_ID_INTERNATIONAL_2020 )
	var nBadgeTier = 0;
	UpdateBadgeTier( nBadgeTier );
}

var UpdateScene = function( bCompendium )
{
	$.DispatchEvent( 'DOTAGlobalSceneSetCameraEntity', 'CompendiumBackgroundScene', ( bCompendium ? 'camera_2' : 'camera_1' ), 2.1 ); 
}

$.Schedule( 0.0, function()
{
	//$.RegisterForUnhandledEvent( 'DOTAEventBadgeTierUpdated', function( eEvent, nBadgeTier ) { UpdateBadgeTier( nBadgeTier ); } );
	$.RegisterForUnhandledEvent( 'DOTASeasonPassPageChanged', function( bCompendium ) { UpdateScene( bCompendium ); } );
	$.RegisterEventHandler( 'DOTAScenePanelSceneLoaded', $( '#flag1' ), function() { SetCurrentBadgeTier(); } );
});