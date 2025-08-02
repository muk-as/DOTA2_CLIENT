function HideSplashScreen()
{
	$('#splash_screen').style.visibility = 'collapse';
}

function DismissSplashScreenInSoManySeconds( nSeconds )
{
	if( nSeconds < 0 )
	{
		HideSplashScreen();
	}
	else
	{
		$('#splash_screen_hide_button').SetDialogVariableInt('seconds', nSeconds);
		
		if(Game.GetState() == 7) // Pregame
		{
			nSeconds = nSeconds - 1;
		}
	
		$.Schedule( 1.0, function() {
			DismissSplashScreenInSoManySeconds( nSeconds );
		} );
		
	}
}

DismissSplashScreenInSoManySeconds( 10 );