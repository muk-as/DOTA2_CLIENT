function SetGrimstrokeVisible( bVisible )
{
	$.GetContextPanel().SetHasClass( "GrimstrokeVisible", bVisible );
}
function ToggleGrimstrokeVisible()
{
	$.GetContextPanel().ToggleClass( "GrimstrokeVisible" );
}

function SetGrimstrokeHighlighted( bHighlighted )
{
	$.GetContextPanel().SetHasClass( "GrimstrokeHighlighted", bHighlighted );
}

var g_fCarouselAutoScrollDelay = 10.0;
function DoCarouselToggle()
{
	if ( !$.GetContextPanel().BHasClass( "GrimstrokeHighlighted" ) )
	{
		ToggleGrimstrokeVisible();
	}

	$.Schedule( g_fCarouselAutoScrollDelay, DoCarouselToggle );
}
$.Schedule( g_fCarouselAutoScrollDelay, function()
{
	DoCarouselToggle();
} );