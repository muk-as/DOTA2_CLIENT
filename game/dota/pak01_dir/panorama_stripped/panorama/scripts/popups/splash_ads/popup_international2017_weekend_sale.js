$.Schedule( 0, function()
{ 
	$.RegisterEventHandler( 'Activated', $( '#PurchaseButton' ), function()
	{
		$.DispatchEvent( "UIPopupButtonClicked", '' );
		return false;	
	} );
} );