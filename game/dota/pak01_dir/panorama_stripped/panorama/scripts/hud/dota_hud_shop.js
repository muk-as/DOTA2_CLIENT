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
	if ( $( '#GridBasicsTab' ).checked )
	{
		strTabClass = 'ShowBasicItemsTab';
	}
	else if ( $( '#GridUpgradesTab' ).checked )
	{
		strTabClass = 'ShowUpgradeItemsTab';
	}
	
	$( '#GridMainShop' ).SwitchClass( 'selected_shop_tab', strTabClass );
}

$.Schedule( 0.0, function ()
{
	$.RegisterEventHandler( 'TabSelected', $( '#GridMainShop' ), function () { UpdateSelectedTab(); } );
	UpdateSelectedTab();
} );