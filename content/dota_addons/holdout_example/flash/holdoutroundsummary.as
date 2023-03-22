package  {
	
	import flash.display.MovieClip;
	import flash.events.MouseEvent;
	import flash.utils.Timer;
	import flash.events.TimerEvent;
	import flash.geom.Point;
	import flash.filters.ColorMatrixFilter;
	
	public class HoldoutRoundSummary extends MovieClip
	{
		// element details filled out by game engine
		public var gameAPI:Object;
		public var globals:Object;
		public var elementName:String;
		
		private var NUM_PLAYERS:int = 5;
		
		// round data from the game event
		private var maxKills:int;
		private var goldBagsExpired:int;
		private var totalGoldBagsExpired:int;			// total count for the whole game
		private var currentGoldBagsExpired:int;			// the number currently displayed
		private var goalGoldBagsExpired:int;			// the number we should count up to for this round
		private var numTowers:int;
		private var towersRevealed:int;
		private var towersStanding:int;
		private var towersStandingGoldReward:int;
		private var roundNumber:int;
		private var goldIconCount:int;
		private var teamGoldBagsCollected:int;

		// timing and icon spacing
		private var goldIconSpacing:Number;
		private var playerKillIconSpacing:Number;
		private var playerGoldIconTiming:Number;
		private var playerKillIconTiming:Number;
		private var expiredGoldBagTiming:Number;
		private var towerBonusTiming:Number;
		private var fragmentSessionTiming:Number;
		
		var towerBonusTimer:Timer;
		var goldIconTimer:Timer;
		var killIconTimer:Timer;
		var expiredGoldTimer:Timer;
		var fragmentSessionTimer:Timer;
		
		private var playerID:int;
		private var fragmentLoopingSoundGuid:int = 0;
		private var goldRisingSoundGuid:int = 0;
		private var goldFallingSoundGuid:int = 0;
		private var killsRisingSoundGuid:int = 0;
		
		// per player data
		private var vecPlayerData:Vector.<Object>;
		
		public function HoldoutRoundSummary() { }
		
		// called by the game engine when this .swf has finished loading
		public function onLoaded():void
		{
			for ( var i:int = 0; i < NUM_PLAYERS; i++ )
			{
				var row:MovieClip = getPlayerRow(i);
				row["rowIndex"] = i;
				
				//row.kills_area.addEventListener( MouseEvent.ROLL_OVER, onRollOverKills );
				//row.kills_area.addEventListener( MouseEvent.ROLL_OUT, onRollOutKills );
				
				//row.kills.addEventListener( MouseEvent.ROLL_OVER, onRollOverKills );
				//row.kills.addEventListener( MouseEvent.ROLL_OUT, onRollOutKills );
			}
			
			gameAPI.SubscribeToGameEvent( "holdout_show_round_end_summary", showRoundEndSummary );
		}
		
		// called by the game engine after onLoaded and whenever the screen size is changed
		public function onScreenSizeChanged():void
		{
			// By default, your 1024x768 swf is scaled to fit the vertical resolution of the game
			//   and centered in the middle of the screen.
			// You can override the scaling and positioning here if you need to.
			// stage.stageWidth and stage.stageHeight will contain the full screen size.
			
			// align left
			x = 0;
			
			if ( globals.Game.IsHUDFlipped() )
			{
				x = stage.stageWidth - ( 440.0 * this.scaleY );
			}
			
			// align expired count next to the label
			holdout.main_anim.main.playerStats.goldBagExpiredCount.x = holdout.main_anim.main.playerStats.goldExpiredLabel.x + holdout.main_anim.main.playerStats.goldExpiredLabel.textWidth + 4;
		}
		
		public function showRoundEndSummary( eventData:Object )
		{
			visible = true;

			trace( "onRoundEndSummaryEvent:" );
			
			for ( var key:Object in eventData )
			{
				trace( "  [" + key + "]=" + eventData[key] );
			}
			
			// reveal the 'ROUND COMPLETE' text
			holdout.main_anim.gotoAndStop('hidden');
			holdout.visible = true;
			holdout.top.visible = true;
			
			holdout.main_anim.main.playerStats.goldBagExpiredCount.visible = false;
			holdout.main_anim.main.playerStats.goldExpiredLabel.visible = false;
			
			goldIconCount = 0;
			teamGoldBagsCollected = 0;
			maxKills = 0;
			towersStanding = eventData.nTowersStanding;
			towersStandingGoldReward = eventData.nTowersStandingGoldReward;
			numTowers = eventData.nTowers;
			roundNumber = eventData.nRoundNumber;
			
			if ( roundNumber == 1 )
			{
				totalGoldBagsExpired = 0;
			}
			
			goalGoldBagsExpired = eventData.nGoldBagsExpired - totalGoldBagsExpired;
			totalGoldBagsExpired = eventData.nGoldBagsExpired
			currentGoldBagsExpired = 0;
			
			// remove all children from gold area
			var i:int;
			var gold_area:MovieClip = holdout.main_anim.main.playerStats.gold_area;
			for ( i = gold_area.numChildren-1 ; i >= 0 ; i--)
			{
				if ( gold_area.getChildAt(i) is MovieClip )
				{
					gold_area.getChildAt(i).visible = false;
				}
			}
			
			vecPlayerData = new Vector.<Object>( NUM_PLAYERS );
			for ( i = 0; i < NUM_PLAYERS; i++ )
			{
				vecPlayerData[i] = {
					validPlayer: globals.Players.IsValidPlayer(i),
					playerName: globals.Players.GetPlayerName(i),
					playerColor: globals.Players.GetPlayerColor(i),
					heroName: eventData["Player_"+i+"_HeroName"],
					creepKills: eventData["Player_"+i+"_CreepKills"],
					deaths: eventData["Player_"+i+"_Deaths"],
					playersResurrected: eventData["Player_"+i+"_PlayersResurrected"],
					frostyPoints: eventData["Player_"+i+"_FrostyPoints"],
					goldFrostyPoints: eventData["Player_"+i+"_GoldFrostyPoints"],
					totalFrostyPoints: eventData["Player_"+i+"_TotalFrostyPoints"],
					totalGoldFrostyPoints: eventData["Player_"+i+"_TotalGoldFrostyPoints"],
					goldFrostyBoost: eventData["Player_"+i+"_GoldFrostyBoost"],
					killIconCount: 0
				};
				
				// totals arrive with this round's points already added on
				//  subtract them here, as we add them on during animation below
				vecPlayerData[i].totalFrostyPoints -= vecPlayerData[i].frostyPoints;
				vecPlayerData[i].totalGoldFrostyPoints -= vecPlayerData[i].goldFrostyPoints;
				
				setPlayerRow( i, vecPlayerData[i].playerName, vecPlayerData[i].playerColor, vecPlayerData[i].heroName, vecPlayerData[i].deaths, vecPlayerData[i].playersResurrected );
				
				maxKills = Math.max( maxKills, vecPlayerData[i].creepKills );
				teamGoldBagsCollected += eventData["Player_"+i+"_GoldBagsCollected"];
			}
			
			globals.GameInterface.PlaySound( "ScoreAppear" );

			trace( "total gold bags to show: " + (teamGoldBagsCollected+goalGoldBagsExpired) );
			goldIconSpacing = 900.0 / Number((teamGoldBagsCollected+goalGoldBagsExpired));
			goldIconSpacing = Math.min( goldIconSpacing, 24 );
			playerKillIconSpacing = 260.0 / Number(maxKills);
			playerKillIconSpacing = Math.min( playerKillIconSpacing, 16 );
		
			playerGoldIconTiming = 2.3 / Number(teamGoldBagsCollected);
			playerGoldIconTiming = Math.min( playerGoldIconTiming, 0.2 );
			playerKillIconTiming = 2.3 / Number(maxKills);
			playerKillIconTiming = Math.min( playerKillIconTiming, 0.2 );
		
			expiredGoldBagTiming = 1.8 / goalGoldBagsExpired;
			expiredGoldBagTiming = Math.min( expiredGoldBagTiming, 0.2 );
			
			holdout.main_anim.main.roundName.text = eventData["roundName"];
			
			playerID = globals.Players.GetLocalPlayer();
			fragmentSessionTiming = 0;
			if ( playerID >= 0 && playerID < 5 )
			{
				var highestPoints:Number = Math.max(vecPlayerData[playerID].frostyPoints, vecPlayerData[playerID].goldFrostyPoints);
				if ( highestPoints > 0 )
				{
					fragmentSessionTiming = 1.8 / highestPoints;
					fragmentSessionTiming = Math.min( fragmentSessionTiming, 0.18 );
				}
			}
			
			var t:Timer = new Timer( 2000, 1 );
			t.addEventListener( TimerEvent.TIMER, revealPlayerStats );
			t.start();
		}
		
		function revealPanel()
		{
			globals.GameInterface.PlaySound( "ScoreSlideDown" );
			towersRevealed = 0;
			prepareTowerBonusIcons();
			holdout.main_anim.main.playerStats.towerBonus.visible = false;
			holdout.main_anim.visible = true;
			holdout.main_anim.gotoAndPlay('reveal');
		}
		
		function revealPlayerStats( e:TimerEvent )
		{
			revealPanel();
			
			holdout.main_anim.main.fragmentArea.visible = false;
			holdout.main_anim.main.playerStats.visible = true;
			holdout.main_anim.main.playerStats.players.visible = false;
			
			var t:Timer = new Timer( 800, 1 );
			t.addEventListener( TimerEvent.TIMER, startTeamGoldIconTimer );
			t.start();
		}
		
		function startTeamGoldIconTimer( e:TimerEvent )
		{
			trace( "startTeamGoldIconTimer" );
			
			// start gold timer
			goldIconTimer = new Timer( playerGoldIconTiming * 1000, 0 );
			goldIconTimer.addEventListener( TimerEvent.TIMER, onTeamGoldIconTimer );
			goldIconTimer.start();
		}
		
		function onTeamGoldIconTimer( e:TimerEvent )
		{
			trace( "onTeamGoldIconTimer" );
			var bFinishedAnimatingGold:Boolean = true;
			
			if ( goldIconCount < teamGoldBagsCollected )
			{
				bFinishedAnimatingGold = false;
				incrementTeamGold();
				
				if ( goldRisingSoundGuid == 0 )
				{
					goldRisingSoundGuid = globals.GameInterface.PlaySound( "GoldRising" );
				}
				
				if ( goldIconCount == teamGoldBagsCollected )
				{
					// slow down for expired gold
					goldIconTimer.delay = playerGoldIconTiming * 8000;
				}
			}
			else if ( goldIconCount < (teamGoldBagsCollected + goalGoldBagsExpired) )
			{
				bFinishedAnimatingGold = false;
				incrementTeamGold();
				
				if ( goldRisingSoundGuid != 0 )
				{
					globals.GameInterface.StopSound( goldRisingSoundGuid );
					goldRisingSoundGuid = 0;
					globals.GameInterface.PlaySound( "GoldRisingEnd" );
				}
				
				if ( goldFallingSoundGuid == 0 )
				{
					goldFallingSoundGuid = globals.GameInterface.PlaySound( "ExpiredGoldFalling" );
				}
				
				holdout.main_anim.main.playerStats.goldBagExpiredCount.text = ""+(goldIconCount - teamGoldBagsCollected);
				holdout.main_anim.main.playerStats.goldBagExpiredCount.visible = true;
				holdout.main_anim.main.playerStats.goldExpiredLabel.visible = true;
			}
			
			if ( bFinishedAnimatingGold )
			{
				if ( goldRisingSoundGuid != 0 )
				{
					globals.GameInterface.StopSound( goldRisingSoundGuid );
					goldRisingSoundGuid = 0;
					globals.GameInterface.PlaySound( "GoldRisingEnd" );
				}
				
				if ( goldFallingSoundGuid != 0 )
				{
					globals.GameInterface.StopSound( goldFallingSoundGuid );
					goldFallingSoundGuid = 0;
					globals.GameInterface.PlaySound( "ExpiredGoldFallingEnd" );
				}
				
				goldIconTimer.stop();
				var t:Timer = new Timer( 1200, 1 );
				t.addEventListener( TimerEvent.TIMER, revealTowerBonuses );
				t.start();
			}
		}
		
		function revealTowerBonuses()
		{
			trace( "revealTowerBonuses" );
			
			//globals.GameInterface.PlaySound( "ScoreAppear" );
			
			towersRevealed = 0;
			prepareTowerBonusIcons();
			
			holdout.main_anim.main.playerStats.towerBonus.visible = true;
			holdout.main_anim.main.playerStats.towerBonus.towerBonusTitle.visible = false;
			
			var t:Timer = new Timer( 750, 1 );
			t.addEventListener( TimerEvent.TIMER, startTowerBonusTimer );
			t.start();
		}
		
		function startTowerBonusTimer( e:TimerEvent )
		{
			trace( "startTowerRevealTimer" );
			
			holdout.main_anim.main.playerStats.towerBonus.towerBonusTitle.visible = true;
			
			// start regular timer for revealing each tower
			towerBonusTimer = new Timer( towerBonusTiming * 1000, 0 );
			towerBonusTimer.addEventListener( TimerEvent.TIMER, onTowerBonusTimer );
			towerBonusTimer.start();
		}
		
		function onTowerBonusTimer()
		{
			trace( "onTowerBonusTimer towersRevealed = " + towersRevealed + " numTowers = " + numTowers );
			if ( towersRevealed < numTowers )
			{
				// reveal next tower
				var mc:MovieClip = holdout.main_anim.main.playerStats.towerBonus;
				var towerIcon:MovieClip = mc["tower"+towersRevealed];
				
				if ( towersRevealed < towersStanding )
				{
					towerIcon.gold.visible = true;
					towerIcon.gold.text = "+"+int(towersStandingGoldReward/towersStanding);
					towerIcon.gotoAndStop( 'alive' );
					globals.GameInterface.PlaySound( "TowerKeptAlive" );
				}
				else
				{
					towerIcon.gold.visible = false;
					towerIcon.gotoAndStop( 'dead' );
					globals.GameInterface.PlaySound( "TowerFell" );
				}
				towerIcon.visible = true;
				towersRevealed++;
				return;
			}
			
			if ( towersStanding == 0 )
			{
				globals.GameInterface.PlaySound( "AllTowersFell" );
			}
			
			towerBonusTimer.stop();
			var t:Timer = new Timer( 700, 1 );
			t.addEventListener( TimerEvent.TIMER, showPlayerRows );
			t.start();
		}
		
		function showPlayerRows()
		{
			holdout.main_anim.main.playerStats.players.visible = true;
			//globals.GameInterface.PlaySound( "ScoreAppear" );
			startKillIconTimer();
		}
		
		function startKillIconTimer()
		{
			trace( "startKillIconTimer" );
			killIconTimer = new Timer( playerKillIconTiming * 1000, 0 );
			killIconTimer.addEventListener( TimerEvent.TIMER, onKillIconTimer );
			killIconTimer.start();
		}
		
		function onKillIconTimer( e:TimerEvent )
		{
			trace( "onKillIconTimer" );
			var bPlayedSound:Boolean = false;
			var bFinishedAnimatingKills:Boolean = true;
			
			for ( var i:int = 0; i < NUM_PLAYERS; i++ )
			{
				if ( !vecPlayerData[i].validPlayer )
					continue;
					
				if ( vecPlayerData[i].killIconCount < vecPlayerData[i].creepKills )
				{
					bFinishedAnimatingKills = false;
					incrementKills( i );
					
					if ( !bPlayedSound )
					{
						if ( killsRisingSoundGuid == 0 )
						{
							killsRisingSoundGuid = globals.GameInterface.PlaySound( "KillsRising" );
						}
						
						bPlayedSound = true;
					}
				}
			}
			
			if ( bFinishedAnimatingKills )
			{
				killIconTimer.stop();
				
				if ( killsRisingSoundGuid != 0 )
				{
					globals.GameInterface.StopSound( killsRisingSoundGuid );
					killsRisingSoundGuid = 0;
					globals.GameInterface.PlaySound( "KillsRisingEnd" );
				}
				
				var t:Timer;
				if ( fragmentSessionTiming > 0 )			// only show fragments animation if there's a valid local player
				{
					t = new Timer( 4500, 1 );
					t.addEventListener( TimerEvent.TIMER, revealFragmentArea );
					t.start();
				}
				else
				{
					t = new Timer( 4500, 1 );
					t.addEventListener( TimerEvent.TIMER, hideRoundEnd );
					t.start();
				}
			}
		}
		
		function revealFragmentArea()
		{
			trace( "revealFragmentArea" );
			
			globals.GameInterface.PlaySound( "ScoreAppear" );
			
			holdout.main_anim.main.playerStats.visible = false;
			holdout.main_anim.main.fragmentArea.visible = true;
			holdout.main_anim.main.fragmentArea.round_title.visible = true;
			holdout.main_anim.main.fragmentArea.round_points.visible = false;
			holdout.main_anim.main.fragmentArea.session_title.visible = false;
			holdout.main_anim.main.fragmentArea.session_points.visible = false;
			holdout.main_anim.main.fragmentArea.goldBoostAmountLabel.visible = false;
			holdout.main_anim.main.fragmentArea.goldBoostAmount.visible = false;
			holdout.main_anim.main.fragmentArea.frostyPointsHint.visible = false;
			
			var t:Timer = new Timer( 750, 1 );
			t.addEventListener( TimerEvent.TIMER, revealFragmentRoundPoints );
			t.start();
		}
		
		function revealFragmentRoundPoints()
		{
			updateFrostyPointLabels();
			holdout.main_anim.main.fragmentArea.round_points.visible = true;
			holdout.main_anim.main.fragmentArea.frostyPointsHint.visible = true;
			
			var t:Timer;
			if ( playerID < 0 || playerID > 5 )
			{
				t = new Timer( 1, 1 );
				t.addEventListener( TimerEvent.TIMER, hideRoundEnd );
				t.start();
				return;
			}
				
			// show glints on existing fragment counts
			if ( vecPlayerData[playerID].frostyPoints > 0 )
			{
				holdout.main_anim.main.fragmentArea.round_points.frosty_glint_1.visible = true;
				holdout.main_anim.main.fragmentArea.round_points.frosty_glint_1.gotoAndPlay(1);
				holdout.main_anim.main.fragmentArea.round_points.frosty_glint_2.visible = true;
				holdout.main_anim.main.fragmentArea.round_points.frosty_glint_2.gotoAndPlay(1);
			}
			if ( vecPlayerData[playerID].goldFrostyPoints > 0 )
			{
				holdout.main_anim.main.fragmentArea.round_points.gold_frosty_glint_1.visible = true;
				holdout.main_anim.main.fragmentArea.round_points.gold_frosty_glint_1.gotoAndPlay(1);
				holdout.main_anim.main.fragmentArea.round_points.gold_frosty_glint_2.visible = true;
				holdout.main_anim.main.fragmentArea.round_points.gold_frosty_glint_2.gotoAndPlay(1);
			}
			
			if ( vecPlayerData[playerID].goldFrostyBoost <= 0 )
			{
				holdout.main_anim.main.fragmentArea.goldBoostAmountLabel.visible = false;
				holdout.main_anim.main.fragmentArea.goldBoostAmount.visible = false;
			}
			else
			{
				holdout.main_anim.main.fragmentArea.goldBoostAmountLabel.visible = true;
				holdout.main_anim.main.fragmentArea.goldBoostAmount.visible = true;
				holdout.main_anim.main.fragmentArea.goldBoostAmount.text = "" + vecPlayerData[playerID].goldFrostyBoost + "%";
			}
			
			globals.GameInterface.PlaySound( "FragmentsAppear" );
			
			t = new Timer( 1100, 1 );
			t.addEventListener( TimerEvent.TIMER, revealFragmentSessionPoints );
			t.start();
		}
		
		function revealFragmentSessionPoints()
		{
			holdout.main_anim.main.fragmentArea.session_title.visible = true;
			holdout.main_anim.main.fragmentArea.session_points.visible = true;
			
			// hide glints
			//holdout.main_anim.main.fragmentArea.session_points.frosty_glint_1.visible = false;
			//holdout.main_anim.main.fragmentArea.session_points.frosty_glint_2.visible = false;
			//holdout.main_anim.main.fragmentArea.session_points.gold_frosty_glint_1.visible = false;
			//holdout.main_anim.main.fragmentArea.session_points.gold_frosty_glint_2.visible = false;
			
			// show glints on existing fragment counts
			var bPlaySound:Boolean = false;
			if ( vecPlayerData[playerID].totalFrostyPoints > 0 )
			{
				holdout.main_anim.main.fragmentArea.session_points.frosty_glint_1.visible = true;
				holdout.main_anim.main.fragmentArea.session_points.frosty_glint_1.gotoAndPlay(1);
				holdout.main_anim.main.fragmentArea.session_points.frosty_glint_2.visible = true;
				holdout.main_anim.main.fragmentArea.session_points.frosty_glint_2.gotoAndPlay(1);
				bPlaySound = true;
			}
			if ( vecPlayerData[playerID].totalGoldFrostyPoints > 0 )
			{
				holdout.main_anim.main.fragmentArea.session_points.gold_frosty_glint_1.visible = true;
				holdout.main_anim.main.fragmentArea.session_points.gold_frosty_glint_1.gotoAndPlay(1);
				holdout.main_anim.main.fragmentArea.session_points.gold_frosty_glint_2.visible = true;
				holdout.main_anim.main.fragmentArea.session_points.gold_frosty_glint_2.gotoAndPlay(1);
				bPlaySound = true;
			}
			
			if ( bPlaySound )
			{
				globals.GameInterface.PlaySound( "FragmentsAppear" );
			}
			
			var t:Timer = new Timer( 400, 1 );
			t.addEventListener( TimerEvent.TIMER, startFragmentSessionTimer );
			t.start();
		}
		
		function startFragmentSessionTimer( e:TimerEvent )
		{
			trace( "startFragmentSessionTimer" );
			
			// start gold timer
			fragmentSessionTimer = new Timer( fragmentSessionTiming * 1000, 0 );
			fragmentSessionTimer.addEventListener( TimerEvent.TIMER, onFragmentSessionTimer );
			fragmentSessionTimer.start();
		}
			
			
		function onFragmentSessionTimer( e:TimerEvent )
		{
			var bFinished:Boolean = true;
			
			if ( vecPlayerData[playerID].frostyPoints > 0 )
			{
				vecPlayerData[playerID].frostyPoints--;
				vecPlayerData[playerID].totalFrostyPoints++;
				bFinished=false;
				
				/*
				if ( !holdout.main_anim.main.fragmentArea.session_points.frosty_glint_1.visible ||
						holdout.main_anim.main.fragmentArea.session_points.frosty_glint_1.currentFrame >= holdout.main_anim.main.fragmentArea.session_points.frosty_glint_1.totalFrames )
				{
					holdout.main_anim.main.fragmentArea.session_points.frosty_glint_1.visible = true;
					holdout.main_anim.main.fragmentArea.session_points.frosty_glint_1.gotoAndPlay(1);
					holdout.main_anim.main.fragmentArea.session_points.frosty_glint_2.visible = true;
					holdout.main_anim.main.fragmentArea.session_points.frosty_glint_2.gotoAndPlay(1);
				}
				*/
			}
			
			if ( vecPlayerData[playerID].goldFrostyPoints > 0 )
			{
				vecPlayerData[playerID].goldFrostyPoints--;
				vecPlayerData[playerID].totalGoldFrostyPoints++;
				bFinished=false;
				
				/*
				if ( !holdout.main_anim.main.fragmentArea.session_points.gold_frosty_glint_1.visible ||
					holdout.main_anim.main.fragmentArea.session_points.gold_frosty_glint_1.currentFrame >= holdout.main_anim.main.fragmentArea.session_points.gold_frosty_glint_1.totalFrames )
				{
					holdout.main_anim.main.fragmentArea.session_points.gold_frosty_glint_1.visible = true;
					holdout.main_anim.main.fragmentArea.session_points.gold_frosty_glint_1.gotoAndPlay(1);
					holdout.main_anim.main.fragmentArea.session_points.gold_frosty_glint_2.visible = true;
					holdout.main_anim.main.fragmentArea.session_points.gold_frosty_glint_2.gotoAndPlay(1);
				}
				*/
			}
			
			if (bFinished)
			{
				if ( fragmentLoopingSoundGuid != 0 )
				{
					globals.GameInterface.StopSound( fragmentLoopingSoundGuid );
					fragmentLoopingSoundGuid = 0;
					globals.GameInterface.PlaySound( "FragmentsLoopEnd" );
				}
				
				// animate glints again
				if ( vecPlayerData[playerID].totalFrostyPoints > 0 )
				{
					holdout.main_anim.main.fragmentArea.session_points.frosty_glint_1.visible = true;
					holdout.main_anim.main.fragmentArea.session_points.frosty_glint_1.gotoAndPlay(1);
					holdout.main_anim.main.fragmentArea.session_points.frosty_glint_2.visible = true;
					holdout.main_anim.main.fragmentArea.session_points.frosty_glint_2.gotoAndPlay(1);
				}
				if ( vecPlayerData[playerID].totalGoldFrostyPoints > 0 )
				{
					holdout.main_anim.main.fragmentArea.session_points.gold_frosty_glint_1.visible = true;
					holdout.main_anim.main.fragmentArea.session_points.gold_frosty_glint_1.gotoAndPlay(1);
					holdout.main_anim.main.fragmentArea.session_points.gold_frosty_glint_2.visible = true;
					holdout.main_anim.main.fragmentArea.session_points.gold_frosty_glint_2.gotoAndPlay(1);
				}
				
				fragmentSessionTimer.stop();
					
				var t:Timer = new Timer( 2000, 1 );
				t.addEventListener( TimerEvent.TIMER, hideRoundEnd );
				t.start();
			}
			else
			{
				
				if ( fragmentLoopingSoundGuid == 0 )
				{
					fragmentLoopingSoundGuid = globals.GameInterface.PlaySound( "FragmentsLoop" );
				}
				updateFrostyPointLabels();
			}
		}
		
		function updateFrostyPointLabels()
		{
			holdout.main_anim.main.fragmentArea.round_points.frostyPointsAmount.text = vecPlayerData[playerID].frostyPoints;
			holdout.main_anim.main.fragmentArea.round_points.goldFrostyPointsAmount.text = vecPlayerData[playerID].goldFrostyPoints;
			holdout.main_anim.main.fragmentArea.session_points.frostyPointsAmount.text = vecPlayerData[playerID].totalFrostyPoints;
			holdout.main_anim.main.fragmentArea.session_points.goldFrostyPointsAmount.text = vecPlayerData[playerID].totalGoldFrostyPoints;
		}
		
		function hideRoundEnd( e:TimerEvent )
		{
			trace( "hideRoundEnd" );
			globals.GameInterface.PlaySound( "ScoreSlideUp" );
			
			if ( globals.Game.IsHUDFlipped() )
			{
				x = stage.stageWidth - ( 440.0 * this.scaleY );
				onSlideOutFinished();
			}
			else
			{
				x = 0;
				holdout.main_anim.gotoAndPlay('slideOut');
				
				var t:Timer = new Timer( 1000, 1 );
				t.addEventListener( TimerEvent.TIMER, onSlideOutFinished );
				t.start();
			}
		}
		
		function onSlideOutFinished()
		{
			trace( "onSlideOutFinished" );
			visible = false;
		}
		
		function getPlayerRow( slot:int ):MovieClip
		{
			return holdout.main_anim.main.playerStats.players["player"+slot];
		}
		
		function setPlayerRow( slot:int, playerName:String, color:Number, heroName:String, heroDeaths:int, heroResurrects:int )
		{
			if ( playerName == null )
			{
				playerName = "";
			}
			if ( heroName == null )
			{
				heroName = "";
			}
			
			trace( "holdout: setPlayerRow " + slot, playerName, color, heroName );
			var row:MovieClip = getPlayerRow( slot );
			if ( row == null )
				return;
			
			if ( playerName == "" )
			{
				row.visible = false;
				return;
			}
			
			row.visible = true;
			row.PlayerName.textColor = color;
			row.PlayerName.text = playerName;
			row.kills.text = "0";
			
			var i:int;
			for ( i = row.kills_area.numChildren-1 ; i >= 0 ; i--)
			{
				if(row.kills_area.getChildAt(i) is MovieClip)
				{
					row.kills_area.getChildAt(i).visible = false;
				}
			}
			
			if ( heroName == "" )
			{
				row.heroPortrait.visible = false;
			}
			else
			{
				globals.LoadHeroImage( heroName.replace( "npc_dota_hero_", "" ), row.heroPortrait );	
				row.heroPortrait.visible = true;
			}
			
			row.deaths.text = ""+heroDeaths;
			row.resurrects.text = ""+heroResurrects;
		}
		
		function incrementTeamGold()
		{
			var gold_area:MovieClip = holdout.main_anim.main.playerStats.gold_area;
			
			// update stat
			//row.gold.text = "" + vecPlayerData[slot].goldIconCount;
			
			// add a new icon
			var goldIcon:MovieClip = gold_area["gold"+goldIconCount];
			if ( goldIcon == null )
			{
				goldIcon = new s_frostivus_gold_icon();
				gold_area.addChild(goldIcon);
				gold_area["gold"+goldIconCount] = goldIcon;
			}
			// into expired gold bag icons - grayscale it
			if (goldIconCount >= teamGoldBagsCollected)
			{
				goldIcon.gotoAndStop(2);
			}
			else
			{
				goldIcon.gotoAndStop(1);
			}
			goldIcon.visible = true;
			var halfway:int = (teamGoldBagsCollected+goalGoldBagsExpired) * 0.5;
			if ( goldIconCount >= halfway )
			{
				goldIcon.x = ( goldIconCount - halfway ) * goldIconSpacing;
				goldIcon.y = 30;
			}
			else
			{
				goldIcon.x = goldIconCount * goldIconSpacing;
				goldIcon.y = 0;
			}
			goldIconCount++;
			//row.gold.x = row.gold_area.x + goldIcon.x + 26;
		}
		
		
		function incrementKills( slot:int )
		{
			var row:MovieClip = getPlayerRow( slot );
			if ( row == null )
				return;
				
			vecPlayerData[slot].killIconCount++;
			
			// update stat
			row.kills.text = "" + vecPlayerData[slot].killIconCount;
			
			// add a new icon
			var killIcon:MovieClip = row.kills_area["kill"+vecPlayerData[slot].killIconCount];
			if ( killIcon == null )
			{
				killIcon = new s_holdout_kill_icon();
				row.kills_area.addChild(killIcon);
				row.kills_area["kill"+vecPlayerData[slot].killIconCount] = killIcon;
			}
			killIcon.visible = true;
			killIcon.x = vecPlayerData[slot].killIconCount * playerKillIconSpacing;
			//row.kills.x = row.kills_area.x + killIcon.x + 26;
		}
		
		function prepareTowerBonusIcons()
		{
			var i:int;
			var r:int;
			
			towerBonusTiming = 2.5 / Number(numTowers);
			
			// hide existing tower icons
			var mc:MovieClip = holdout.main_anim.main.playerStats.towerBonus;
			for ( i = mc.numChildren-1 ; i >= 0 ; i--)
			{
				if(mc.getChildAt(i) is s_holdout_tower_reward)
				{
					mc.getChildAt(i).visible = false;
				}
			}
			
			var towerBonusWidth:Number = 430.0;
			var towerBonusStartLeft:Number = 70.0;
			var towerWidth:Number = 100.0;
			
			var numRows:int = 1;
			var rows:Vector.<Object> = new Vector.<Object>( numRows );
			var towersPerRow:int = int(numTowers/numRows);
			var rowVerticalSpacing:Number = 200.0;
			
			// split the tower bonuses into rows
			for ( r = 0; r < numRows; r++ )
			{
				var rowData:Object = new Object();
				var towersOnPreviousRows:int = r * towersPerRow;
				rowData.towers = numTowers - towersOnPreviousRows;
				rowData.yPos = 25.0 + rowVerticalSpacing * r;
					
				rowData.towerSpacing = towerBonusWidth / Number(rowData.towers);
				rowData.towerLeft = towerBonusStartLeft;
				
				if ( rowData.towers == 1 )					// if only 1 tower, center it
				{
					rowData.towerLeft = towerBonusStartLeft + ( towerBonusWidth * 0.5 ) - ( towerWidth * 0.5 );
				}
				else if ( ( rowData.towerLeft % 2 ) == 1 )		// odd number of towers, start right a bit
				{
					rowData.towerLeft += rowData.towerSpacing * 0.5;
				}
				rows[r] = rowData;
			}
			
			// add tower icons for each row
			var towerCount:int = 0;
			for ( r = 0; r < numRows; r++ )
			{
				for ( i = 0; i < rows[r].towers; i++ )
				{
					var towerIcon:MovieClip = mc["tower"+towerCount];
					if ( towerIcon == null )
					{
						towerIcon = new s_holdout_tower_reward();
						mc.addChild(towerIcon);
						mc["tower"+towerCount] = towerIcon;
					}
					towerIcon.x = rows[r].towerLeft + rows[r].towerSpacing * i;
					towerIcon.y = rows[r].yPos;
					towerIcon.visible = false;
					towerCount++;
				}
			}
		}
	}
}
