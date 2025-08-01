"use strict";

                                                       
var g_TeamPanels = [];		

                                                                                              
                                                                         
var g_PlayerPanels = [];

var g_TEAM_SPECATOR = 1;

                                                                                                    
                                                                                                   
                                
                                                                                                    
function OnLeaveTeamPressed()
{
	Game.PlayerJoinTeam( DOTATeam_t.DOTA_TEAM_NOTEAM );
}


                                                                                                    
                                                        
                                                                                                    
function OnLockAndStartPressed()
{
	                                                             
	if ( Game.GetUnassignedPlayerIDs().length > 0  )
		return;

	                                                                   
	Game.SetTeamSelectionLocked( true );
	
	                                    
	Game.SetAutoLaunchEnabled( false );

	                                                
	Game.SetRemainingSetupTime( 4 ); 
}


                                                                                                    
                                                           
                                                                                                    
function OnCancelAndUnlockPressed()
{
	                                                                        
	Game.SetTeamSelectionLocked( false );

	                           
	Game.SetRemainingSetupTime( -1 ); 
}


                                                                                                    
                                                   
                                                                                                    
function OnAutoAssignPressed()
{
	                                                                   
	                                                            
	Game.AutoAssignPlayersToTeams();
}


                                                                                                    
                                                            
                                                                                                    
function OnShufflePlayersPressed()
{
	                                                                             
	                                                                              
	                                                                          
	Game.ShufflePlayerTeamAssignments();
}


                                                                                                    
                                                                                                  
                                                                                              
                         
                                                                                                    
function FindOrCreatePanelForPlayer( playerId, parent )
{
	                                                                                
	for ( var i = 0; i < g_PlayerPanels.length; ++i )
	{
		var playerPanel = g_PlayerPanels[ i ];
		
		if ( playerPanel.GetAttributeInt( "player_id", -1 ) == playerId )
		{
			playerPanel.SetParent( parent );
			return playerPanel;
		}
	}

	                                                                                         
	var newPlayerPanel = $.CreatePanel( "Panel", parent, "player_root" );
	newPlayerPanel.SetAttributeInt( "player_id", playerId );
	newPlayerPanel.BLoadLayout( "file://{resources}/layout/custom_game/team_select_player.xml", false, false );

	                                                                                       
	g_PlayerPanels.push( newPlayerPanel );

	return newPlayerPanel;
}


                                                                                                    
                                                 
                                                                                                    
function FindPlayerSlotInTeamPanel( teamPanel, playerSlot )
{
	var playerListNode = teamPanel.FindChildInLayoutFile( "PlayerList" );
	if ( playerListNode == null )
		return null;
	
	var nNumChildren = playerListNode.GetChildCount();
	for ( var i = 0; i < nNumChildren; ++i )
	{
		var panel = playerListNode.GetChild( i );
		if ( panel.GetAttributeInt( "player_slot", -1 ) == playerSlot )
		{
			return panel;
		}
	}

	return null;
}


                                                                                                    
                                                                                                    
                                                       
                                                                                                    
function UpdateTeamPanel( teamPanel )
{
	                                              
	var teamId = teamPanel.GetAttributeInt( "team_id", -1 );
	if ( teamId <= 0 )
		return;
	
	                                                         
	var teamPlayers = Game.GetPlayerIDsOnTeam( teamId );
	for ( var i = 0; i < teamPlayers.length; ++i )
	{
		var playerSlot = FindPlayerSlotInTeamPanel( teamPanel, i );
		playerSlot.RemoveAndDeleteChildren();
		FindOrCreatePanelForPlayer( teamPlayers[ i ], playerSlot );
	}

	                                                                   
	var teamDetails = Game.GetTeamDetails( teamId );
	var nNumPlayerSlots = teamDetails.team_max_players;
	for ( var i = teamPlayers.length; i < nNumPlayerSlots; ++i )
	{
		var playerSlot = FindPlayerSlotInTeamPanel( teamPanel, i );
		if ( playerSlot.GetChildCount() == 0 )
		{
			var empty_slot = $.CreatePanel( "Panel", playerSlot, "player_root" );
			empty_slot.BLoadLayout( "file://{resources}/layout/custom_game/team_select_empty_slot.xml", false, false );
		}
	}

	                                                                     
	teamPanel.SetHasClass( "team_is_full", ( teamPlayers.length === teamDetails.team_max_players ) );

	                                                                         
	var localPlayerInfo = Game.GetLocalPlayerInfo()
	if ( localPlayerInfo )
	{
		var localPlayerIsOnTeam = ( localPlayerInfo.player_team_id === teamId );
		teamPanel.SetHasClass( "local_player_on_this_team", localPlayerIsOnTeam );
	}
}


                                                                                                    
                                                                                                 
                          
                                                                                                    
function OnTeamPlayerListChanged()
{
	var unassignedPlayersContainerNode = $( "#UnassignedPlayersContainer" );
	if ( unassignedPlayersContainerNode === null )
		return;	
	
	                                                                     
	for ( var i = 0; i < g_PlayerPanels.length; ++i )
	{
		var playerPanel = g_PlayerPanels[ i ];
		playerPanel.SetParent( unassignedPlayersContainerNode );
	}
		
	                                                              
	                                                            
	var unassignedPlayers = Game.GetUnassignedPlayerIDs();
	for ( var i = 0; i < unassignedPlayers.length; ++i )
	{		
		var playerId = unassignedPlayers[ i ];
		FindOrCreatePanelForPlayer( playerId, unassignedPlayersContainerNode );
	}

	                                                                 
	                                                                 
	for ( var i = 0; i < g_TeamPanels.length; ++i )
	{
		UpdateTeamPanel( g_TeamPanels[ i ] )
	}

	                                                                             
	$( "#GameAndPlayersRoot" ).SetHasClass( "unassigned_players", unassignedPlayers.length != 0 );
	$( "#GameAndPlayersRoot" ).SetHasClass( "no_unassigned_players", unassignedPlayers.length == 0 );
}


                                                                                                    
                                                                                                    
function OnPlayerSelectedTeam( nPlayerId, nTeamId, bSuccess )
{
	var playerInfo = Game.GetLocalPlayerInfo();
	if ( !playerInfo )
		return;

	                                                    
	if ( playerInfo.player_id === nPlayerId )
	{
		                                              
		if ( bSuccess )
		{
			Game.EmitSound( "ui_team_select_pick_team" );
		}
		else
		{
			Game.EmitSound( "ui_team_select_pick_team_failed" );
		}
	}
}


                                                                                                    
                                                                                                   
                                                                               
                                                                                                    
function CheckForHostPrivileges()
{
	var playerInfo = Game.GetLocalPlayerInfo();
	if ( !playerInfo )
		return;

	                                                                             
	                                                                        
	$.GetContextPanel().SetHasClass( "player_has_host_privileges", playerInfo.player_has_host_privileges );
}


                                                                                                    
                                                         
                                                                                                    
function UpdateTimer()
{
	var gameTime = Game.GetGameTime();
	var transitionTime = Game.GetStateTransitionTime();

	CheckForHostPrivileges();
	
	var mapInfo = Game.GetMapInfo();
	$( "#MapInfo" ).SetDialogVariable( "map_name", mapInfo.map_display_name );

	if ( transitionTime >= 0 )
	{
		$( "#StartGameCountdownTimer" ).SetDialogVariableInt( "countdown_timer_seconds", Math.max( 0, Math.floor( transitionTime - gameTime ) ) );
		$( "#StartGameCountdownTimer" ).SetHasClass( "countdown_active", true );
		$( "#StartGameCountdownTimer" ).SetHasClass( "countdown_inactive", false );
	}
	else
	{
		$( "#StartGameCountdownTimer" ).SetHasClass( "countdown_active", false );
		$( "#StartGameCountdownTimer" ).SetHasClass( "countdown_inactive", true );
	}

	var autoLaunch = Game.GetAutoLaunchEnabled();
	$( "#StartGameCountdownTimer" ).SetHasClass( "auto_start", autoLaunch );
	$( "#StartGameCountdownTimer" ).SetHasClass( "forced_start", ( autoLaunch == false ) );

	                                                                                    
	$.GetContextPanel().SetHasClass( "teams_locked", Game.GetTeamSelectionLocked() );
	$.GetContextPanel().SetHasClass( "teams_unlocked", Game.GetTeamSelectionLocked() == false );
		
	$.Schedule( 0.1, UpdateTimer );
}


                                                                                                    
                                                           
                                                                                                    
(function()
{
	var bShowSpectatorTeam = false;
	var bAutoAssignTeams = true;

	                        
	if ( GameUI.CustomUIConfig().team_select )
	{
		var cfg = GameUI.CustomUIConfig().team_select;
		if ( cfg.bShowSpectatorTeam !== undefined )
		{
			bShowSpectatorTeam = cfg.bShowSpectatorTeam;
		}
		if ( cfg.bAutoAssignTeams !== undefined )
		{
			bAutoAssignTeams = cfg.bAutoAssignTeams;
		}
	}

	$( "#TeamSelectContainer" ).SetAcceptsFocus( true );                                                         
	var teamsListRootNode = $( "#TeamsListRoot" );

	                                     
	var allTeamIDs = Game.GetAllTeamIDs();
	
	if ( bShowSpectatorTeam )
	{
		allTeamIDs.unshift( g_TEAM_SPECATOR );
	}
	
	for ( var teamId of allTeamIDs )
	{
		var teamNode = $.CreatePanel( "Panel", teamsListRootNode, "" );
		teamNode.AddClass( "team_" + teamId );                
		teamNode.SetAttributeInt( "team_id", teamId );
		teamNode.BLoadLayout( "file://{resources}/layout/custom_game/team_select_team.xml", false, false );

		                                                                                      
		g_TeamPanels.push( teamNode );
	}

	                                         
	if ( bAutoAssignTeams )
	{
		Game.AutoAssignPlayersToTeams();
	}

	                                                     
	OnTeamPlayerListChanged();

	                                                                                         
	UpdateTimer();

	                                                                                                                
	$.RegisterForUnhandledEvent( "DOTAGame_TeamPlayerListChanged", OnTeamPlayerListChanged );

	                                                                                                 
	$.RegisterForUnhandledEvent( "DOTAGame_PlayerSelectedCustomTeam", OnPlayerSelectedTeam );

})();
