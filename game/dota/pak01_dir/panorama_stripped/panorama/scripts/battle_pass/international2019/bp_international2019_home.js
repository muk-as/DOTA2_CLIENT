$.Schedule( 0.0, function() {
	var bgPanel = $( '#BottomWideSection' );
	bgPanel.SwitchClass( 'bgType', 'TinyBackground' );
	$.RegisterEventHandler( 'SetCarouselSelectedChild', $.GetContextPanel(), function( CarouselPanel ) {
		var bgPanel = $( '#BottomWideSection' );
		if ( CarouselPanel == $( '#PromoBlock' ) )
		{
		bgPanel.SwitchClass( 'bgType', 'TinyBackground' );
		}
		else if ( CarouselPanel == $( '#PromoBlock2' ) )
		{
			bgPanel.SwitchClass( 'bgType', 'CreepsBackground' );
		}
		else if ( CarouselPanel == $( '#PromoBlock3' ) )
		{
		bgPanel.SwitchClass( 'bgType', 'ImmortalBackground' );
		}
	} );
} );