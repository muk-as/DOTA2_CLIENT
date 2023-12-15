var Resolve = function( strEvent )
{
	for ( var i = 0; i < arguments.length; i++ )
	{
		// Resolve any string that looks like a dialog variable
		if ( ( typeof arguments[i] === 'string' ) && ( arguments[i][0] == '{' ) )
		{
			arguments[i] = $.Localize( arguments[i], $.GetContextPanel() );
		}
	}
	$.DispatchEvent.apply( $, arguments );
};