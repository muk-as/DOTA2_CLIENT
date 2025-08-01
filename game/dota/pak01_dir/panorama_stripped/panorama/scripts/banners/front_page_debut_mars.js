function OnMouseOverMars()
{
	$( '#BackgroundScene' ).FireEntityInput( 'light_hero', 'LightScale', '4' );
}

function OnMouseOutMars()
{
	$( '#BackgroundScene' ).FireEntityInput( 'light_hero', 'LightScale', '2' );
}