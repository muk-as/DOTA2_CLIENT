var g_lastGestureStartTime = 0.0;
var g_bPlayingTaunt = false;

function HandleActivate()
{
	if ( IsDotaAltPressed() )
	{
		DoTauntAnimation();
	}
	else
	{
		$.DispatchEvent( 'DOTAShowItemDefPage', 9746 );
	}
}

function DoModelAnimation()
{
	if ( g_bPlayingTaunt )
		return;

	var now = Date.now();
	if ( now - g_lastGestureStartTime < 9.0 * 1000 )
		return;

	$.DispatchEvent( 'DOTASceneFireEntityInput', $( '#LionPrestige' ), 'hero', 'StartGestureOverride', 'ACT_DOTA_SHRUG' );
	g_lastGestureStartTime = now;
}

function DoTauntAnimation()
{
	if ( g_bPlayingTaunt )
		return;

	g_bPlayingTaunt = true;
	$.DispatchEvent( 'PlaySoundEffect', 'Hero_Lion.TauntToHell' );
	$.DispatchEvent( 'DOTASceneFireEntityInput', $( '#LionPrestige' ), 'hero', 'StartGestureOverride', 'ACT_DOTA_TAUNT' );
	$.Schedule( 5.0, function ()
	{
		$.DispatchEvent( 'DOTASceneFireEntityInput', $( '#LionPrestige' ), 'hero', 'RemoveGesture', 'ACT_DOTA_TAUNT' );
		g_bPlayingTaunt = false;
	} );
}