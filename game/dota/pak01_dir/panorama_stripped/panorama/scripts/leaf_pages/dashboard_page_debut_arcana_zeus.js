function checkPromoActive()
{
	                                                                                                                         
	var promoExpireTimestamp = 1451606400 * 1000;
	if ( Date.now() > promoExpireTimestamp )
	{
		$( '#MainContainer' ).RemoveClass( 'PromoActive' );
	}
}