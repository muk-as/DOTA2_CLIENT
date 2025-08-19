function SetSearchFocus()
{
	$( "#SearchTextEntry" ).SetFocus();
}

function ClearSearch()
{
	$.DispatchEvent( "DOTAShopCancelSearch" );
}

function UpdateSelectedTab()
{
	var strTabClass = '';
	var strHotkeyClass = '';
	if ( $( '#GridBasicsTab' ).checked )
	{
		strTabClass = 'ShowBasicItemsTab';
		strHotkeyClass = 'BasicHotkeys';
	}
	else if ( $( '#GridUpgradesTab' ).checked )
	{
		strTabClass = 'ShowUpgradeItemsTab';
		strHotkeyClass = 'UpgradeHotkeys';
	}
	
	$( '#GridMainShop' ).SwitchClass( 'selected_shop_tab', strTabClass );
	$( '#GridRowHotkeys' ).SwitchClass( 'hotkey_tab', strHotkeyClass );
}

$.Schedule( 0.0, function ()
{
	$.RegisterEventHandler( 'TabSelected', $( '#GridMainShop' ), function () { UpdateSelectedTab(); } );
	UpdateSelectedTab();
} );