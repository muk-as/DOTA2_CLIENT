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

$.Schedule( 0.0, function()
{
	$.RegisterForUnhandledEvent( 'DOTAEventTrophyLevelUpdated', function( eEvent, nTrophyLevel ) { UpdateTrophyLevel( nTrophyLevel ); } );
	$.RegisterEventHandler( 'DOTAScenePanelSceneLoaded', $( '#flag1' ), function() { SetCurrentTrophyLevel(); } );
});