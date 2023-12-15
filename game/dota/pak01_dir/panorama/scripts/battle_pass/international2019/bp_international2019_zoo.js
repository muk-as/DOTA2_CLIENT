function UpdateTestColor()
{
	var testColor = $( '#TestColorTextEntry' ).text;

	var colorString = "transparent";
	if ( testColor.length != 0 )
	{
		colorString = testColor;
	}
	
	$( '#TestColorSwatch' ).style.backgroundColor = colorString;
}