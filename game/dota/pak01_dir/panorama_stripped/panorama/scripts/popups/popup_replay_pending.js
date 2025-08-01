var DismissPopup = function()
{
	var strNestedEvent = $('#NotifyWhenReady').checked ? 'DOTARequestReplayAvailableNotification()' : '';
	$.DispatchEvent( 'UIPopupButtonClicked', strNestedEvent );
}