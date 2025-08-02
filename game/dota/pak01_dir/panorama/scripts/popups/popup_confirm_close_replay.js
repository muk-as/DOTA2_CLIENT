var SetupPopup = function()
{
	/*
		var strPopupValue = $.GetContextPanel().GetAttributeString( "popupvalue", "(not found)" );
		$.GetContextPanel().SetDialogVariable( "popupvalue", strPopupValue );
	*/
};

var ConfirmClicked = function()
{ 
	$.DispatchEvent( "DOTAHUDGameDisconnect", $.GetContextPanel());
	$.DispatchEvent( "UIPopupButtonClicked", '' );
    return false;	
};