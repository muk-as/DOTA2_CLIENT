package  {
	
	import flash.display.MovieClip;
	import flash.events.MouseEvent;
	import scaleform.clik.motion.Tween;
	import fl.transitions.easing.None;
	import flash.utils.Timer;
	import flash.events.TimerEvent;
	
	public class HoldoutLose extends MovieClip
	{
		// element details filled out by game engine
		public var gameAPI:Object;
		public var globals:Object;
		public var elementName:String;
		public var currentVote:int;
		
		public var voteTween:Tween;
		
		private var initialDelayTimer:Timer;
		
		public function HoldoutLose() { }
		
		// called by the game engine when this .swf has finished loading
		public function onLoaded():void
		{
			anim.holdoutLose.exitGameButton.addEventListener( MouseEvent.CLICK, onExitGameClicked );
			anim.holdoutLose.restartGameButton.addEventListener( MouseEvent.CLICK, onRestartGameClicked );
			
			gameAPI.SubscribeToGameEvent( "holdout_victory_message", onHoldoutVictory );
			gameAPI.SubscribeToGameEvent( "holdout_end", onHoldoutEnd );
			gameAPI.SubscribeToGameEvent( "holdout_restart_vote", onHoldoutRestartVote );
			gameAPI.SubscribeToGameEvent( "holdout_restart_vote_end", onHoldoutRestartVoteEnd );
			
			globals.setMouseInputEnabled( you_defeated, false );
		}
		
		// called by the game engine after onLoaded and whenever the screen size is changed
		public function onScreenSizeChanged():void
		{
			// By default, your 1024x768 swf is scaled to fit the vertical resolution of the game
			//   and centered in the middle of the screen.
			// You can override the scaling and positioning here if you need to.
			// stage.stageWidth and stage.stageHeight will contain the full screen size.
		}
		
		public function onHoldoutVictory( eventData:Object )
		{
			globals.GameInterface.PlaySound( "VictoryAchieved" );
				
			initialDelayTimer = new Timer( 500, 1 );
			initialDelayTimer.addEventListener( TimerEvent.TIMER, showDefeatedAnim );
			initialDelayTimer.start();
		}
		
		public function showDefeatedAnim()
		{
			visible = true;
			you_defeated.visible = true;
			you_defeated.gotoAndPlay(1);
			you_defeated.grad.gotoAndPlay(1);
			anim.visible = false;
		}
		
		public function onHoldoutEnd( eventData:Object )
		{
			if ( initialDelayTimer != null )
			{
				initialDelayTimer.stop();
				initialDelayTimer = null;
			}
			visible = true;
			you_defeated.visible = false;
			anim.visible = true;
			anim.gotoAndPlay(1);
			
			trace( "onHoldoutEnd:" );
			
			for ( var key:Object in eventData )
			{
				trace( "  [" + key + "]=" + eventData[key] );
			}
			
			if ( eventData.victory )
			{
				anim.holdoutLose.title.text = "#holdout_victory";
				anim.holdoutLose.playAgain.text = "#holdout_next_difficulty";
				globals.GameInterface.PlaySound( "Music_Frostivus.Win" );
			}
			else
			{
				anim.holdoutLose.title.text = "#holdout_lose";
				anim.holdoutLose.playAgain.text = "#holdout_play_again";
			}
			
			anim.holdoutLose.roundNumber.text = "" + eventData.nRoundNumber;
			if (eventData.nRoundDifficulty > 0 && eventData.nRoundDifficulty < 4)
			{
				for (var k:int = 1; k<=eventData.nRoundDifficulty; k++)
				{
					anim.holdoutLose.roundNumber.text = anim.holdoutLose.roundNumber.text + "+";
				}
			}
			else if (eventData.nRoundDifficulty >= 4)
			{
				anim.holdoutLose.roundNumber.text = anim.holdoutLose.roundNumber.text + "("+eventData.nRoundDifficulty+")";
			}
			
			// find local player ID
			var playerID:int = globals.Players.GetLocalPlayer();
			if ( globals.Players.IsSpectator( playerID ) ) {
				anim.holdoutLose.points_earned.visible = false;
				anim.holdoutLose.exitGameButton.visible = false;
				anim.holdoutLose.restartGameButton.visible = false;
			} else {
				if (eventData["Player_"+playerID+"_GoldFrostyPoints"] > 0)
				{
					anim.holdoutLose.points_earned.gotoAndStop('regular_and_gold_points');
				}
				else
				{
					anim.holdoutLose.points_earned.gotoAndStop('regular_points_only');
				}
				anim.holdoutLose.points_earned.regular.num_points.text=""+eventData["Player_"+playerID+"_FrostyPoints"];
				anim.holdoutLose.points_earned.gold.num_points.text=""+eventData["Player_"+playerID+"_GoldFrostyPoints"];
			}
			
			for ( var i:int=0;i<5;i++ )
			{
				// Clear the vote state.
				setVote( i, 0 );
			}
			currentVote = 0;

			anim.holdoutLose.timeout_bar.progress_mask.scaleX = 1;
			trace("onHoldoutLost")
			trace(eventData.flVoteDuration * 60)
			
			if ( voteTween != null )
			{
				voteTween.paused = true;
				voteTween = null;
			}
			voteTween = new Tween( eventData.flVoteDuration * 1000, anim.holdoutLose.timeout_bar.progress_mask, { scaleX:0 }, { ease:None.easeNone } );
			
			if ( !globals.Players.IsSpectator( playerID ) )
			{
				anim.holdoutLose.exitGameButton.visible = true;
				anim.holdoutLose.restartGameButton.visible = true;
			}
		}
		
		public function onHoldoutRestartVote( eventData:Object )
		{
			setVote( currentVote, eventData.bWantRestart ? 1 : 2 );
			currentVote++;
		}
		
		public function onHoldoutRestartVoteEnd( eventData:Object )
		{
			visible = false;
		}
		
		public function onExitGameClicked( e:MouseEvent )
		{
			gameAPI.SendServerCommand( "holdout_exit_game " + globals.Players.GetLocalPlayer() );
			anim.holdoutLose.exitGameButton.visible = false;
			anim.holdoutLose.restartGameButton.visible = false;
		}
		
		public function onRestartGameClicked( e:MouseEvent )
		{
			gameAPI.SendServerCommand( "holdout_restart_game " + globals.Players.GetLocalPlayer() );
			anim.holdoutLose.exitGameButton.visible = false;
			anim.holdoutLose.restartGameButton.visible = false;
		}

		function setVote( slot:int, vote_value:int )
		{
			if ( globals.Players.IsSpectator( globals.Players.GetLocalPlayer() ) )
				return;
			if ( vote_value == 0 )
			{
				anim.holdoutLose["vote"+slot].gotoAndStop( "uncommited" );
			}
			else if ( vote_value == 1 )
			{
				anim.holdoutLose["vote"+slot].gotoAndStop( "ready" );
			}
			else if ( vote_value == 2 )
			{
				anim.holdoutLose["vote"+slot].gotoAndStop( "declined" );
			}
		}
	}
}
