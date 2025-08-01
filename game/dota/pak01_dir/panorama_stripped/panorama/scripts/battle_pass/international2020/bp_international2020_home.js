$.Schedule( 0.0, function() {
	var bgPanel = $( '#BottomWideSection' );
	bgPanel.SwitchClass( 'bgType', 'ImmortalBackground' );
	$.RegisterEventHandler( 'SetCarouselSelectedChild', $.GetContextPanel(), function( CarouselPanel ) {
		var bgPanel = $( '#BottomWideSection' );
		if ( CarouselPanel == $( '#PromoBlock' ) )
		{
			bgPanel.SwitchClass( 'bgType', 'ImmortalBackground' );
		}
		else if ( CarouselPanel == $( '#PromoBlock2' ) )
		{
			bgPanel.SwitchClass( 'bgType', 'GuildsBackground' );
		}
		else if ( CarouselPanel == $( '#PromoBlock3' ) )
		{
			bgPanel.SwitchClass( 'bgType', 'DivinePathBackground' );
		}
	} );
} );