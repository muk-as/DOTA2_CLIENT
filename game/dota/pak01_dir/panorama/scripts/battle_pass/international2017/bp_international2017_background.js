var UpdateTrophyLevel = function( nTrophyLevel )
{
	if ( nTrophyLevel >= 1 )
	{
		$.DispatchEvent( 'DOTASceneFireEntityInput', $( '#flag1' ), 'flag', 'Skin', ( nTrophyLevel - 1 )+ "" );
	}
	else
	{
		$.DispatchEvent( 'DOTASceneFireEntityInput', $( '#flag1' ), 'flag', 'Skin', nTrophyLevel + "" );
	}
}

var SetCurrentTrophyLevel = function()
{
	var nTrophyLevel = GetCurrentEventTrophyLevel();
	UpdateTrophyLevel( nTrophyLevel );
}

var UpdateScene = function( bCompendium )
{
	$.DispatchEvent( 'DOTAGlobalSceneSetCameraEntity', 'CompendiumBackgroundScene', ( bCompendium ? 'camera_2' : 'camera_1' ), 2.1 ); 
}

$.Schedule( 0.0, function()
{
	$.RegisterForUnhandledEvent( 'DOTAEventTrophyLevelUpdated', function( eEvent, nTrophyLevel ) { UpdateTrophyLevel( nTrophyLevel ); } );
	$.RegisterForUnhandledEvent( 'DOTASeasonPassPageChanged', function( bCompendium ) { UpdateScene( bCompendium ); } );
	$.RegisterEventHandler( 'DOTAScenePanelSceneLoaded', $( '#flag1' ), function() { SetCurrentTrophyLevel(); } );
});