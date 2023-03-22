"use strict";
 
var OnHeroIconClicked = function()
{
  var entIndex = $( '#HeroIconContainer').GetAttributeInt( "player_id", -1 );
  ProcessClick( entIndex );
} 

var ProcessClick = function( nPlayerID )
{
  Players.PlayerPortraitClicked( nPlayerID, GameUI.IsControlDown(), GameUI.IsAltDown() );
}
