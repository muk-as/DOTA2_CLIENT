var SwitchDisplayedShop = function( strShopID )
{
	var container = $( '#ShopCategoriesContainer' );
	for ( var i = 0; i < container.GetChildCount(); ++i )
	{
		var child = container.GetChild( i );
		
		var bVisible = child.id == strShopID;
		child.SetHasClass( "TabVisible", bVisible );
	}
	
	UpdateCamera();
}