function checkPromoActive()
{
	// Remove the PromoActive class after December 31st, 2015. The multiply by 1000 is because Date.now() is in milliseconds.
	var promoExpireTimestamp = 1451606400 * 1000;
	if ( Date.now() > promoExpireTimestamp )
	{
		$( '#MainContainer' ).RemoveClass( 'PromoActive' );
	}
}