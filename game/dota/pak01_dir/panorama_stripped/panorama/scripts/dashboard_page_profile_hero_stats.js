var AllHeroChallengeBannerClicked = function()
{
	$( '#StatsContents' ).ToggleClass( 'ChildExpanded' );
	$( '#AllHeroChallengeBanner' ).ToggleClass( 'Expanded' );
};

var SetRecentGamesOptionsVisible = function( bVisible ) {
	$( '#RecentGamesOptionsContainer' ).SetHasClass( 'Active', bVisible );
	$( '#RecentGamesOptionsButton' ).SetHasClass( 'Active', bVisible );
}

var ToggleRecentGamesOptions = function() {
	SetRecentGamesOptionsVisible( !$( '#RecentGamesOptionsContainer' ).BHasClass( 'Active' ) );
};

var SetTab = function( nTabIndex ) {
	if ( nTabIndex == 1 || nTabIndex == 2 ) {
		SetRecentGamesOptionsVisible( false );
	}
	$.DispatchEvent( "DOTAProfileHeroStatsTab", nTabIndex );
}