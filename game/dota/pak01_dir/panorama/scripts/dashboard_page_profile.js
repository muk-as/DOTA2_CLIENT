var OnPlayerChanged = function()
{
	$( '#DOTAProfilePage' ).SetHasClass( 'ViewBackground', false );
	$( '#ProfileMainContentContainer' ).SetHasClass( 'ChildExpanded', false );
	$( '#SeeThroughButtons' ).SetHasClass( 'ChildExpanded', false );
	$( '#PlayerGamesBox' ).SetHasClass( 'Expanded', false );
	$( '#UserFeedBox' ).SetHasClass( 'Expanded', false );
	$( '#AllHeroChallengeBox' ).SetHasClass( 'Expanded', false );
	$( '#ProfileStatsContainer' ).SetHasClass( 'ChildExpanded', false );
	$( '#ProfileLifetimeStatsContainer' ).SetHasClass( 'Expanded', false );
	$( '#ProfileLast20StatsContainer' ).SetHasClass( 'Expanded', false );
};

var OnNavigatedAway = function()
{
	$( '#DOTAProfilePage' ).SetHasClass( 'ViewBackground', false );
	$( '#ProfileMainContentContainer' ).SetHasClass( 'ChildExpanded', false );
	$( '#SeeThroughButtons' ).SetHasClass( 'ChildExpanded', false );
	$( '#PlayerGamesBox' ).SetHasClass( 'Expanded', false );
	$( '#UserFeedBox' ).SetHasClass( 'Expanded', false );
	$( '#AllHeroChallengeBox' ).SetHasClass( 'Expanded', false );
	$( '#ProfileStatsContainer' ).SetHasClass( 'ChildExpanded', false );
	$( '#ProfileLifetimeStatsContainer' ).SetHasClass( 'Expanded', false );
	$( '#ProfileLast20StatsContainer' ).SetHasClass( 'Expanded', false );
};

var SetPlayerGamesBoxExpanded = function( bExpanded )
{
	$( '#ProfileMainContentContainer' ).SetHasClass( 'ChildExpanded', bExpanded );
	$( '#SeeThroughButtons' ).SetHasClass( 'ChildExpanded', bExpanded );
	$( '#PlayerGamesBox' ).SetHasClass( 'Expanded', bExpanded );

	if ( bExpanded )
	{
		$.DispatchEvent( "DOTAEnsureRecentGamesLoaded", false );
	}

	SetRecentGamesOptionsVisible( false );
}

var OnPlayerGamesBoxClicked = function()
{
	var bWasExpanded = $( '#PlayerGamesBox' ).BHasClass( 'Expanded' );
	SetPlayerGamesBoxExpanded( !bWasExpanded );
};

var SetUserFeedBoxExpanded = function( bExpanded )
{
	$( '#ProfileMainContentContainer' ).SetHasClass( 'ChildExpanded', bExpanded );
	$( '#SeeThroughButtons' ).SetHasClass( 'ChildExpanded', bExpanded );
	$( '#UserFeedBox' ).SetHasClass( 'Expanded', bExpanded );
}

var OnUserFeedBoxClicked = function()
{
	var bWasExpanded = $( '#UserFeedBox' ).BHasClass( 'Expanded' );
	SetUserFeedBoxExpanded( !bWasExpanded );
};

var AllHeroChallengeBoxClicked = function()
{
	$( '#ProfileMainContentContainer' ).ToggleClass( 'ChildExpanded' );
	$( '#SeeThroughButtons' ).ToggleClass( 'ChildExpanded' );

	$( '#AllHeroChallengeBox' ).ToggleClass( 'Expanded' );
};


var LifeTimeStatsClicked = function()
{
	$( '#ProfileStatsContainer' ).ToggleClass( 'ChildExpanded' );
	$( '#ProfileLifetimeStatsContainer' ).ToggleClass( 'Expanded' );
};


var Last20StatsClicked = function()
{
	$( '#ProfileStatsContainer' ).ToggleClass( 'ChildExpanded' );
	$( '#ProfileLast20StatsContainer' ).ToggleClass( 'Expanded' );
};

var SetRecentGamesOptionsVisible = function( bVisible )
{
	$( '#RecentGamesOptionsContainer' ).SetHasClass( 'Active', bVisible );
	$( '#RecentGamesOptionsButton' ).SetHasClass( 'Active', bVisible );
}

var ToggleRecentGamesOptions = function()
{
	SetRecentGamesOptionsVisible( !$( '#RecentGamesOptionsContainer' ).BHasClass( 'Active' ) );
};

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
