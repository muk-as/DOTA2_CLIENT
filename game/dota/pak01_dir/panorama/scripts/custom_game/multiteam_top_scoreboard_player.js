function PortraitClicked()
{
	                                   
	Players.PlayerPortraitClicked( $.GetContextPanel().GetAttributeInt( "player_id", -1 ), false, false );
}

function TipClicked()
{
	GameUI.TipPlayer( $.GetContextPanel().GetAttributeInt( "player_id", -1 ) );
}