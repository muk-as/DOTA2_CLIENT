function PlayNemestice()
{
	Game.SlideOutEventGamePlayButton();
	$.DispatchEvent( "UIPopupButtonClicked", $.GetContextPanel() )
}