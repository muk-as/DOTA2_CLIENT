var FadeInLoading = function ()
{
	$( '#ContainerLoading' ).RemoveClass( "FadeIn" );
	$( '#ContainerLoading' ).AddClass( "FadeIn" );
};

var SwitchTab = function( strTabID )
{
	var tabContents = $( '#ContainerDetails' );
	for ( var i = 0; i < tabContents.GetChildCount(); ++i )
	{
		var child = tabContents.GetChild( i );
		if ( !child.BHasClass( 'DetailsPanel' ) )
			continue;

		child.SetHasClass( 'TabSelected', child.id == strTabID );
	}
}