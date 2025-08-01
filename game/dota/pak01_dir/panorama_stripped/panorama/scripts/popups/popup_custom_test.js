var SetupPopup = function()
{
	var strPopupValue = $.GetContextPanel().GetAttributeString( "popupvalue", "(not found)" );
	$.GetContextPanel().SetDialogVariable( "popupvalue", strPopupValue );
};