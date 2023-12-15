function CheckSendShowContextMenu()
{
	var b = $( "#ButtonDrawer" );
	var self = b.GetParent();

	if ( self.BHasClass( "Expanded" ) || self.BHasClass( "Collapsed" ) )
	{
	}
	else
	{
		$.DispatchEvent( "OverviewHeroShowContextMenu" );
	}
}