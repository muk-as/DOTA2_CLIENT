var SwitchTab = function( strTabID )
{
	var tabContents = $( '#CraftingTabContents' );
	for ( var i = 0; i < tabContents.GetChildCount(); ++i )
	{
		var child = tabContents.GetChild( i );
		child.SetHasClass( 'TabSelected', child.id == strTabID );
	}
}