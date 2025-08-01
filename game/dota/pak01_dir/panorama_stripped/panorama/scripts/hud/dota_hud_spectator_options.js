var ToggleChatEnabled = function()
{
	$.DispatchEvent( 'DOTASetSpectatorChatEnabled', $( '#SpectatorChatToggleButton' ).checked );
}
var ToggleBroadcastControls = function()
{
	$.GetContextPanel().ToggleClass( 'ExpandBroadcastControls' );
}