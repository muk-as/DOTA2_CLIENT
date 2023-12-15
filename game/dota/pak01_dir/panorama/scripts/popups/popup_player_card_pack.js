$.Schedule( 0.0, function()
{
	$.RegisterEventHandler( 'DOTAPlayerCardDusted', $.GetContextPanel(), function( playerCardContainer )
	{
		var scenePanel = playerCardContainer.FindChildInLayoutFile( 'DustingProgress' );
		scenePanel.FireEntityInput( 'ui_dustingprogress', 'stop', '0' );
		scenePanel.FireEntityInput( 'ui_dustingprogress', 'start', '0' );
		$.DispatchEvent( 'PlaySoundEffect', 'playercard.card_to_dust' );
	} );
} );