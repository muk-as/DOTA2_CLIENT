const EVENT_ID_INTERNATIONAL_2016 = 14;
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
	// deprecated GetEventBadgeTier( EVENT_ID_INTERNATIONAL_2016 )
	var nBadgeTier = 0;
	UpdateBadgeTier( nBadgeTier );
}

$.Schedule( 0.0, function()
{
	//$.RegisterForUnhandledEvent( 'DOTAEventBadgeTierUpdated', function ( eEvent, nBadgeTier ) { UpdateBadgeTier( nBadgeTier ); } );
	$.RegisterEventHandler( 'DOTAScenePanelSceneLoaded', $( '#flag1' ), function () { SetCurrentBadgeTier(); } );
});