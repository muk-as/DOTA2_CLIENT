function setupTooltip()
{
	var nItemDef = $.GetContextPanel().GetAttributeInt( "itemdef", 0 );
	var nItemStyle = $.GetContextPanel().GetAttributeInt( "itemstyle", 0 );
	var strHero = $.GetContextPanel().GetAttributeString( "hero", '' );
	var strClass = $.GetContextPanel().GetAttributeString( "css_class", '' );
	var strSlotType = $.GetContextPanel().GetAttributeString( "slottype", '' );
	if ( nItemDef != 0 )
	{
		$.DispatchEvent( 'DOTAEconSetPreviewSetItemDef', $( '#SetPreview' ), nItemDef, strHero, strSlotType, nItemStyle, true, false );
		$.GetContextPanel().SetDialogVariableInt( 'item_def', nItemDef );
		$.DispatchEvent( 'DOTAEconSetPreviewSetRotationSpeed', $( '#SetPreview' ), 0 );
	}
	$.GetContextPanel().SwitchClass( "SetTooltipClass", strClass );
}

function spinEconSet()
{
	var nRotationSpeed = $.GetContextPanel().GetAttributeInt( "rotationspeed", 0 );
	if ( nRotationSpeed != 0 )
	{
		$.DispatchEventAsync( 1, 'DOTAEconSetPreviewSetRotationSpeed', $( '#SetPreview' ), nRotationSpeed );
	}
}