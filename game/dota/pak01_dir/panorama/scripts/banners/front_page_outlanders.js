function SetHeroHighlight( strHero )
{
	var cell = $.GetContextPanel();
	cell.SwitchClass( 'highlight_class', 'Highlight' + strHero );
}

function RemoveHeroHighlight()
{
	SetHeroHighlight( 'None' );
}