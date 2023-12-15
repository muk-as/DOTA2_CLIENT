var HandleActivate = function ()
{
	var countdown = $( '#Countdown' );
	var timeNow = Date.now() / 1000;

	if ( timeNow > countdown.startTime && timeNow < countdown.endTime )
	{
		$.DispatchEvent( 'DOTAShowStoreBrowseCategoryPage', 'SinglesDaySaleCategory' );
	}
	else
	{
		countdown.RemoveClass( 'AnimateClick' );
		countdown.AddClass( 'AnimateClick' );
	}
}