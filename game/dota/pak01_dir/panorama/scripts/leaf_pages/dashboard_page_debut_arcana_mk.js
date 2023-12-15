var g_nCurrentStyle = 0;
var g_arrTransitionNextEvents = [
	function() {
		$.DispatchEvent( 'DOTAGlobalSceneSetCameraEntity', 'ArcanaScene', 'hero_camera_ocean', 2.1 ); 
		$.DispatchEvent( 'DOTAGlobalSceneSetRootEntity', 'ArcanaScene', 'root_ocean' );
		$( '#MainContainer' ).SetHasClass( 'Form2Visible', true );
		$( '#MainContainer' ).SetHasClass( 'Form1Visible', false );
	},
	function() {
		$.DispatchEvent( 'DOTAGlobalSceneSetCameraEntity', 'ArcanaScene', 'hero_camera_underworld', 2.1 ); 
		$.DispatchEvent( 'DOTAGlobalSceneSetRootEntity', 'ArcanaScene', 'root_underworld' ); 
		$( '#MainContainer' ).SetHasClass( 'Form3Visible', true );
		$( '#MainContainer' ).SetHasClass( 'Form2Visible', false );				
	},
	function() {
		$.DispatchEvent( 'DOTAGlobalSceneSetCameraEntity', 'ArcanaScene', 'hero_camera_fire', 2.1 ); 
		$.DispatchEvent( 'DOTAGlobalSceneSetRootEntity', 'ArcanaScene', 'root_fire' ); 
		$( '#MainContainer' ).SetHasClass( 'Form4Visible', true );
		$( '#MainContainer' ).SetHasClass( 'Form3Visible', false );				
	},
	function() {
		$.DispatchEvent( 'DOTAGlobalSceneSetCameraEntity', 'ArcanaScene', 'hero_camera_arcana', 2.1 ); 
		$.DispatchEvent( 'DOTAGlobalSceneSetRootEntity', 'ArcanaScene', 'root' ); 
	},
];
var onNextStyle = function()
{
	g_arrTransitionNextEvents[ g_nCurrentStyle ]();
	g_nCurrentStyle = g_nCurrentStyle + 1;
	if ( g_nCurrentStyle >= g_arrTransitionNextEvents.length-1 )
	{
		g_nCurrentStyle = g_arrTransitionNextEvents.length - 1;
	}
	$.GetContextPanel().FindChildInLayoutFile( "PrevButton" ).enabled = ( g_nCurrentStyle != 0 );
	$.GetContextPanel().FindChildInLayoutFile( "NextButton" ).enabled = ( g_nCurrentStyle != ( g_arrTransitionNextEvents.length - 1 ) );
	
};
var g_arrTransitionPrevEvents = [
	function() {
		$.DispatchEvent( 'DOTAGlobalSceneSetCameraEntity', 'ArcanaScene', 'hero_camera_fire', 2.1 ); 
		$.DispatchEvent( 'DOTAGlobalSceneSetRootEntity', 'ArcanaScene', 'root_fire' );
	
	},
	function() {
		$.DispatchEvent( 'DOTAGlobalSceneSetCameraEntity', 'ArcanaScene', 'hero_camera_arcana', 2.1 ); 
		$.DispatchEvent( 'DOTAGlobalSceneSetRootEntity', 'ArcanaScene', 'root' ); 
		$( '#MainContainer' ).SetHasClass( 'Form1Visible', true );
		$( '#MainContainer' ).SetHasClass( 'Form2Visible', false );					
	},
	function() {
		$.DispatchEvent( 'DOTAGlobalSceneSetCameraEntity', 'ArcanaScene', 'hero_camera_ocean', 2.1 ); 
		$.DispatchEvent( 'DOTAGlobalSceneSetRootEntity', 'ArcanaScene', 'root_ocean' ); 
		$( '#MainContainer' ).SetHasClass( 'Form2Visible', true );
		$( '#MainContainer' ).SetHasClass( 'Form3Visible', false );				
	},
	function() {
		$.DispatchEvent( 'DOTAGlobalSceneSetCameraEntity', 'ArcanaScene', 'hero_camera_underworld', 2.1 ); 
		$.DispatchEvent( 'DOTAGlobalSceneSetRootEntity', 'ArcanaScene', 'root_underworld' ); 
		$( '#MainContainer' ).SetHasClass( 'Form3Visible', true );
		$( '#MainContainer' ).SetHasClass( 'Form4Visible', false );				
	},
];

var onPrevStyle = function()
{
	g_arrTransitionPrevEvents[ g_nCurrentStyle ]();
	g_nCurrentStyle = g_nCurrentStyle - 1;
	if ( g_nCurrentStyle <= 0 )
	{
		g_nCurrentStyle = 0;
	}
	$.GetContextPanel().FindChildInLayoutFile( "PrevButton" ).enabled = ( g_nCurrentStyle != 0 );
	$.GetContextPanel().FindChildInLayoutFile( "NextButton" ).enabled = ( g_nCurrentStyle != ( g_arrTransitionNextEvents.length - 1 ) );
};