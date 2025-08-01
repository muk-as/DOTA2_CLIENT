/// <reference path="../dota.d.ts" />
/// <reference path="../util.ts" />
/// <reference path="../sequence_actions.ts" />
/// <reference path="post_game_progress_utils.ts" />
/// <reference path="post_game_progress_sequence.ts" />
/// <reference path="../post_game_mvp.ts" />

                                                                               
                                   
                                                                               
class AnimateBattlePassLevelsAction extends RunSequentialActions
{
	panel: Panel_t;
	eventId: number;
	bpPointsStart: number;
	bpPointsPerLevel: number;
	bpPointsAdd: number;

	constructor( panel: Panel_t, eventId: number, bpPointsStart: number, bpPointsPerLevel: number, bpPointsAdd: number )
	{
		super();

		this.panel = panel;
		this.eventId = eventId;
		this.bpPointsStart = bpPointsStart;
		this.bpPointsPerLevel = bpPointsPerLevel;
		this.bpPointsAdd = bpPointsAdd;

		var battlePointsStart = this.bpPointsStart;
		var battleLevelStart = Math.floor( battlePointsStart / this.bpPointsPerLevel );
		var battlePointsAtLevelStart = battleLevelStart * this.bpPointsPerLevel;
		var bpLevelStart = battlePointsStart - battlePointsAtLevelStart;
		var bpLevelNext = this.bpPointsPerLevel;

		panel.SetDialogVariableInt( 'current_level_bp', bpLevelStart );
		panel.SetDialogVariableInt( 'bp_to_next_level', bpLevelNext );

		var bpLevelShield = panel.FindChildInLayoutFile( 'BattlePassLevelShield' ) as DOTAEventLevelShield_t;
		bpLevelShield.SetEventLevel( this.eventId, battleLevelStart );

		var progressBar = panel.FindChildInLayoutFile( "BattleLevelProgress" ) as ProgressBarWithMiddle_t;
		progressBar.max = bpLevelNext;
		progressBar.lowervalue = bpLevelStart;
		progressBar.uppervalue = bpLevelStart;

		var bpEarned = 0;
		var bpLevel = bpLevelStart;
		var battleLevel = battleLevelStart;

		var bpRemaining = this.bpPointsAdd;
		var bpEarnedOnRow = 0;

		while ( bpRemaining > 0 )
		{
			var bpToAnimate = 0;
			var bpToNextLevel = 0;
			bpToNextLevel = bpLevelNext - bpLevel;
			bpToAnimate = Math.min( bpRemaining, bpToNextLevel );

			if ( bpToAnimate > 0 )
			{
				this.actions.push( new SkippableAction( new AnimateBattlePointsIncreaseAction( panel, bpToAnimate, bpEarnedOnRow, bpEarned, bpLevel ) ) );

				bpEarned += bpToAnimate;
				bpLevel += bpToAnimate;
				bpEarnedOnRow += bpToAnimate;
				bpRemaining -= bpToAnimate;
			}

			bpToNextLevel = bpLevelNext - bpLevel;

			if ( bpToNextLevel != 0 )
				continue;

			battleLevel = battleLevel + 1;
			bpLevel = 0;

			this.actions.push( new AddClassAction( panel, 'LeveledUpStart' ) );

			( function ( me, battleLevelInternal )
			{
				me.actions.push( new RunFunctionAction( function ()
				{
					bpLevelShield.AddClass( 'LeveledUp' );
					bpLevelShield.SetEventLevel( me.eventId, battleLevelInternal );
				} ) );
			} )( this, battleLevel );

			this.actions.push( new RemoveClassAction( panel, 'LeveledUpStart' ) );
			this.actions.push( new AddClassAction( panel, 'LeveledUpEnd' ) );
			this.actions.push( new SkippableAction( new WaitAction( 1.0 ) ) );

			( function ( me, battleLevelInternal )
			{
				me.actions.push( new RunFunctionAction( function ()
				{
					bpLevelShield.RemoveClass( 'LeveledUp' );
				} ) );
			} )( this, battleLevel );
			this.actions.push( new RemoveClassAction( panel, 'LeveledUpEnd' ) );

			( function ( me, bpLevelInternal, bpLevelNextInternal )
			{
				me.actions.push( new RunFunctionAction( function ()
				{
					progressBar.lowervalue = 0;
					progressBar.uppervalue = 0;
					panel.SetDialogVariableInt( 'current_level_bp', bpLevelInternal );
					panel.SetDialogVariableInt( 'bp_to_next_level', bpLevelNextInternal );
					progressBar.max = bpLevelNextInternal;
					                                       
				} ) );
			} )( this, bpLevel, bpLevelNext );
		}
	}
}

                                                                               
  
                      
  
                                                                               

interface CavernCrawlPostGame_t
{
	hero_id: number;
	cavern_crawl_progress: CavernCrawlProgress_t;
}

interface CavernCrawlProgress_t
{
	event_id: number;
	map_variant: number;
	turbo_mode: boolean;
	map_progress: Array<{ path_id_completed: number; room_id_claimed: number; }>;
}

interface DOTACavernCrawlPostGameProgress_t extends Panel_t
{
	ClearMapResults(): void;
	AddMapResult( nPathIDCompleted: number, nRoomIDClaimed: number ): void;
	ShowPostGameProgress( nEventID: number, nAccountID: number, nVariant: number, nHeroIDCompleted: number, bTurboMode: boolean ): void;
	DisableUpdateDisplay( bDisable: boolean ): void;
}

class AnimateCavernCrawlScreenAction extends RunSequentialActions
{
	data: CavernCrawlPostGame_t;
	cavern_panel!: DOTACavernCrawlPostGameProgress_t;
	eventHandler: number | null = null;
	disabled_update: boolean = false;

	constructor( data: CavernCrawlPostGame_t )
	{
		super();
		this.data = data;
	}

	start(): void
	{
		var heroID = this.data.hero_id;
		var eventID = this.data.cavern_crawl_progress.event_id;
		var mapVariant = this.data.cavern_crawl_progress.map_variant;
		var turboMode = this.data.cavern_crawl_progress.turbo_mode;
		var mapProgress = this.data.cavern_crawl_progress.map_progress;

		                                                    
		var panel = StartNewScreen( 'CavernCrawlProgressScreen' );
		panel.BLoadLayoutSnippet( "CavernCrawlProgress" );

		                                                      
		this.cavern_panel = panel.FindChildInLayoutFile( 'CavernCrawl' ) as DOTACavernCrawlPostGameProgress_t;
		this.eventHandler = null;
		this.actions.push( new RunFunctionAction( () =>
		{
			this.eventHandler = $.RegisterForUnhandledEvent( "PostGameProgressSkippingAhead", () =>
			{
				if ( !this.disabled_update )
				{
					this.disabled_update = true;
					this.cavern_panel.DisableUpdateDisplay( true );
				}
			} );
		} ) );

		this.actions.push( new AddScreenLinkAction( panel, 'CavernsProgress', '#DOTACavernCrawl_Title_TI2020' ) );

		this.actions.push( new AddClassAction( panel, 'ShowScreen' ) );
		this.actions.push( new SkippableAction( new WaitAction( 1.0 ) ) );

		this.actions.push( new AddClassAction( panel, 'ShowCavernCrawlProgress' ) );
		this.actions.push( new RunFunctionAction( () =>
		{
			this.cavern_panel.ClearMapResults();
			if ( mapProgress )
			{
				for ( var i = 0; i < mapProgress.length; ++i )
				{
					var result = mapProgress[i];
					this.cavern_panel.AddMapResult( result.path_id_completed, result.room_id_claimed );
				}
			}
			this.cavern_panel.ShowPostGameProgress( eventID, 0, mapVariant, heroID, turboMode );
		} ) );
		this.actions.push( new WaitForEventAction( this.cavern_panel, 'DOTACavernCrawlPostGameProgressComplete' ) );
		this.actions.push( new StopSkippingAheadAction() );

		super.start();
	}

	finish(): void
	{
		if ( this.eventHandler != null )
		{
			$.UnregisterForUnhandledEvent( "PostGameProgressSkippingAhead", this.eventHandler );
			this.eventHandler = null;
		}

		if ( this.disabled_update )
		{
			this.cavern_panel.DisableUpdateDisplay( false );
			this.disabled_update = false;
		}
		super.finish();
	}
}

                                                                               
  
                
  
                                                                               


                                                                               
                                               
                                                                               
function GetBPIncreaseAnimationDuration( bpAmount: number ): number
{
	return RemapValClamped( bpAmount, 0, 500, 0.2, 0.6 );
}


                                              
class AnimateBattlePointsIncreaseAction extends RunParallelActions
{
	panel: Panel_t;
	bpAmount: number;
	bpValueStart: number;
	bpEarnedStart: number;
	bpLevelStart: number;
	uiSound: string;

	constructor( panel: Panel_t, bpAmount: number, bpValueStart: number, bpEarnedStart: number, bpLevelStart: number, uiSound: string = "XP.Count" )
	{
		super();

		this.panel = panel;
		this.bpAmount = bpAmount;
		this.bpValueStart = bpValueStart;
		this.bpEarnedStart = bpEarnedStart;
		this.bpLevelStart = bpLevelStart;
		this.uiSound = uiSound;
	}

	start(): void
	{
		var duration = GetBPIncreaseAnimationDuration( this.bpAmount );
		var levelProgressBar = this.panel.FindChildInLayoutFile( 'BattleLevelProgress' ) as ProgressBarWithMiddle_t;
		var minLevelBP = Math.min( this.bpLevelStart, levelProgressBar.max );
		var maxLevelBP = Math.min( this.bpLevelStart + this.bpAmount, levelProgressBar.max );
		var uiSound = this.uiSound;

		this.actions.push( new AnimateDialogVariableIntAction( this.panel, 'current_level_bp', minLevelBP, maxLevelBP, duration ) );
		this.actions.push( new AnimateProgressBarWithMiddleAction( levelProgressBar, minLevelBP, maxLevelBP, duration ) );
		this.actions.push( new PlaySoundForDurationAction( uiSound, duration ) );

		super.start();
	}
}


                                                                               
                            
                                                                               
function UpdateSubpanelTotalPoints( panel: Panel_t, ownerPanel: Panel_t, bpAmount: number, bpStartingSubTotal: number, displayOnly: boolean )
{
	panel.SetDialogVariableInt( 'xp_circle_points', bpAmount );
	panel.AddClass( 'ShowTotals' );
	if ( !displayOnly )
	{
		ownerPanel.SetDialogVariableInt( 'total_points_gained', bpStartingSubTotal + bpAmount );
	}
}


                                                                               
                             
                                                                               
var g_DelayAfterStart = 0.05;
var g_SubElementDelay = 0.05;

                                                                               
                             
                                                                               

interface BattlePassWageringData_t
{
	wager_amount: number;
	conversion_ratio: number;
	wager_token_bonus_pct: number;
	wager_streak_bonus_pct: number;
}

                                              
class AnimateWageringSubpanelAction extends RunSequentialActions
{
	panel: Panel_t;
	ownerPanel: Panel_t;
	startingPoints: number;

	total_points: number;

	constructor( panel: Panel_t, ownerPanel: Panel_t, wagering_data: BattlePassWageringData_t, startingPoints: number )
	{
		super();

		this.panel = panel;
		this.ownerPanel = ownerPanel;
		this.startingPoints = startingPoints;

		panel.AddClass( 'Visible' );

		var panelXPCircle = panel.FindChildInLayoutFile( "XPCircleContainer" );
		panelXPCircle.BLoadLayoutSnippet( 'BattlePassXPCircle' );

		panel.SetDialogVariableInt( 'wager_amount', wagering_data.wager_amount );
		panel.SetDialogVariableInt( 'wager_conversion_ratio', wagering_data.conversion_ratio );
		panel.SetDialogVariableInt( 'wager_token_bonus_pct', wagering_data.wager_token_bonus_pct );
		panel.SetDialogVariableInt( 'wager_streak_bonus_pct', wagering_data.wager_streak_bonus_pct );

		this.total_points = wagering_data.wager_amount * wagering_data.conversion_ratio * ( 100 + wagering_data.wager_streak_bonus_pct + wagering_data.wager_token_bonus_pct ) / 100;
	}

	start(): void
	{
		this.actions.push( new AddClassAction( this.panel, 'BecomeVisible' ) );
		this.actions.push( new SkippableAction( new WaitAction( g_DelayAfterStart ) ) );

		this.actions.push( new AddClassAction( this.panel, 'ShowWager' ) );
		this.actions.push( new AddClassAction( this.panel, 'ShowTeamWagerBonus' ) );

		this.actions.push( new SkippableAction( new WaitAction( g_SubElementDelay ) ) );

		var panel = this.panel;
		var ownerPanel = this.ownerPanel;
		var total_points = this.total_points;
		var startingPoints = this.startingPoints;
		this.actions.push( new RunFunctionAction( function ()
		{
			UpdateSubpanelTotalPoints( panel, ownerPanel, total_points, startingPoints, false );
		} ) );

		super.start();
	}
}


                                                                               
                            
                                                                               

interface BattlePassTips_t
{
	account_id: number;
	count: number;
	amount: number;
}

                                              
class AnimateTippingSubpanelAction extends RunSequentialActions
{
	panel: Panel_t;
	ownerPanel: Panel_t;
	startingPoints: number;

	panelCount: number;
	total_points: number;

	constructor( panel: Panel_t, ownerPanel: Panel_t, tips: BattlePassTips_t[], startingPoints: number )
	{
		super();

		this.panel = panel;
		this.ownerPanel = ownerPanel;
		this.startingPoints = startingPoints;

		panel.AddClass( 'Visible' );

		var panelXPCircle = panel.FindChildInLayoutFile( "XPCircleContainer" );
		panelXPCircle.BLoadLayoutSnippet( 'BattlePassXPCircle' );

		var totalTipCount = 0;
		this.panelCount = 0;
		this.total_points = 0;

		var tipContainer = panel.FindChildInLayoutFile( "TipContainer" );
		var tipContainer2 = panel.FindChildInLayoutFile( "TipContainer2" );
		var tipParent = tipContainer;
		for ( var i = 0; i < tips.length; ++i )
		{
			if ( i == 4 )
			{
				tipParent = tipContainer2;
				panel.AddClass( "TwoTipColumns" );
			}

			var tipperPanel = $.CreatePanel( 'Panel', tipParent, 'Tipper' + i );
			tipperPanel.BLoadLayoutSnippet( 'BattlePassTip' );

			var avatarPanel = tipperPanel.FindChildInLayoutFile( "Avatar" ) as DOTAAvatarImage_t;
			avatarPanel.SetAccountID( tips[i].account_id );

			tipperPanel.SetDialogVariableInt( 'tip_points', tips[i].amount );
			tipperPanel.AddClass( 'TipCount' + tips[i].count );

			totalTipCount += tips[i].count;
			this.panelCount = this.panelCount + 1;
			this.total_points += tips[i].count * tips[i].amount;
		}
		panel.SetDialogVariableInt( 'total_tip_count', totalTipCount );
	}

	start(): void
	{
		this.actions.push( new AddClassAction( this.panel, 'BecomeVisible' ) );
		this.actions.push( new SkippableAction( new WaitAction( g_DelayAfterStart ) ) );

		this.actions.push( new AddClassAction( this.panel, 'ShowTotalTips' ) );
		this.actions.push( new SkippableAction( new WaitAction( g_SubElementDelay ) ) );

		for ( var i = 0; i < this.panelCount; ++i )
		{
			var tipperPanel = this.panel.FindChildInLayoutFile( 'Tipper' + i );
			this.actions.push( new AddClassAction( tipperPanel, 'ShowTip' ) );
		}

		this.actions.push( new SkippableAction( new WaitAction( g_SubElementDelay ) ) );

		var panel = this.panel;
		var ownerPanel = this.ownerPanel;
		var total_points = this.total_points;
		var startingPoints = this.startingPoints;
		this.actions.push( new RunFunctionAction( function ()
		{
			UpdateSubpanelTotalPoints( panel, ownerPanel, total_points, startingPoints, false );
		} ) );

		super.start();
	}
}


                                                                               
                                    
                                                                               

interface BattlePassAction_t
{
	action_id: number;
	quantity: number;
	bp_amount: number;
	action_image: string;
}

                                              
class AnimateActionsGrantedSubpanelAction extends RunSequentialActions
{
	panel: Panel_t;
	ownerPanel: Panel_t;
	startingPoints: number;

	panelCount: number;
	total_points: number;

	constructor( panel: Panel_t, ownerPanel: Panel_t, actions_granted: BattlePassAction_t[], startingPoints: number )
	{
		super();

		this.panel = panel;
		this.ownerPanel = ownerPanel;
		this.startingPoints = startingPoints;

		panel.AddClass( 'Visible' );

		var panelXPCircle = panel.FindChildInLayoutFile( "XPCircleContainer" );
		panelXPCircle.BLoadLayoutSnippet( 'BattlePassXPCircle' );

		this.panelCount = 0;
		this.total_points = 0;

		var actionContainer = panel.FindChildInLayoutFile( "ActionContainer" );
		for ( var i = 0; i < actions_granted.length; ++i )
		{
			var actionPanel = $.CreatePanel( 'Panel', actionContainer, 'Action' + i );
			actionPanel.BLoadLayoutSnippet( 'BattlePassAction' );

			if ( actions_granted[i].action_image != null )
			{
				var imagePanel = actionPanel.FindChildInLayoutFile( "ConsumableImage" ) as Image_t;
				imagePanel.SetImage( actions_granted[i].action_image );
			}

			actionPanel.SetDialogVariableInt( 'action_points', actions_granted[i].bp_amount );
			actionPanel.SetDialogVariableInt( 'action_quantity', actions_granted[i].quantity );

			this.panelCount = this.panelCount + 1;
			this.total_points += actions_granted[i].quantity * actions_granted[i].bp_amount;
		}
	}

	start(): void
	{
		this.actions.push( new AddClassAction( this.panel, 'BecomeVisible' ) );
		this.actions.push( new SkippableAction( new WaitAction( g_DelayAfterStart ) ) );

		this.actions.push( new AddClassAction( this.panel, 'ShowTotalActions' ) );
		this.actions.push( new SkippableAction( new WaitAction( g_SubElementDelay ) ) );

		for ( var i = 0; i < this.panelCount; ++i )
		{
			var actionPanel = this.panel.FindChildInLayoutFile( 'Action' + i );
			this.actions.push( new AddClassAction( actionPanel, 'ShowAction' ) );
		}

		this.actions.push( new SkippableAction( new WaitAction( g_SubElementDelay ) ) );

		var panel = this.panel;
		var ownerPanel = this.ownerPanel;
		var total_points = this.total_points;
		var startingPoints = this.startingPoints;
		this.actions.push( new RunFunctionAction( function ()
		{
			UpdateSubpanelTotalPoints( panel, ownerPanel, total_points, startingPoints, false );
		} ) );

		super.start();
	}
}

                                                                               
                                 
                                                                               

interface BattlePassCavernCrawlProgress_t
{
	hero_id: number;
	bp_amount: number;
}

                                              
class AnimateCavernCrawlSubpanelAction extends RunSequentialActions
{
	panel: Panel_t;
	ownerPanel: Panel_t;
	startingPoints: number;

	total_points: number;

	constructor( panel: Panel_t, ownerPanel: Panel_t, cavern_data: BattlePassCavernCrawlProgress_t, startingPoints: number )
	{
		super();

		this.panel = panel;
		this.ownerPanel = ownerPanel;
		this.startingPoints = startingPoints;

		panel.AddClass( 'Visible' );

		( panel.FindChildInLayoutFile( "CavernCrawlHero" ) as DOTAHeroMovie_t ).heroid = cavern_data.hero_id;

		this.total_points = cavern_data.bp_amount;
	}

	start(): void
	{
		this.actions.push( new AddClassAction( this.panel, 'BecomeVisible' ) );
		this.actions.push( new SkippableAction( new WaitAction( g_DelayAfterStart ) ) );

		this.actions.push( new AddClassAction( this.panel, 'ShowMap' ) );
		this.actions.push( new SkippableAction( new WaitAction( g_SubElementDelay ) ) );

		this.actions.push( new AddClassAction( this.panel, 'ShowCompleted' ) );
		this.actions.push( new SkippableAction( new WaitAction( g_SubElementDelay ) ) );

		var panel = this.panel;
		var ownerPanel = this.ownerPanel;
		var total_points = this.total_points;
		var startingPoints = this.startingPoints;
		this.actions.push( new RunFunctionAction( function ()
		{
			UpdateSubpanelTotalPoints( panel, ownerPanel, total_points, startingPoints, false );
		} ) );

		super.start();
	}
}


                                                                               
                         
                                                                               

interface BattlePassEventGameTI9_t
{

	bp_amount: number;
	win_points: number;
	loss_points: number;
	treasure_points: number;
	weekly_cap_remaining: number;
	weekly_cap_total: number;
}

class AnimateEventGameTI9SubpanelAction extends RunSequentialActions
{
	panel: Panel_t;
	ownerPanel: Panel_t;
	startingPoints: number;

	total_points: number;
	show_win: boolean;
	show_loss: boolean;
	show_daily_bonus: boolean;
	show_treasure: boolean;

	constructor( panel: Panel_t, ownerPanel: Panel_t, event_game_ti9: BattlePassEventGameTI9_t, startingPoints: number )
	{
		super();

		var kWinPointsBase = 300;

		this.panel = panel;
		this.ownerPanel = ownerPanel;
		this.startingPoints = startingPoints;
		this.total_points = event_game_ti9.bp_amount;
		this.show_win = ( event_game_ti9.win_points > 0 );
		this.show_loss = ( event_game_ti9.loss_points > 0 );
		this.show_daily_bonus = ( event_game_ti9.win_points > kWinPointsBase );
		this.show_treasure = ( event_game_ti9.treasure_points > 0 );

		panel.AddClass( 'Visible' );

		if ( this.show_win )
		{
			panel.AddClass( "EventGame_HasWin" );
		}

		if ( this.show_loss )
		{
			panel.AddClass( "EventGame_HasLoss" );
		}

		if ( this.show_daily_bonus )
		{
			panel.AddClass( "EventGame_HasDailyBonus" );
		}

		if ( this.show_treasure )
		{
			panel.AddClass( "EventGame_HasTreasure" );
		}

		var panelXPCircle = panel.FindChildInLayoutFile( "XPCircleContainer" );
		panelXPCircle.BLoadLayoutSnippet( 'BattlePassXPCircle' );

		panel.SetDialogVariableInt( "win_points", event_game_ti9.win_points > kWinPointsBase ? kWinPointsBase : event_game_ti9.win_points );
		panel.SetDialogVariableInt( "bonus_points", event_game_ti9.win_points - kWinPointsBase );
		panel.SetDialogVariableInt( "loss_points", event_game_ti9.loss_points );
		panel.SetDialogVariableInt( "treasure_points", event_game_ti9.treasure_points );

		var progressMax = event_game_ti9.weekly_cap_total;
		var progressEnd = progressMax - event_game_ti9.weekly_cap_remaining;
		var progressStart = progressEnd - event_game_ti9.bp_amount;

		panel.SetDialogVariableInt( "weekly_progress", progressEnd );
		panel.SetDialogVariableInt( "weekly_complete_limit", progressMax );

		var progressBar = panel.FindChildInLayoutFile( "EventGameWeeklyProgress" ) as ProgressBarWithMiddle_t;
		progressBar.max = progressMax;
		progressBar.lowervalue = progressStart;
		progressBar.uppervalue = progressEnd;

	}

	start(): void
	{
		this.actions.push( new AddClassAction( this.panel, 'BecomeVisible' ) );
		this.actions.push( new SkippableAction( new WaitAction( g_DelayAfterStart ) ) );

		if ( this.show_win )
		{
			this.actions.push( new AddClassAction( this.panel, 'EventGame_ShowWin' ) );
			this.actions.push( new SkippableAction( new WaitAction( g_SubElementDelay ) ) );

			if ( this.show_daily_bonus )
			{
				this.actions.push( new AddClassAction( this.panel, 'EventGame_ShowDailyBonus' ) );
				this.actions.push( new SkippableAction( new WaitAction( g_SubElementDelay ) ) );
			}
		}

		if ( this.show_loss )
		{
			this.actions.push( new AddClassAction( this.panel, 'EventGame_ShowLoss' ) );
			this.actions.push( new SkippableAction( new WaitAction( g_SubElementDelay ) ) );
		}

		if ( this.show_treasure )
		{
			this.actions.push( new AddClassAction( this.panel, 'EventGame_ShowTreasure' ) );
			this.actions.push( new SkippableAction( new WaitAction( g_SubElementDelay ) ) );
		}

		this.actions.push( new AddClassAction( this.panel, 'EventGame_ShowWeeklyProgress' ) );
		this.actions.push( new SkippableAction( new WaitAction( g_SubElementDelay ) ) );

		var panel = this.panel;
		var ownerPanel = this.ownerPanel;
		var total_points = this.total_points;
		var startingPoints = this.startingPoints;
		this.actions.push( new RunFunctionAction( function ()
		{
			UpdateSubpanelTotalPoints( panel, ownerPanel, total_points, startingPoints, false );
		} ) );

		super.start();
	}
}

                                                                               
                         
                                                                               

interface BattlePassEventGameTI10_t
{
	bp_amount: number;
	premium_amount: number;
	bonus_premium_amount: number;
	bp_start: number;
	bp_max: number;
	premium_start: number;
	premium_max: number;
}

class AnimateEventGameTI10SubpanelAction extends RunSequentialActions
{
	panel: Panel_t;
	ownerPanel: Panel_t;
	startingPoints: number;

	total_points: number;
	premium_starting_points: number;
	premium_progress: number;
	show_weekly_progress: boolean;
	show_premium_weekly_progress: boolean;

	constructor( panel: Panel_t, ownerPanel: Panel_t, event_game_ti10: BattlePassEventGameTI10_t, startingPoints: number )
	{
		super();

		this.panel = panel;
		this.ownerPanel = ownerPanel;
		this.startingPoints = startingPoints;
		this.total_points = event_game_ti10.bp_amount;
		this.premium_starting_points = event_game_ti10.premium_start;
		this.premium_progress = event_game_ti10.bonus_premium_amount;
		this.show_weekly_progress = ( event_game_ti10.bp_amount > 0 );
		this.show_premium_weekly_progress = ( event_game_ti10.bonus_premium_amount > 0 );

		panel.AddClass( 'Visible' );

		var panelXPCircle = panel.FindChildInLayoutFile( "XPCircleContainer" );
		panelXPCircle.BLoadLayoutSnippet( 'BattlePassXPCircle' );

		panel.SetDialogVariableInt( "win_points", event_game_ti10.bp_amount );

		var nPremiumPoints = event_game_ti10.premium_amount;
		var nExtraPremiumPoints = 0;
		if ( event_game_ti10.bonus_premium_amount > 0 )
		{
			nExtraPremiumPoints = event_game_ti10.premium_amount - event_game_ti10.bonus_premium_amount;
			nPremiumPoints = event_game_ti10.bonus_premium_amount;
		}

		panel.SetDialogVariableInt( "premium_points", nPremiumPoints );
		panel.SetDialogVariableInt( "extra_premium_points", nExtraPremiumPoints );
		panel.SetHasClass( 'HasExtraPremiumPoints', nExtraPremiumPoints > 0 );
		panel.SetHasClass( 'HasBonusPremiumPoints', event_game_ti10.bonus_premium_amount > 0 );

		var progressMax = event_game_ti10.bp_max;
		var progressStart = event_game_ti10.bp_start;
		var progressEnd = this.total_points + event_game_ti10.bp_start;

		panel.SetDialogVariableInt( "weekly_progress", this.total_points );
		panel.SetDialogVariableInt( "weekly_start_value", progressStart );
		panel.SetDialogVariableInt( "weekly_complete_limit", progressMax );

		var progressBar = panel.FindChildInLayoutFile( "EventGameWeeklyProgress" ) as ProgressBarWithMiddle_t;
		progressBar.max = Math.max( progressMax, 1 );
		progressBar.lowervalue = progressStart;
		progressBar.uppervalue = progressEnd;

		panel.SetDialogVariableInt( "weekly_premium_progress", event_game_ti10.bonus_premium_amount );
		panel.SetDialogVariableInt( "weekly_premium_start_value", event_game_ti10.premium_start );
		panel.SetDialogVariableInt( "weekly_premium_complete_limit", event_game_ti10.premium_max );

		var progressBar = panel.FindChildInLayoutFile( "EventGameWeeklyPremiumProgress" ) as ProgressBarWithMiddle_t;
		progressBar.max = Math.max( event_game_ti10.premium_max, 1 );
		progressBar.lowervalue = event_game_ti10.premium_start;
		progressBar.uppervalue = progressBar.lowervalue;
	}

	start(): void
	{
		this.actions.push( new AddClassAction( this.panel, 'BecomeVisible' ) );
		this.actions.push( new SkippableAction( new WaitAction( g_DelayAfterStart ) ) );

		if ( this.show_premium_weekly_progress )
		{
			this.actions.push( new AddClassAction( this.panel, 'EventGame_ShowWeeklyPremiumProgress' ) );
			this.actions.push( new SkippableAction( new WaitAction( g_SubElementDelay ) ) );
		}

		if ( this.show_weekly_progress )
		{
			this.actions.push( new AddClassAction( this.panel, 'EventGame_ShowWeeklyProgress' ) );
			this.actions.push( new SkippableAction( new WaitAction( g_SubElementDelay ) ) );
		}

		var panel = this.panel;
		var ownerPanel = this.ownerPanel;
		var total_points = this.total_points;
		var startingPoints = this.startingPoints;
		this.actions.push( new RunFunctionAction( function ()
		{
			UpdateSubpanelTotalPoints( panel, ownerPanel, total_points, startingPoints, false );
		} ) );

		if ( this.show_premium_weekly_progress )
		{
			this.actions.push( new SkippableAction( new WaitAction( 0.2 ) ) );
			this.actions.push( new AddClassAction( this.panel, 'EventGame_ShowWeeklyPremiumBonus' ) );

			( function ( me )
			{
				me.actions.push( new RunFunctionAction( function ()
				{
					var progressBar = me.panel.FindChildInLayoutFile( "EventGameWeeklyPremiumProgress" ) as ProgressBarWithMiddle_t;
					progressBar.uppervalue = me.premium_starting_points + me.premium_progress;
				} ) );
			} )( this );
		}

		super.start();
	}
}

interface BattlePassEventGameNemestice_t
{
	bp_amount: number;
	bp_start: number;
	bp_max: number;
}

class AnimateEventGameNemesticeSubpanelAction extends RunSequentialActions
{
	panel: Panel_t;
	ownerPanel: Panel_t;
	startingPoints: number;

	total_points: number;
	show_weekly_progress: boolean;

	constructor( panel: Panel_t, ownerPanel: Panel_t, event_game_nemestice: BattlePassEventGameNemestice_t, startingPoints: number )
	{
		super();

		this.panel = panel;
		this.ownerPanel = ownerPanel;
		this.startingPoints = startingPoints;
		this.total_points = event_game_nemestice.bp_amount;
		this.show_weekly_progress = ( event_game_nemestice.bp_amount > 0 );

		panel.AddClass( 'Visible' );

		var panelXPCircle = panel.FindChildInLayoutFile( "XPCircleContainer" );
		panelXPCircle.BLoadLayoutSnippet( 'BattlePassXPCircle' );

		panel.SetDialogVariableInt( "win_points", event_game_nemestice.bp_amount );

		panel.SetHasClass( 'HasExtraPremiumPoints', false );
		panel.SetHasClass( 'HasBonusPremiumPoints', false );

		var progressMax = event_game_nemestice.bp_max;
		var progressStart = event_game_nemestice.bp_start;
		var progressEnd = this.total_points + event_game_nemestice.bp_start;

		panel.SetDialogVariableInt( "weekly_progress", this.total_points );
		panel.SetDialogVariableInt( "weekly_start_value", progressStart );
		panel.SetDialogVariableInt( "weekly_complete_limit", progressMax );

		var progressBar = panel.FindChildInLayoutFile( "EventGameWeeklyProgress" ) as ProgressBarWithMiddle_t;
		progressBar.max = Math.max( progressMax, 1 );
		progressBar.lowervalue = progressStart;
		progressBar.uppervalue = progressEnd;
	}

	start(): void
	{
		this.actions.push( new AddClassAction( this.panel, 'BecomeVisible' ) );
		this.actions.push( new SkippableAction( new WaitAction( g_DelayAfterStart ) ) );

		if ( this.show_weekly_progress )
		{
			this.actions.push( new AddClassAction( this.panel, 'EventGame_ShowWeeklyProgress' ) );
			this.actions.push( new SkippableAction( new WaitAction( g_SubElementDelay ) ) );
		}

		var panel = this.panel;
		var ownerPanel = this.ownerPanel;
		var total_points = this.total_points;
		var startingPoints = this.startingPoints;
		this.actions.push( new RunFunctionAction( function ()
		{
			UpdateSubpanelTotalPoints( panel, ownerPanel, total_points, startingPoints, false );
		} ) );

		super.start();
	}
}

                                                                               
                                    
                                                                               

interface BattlePassDailyChallenge_t
{
	hero_id: number;
	bp_amount: number;
}

                                              
class AnimateDailyChallengeSubpanelAction extends RunSequentialActions
{
	panel: Panel_t;
	ownerPanel: Panel_t;
	startingPoints: number;
	total_points: number;

	constructor( panel: Panel_t, ownerPanel: Panel_t, daily_challenge: BattlePassDailyChallenge_t, startingPoints: number )
	{
		super();

		this.panel = panel;
		this.ownerPanel = ownerPanel;
		this.startingPoints = startingPoints;

		panel.AddClass( 'Visible' );

		var panelXPCircle = panel.FindChildInLayoutFile( "XPCircleContainer" );
		panelXPCircle.BLoadLayoutSnippet( 'BattlePassXPCircle' );

		( panel.FindChildInLayoutFile( "DailyChallengeHeroMovie" ) as DOTAHeroMovie_t ).heroid = daily_challenge.hero_id;

		this.total_points = daily_challenge.bp_amount;
	}

	start(): void
	{
		this.actions.push( new AddClassAction( this.panel, 'BecomeVisible' ) );
		this.actions.push( new SkippableAction( new WaitAction( g_DelayAfterStart ) ) );

		this.actions.push( new AddClassAction( this.panel, 'ShowHero' ) );
		this.actions.push( new SkippableAction( new WaitAction( g_SubElementDelay ) ) );

		this.actions.push( new AddClassAction( this.panel, 'ShowCompleted' ) );
		this.actions.push( new SkippableAction( new WaitAction( g_SubElementDelay ) ) );

		var panel = this.panel;
		var ownerPanel = this.ownerPanel;
		var total_points = this.total_points;
		var startingPoints = this.startingPoints;
		this.actions.push( new RunFunctionAction( function ()
		{
			UpdateSubpanelTotalPoints( panel, ownerPanel, total_points, startingPoints, false );
		} ) );

		super.start();
	}
}


                                                                               
                                     
                                                                               

interface BattlePassWeeklyChallenge_t
{
	challenge_description: string;
	progress: number;
	end_progress: number;
	complete_limit: number;
	bp_amount: number;
}

                                              
class AnimateWeeklyChallengeSubpanelAction extends RunSequentialActions
{
	panel: Panel_t;
	ownerPanel: Panel_t;
	startingPoints: number;
	points_for_display: number;
	total_points: number;

	constructor( panel: Panel_t, ownerPanel: Panel_t, weekly_challenge: BattlePassWeeklyChallenge_t, startingPoints: number )
	{
		super();

		this.panel = panel;
		this.ownerPanel = ownerPanel;
		this.startingPoints = startingPoints;

		panel.AddClass( 'Visible' );

		var panelXPCircle = panel.FindChildInLayoutFile( "XPCircleContainer" );
		panelXPCircle.BLoadLayoutSnippet( 'BattlePassXPCircle' );
		panelXPCircle.SetDialogVariableInt( 'points', 1000 );                                                        

		panel.SetDialogVariable( 'weekly_challenge_description', weekly_challenge.challenge_description );
		panel.SetDialogVariableInt( 'weekly_progress', weekly_challenge.progress );
		panel.SetDialogVariableInt( 'weekly_complete_limit', weekly_challenge.complete_limit );
		panel.SetDialogVariableInt( 'weekly_increment', weekly_challenge.end_progress - weekly_challenge.progress );

		var progressBar = panel.FindChildInLayoutFile( "WeeklyChallengeProgress" ) as ProgressBarWithMiddle_t;
		progressBar.max = weekly_challenge.complete_limit;
		progressBar.lowervalue = weekly_challenge.progress;
		progressBar.uppervalue = weekly_challenge.end_progress;

		this.points_for_display = weekly_challenge.bp_amount;
		this.total_points = 0;
		if ( weekly_challenge.end_progress == weekly_challenge.complete_limit )
		{
			this.total_points = weekly_challenge.bp_amount;
		}
		else
		{
			panel.AddClass( "HideXPCircle" );
		}
	}

	start(): void
	{
		this.actions.push( new AddClassAction( this.panel, 'BecomeVisible' ) );
		this.actions.push( new SkippableAction( new WaitAction( g_DelayAfterStart ) ) );

		this.actions.push( new AddClassAction( this.panel, 'ShowChallenge' ) );
		this.actions.push( new SkippableAction( new WaitAction( g_SubElementDelay ) ) );

		if ( this.total_points != 0 )
		{
			this.actions.push( new AddClassAction( this.panel, 'ShowCompleted' ) );
			this.actions.push( new SkippableAction( new WaitAction( g_SubElementDelay ) ) );
		}

		var panel = this.panel;
		var ownerPanel = this.ownerPanel;
		var total_points = this.points_for_display;
		var displayOnly = ( this.total_points == 0 );
		var startingPoints = this.startingPoints;

		this.actions.push( new RunFunctionAction( function ()
		{
			UpdateSubpanelTotalPoints( panel, ownerPanel, total_points, startingPoints, displayOnly );
		} ) );

		super.start();
	}
}

                                                                               
                          
                                                                               

interface BattlePassGuildProgress_t
{
	guild_contracts: BattlePassGuildContract_t[];
	guild_challenge: BattlePassGuildChallenge_t;
}

interface BattlePassGuildContract_t
{
	challenge_instance_id: number;
	challenge_parameter: number;
	completed: boolean;
	battle_point_reward: number;
	guild_point_reward: number;
}

interface BattlePassGuildChallenge_t
{
	challenge_image: string;
	challenge_start_value: number;
	challenge_max_value: number;
	challenge_progress: number;
}

                                              
class AnimateGuildSubpanelAction extends RunSequentialActions
{
	panel: Panel_t;
	ownerPanel: Panel_t;
	startingPoints: number;
	total_points: number;
	guild_progress: BattlePassGuildProgress_t;

	constructor( panel: Panel_t, ownerPanel: Panel_t, guild_progress: BattlePassGuildProgress_t, startingPoints: number, event_id: number )
	{
		super();

		this.panel = panel;
		this.ownerPanel = ownerPanel;
		this.startingPoints = startingPoints;
		this.total_points = 0;
		this.guild_progress = guild_progress;

		panel.AddClass( 'Visible' );

		if ( guild_progress.guild_contracts != null && guild_progress.guild_contracts.length > 0 )
		{
			var contractsList = panel.FindChildInLayoutFile( "GuildContractList" );
			for ( var i = 0; i < guild_progress.guild_contracts.length; ++i )
			{
				var guildContract = guild_progress.guild_contracts[i];

				var contractPanel = $.CreatePanel( 'Panel', contractsList, '' );
				contractPanel.BLoadLayoutSnippet( 'BattlePassGuildContract' );
				var contract = contractPanel.FindChildInLayoutFile( 'GuildContract' ) as DOTAGuildContract_t;
				contract.SetContract( event_id, guildContract.challenge_instance_id, guildContract.challenge_parameter, guildContract.completed );
				contractPanel.SetHasClass( "ContractCompleted", guildContract.completed );
				if ( guildContract.completed )
					this.total_points += guildContract.battle_point_reward;
			}

			panel.AddClass( "HasGuildContracts" );
		}

		if ( guild_progress.guild_challenge != null )
		{
			var guildChallenge = guild_progress.guild_challenge;

			var challengeImage = panel.FindChildInLayoutFile( "GuildChallengeImage" ) as Image_t;
			challengeImage.SetImage( guildChallenge.challenge_image );

			panel.SetDialogVariableInt( "challenge_start_value", guildChallenge.challenge_start_value );
			panel.SetDialogVariableInt( "challenge_max_value", guildChallenge.challenge_max_value );
			panel.SetDialogVariableInt( "challenge_progress", guildChallenge.challenge_progress );

			var challengeProgressBar = panel.FindChildInLayoutFile( "GuildChallengeProgressBar" ) as ProgressBarWithMiddle_t;
			challengeProgressBar.min = 0;
			challengeProgressBar.max = guildChallenge.challenge_max_value;
			challengeProgressBar.lowervalue = guildChallenge.challenge_start_value;
			challengeProgressBar.uppervalue = guildChallenge.challenge_start_value + guildChallenge.challenge_progress;

			panel.AddClass( "HasGuildChallenge" );
		}

		var panelXPCircle = panel.FindChildInLayoutFile( "XPCircleContainer" );
		panelXPCircle.BLoadLayoutSnippet( 'BattlePassXPCircle' );
	}

	start(): void
	{
		this.actions.push( new AddClassAction( this.panel, 'BecomeVisible' ) );
		this.actions.push( new SkippableAction( new WaitAction( g_DelayAfterStart ) ) );

		var contractsList = this.panel.FindChildInLayoutFile( "GuildContractList" );
		if ( contractsList.GetChildCount() > 0 )
		{
			this.actions.push( new AddClassAction( this.panel, "ShowGuildContracts" ) );
			for ( var i = 0; i < contractsList.GetChildCount(); ++i )
			{
				var contractPanel = contractsList.GetChild( i );

				this.actions.push( new RunFunctionAction( ( function ( contract )
				{
					return function () { contract.AddClass( "ShowGuildContract" ); };
				} )( contractPanel ) ) );
				this.actions.push( new SkippableAction( new WaitAction( g_SubElementDelay ) ) );
			}
		}

		if ( this.guild_progress.guild_challenge != null )
		{
			this.actions.push( new AddClassAction( this.panel, 'ShowGuildChallenge' ) );
			this.actions.push( new SkippableAction( new WaitAction( g_SubElementDelay ) ) );
		}

		if ( this.total_points != 0 )
		{
			this.actions.push( new AddClassAction( this.panel, 'ShowCompleted' ) );
			this.actions.push( new SkippableAction( new WaitAction( g_SubElementDelay ) ) );
		}

		var panel = this.panel;
		var ownerPanel = this.ownerPanel;
		var total_points = this.total_points;
		var displayOnly = ( this.total_points == 0 );
		var startingPoints = this.startingPoints;

		this.actions.push( new RunFunctionAction( function ()
		{
			UpdateSubpanelTotalPoints( panel, ownerPanel, total_points, startingPoints, displayOnly );
		} ) );

		super.start();
	}
}


                                                                               
                                               
                                                                               

interface BattlePassPostGame_t
{
	hero_id: number;
	battle_pass_progress: BattlePassProgress_t;
}

interface BattlePassProgress_t
{
	battle_points_event_id: number;
	battle_points_start: number;
	battle_points_per_level: number;

	wagering?: BattlePassWageringData_t;
	tips?: BattlePassTips_t[];
	cavern_crawl?: BattlePassCavernCrawlProgress_t;
	event_game_ti9?: BattlePassEventGameTI9_t;
	event_game_ti10?: BattlePassEventGameTI10_t;
	daily_challenge?: BattlePassDailyChallenge_t;
	weekly_challenge_1?: BattlePassWeeklyChallenge_t;
	actions_granted?: BattlePassAction_t[];
	guild_progress?: BattlePassGuildProgress_t;
}

class AnimateBattlePassScreenAction extends RunSequentialActions
{
	data: BattlePassPostGame_t;

	constructor( data: BattlePassPostGame_t )
	{
		super();
		this.data = data;
	}

	start(): void
	{
		var battlePointsStart = this.data.battle_pass_progress.battle_points_start;
		var battleLevelStart = Math.floor( battlePointsStart / this.data.battle_pass_progress.battle_points_per_level );

		var battlePointsAtLevelStart = battleLevelStart * this.data.battle_pass_progress.battle_points_per_level;

		var bpLevelStart = battlePointsStart - battlePointsAtLevelStart;
		var bpLevelNext = this.data.battle_pass_progress.battle_points_per_level;

		                                                    
		var panel = StartNewScreen( 'BattlePassProgressScreen' );
		panel.BLoadLayoutSnippet( "BattlePassProgress" );

		panel.SetDialogVariableInt( 'total_points_gained', 0 );

		                                                      
		this.actions.push( new AddClassAction( panel, 'ShowScreen' ) );
		this.actions.push( new SkippableAction( new WaitAction( 0.5 ) ) );

		this.actions.push( new AddScreenLinkAction( panel, 'BattlePassProgress', '#DOTA_PlusPostGame_BattlePassProgress', function ()
		{
			panel.SwitchClass( 'current_screen', 'ShowBattlePassProgress' );
		} ) );
		this.actions.push( new SwitchClassAction( panel, 'current_screen', 'ShowBattlePassProgress' ) );
		this.actions.push( new SkippableAction( new WaitAction( 0.5 ) ) );

		var subPanelActions = new RunSkippableStaggeredActions( .3 );

		var startingPointsToAdd = 0;
		var panelCount = 0;
		var kMaxPanels = 6;

		if ( this.data.battle_pass_progress.event_game_ti9 != null )
		{
			var eventPanel = panel.FindChildInLayoutFile( "BattlePassEventGameTI9Progress" );
			const subpanelAction = new AnimateEventGameTI9SubpanelAction( eventPanel, panel, this.data.battle_pass_progress.event_game_ti9, startingPointsToAdd );
			startingPointsToAdd += subpanelAction.total_points;
			subPanelActions.actions.push( subpanelAction );
			if ( ++panelCount > kMaxPanels )
				eventPanel.RemoveClass( 'Visible' );
		}

		if ( this.data.battle_pass_progress.event_game_ti10 != null )
		{
			var eventPanel = panel.FindChildInLayoutFile( "BattlePassEventGameTI10Progress" );
			const subpanelAction = new AnimateEventGameTI10SubpanelAction( eventPanel, panel, this.data.battle_pass_progress.event_game_ti10, startingPointsToAdd );
			startingPointsToAdd += subpanelAction.total_points;
			subPanelActions.actions.push( subpanelAction );
			if ( ++panelCount > kMaxPanels )
				eventPanel.RemoveClass( 'Visible' );
		}

		if ( this.data.battle_pass_progress.cavern_crawl != null )
		{
			var cavernPanel = panel.FindChildInLayoutFile( "BattlePassCavernCrawlProgress" );
			const subpanelAction = new AnimateCavernCrawlSubpanelAction( cavernPanel, panel, this.data.battle_pass_progress.cavern_crawl, startingPointsToAdd );
			startingPointsToAdd += subpanelAction.total_points;
			subPanelActions.actions.push( subpanelAction );
			if ( ++panelCount > kMaxPanels )
				cavernPanel.RemoveClass( 'Visible' );
		}

		if ( this.data.battle_pass_progress.wagering != null )
		{
			var wagerPanel = panel.FindChildInLayoutFile( "BattlePassWagerProgress" );
			const subpanelAction = new AnimateWageringSubpanelAction( wagerPanel, panel, this.data.battle_pass_progress.wagering, startingPointsToAdd );
			startingPointsToAdd += subpanelAction.total_points;
			subPanelActions.actions.push( subpanelAction );
			if ( ++panelCount > kMaxPanels )
				wagerPanel.RemoveClass( 'Visible' );
		}

		if ( this.data.battle_pass_progress.tips != null && this.data.battle_pass_progress.tips.length != 0 )
		{
			var tipPanel = panel.FindChildInLayoutFile( "BattlePassTipsProgress" );
			const subpanelAction = new AnimateTippingSubpanelAction( tipPanel, panel, this.data.battle_pass_progress.tips, startingPointsToAdd );
			startingPointsToAdd += subpanelAction.total_points;
			subPanelActions.actions.push( subpanelAction );
			if ( ++panelCount > kMaxPanels )
				tipPanel.RemoveClass( 'Visible' );
		}

		if ( this.data.battle_pass_progress.actions_granted != null && this.data.battle_pass_progress.actions_granted.length != 0 )
		{
			var actionPanel = panel.FindChildInLayoutFile( "BattlePassActionsGrantedProgress" );
			const subpanelAction = new AnimateActionsGrantedSubpanelAction( actionPanel, panel, this.data.battle_pass_progress.actions_granted, startingPointsToAdd );
			startingPointsToAdd += subpanelAction.total_points;
			subPanelActions.actions.push( subpanelAction );
			if ( ++panelCount > kMaxPanels )
				actionPanel.RemoveClass( 'Visible' );
		}

		if ( this.data.battle_pass_progress.daily_challenge != null )
		{
			var dailyPanel = panel.FindChildInLayoutFile( "BattlePassDailyChallengeProgress" );
			const subpanelAction = new AnimateDailyChallengeSubpanelAction( dailyPanel, panel, this.data.battle_pass_progress.daily_challenge, startingPointsToAdd );
			startingPointsToAdd += subpanelAction.total_points;
			subPanelActions.actions.push( subpanelAction );
			if ( ++panelCount > kMaxPanels )
				dailyPanel.RemoveClass( 'Visible' );
		}

		if ( this.data.battle_pass_progress.weekly_challenge_1 != null )
		{
			var weeklyPanel = panel.FindChildInLayoutFile( "BattlePassWeeklyChallengeProgress" );
			const subpanelAction = new AnimateWeeklyChallengeSubpanelAction( weeklyPanel, panel, this.data.battle_pass_progress.weekly_challenge_1, startingPointsToAdd );
			startingPointsToAdd += subpanelAction.total_points;
			subPanelActions.actions.push( subpanelAction );
			if ( ++panelCount > kMaxPanels )
				weeklyPanel.RemoveClass( 'Visible' );
		}

		if ( this.data.battle_pass_progress.guild_progress != null )
		{
			var guildPanel = panel.FindChildInLayoutFile( "BattlePassGuildProgress" );
			const subpanelAction = new AnimateGuildSubpanelAction( guildPanel, panel, this.data.battle_pass_progress.guild_progress, startingPointsToAdd, this.data.battle_pass_progress.battle_points_event_id );
			startingPointsToAdd += subpanelAction.total_points;
			subPanelActions.actions.push( subpanelAction );
			if ( ++panelCount > kMaxPanels )
				guildPanel.RemoveClass( 'Visible' );
		}

		this.actions.push( subPanelActions );

		this.actions.push( new AnimateBattlePassLevelsAction( panel,
			this.data.battle_pass_progress.battle_points_event_id,
			this.data.battle_pass_progress.battle_points_start,
			this.data.battle_pass_progress.battle_points_per_level,
			startingPointsToAdd ) );

		this.actions.push( new WaitAction( 0.2 ) );

		this.actions.push( new StopSkippingAheadAction() );
		this.actions.push( new SkippableAction( new WaitAction( 1.5 ) ) );
		this.actions.push( new SwitchClassAction( panel, 'current_screen', '' ) );
		this.actions.push( new SkippableAction( new WaitAction( 0.5 ) ) );

		super.start();
	}
}

interface Frostivus2018PostGame_t
{
	hero_id: number;
	frostivus_progress: Frostivus2018Progress_t;
}

interface Frostivus2018Progress_t
{
	battle_points_event_id: number;
	battle_points_start: number;
	battle_points_per_level: number;
	battle_points_earned: number;
	battle_points_daily_bonus_earned: number;
}

                 

class AnimateFrostivusScreenAction extends RunSequentialActions
{
	data: Frostivus2018PostGame_t;

	constructor( data: Frostivus2018PostGame_t )
	{
		super();
		this.data = data;
	}

	start(): void
	{
		var battlePointsStart = this.data.frostivus_progress.battle_points_start;
		var battleLevelStart = Math.floor( battlePointsStart / this.data.frostivus_progress.battle_points_per_level );

		var battlePointsAtLevelStart = battleLevelStart * this.data.frostivus_progress.battle_points_per_level;

		var bpLevelStart = battlePointsStart - battlePointsAtLevelStart;
		var bpLevelNext = this.data.frostivus_progress.battle_points_per_level;

		                                                    
		var panel = StartNewScreen( 'Frostivus2018ProgressScreen' );
		panel.BLoadLayoutSnippet( "Frostivus2018Progress" );

		panel.SetDialogVariableInt( 'total_points_gained', 0 );

		                                                      
		this.actions.push( new AddClassAction( panel, 'ShowScreen' ) );
		this.actions.push( new SkippableAction( new WaitAction( 0.5 ) ) );

		this.actions.push( new AddScreenLinkAction( panel, 'Frostivus2018Progress', '#DOTA_PlusPostGame_Frostivus2018Progress', function ()
		{
			panel.SwitchClass( 'current_screen', 'ShowFrostivus2018Progress' );
		} ) );
		this.actions.push( new SwitchClassAction( panel, 'current_screen', 'ShowFrostivus2018Progress' ) );
		this.actions.push( new SkippableAction( new WaitAction( 0.5 ) ) );

		( function ( me, myPanel )
		{
			me.actions.push( new RunFunctionAction( function ()
			{
				myPanel.SetDialogVariableInt( 'total_points_gained', me.data.frostivus_progress.battle_points_earned );
			} ) );
		} )( this, panel );

		                                                                                                
		panel.SetDialogVariableInt( 'current_level_bp', bpLevelStart );
		panel.SetDialogVariableInt( 'bp_to_next_level', bpLevelNext );
		( panel.FindChildInLayoutFile( 'Frostivus2018LevelShield' ) as DOTAEventLevelShield_t ).SetEventLevel( this.data.frostivus_progress.battle_points_event_id, battleLevelStart );

		this.actions.push( new SkippableAction( new WaitAction( 0.75 ) ) );

		var progressBar = panel.FindChildInLayoutFile( "BattleLevelProgress" ) as ProgressBarWithMiddle_t;
		progressBar.max = bpLevelNext;
		progressBar.lowervalue = bpLevelStart;
		progressBar.uppervalue = bpLevelStart;

		var bpEarned = 0;
		var bpLevel = bpLevelStart;
		var battleLevel = battleLevelStart;

		var bpRemaining = this.data.frostivus_progress.battle_points_earned;
		var bpEarnedOnRow = 0;

		while ( bpRemaining > 0 )
		{
			var bpToAnimate = 0;
			var bpToNextLevel = 0;
			bpToNextLevel = bpLevelNext - bpLevel;
			bpToAnimate = Math.min( bpRemaining, bpToNextLevel );

			if ( bpToAnimate > 0 )
			{
				this.actions.push( new SkippableAction( new AnimateBattlePointsIncreaseAction( panel, bpToAnimate, bpEarnedOnRow, bpEarned, bpLevel ) ) );

				bpEarned += bpToAnimate;
				bpLevel += bpToAnimate;
				bpEarnedOnRow += bpToAnimate;
				bpRemaining -= bpToAnimate;
			}

			bpToNextLevel = bpLevelNext - bpLevel;

			if ( bpToNextLevel != 0 )
				continue;

			battleLevel = battleLevel + 1;
			bpLevel = 0;

			this.actions.push( new AddClassAction( panel, 'LeveledUpStart' ) );

			( function ( me, battleLevelInternal )
			{
				me.actions.push( new RunFunctionAction( function ()
				{
					var levelShield = panel.FindChildInLayoutFile( 'Frostivus2018LevelShield' ) as DOTAEventLevelShield_t;
					levelShield.AddClass( 'LeveledUp' );
					levelShield.SetEventLevel( me.data.frostivus_progress.battle_points_event_id, battleLevelInternal );
				} ) );
			} )( this, battleLevel );

			this.actions.push( new RemoveClassAction( panel, 'LeveledUpStart' ) );
			this.actions.push( new AddClassAction( panel, 'LeveledUpEnd' ) );
			this.actions.push( new SkippableAction( new WaitAction( 1.0 ) ) );

			( function ( me, battleLevelInternal )
			{
				me.actions.push( new RunFunctionAction( function ()
				{
					var levelShield = panel.FindChildInLayoutFile( 'Frostivus2018LevelShield' );
					levelShield.RemoveClass( 'LeveledUp' );
				} ) );
			} )( this, battleLevel );
			this.actions.push( new RemoveClassAction( panel, 'LeveledUpEnd' ) );

			( function ( me, bpLevelInternal, bpLevelNextInternal )
			{
				me.actions.push( new RunFunctionAction( function ()
				{
					progressBar.lowervalue = 0;
					progressBar.uppervalue = 0;
					progressBar.max = bpLevelNextInternal;
					panel.SetDialogVariableInt( 'current_level_bp', bpLevelInternal );
					panel.SetDialogVariableInt( 'bp_to_next_level', bpLevelNextInternal );
				} ) );
			} )( this, bpLevel, bpLevelNext );
		}

		this.actions.push( new WaitAction( 0.2 ) );

		this.actions.push( new StopSkippingAheadAction() );
		this.actions.push( new SkippableAction( new WaitAction( 1.5 ) ) );
		this.actions.push( new SwitchClassAction( panel, 'current_screen', '' ) );
		this.actions.push( new SkippableAction( new WaitAction( 0.5 ) ) );

		super.start();
	}
}

interface EventPointsPostGame_t
{
	hero_id: number;
	event_points_progress: EventPointsProgress_t;
}

interface EventPointsProgress_t
{
	battle_points_event_id: number;
	battle_points_start: number;
	battle_points_per_level: number;
	battle_points_earned: number;
	battle_points_event_name: string;
}

                                     

class AnimateEventPointsScreenAction extends RunSequentialActions
{
	data: EventPointsPostGame_t;

	constructor( data: EventPointsPostGame_t )
	{
		super();
		this.data = data;
	}

	start(): void
	{
		var battlePointsStart = this.data.event_points_progress.battle_points_start;
		var battleLevelStart = Math.floor( battlePointsStart / this.data.event_points_progress.battle_points_per_level );
		var heroID = this.data.hero_id;

		var battlePointsAtLevelStart = battleLevelStart * this.data.event_points_progress.battle_points_per_level;

		var bpLevelStart = 0;
		var bpLevelNext = 0;
		bpLevelStart = battlePointsStart - battlePointsAtLevelStart;
		bpLevelNext = this.data.event_points_progress.battle_points_per_level;

		                                                    
		var panel = StartNewScreen( 'EventPointsProgressScreen' );
		panel.BLoadLayoutSnippet( "EventPointsProgress" );

		panel.SetDialogVariableInt( 'total_points_gained', 0 );

		panel.SetDialogVariable( 'event_name', $.Localize( this.data.event_points_progress.battle_points_event_name ) );

		                                                      
		this.actions.push( new AddClassAction( panel, 'ShowScreen' ) );
		this.actions.push( new SkippableAction( new WaitAction( 0.5 ) ) );

		this.actions.push( new AddScreenLinkAction( panel, 'EventPointsProgress', '#DOTA_PlusPostGame_EventPointsProgress', function ()
		{
			panel.SwitchClass( 'current_screen', 'ShowEventPointsProgress' );
		} ) );
		this.actions.push( new SwitchClassAction( panel, 'current_screen', 'ShowEventPointsProgress' ) );
		this.actions.push( new SkippableAction( new WaitAction( 0.5 ) ) );

		( function ( me, myPanel )
		{
			me.actions.push( new RunFunctionAction( function ()
			{
				myPanel.SetDialogVariableInt( 'total_points_gained', me.data.event_points_progress.battle_points_earned );
			} ) );
		} )( this, panel );

		                                                                                              
		panel.SetDialogVariableInt( 'current_level_bp', bpLevelStart );
		panel.SetDialogVariableInt( 'bp_to_next_level', bpLevelNext );
		( panel.FindChildInLayoutFile( 'EventPointsLevelShield' ) as DOTAEventLevelShield_t ).SetEventLevel( this.data.event_points_progress.battle_points_event_id, battleLevelStart );

		this.actions.push( new SkippableAction( new WaitAction( 0.75 ) ) );

		var wonGameRow = panel.FindChildInLayoutFile( "EventPointsWonGameRow" );
		this.actions.push( new AddClassAction( wonGameRow, 'ShowRow' ) );
		this.actions.push( new AddClassAction( wonGameRow, 'ShowValue' ) );

		var progressBar = panel.FindChildInLayoutFile( "BattleLevelProgress" ) as ProgressBarWithMiddle_t;
		progressBar.max = bpLevelNext;
		progressBar.lowervalue = bpLevelStart;
		progressBar.uppervalue = bpLevelStart;

		var bpEarned = 0;
		var bpLevel = bpLevelStart;
		var battleLevel = battleLevelStart;

		var bpRemaining = this.data.event_points_progress.battle_points_earned;
		var bpEarnedOnRow = 0;

		while ( bpRemaining > 0 )
		{
			var bpToAnimate = 0;
			var bpToNextLevel = 0;
			bpToNextLevel = bpLevelNext - bpLevel;
			bpToAnimate = Math.min( bpRemaining, bpToNextLevel );

			if ( bpToAnimate > 0 )
			{
				this.actions.push( new SkippableAction( new AnimateBattlePointsIncreaseAction( panel, bpToAnimate, bpEarnedOnRow, bpEarned, bpLevel ) ) );

				bpEarned += bpToAnimate;
				bpLevel += bpToAnimate;
				bpEarnedOnRow += bpToAnimate;
				bpRemaining -= bpToAnimate;
			}

			bpToNextLevel = bpLevelNext - bpLevel;

			if ( bpToNextLevel != 0 )
				continue;

			battleLevel = battleLevel + 1;
			bpLevel = 0;

			this.actions.push( new AddClassAction( panel, 'LeveledUpStart' ) );

			( function ( me, battleLevelInternal )
			{
				me.actions.push( new RunFunctionAction( function ()
				{
					var levelShield = panel.FindChildInLayoutFile( 'EventPointsLevelShield' ) as DOTAEventLevelShield_t;
					levelShield.AddClass( 'LeveledUp' );
					levelShield.SetEventLevel( me.data.event_points_progress.battle_points_event_id, battleLevelInternal );
				} ) );
			} )( this, battleLevel );

			this.actions.push( new RemoveClassAction( panel, 'LeveledUpStart' ) );
			this.actions.push( new AddClassAction( panel, 'LeveledUpEnd' ) );
			this.actions.push( new SkippableAction( new WaitAction( 1.0 ) ) );

			( function ( me, battleLevelInternal )
			{
				me.actions.push( new RunFunctionAction( function ()
				{
					var levelShield = panel.FindChildInLayoutFile( 'EventPointsLevelShield' );
					levelShield.RemoveClass( 'LeveledUp' );
				} ) );
			} )( this, battleLevel );
			this.actions.push( new RemoveClassAction( panel, 'LeveledUpEnd' ) );

			( function ( me, bpLevelInternal, bpLevelNextInternal )
			{
				me.actions.push( new RunFunctionAction( function ()
				{
					progressBar.lowervalue = 0;
					progressBar.uppervalue = 0;
					progressBar.max = bpLevelNextInternal;
					panel.SetDialogVariableInt( 'current_level_bp', bpLevelInternal );
					panel.SetDialogVariableInt( 'bp_to_next_level', bpLevelNextInternal );
				} ) );
			} )( this, bpLevel, bpLevelNext );
		}

		this.actions.push( new WaitAction( 0.2 ) );

		this.actions.push( new StopSkippingAheadAction() );
		this.actions.push( new SkippableAction( new WaitAction( 1.5 ) ) );
		this.actions.push( new SwitchClassAction( panel, 'current_screen', '' ) );
		this.actions.push( new SkippableAction( new WaitAction( 0.5 ) ) );

		super.start();
	}
}


                                                                               
  
                             
  
                                                                               

interface PlayerMatchSurveyPostGame_t
{
	match_id: string;
	player_match_survey_progress: {};
}

class AnimatePlayerMatchSurveyScreenAction extends RunSequentialActions
{
	data: PlayerMatchSurveyPostGame_t;

	constructor( data: PlayerMatchSurveyPostGame_t )
	{
		super();
		this.data = data;
	}

	start(): void
	{
		var data = this.data;

		                                                    
		var panel = StartNewScreen( 'PlayerMatchSurveyScreen' );
		panel.BLoadLayoutSnippet( "PlayerMatchSurvey" );

		var goodRatingContainer = panel.FindChildInLayoutFile( 'GoodRatingContainer' );
		var badRatingContainer = panel.FindChildInLayoutFile( 'BadRatingContainer' );
		var skipButton = panel.FindChildInLayoutFile( 'SkipButton' );

		var SubmitRating = function ( nRating: -1 | 0 | 1, nFlags: number )
		{
			const matchId = data.match_id ? Number( data.match_id ) : 0;
			$.DispatchEvent( 'DOTAMatchSubmitPlayerMatchSurvey', matchId, nRating, nFlags );

			                                                           
			goodRatingContainer.enabled = false;
			badRatingContainer.enabled = false;

			PlayUISoundScript( "ui_goto_player_page" );
		};

		for ( var i = 1; i < goodRatingContainer.GetChildCount(); ++i )
		{
			var goodRatingButton = goodRatingContainer.GetChild( i );
			var nRating = goodRatingButton.GetAttributeInt( "rating_flag", 0 );

			var reg = function ( goodRatingButton: Panel_t, nRating: number )
			{
				$.RegisterEventHandler( 'Activated', goodRatingButton, function ()
				{
					goodRatingButton.AddClass( 'Selected' );
					SubmitRating( 1, nRating );
				} );
			};
			reg( goodRatingButton, nRating );
		}

		for ( var i = 1; i < badRatingContainer.GetChildCount(); ++i )
		{
			var badRatingButton = badRatingContainer.GetChild( i );
			var nRating = badRatingButton.GetAttributeInt( "rating_flag", 0 );
			var reg = function ( badRatingButton: Panel_t, nRating: number )
			{
				$.RegisterEventHandler( 'Activated', badRatingButton, function ()
				{
					badRatingButton.AddClass( 'Selected' );
					SubmitRating( -1, nRating );
				} );
			};
			reg( badRatingButton, nRating );
		}

		                                     
		for ( var k = 0; k < 5; ++k )
		{
			for ( var i = 1; i < goodRatingContainer.GetChildCount(); ++i )
			{
				var randint = Math.floor( ( goodRatingContainer.GetChildCount() - 1 ) * Math.random() ) + 1;
				var button = goodRatingContainer.GetChild( i );
				goodRatingContainer.MoveChildAfter( button, goodRatingContainer.GetChild( randint ) );
			}
			for ( var i = 1; i < badRatingContainer.GetChildCount(); ++i )
			{
				var randint = Math.floor( ( badRatingContainer.GetChildCount() - 1 ) * Math.random() ) + 1;
				var button = badRatingContainer.GetChild( i );
				badRatingContainer.MoveChildAfter( button, badRatingContainer.GetChild( randint ) );
			}
		}


		$.RegisterEventHandler( 'Activated', skipButton, function ()
		{
			skipButton.AddClass( 'Selected' );
			panel.AddClass( "Skipped" );
			SubmitRating( 0, 0 );
		} );

		                                                      
		this.actions.push( new StopSkippingAheadAction() );
		this.actions.push( new AddClassAction( panel, 'ShowScreen' ) );
		this.actions.push( new AddScreenLinkAction( panel, 'PlayerMatchSurveyProgress', '#DOTA_PlayerMatchSurveyPostGame_PlayerMatchSurvey', function ()
		{
			panel.AddClass( 'RatingScreenForceVisible' );
		} ) );
		this.actions.push( new WaitAction( 0.25 ) );
		this.actions.push( new AddClassAction( panel, 'RatingScreenVisible' ) );

		var durationAction = new RunUntilSingleActionFinishedAction();
		// @ts-ignore ignore until post_game_progress_coach_rating is TypeScript
		durationAction.actions.push( new WaitForSurveyStateChange( panel ) );
		this.actions.push( durationAction );

		this.actions.push( new AddClassAction( panel, 'HideSkipButton' ) );
		this.actions.push( new WaitAction( 0.5 ) );

		this.actions.push( new PlaySoundAction( "ui_hero_select_slide_late" ) );
		this.actions.push( new AddClassAction( panel, 'SubmitFeedbackVisible' ) );

		this.actions.push( new WaitAction( 0.0 ) );
		this.actions.push( new RemoveClassAction( panel, 'RatingScreenVisible' ) );
		this.actions.push( new WaitAction( 0.0 ) );

		super.start();
	}
}

                                                                               
         
                                                                               

class AnimateMVP2ScreenAction extends AnimateMVP2TabAction
{
	start(): void
	{
		                                                    
		var mvp2ScreenPanel = StartNewScreen( 'MVP2Screen' );
		mvp2ScreenPanel.BLoadLayoutSnippet( "MVP2Screen" );

		this.data.bProgressVersion = true;

		this.init( mvp2ScreenPanel );
	}
}

                                                                               
                              
                                                                               
interface Diretide2020PostGame_t
{
	player_slot: number;
	diretide_rewards_progress: Diretide2020Progress_t;
}

interface Diretide2020Progress_t
{
	match_id: string;
	awards: Diretide2020Award_t[];
	items: Diretide2020ItemAward_t[];
	match_players: Diretide2020MatchPlayer_t[];
}

interface Diretide2020Award_t
{
	award_name: `#DOTA_Diretide_Candy_Reason${number}`;
	award_player_slots: number[];
	award_amounts: number[];
}

interface Diretide2020ItemAward_t
{
	item_id: number;
	item_image: string;
	item_player_slot: number;
}

interface Diretide2020MatchPlayer_t
{
	account_id: number;
	player_slot: number;
	player_name: string;
	event_points: number;
	owns_event: 0 | 1;
}

class AnimateDiretideRewardsScreenAction extends BaseAction
{
	data: Diretide2020PostGame_t;
	seq!: RunSequentialActions;

	constructor( data: Diretide2020PostGame_t )
	{
		super();
		this.data = data;
	}

	start(): void
	{
		const oldRootPanel = $( '#Diretide2020RewardsScreen' );
		if ( oldRootPanel )
		{
			oldRootPanel.DeleteAsync( 0 );
		}

		const rootPanel = StartNewScreen( 'Diretide2020RewardsScreen' );
		rootPanel.BLoadLayout( 'file://{resources}/layout/diretide/post_game_diretide.xml', false, false );
		// @ts-ignore ignore until post_game_diretide is TypeScript
		this.seq = rootPanel.CreatePostgameAction( this.data );
		this.seq.start();
		var screenLinksContainer = $.GetContextPanel().GetParent().FindPanelInThisOrParentLayoutFile( 'ProgressScreenButtons' );
		if ( screenLinksContainer.FindChildInLayoutFile( 'DireTide' ) === null )
		{
			var link = $.CreatePanel( 'Button', screenLinksContainer, 'DireTide' );
			link.AddClass( 'ProgressScreenButton' );
			link.AddClass( 'DiretideProgress' );
			var me = this;
			link.SetPanelEvent( 'onactivate', function ()
			{

				$.DispatchEvent( 'DOTAPostGameProgressShowSummary', rootPanel );
				var seq = new RunSequentialActions();
				seq.actions.push( new RunFunctionAction( function () 
				{
					screenLinksContainer.enabled = false;
				} ) );
				seq.actions.push( me );
				seq.actions.push( new RunFunctionAction( function () 
				{
					screenLinksContainer.enabled = true;
				} ) );
				RunSingleAction( seq );
			} );
		}
	}
	update(): boolean
	{
		return this.seq.update();
	}

	finish(): void
	{
		this.seq.finish();
	}
}


function TestAnimateBattlePass()
{
	var data: BattlePassPostGame_t =
	{
		hero_id: 87,

		battle_pass_progress:
		{
			battle_points_event_id: 29,
			battle_points_start: 74850,
			battle_points_per_level: 1000,

			wagering:
			{
				wager_amount: 2,
				conversion_ratio: 100,
				wager_token_bonus_pct: 25,
				wager_streak_bonus_pct: 10,
			},

			tips:
				[
					{
						account_id: 172258,
						count: 2,
						amount: 250,
					},
					  				 
					  					                   
					  					         
					  					            
					  				  
					  				 
					  					                   
					  					         
					  					            
					  				  
					  				 
					  					                   
					  					         
					  					            
					  				  
					  				 
					  					                   
					  					         
					  					            
					  				  
					  				 
					  					                   
					  					         
					  					            
					  				  
					  				 
					  					                   
					  					         
					  					            
					  				  
					  				 
					  					                   
					  					         
					  					            
					  				  
					  				 
					  					                   
					  					         
					  					            
					  				  
				],

			cavern_crawl:
			{
				hero_id: 87,
				bp_amount: 375,
			},

			                            
			              
			                                 
			                                  
			                                
			                                      
			                                            
			                                        
			               
			  
			event_game_ti10:
			{
				bp_amount: 1200,
				premium_amount: 500,
				bonus_premium_amount: 500,
				bp_start: 350,
				bp_max: 2000,
				premium_start: 2250,
				premium_max: 2500,
			},

			                  
			   
			  	            
			  	               
			    

			                     
			   
			  	                                              
			  	                
			  	                    
			  	                      
			  	               
			    

			actions_granted:
				[
					{
						action_id: 704,
						quantity: 2,
						bp_amount: 100,
						action_image: "file://{images}/spellicons/consumables/seasonal_ti9_shovel.png"
					},
					{
						action_id: 705,
						quantity: 1,
						bp_amount: 5000,
						action_image: "file://{images}/spellicons/consumables/seasonal_ti9_shovel.png"
					},
				],

			guild_progress:
			{
				guild_contracts:
					[
						{
							challenge_instance_id: 2152900061,
							challenge_parameter: 23,
							completed: true,
							battle_point_reward: 150,
							guild_point_reward: 150
						},
						{
							challenge_instance_id: 2506886225,
							challenge_parameter: 22000,
							completed: true,
							battle_point_reward: 150,
							guild_point_reward: 150
						},
						{
							challenge_instance_id: 2506886225,
							challenge_parameter: 22000,
							completed: false,
							battle_point_reward: 150,
							guild_point_reward: 150
						},
					],

				guild_challenge:
				{
					challenge_image: "file://{images}/guilds/challenges/guild_networth_by_time.png",
					challenge_start_value: 1234,
					challenge_max_value: 4500,
					challenge_progress: 400
				}
			}
		}
	};

	TestProgressAnimation( data );
}

function TestAnimateCavernCrawl()
{
	var data: CavernCrawlPostGame_t =
	{
		hero_id: 92,
		cavern_crawl_progress:
		{
			event_id: 36,
			map_variant: 0,
			turbo_mode: false,
			map_progress:
				[
					{
						path_id_completed: 0,
						room_id_claimed: 1,
					}
				],
		},
	};

	TestProgressAnimation( data );
}


function TestAnimateRubickArcanaProgress()
{
	var data =
	{
		hero_id: 86,

		rubick_arcana_progress:
		{
			arcana_start_score: 34,
			arcana_end_score: 36
		}
	};

	TestProgressAnimation( data );
}


function TestAnimateWraithKingArcanaProgress()
{
	var data =
	{
		hero_id: 42,

		wraith_king_arcana_progress:
		{
			previous_heroes_killed_mask:
				[
					1, 2, 3, 4, 5
				],
			heroes_killed:
				[
					6, 82
				]
		}
	};

	TestProgressAnimation( data );
}

function TestAnimateFrostivusProgress()
{
	var data: Frostivus2018PostGame_t =
	{
		hero_id: 87,
		frostivus_progress:
		{
			battle_points_event_id: 24,
			battle_points_start: 2200,
			battle_points_per_level: 1000,
			battle_points_earned: 1250,
			battle_points_daily_bonus_earned: 1000,
		}
	};

	TestProgressAnimation( data );
}

function TestAnimateEventPointsProgress()
{
	$.GetContextPanel().AddClass( 'Season_NewBloom2019' );
	var data: EventPointsPostGame_t =
	{
		hero_id: 87,
		event_points_progress:
		{
			battle_points_event_id: 24,
			battle_points_start: 2200,
			battle_points_per_level: 1000,
			battle_points_earned: 1250,
			battle_points_event_name: '#DOTA_EventName_NewBloom2019',
		}
	};

	TestProgressAnimation( data );
}

function TestAnimateDiretideProgress()
{
	$.GetContextPanel().AddClass( 'Season_Diretide2020' );
	var data: Diretide2020PostGame_t =
	{
		player_slot: 3,
		diretide_rewards_progress:
		{
			match_id: '1000030665004',
			awards:
				[
					{
						award_name: '#DOTA_Diretide_Candy_Reason7',
						award_amounts: [35],
						award_player_slots: [2]
					},
					{
						award_name: '#DOTA_Diretide_Candy_Reason2',
						award_amounts: [25, 25, 25, 25, 25],
						award_player_slots: [0, 1, 2, 3, 4]
					},
					{
						award_name: '#DOTA_Diretide_Candy_Reason9',
						award_amounts: [25, 125, 45],
						award_player_slots: [1, 2, 3]
					},
					{
						award_name: '#DOTA_Diretide_Candy_Reason1',
						award_amounts: [10, 10, 10, 10, 10, 10, 10, 10, 10, 10],
						award_player_slots: [0, 1, 2, 3, 4, 128, 129, 130, 131, 132]
					},
				],

			items:
				[
					{
						item_id: 13780,                 
						item_player_slot: 1,
						item_image: ""
					},
					{
						item_id: 17626,                 
						item_player_slot: 2,
						item_image: ""
					},
					{
						item_id: 13812,
						item_player_slot: 2,
						item_image: "file://{images}/events/diretide/spray.png"
					}
				],

			match_players:
				[
					{
						player_slot: 0,
						player_name: 'Eric L',
						event_points: 0,
						account_id: 85501006,
						owns_event: 0
					},
					{
						player_slot: 1,
						player_name: 'Greg',
						event_points: 450,
						account_id: 146131,
						owns_event: 1
					},
					{
						player_slot: 2,
						event_points: 45,
						player_name: 'AlexF',
						account_id: 156258214,
						owns_event: 1
					},
					{
						player_slot: 3,
						event_points: 92,
						player_name: 'bradm',
						account_id: 85501369,
						owns_event: 1
					},
					{
						player_slot: 4,
						event_points: 11,
						player_name: 'anishc',
						account_id: 85501621,
						owns_event: 0
					},
					{
						player_slot: 128,
						event_points: 60,
						player_name: 'BoyangZ',
						account_id: 85501128,
						owns_event: 0
					},
					{
						player_slot: 129,
						event_points: 0,
						player_name: 'irvz',
						account_id: 85502069,
						owns_event: 1
					},
					{
						player_slot: 130,
						event_points: 22,
						player_name: 'CameronC',
						account_id: 85501829,
						owns_event: 1
					},
					{
						player_slot: 131,
						event_points: 50,
						player_name: 'Alireza',
						account_id: 170021,
						owns_event: 1
					},
					{
						player_slot: 132,
						event_points: 5067,
						player_name: 'philco',
						account_id: 70071,
						owns_event: 0
					}

				]
		}

	};

	TestProgressAnimation( data );
}

var s_TestNumber = 271;

function TestMVP2Screen()
{

	  
	                             

	                       
	                              
	 
		                                                        
		 
			                               
		 

		                                                   
	 
	                          
	 
		     
		 
			       
				 
					        
					                  
					           
					                                                         
					                                       
					                                                       
					                    
					                                                         
					                        
					                
					                                   
					                                 
					            
						                                
						                               
						                              
					 
				  
				 
					        
					                    
					            
					                                     
					                                       
					                   
					                
					                                   
					                                 
					            
						                             
					 
				  
				 
					        
					                    
					           
					               
					                              
					                                
					                  
					                                   
					                                 
					            
						                             
					 
				 
			 
		 
	  

	                              
	    
}

function TestAnimatePlayerMatchSurvey()
{
	var data: PlayerMatchSurveyPostGame_t =
	{
		match_id: "0",
		player_match_survey_progress: {}
	};

	TestProgressAnimation( data );
}
