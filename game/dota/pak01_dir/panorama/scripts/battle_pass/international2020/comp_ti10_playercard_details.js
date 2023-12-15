var ShowDustingAnimation = function() {
	var scenePanel = $( '#DustingProgress' );
	scenePanel.FireEntityInput( 'ui_dustingprogress', 'stop', '0' );
	scenePanel.FireEntityInput( 'ui_dustingprogress', 'start', '0' );
	$.DispatchEvent( 'PlaySoundEffect', 'playercard.card_to_dust' )
};