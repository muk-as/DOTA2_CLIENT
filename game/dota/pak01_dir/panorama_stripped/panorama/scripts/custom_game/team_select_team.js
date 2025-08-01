"use strict";


                                                                                                    
                                                                       
                                                                                                    
function OnJoinTeamPressed()
{
	                                                                    
	var teamId = $.GetContextPanel().GetAttributeInt( "team_id", -1 );

	                                                          
	Game.PlayerJoinTeam( teamId );
}


                                                                                                    
                                                                                                   
                                   
                                                                                                    
(function ()
{	
	var teamId = $.GetContextPanel().GetAttributeInt( "team_id", -1 );
	var teamDetails = Game.GetTeamDetails( teamId );

	                                 
	var logo_xml = GameUI.CustomUIConfig().team_logo_xml;
	if ( logo_xml )
	{
		var teamLogoPanel = $( "#TeamLogo" );
		teamLogoPanel.SetAttributeInt( "team_id", teamId );
		teamLogoPanel.BLoadLayout( logo_xml, false, false );
	}

	                    
	var teamDetails = Game.GetTeamDetails( teamId );
	$( "#TeamNameLabel" ).text = $.Localize( teamDetails.team_name );
	
	                                                                                        
	var playerListNode = $.GetContextPanel().FindChildInLayoutFile( "PlayerList" );

	var numPlayerSlots = teamDetails.team_max_players;
	for ( var i = 0; i < numPlayerSlots; ++i )
	{
		                      
		var slot = $.CreatePanel( "Panel", playerListNode, "" );
		slot.AddClass( "player_slot" );
		slot.SetAttributeInt( "player_slot", i );
	}

	if ( GameUI.CustomUIConfig().team_colors )
	{
		var teamColor = GameUI.CustomUIConfig().team_colors[ teamId ];
		teamColor = teamColor.replace( ";", "" );
		
		var teamBackgroundGradient = $( "#TeamBackgroundGradient" );
		if ( teamBackgroundGradient )
		{
			var gradientText = 'gradient( linear, -800% -1600%, 50% 100%, from( ' + teamColor + ' ), to( #00000088 ) );';
			teamBackgroundGradient.style.backgroundColor = gradientText;	
		}

		var teamBackgroundGradientHighlight = $( "#TeamBackgroundGradientHighlight" );
		if ( teamBackgroundGradientHighlight )
		{
			var gradientText = 'gradient( linear, -800% -1600%, 90% 100%, from( ' + teamColor + ' ), to( #00000088 ) );';
			teamBackgroundGradientHighlight.style.backgroundColor = gradientText;
		}

		var teamNameLabel = $( "#TeamNameLabel" );
		if ( teamNameLabel )
		{
			var colorText = teamColor + ';';
			teamNameLabel.style.color = colorText;
		}		
	}
	

})();
