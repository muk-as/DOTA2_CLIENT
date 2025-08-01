var SetupPopup = function()
{
	var panel = $.GetContextPanel();
	var strFriendly = panel.GetAttributeString( "friendly", "" );
	if ( strFriendly == "1" )
	{
		panel.RemoveClass( "Report_Negative" );
		panel.AddClass( "Report_Positive" );
	}
	var strShowRole = panel.GetAttributeString( "showrole", "" );
	if ( strShowRole == "1" )
	{
		panel.AddClass( "Report_EnableDidNotPlayRole" );
	}
};