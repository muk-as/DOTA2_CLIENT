var g_nCurrentStyle = 0;
$.Msg( g_nCurrentStyle.toString() );
var g_arrTransitionNextEvents = [
	function() {
		$.DispatchEvent( 'DOTAGlobalSceneSetCameraEntity', 'JuggernautArcanaScene', 'herocamera', 1.6 ); 
		$.DispatchEvent( 'DOTAGlobalSceneSetRootEntity', 'JuggernautArcanaScene', 'root' );
		$( '#MainContainer' ).SetHasClass( 'Style1Visible', true );
		$( '#MainContainer' ).SetHasClass( 'Style2Visible', false );
	},
	function() {
		$.DispatchEvent( 'DOTAGlobalSceneSetCameraEntity', 'JuggernautArcanaScene', 'camera_style2', 1.6 ); 
		$.DispatchEvent( 'DOTAGlobalSceneSetRootEntity', 'JuggernautArcanaScene', 'root_style2' ); 
		$( '#MainContainer' ).SetHasClass( 'Style2Visible', true );
		$( '#MainContainer' ).SetHasClass( 'Style1Visible', false );
	},
];

var onNextStyle = function()
{
	
	g_nCurrentStyle = g_nCurrentStyle + 1;
	if ( g_nCurrentStyle == 2 )
	{
		g_nCurrentStyle = 0;
	}
	
	g_arrTransitionNextEvents[ g_nCurrentStyle ]();
	$.Msg( g_nCurrentStyle.toString() );
};