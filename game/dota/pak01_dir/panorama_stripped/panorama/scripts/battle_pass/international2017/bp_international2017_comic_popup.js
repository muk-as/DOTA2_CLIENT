g_nCurrentPageClick = 0;
		
var onPageClick = function()
{
	if ( g_nCurrentPageClick > 25 )
	{
		removePageClasses();
		return;
	}
	g_nCurrentPageClick = g_nCurrentPageClick + 1;
	$( '#ComicPageBox' ).SetHasClass( 'CC' + g_nCurrentPageClick, true );
};		

var removePageClasses = function()
{
	for (i = 0; i < g_nCurrentPageClick + 1; i++) 
	{ 
		$( '#ComicPageBox' ).RemoveClass( 'CC' + i );
	}
	g_nCurrentPageClick = 0;
};	