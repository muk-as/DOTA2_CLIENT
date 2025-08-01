"use strict";


                                                                                                    
                                                                                                   
                                
                                                                                                    
function OnLeaveTeamPressed()
{
	Game.PlayerJoinTeam( 5 );                                        
}


                                                                                                    
                                                                                         
                                                                                                    
function OnPlayerDetailsChanged()
{
    var playerId = $.GetContextPanel().GetAttributeInt("player_id", -1);
	var playerInfo = Game.GetPlayerInfo( playerId );
	if ( !playerInfo )
		return;
	$( "#PlayerName" ).text = playerInfo.player_name;
	$( "#PlayerAvatar" ).steamid = playerInfo.player_steamid;

	$.GetContextPanel().SetHasClass( "player_is_local", playerInfo.player_is_local );
	$.GetContextPanel().SetHasClass( "player_has_host_privileges", playerInfo.player_has_host_privileges );
}


                                                                                                    
                                                                                                    
               
                                                                                                    
(function()
{
	OnPlayerDetailsChanged();
	$.RegisterForUnhandledEvent( "DOTAGame_PlayerDetailsChanged", OnPlayerDetailsChanged );
})();
