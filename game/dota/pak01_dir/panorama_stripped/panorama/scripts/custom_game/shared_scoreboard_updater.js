"use strict";


                                                                               
                                                                               
function _ScoreboardUpdater_SetTextSafe( panel, childName, textValue )
{
	if ( panel === null )
		return;
	var childPanel = panel.FindChildInLayoutFile( childName )
	if ( childPanel === null )
		return;
	
	childPanel.text = textValue;
}


                                                                               
                                                                               
function _ScoreboardUpdater_UpdatePlayerPanel( scoreboardConfig, playersContainer, playerId, localPlayerTeamId )
{
	                                                     
	var bAltPressed = IsDotaAltPressed();
	$.GetContextPanel().SetHasClass( "AltPressed", bAltPressed == true );
	                                          

	var playerPanelName = "_dynamic_player_" + playerId;
	var playerPanel = playersContainer.FindChild( playerPanelName );
	if ( playerPanel === null )
	{
		playerPanel = $.CreatePanel( "Panel", playersContainer, playerPanelName );
		playerPanel.SetAttributeInt( "player_id", playerId );
		playerPanel.BLoadLayout( scoreboardConfig.playerXmlName, false, false );
	}

	playerPanel.SetHasClass( "is_local_player", ( playerId == Game.GetLocalPlayerID() ) );

	var bTipsAvailable = GameUI.AreTipsAvailable();
	playerPanel.SetHasClass( "TipsAvailable", bTipsAvailable );

	var bIsPlayerTippable = GameUI.IsPlayerTippable( playerId );
	playerPanel.SetHasClass( "PlayerTippable", bIsPlayerTippable );
	
	var ultStateOrTime = PlayerUltimateStateOrTime_t.PLAYER_ULTIMATE_STATE_HIDDEN;                                                     
	var goldValue = -1;
	var networthValue = -1;
	var isTeammate = false;

	var playerInfo = Game.GetPlayerInfo( playerId );
	if ( playerInfo )
	{
		isTeammate = ( playerInfo.player_team_id == localPlayerTeamId );
		if ( isTeammate )
		{
			ultStateOrTime = Game.GetPlayerUltimateStateOrTime( playerId );
		}
		goldValue = playerInfo.player_gold;
		networthValue = playerInfo.player_networth;
		
		playerPanel.SetHasClass( "player_dead", ( playerInfo.player_respawn_seconds >= 0 ) );
		playerPanel.SetHasClass( "local_player_teammate", isTeammate && ( playerId != Game.GetLocalPlayerID() ) );

		_ScoreboardUpdater_SetTextSafe( playerPanel, "RespawnTimer", ( playerInfo.player_respawn_seconds + 1 ) );                                                        
		_ScoreboardUpdater_SetTextSafe( playerPanel, "PlayerName", playerInfo.player_name );
		_ScoreboardUpdater_SetTextSafe( playerPanel, "Level", playerInfo.player_level );
		_ScoreboardUpdater_SetTextSafe( playerPanel, "Kills", playerInfo.player_kills );
		_ScoreboardUpdater_SetTextSafe( playerPanel, "Deaths", playerInfo.player_deaths );
		_ScoreboardUpdater_SetTextSafe( playerPanel, "Assists", playerInfo.player_assists );

		var playerPortrait = playerPanel.FindChildInLayoutFile( "HeroIcon" );
		if ( playerPortrait )
		{
			if ( playerInfo.player_selected_hero !== "" )
			{
				playerPortrait.SetImage( "file://{images}/heroes/" + playerInfo.player_selected_hero + ".png" );
			}
			else
			{
				playerPortrait.SetImage( "file://{images}/custom_game/unassigned.png" );
			}
		}
		
		if ( playerInfo.player_selected_hero_id == -1 )
		{
			_ScoreboardUpdater_SetTextSafe( playerPanel, "HeroName", $.Localize( "#DOTA_Scoreboard_Picking_Hero" ) )
		}
		else
		{
			_ScoreboardUpdater_SetTextSafe( playerPanel, "HeroName", $.Localize( "#"+playerInfo.player_selected_hero ) )
		}
		
		var heroNameAndDescription = playerPanel.FindChildInLayoutFile( "HeroNameAndDescription" );
		if ( heroNameAndDescription )
		{
			if ( playerInfo.player_selected_hero_id == -1 )
			{
				heroNameAndDescription.SetDialogVariable( "hero_name", $.Localize( "#DOTA_Scoreboard_Picking_Hero" ) );
			}
			else
			{
				heroNameAndDescription.SetDialogVariable( "hero_name", $.Localize( "#"+playerInfo.player_selected_hero ) );
			}
			heroNameAndDescription.SetDialogVariableInt( "hero_level",  playerInfo.player_level );
		}		

		playerPanel.SetHasClass( "player_connection_abandoned", playerInfo.player_connection_state == DOTAConnectionState_t.DOTA_CONNECTION_STATE_ABANDONED );
		playerPanel.SetHasClass( "player_connection_failed", playerInfo.player_connection_state == DOTAConnectionState_t.DOTA_CONNECTION_STATE_FAILED );
		playerPanel.SetHasClass( "player_connection_disconnected", playerInfo.player_connection_state == DOTAConnectionState_t.DOTA_CONNECTION_STATE_DISCONNECTED );

		var playerAvatar = playerPanel.FindChildInLayoutFile( "AvatarImage" );
		if ( playerAvatar )
		{
			playerAvatar.steamid = playerInfo.player_steamid;
		}		

		var playerColorBar = playerPanel.FindChildInLayoutFile( "PlayerColorBar" );
		if ( playerColorBar !== null )
		{
			if ( GameUI.CustomUIConfig().team_colors )
			{
				var teamColor = GameUI.CustomUIConfig().team_colors[ playerInfo.player_team_id ];
				if ( teamColor )
				{
					playerColorBar.style.backgroundColor = teamColor;
				}
			}
			else
			{
				var playerColor = "#000000";
				playerColorBar.style.backgroundColor = playerColor;
			}
		}
	}
	
	var playerItemsContainer = playerPanel.FindChildInLayoutFile( "PlayerItemsContainer" );
	if ( playerItemsContainer )
	{
		var playerItems = Game.GetPlayerItems( playerId );
		if ( playerItems )
		{
			                                         
			var i;
			for ( i = playerItems.inventory_slot_min; i < playerItems.inventory_slot_max; ++i )
			{
				                           
				if ( i >= ( playerItems.inventory_slot_max - playerItems.backpack_size ) )
				{
					continue;
				}

				var itemPanelName = "_dynamic_item_" + i;
				var itemPanel = playerItemsContainer.FindChild( itemPanelName );
				if ( itemPanel === null )
				{
					itemPanel = $.CreatePanel( "Image", playerItemsContainer, itemPanelName );
					itemPanel.AddClass( "PlayerItem" );
				}

				var itemInfo = playerItems.inventory[i];
				if ( itemInfo )
				{
					var item_image_name = "file://{images}/items/" + itemInfo.item_name.replace( "item_", "" ) + ".png"
					if ( itemInfo.item_name.indexOf( "recipe" ) >= 0 )
					{
						item_image_name = "file://{images}/items/recipe.png"
					}
					itemPanel.SetImage( item_image_name );
				}
				else
				{
					itemPanel.SetImage( "" );
				}
			}

			               
			var itemPanelName = "_dynamic_item_" + i;
			var itemPanel = playerItemsContainer.FindChild( itemPanelName );
			if ( itemPanel === null )
			{
				itemPanel = $.CreatePanel( "Image", playerItemsContainer, itemPanelName );
				itemPanel.AddClass( "PlayerItem" );
			}

			var itemInfo = playerItems.neutral_item;
			if ( itemInfo )
			{
				var item_image_name = "file://{images}/items/" + itemInfo.item_name.replace( "item_", "" ) + ".png"
				itemPanel.SetImage( item_image_name );
			}
			else
			{
				itemPanel.SetImage( "" );
			}

		}
	}

	if ( isTeammate )
	{
		_ScoreboardUpdater_SetTextSafe( playerPanel, "TeammateGoldAmount", goldValue );
	}

	_ScoreboardUpdater_SetTextSafe( playerPanel, "PlayerGoldAmount", goldValue );
	_ScoreboardUpdater_SetTextSafe( playerPanel, "PlayerNetworth", networthValue );

	playerPanel.SetHasClass( "player_ultimate_ready", ( ultStateOrTime == PlayerUltimateStateOrTime_t.PLAYER_ULTIMATE_STATE_READY ) );
	playerPanel.SetHasClass( "player_ultimate_no_mana", ( ultStateOrTime == PlayerUltimateStateOrTime_t.PLAYER_ULTIMATE_STATE_NO_MANA) );
	playerPanel.SetHasClass( "player_ultimate_not_leveled", ( ultStateOrTime == PlayerUltimateStateOrTime_t.PLAYER_ULTIMATE_STATE_NOT_LEVELED) );
	playerPanel.SetHasClass( "player_ultimate_hidden", ( ultStateOrTime == PlayerUltimateStateOrTime_t.PLAYER_ULTIMATE_STATE_HIDDEN) );
	playerPanel.SetHasClass( "player_ultimate_cooldown", ( ultStateOrTime > 0 ) );
	_ScoreboardUpdater_SetTextSafe( playerPanel, "PlayerUltimateCooldown", ultStateOrTime );
}


                                                                               
                                                                               
function _ScoreboardUpdater_UpdateTeamPanel( scoreboardConfig, containerPanel, teamDetails, teamsInfo )
{
	if ( !containerPanel )
		return;

	var teamId = teamDetails.team_id;
  	                                                        

	var teamPanelName = "_dynamic_team_" + teamId;
	var teamPanel = containerPanel.FindChild( teamPanelName );
	if ( teamPanel === null )
	{
  		                                                                                        
		teamPanel = $.CreatePanel( "Panel", containerPanel, teamPanelName );
		teamPanel.SetAttributeInt( "team_id", teamId );
		teamPanel.BLoadLayout( scoreboardConfig.teamXmlName, false, false );

		var logo_xml = GameUI.CustomUIConfig().team_logo_xml;
		if ( logo_xml )
		{
			var teamLogoPanel = teamPanel.FindChildInLayoutFile( "TeamLogo" );
			if ( teamLogoPanel )
			{
				teamLogoPanel.SetAttributeInt( "team_id", teamId );
				teamLogoPanel.BLoadLayout( logo_xml, false, false );
			}
		}
	}
	
	var localPlayerTeamId = -1;
	var localPlayer = Game.GetLocalPlayerInfo();
	if ( localPlayer )
	{
		localPlayerTeamId = localPlayer.player_team_id;
	}
	teamPanel.SetHasClass( "local_player_team", localPlayerTeamId == teamId );
	teamPanel.SetHasClass( "not_local_player_team", localPlayerTeamId != teamId );

	var teamPlayers = Game.GetPlayerIDsOnTeam( teamId )
	var playersContainer = teamPanel.FindChildInLayoutFile( "PlayersContainer" );
	if ( playersContainer )
	{
		for ( var playerId of teamPlayers )
		{
			_ScoreboardUpdater_UpdatePlayerPanel( scoreboardConfig, playersContainer, playerId, localPlayerTeamId )
		}
	}
	
	teamPanel.SetHasClass( "no_players", (teamPlayers.length == 0) )
	teamPanel.SetHasClass( "one_player", (teamPlayers.length == 1) )
	teamPanel.SetHasClass( "ten_players", (teamPlayers.length == 10) )
	
	if ( teamsInfo.max_team_players < teamPlayers.length )
	{
		teamsInfo.max_team_players = teamPlayers.length;
	}

	_ScoreboardUpdater_SetTextSafe( teamPanel, "TeamScore", teamDetails.team_score )
	_ScoreboardUpdater_SetTextSafe( teamPanel, "TeamName", $.Localize( teamDetails.team_name ) )
	
	if ( GameUI.CustomUIConfig().team_colors )
	{
		var teamColor = GameUI.CustomUIConfig().team_colors[ teamId ];
		var teamColorPanel = teamPanel.FindChildInLayoutFile( "TeamColor" );
		
		teamColor = teamColor.replace( ";", "" );

		if ( teamColorPanel )
		{
			teamNamePanel.style.backgroundColor = teamColor + ";";
		}
		
		var teamColor_GradentFromTransparentLeft = teamPanel.FindChildInLayoutFile( "TeamColor_GradentFromTransparentLeft" );
		if ( teamColor_GradentFromTransparentLeft )
		{
			var gradientText = 'gradient( linear, 0% 0%, 800% 0%, from( #00000000 ), to( ' + teamColor + ' ) );';
  			                      
			teamColor_GradentFromTransparentLeft.style.backgroundColor = gradientText;
		}
	}
	
	return teamPanel;
}

                                                                               
                                                                               
function _ScoreboardUpdater_ReorderTeam( scoreboardConfig, teamsParent, teamPanel, teamId, newPlace, prevPanel )
{
  	                                                            
	var oldPlace = null;
	if ( GameUI.CustomUIConfig().teamsPrevPlace.length > teamId )
	{
		oldPlace = GameUI.CustomUIConfig().teamsPrevPlace[ teamId ];
	}
	GameUI.CustomUIConfig().teamsPrevPlace[ teamId ] = newPlace;
	
	if ( newPlace != oldPlace )
	{
  		                                                             
		teamPanel.RemoveClass( "team_getting_worse" );
		teamPanel.RemoveClass( "team_getting_better" );
		if ( newPlace > oldPlace )
		{
			teamPanel.AddClass( "team_getting_worse" );
		}
		else if ( newPlace < oldPlace )
		{
			teamPanel.AddClass( "team_getting_better" );
		}
	}

	teamsParent.MoveChildAfter( teamPanel, prevPanel );
}

                              
function compareFunc( a, b )                                                    
{
	if ( a.team_score < b.team_score )
	{
		return 1;            
	}
	else if ( a.team_score > b.team_score )
	{
		return -1;            
	}
	else
	{
		return 0;
	}
};

function stableCompareFunc( a, b )
{
	var unstableCompare = compareFunc( a, b );
	if ( unstableCompare != 0 )
	{
		return unstableCompare;
	}
	
	if ( GameUI.CustomUIConfig().teamsPrevPlace.length <= a.team_id )
	{
		return 0;
	}
	
	if ( GameUI.CustomUIConfig().teamsPrevPlace.length <= b.team_id )
	{
		return 0;
	}
	
  			                                                

	var a_prev = GameUI.CustomUIConfig().teamsPrevPlace[ a.team_id ];
	var b_prev = GameUI.CustomUIConfig().teamsPrevPlace[ b.team_id ];
	if ( a_prev < b_prev )            
	{
		return -1;            
	}
	else if ( a_prev > b_prev )            
	{
		return 1;            
	}
	else
	{
		return 0;
	}
};

                                                                               
                                                                               
function _ScoreboardUpdater_UpdateAllTeamsAndPlayers( scoreboardConfig, teamsContainer )
{
  	                                                                           
	
	var teamsList = [];
	for ( var teamId of Game.GetAllTeamIDs() )
	{
		teamsList.push( Game.GetTeamDetails( teamId ) );
	}

	                            
	var teamsInfo = { max_team_players: 0 };
	var panelsByTeam = [];
	for ( var i = 0; i < teamsList.length; ++i )
	{
		var teamPanel = _ScoreboardUpdater_UpdateTeamPanel( scoreboardConfig, teamsContainer, teamsList[i], teamsInfo );
		if ( teamPanel )
		{
			panelsByTeam[ teamsList[i].team_id ] = teamPanel;
		}
	}

	if ( teamsList.length > 1 )
	{
  		                                        

		       
		if ( scoreboardConfig.shouldSort )
		{
			teamsList.sort( stableCompareFunc );
		}

  		                                  

		                                       
		if ( scoreboardConfig.shouldReorder ) 
		{
			var prevPanel = panelsByTeam[teamsList[0].team_id];
			for (var i = 0; i < teamsList.length; ++i) {
				var teamId = teamsList[i].team_id;
				var teamPanel = panelsByTeam[teamId];
				_ScoreboardUpdater_ReorderTeam(scoreboardConfig, teamsContainer, teamPanel, teamId, i, prevPanel);
				prevPanel = teamPanel;
			}
		}
  		                                                
	}

  	                                                                               
}


                                                                               
                                                                               
function ScoreboardUpdater_InitializeScoreboard( scoreboardConfig, scoreboardPanel )
{
	GameUI.CustomUIConfig().teamsPrevPlace = [];
	if ( typeof(scoreboardConfig.shouldSort) === 'undefined')
	{
		                  
		scoreboardConfig.shouldSort = true;
	}
	if (typeof (scoreboardConfig.shouldReorder) === 'undefined') {
		                  
		scoreboardConfig.shouldReorder = true;
	}
	_ScoreboardUpdater_UpdateAllTeamsAndPlayers( scoreboardConfig, scoreboardPanel );
	return { "scoreboardConfig": scoreboardConfig, "scoreboardPanel":scoreboardPanel }
}


                                                                               
                                                                               
function ScoreboardUpdater_SetScoreboardActive( scoreboardHandle, isActive )
{
	if ( scoreboardHandle.scoreboardConfig === null || scoreboardHandle.scoreboardPanel === null )
	{
		return;
	}
	
	if ( isActive )
	{
		_ScoreboardUpdater_UpdateAllTeamsAndPlayers( scoreboardHandle.scoreboardConfig, scoreboardHandle.scoreboardPanel );
	}
}

                                                                               
                                                                               
function ScoreboardUpdater_GetTeamPanel( scoreboardHandle, teamId )
{
	if ( scoreboardHandle.scoreboardPanel === null )
	{
		return;
	}
	
	var teamPanelName = "_dynamic_team_" + teamId;
	return scoreboardHandle.scoreboardPanel.FindChild( teamPanelName );
}

                                                                               
                                                                               
function ScoreboardUpdater_GetSortedTeamInfoList( scoreboardHandle )
{
	var teamsList = [];
	for ( var teamId of Game.GetAllTeamIDs() )
	{
		teamsList.push( Game.GetTeamDetails( teamId ) );
	}

	if ( teamsList.length > 1 )
	{
		teamsList.sort( stableCompareFunc );		
	}
	
	return teamsList;
}

