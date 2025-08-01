/// <reference path="../dota.d.ts" />
/// <reference path="../util.ts" />
/// <reference path="../sequence_actions.ts" />
/// <reference path="post_game_progress_utils.ts" />
/// <reference path="post_game_progress_sequence.ts" />

const EVENT_ID_INTERNATIONAL_2024 = 49;

interface International2024PostGame_t
{
	international2024_progress: International2024Progress_t;
}

interface International2024Progress_t
{
	compendium_level: number,
	compendium_points: number,
	compendium_points_per_level: number,
	current_week: number,
	weekly_progress_initial: number,
	weekly_progress_limit: number,
	match_points_received: number,
	match_points_received_reason: string,
	daily_win_points_received: number,
}

class AnimateInternational2024ScreenAction extends RunSequentialActions
{
	data: International2024Progress_t;

	constructor( data: International2024PostGame_t )
	{
		super();
		this.data = data.international2024_progress;
	}

	start()
	{
		                                                    
		let panel = StartNewScreen( 'International2024ProgressScreen' );
		panel.BLoadLayoutSnippet( "International2024Progress" );

		let levelShield: DOTAEventLevelShield_t = panel.FindChildInLayoutFile( 'LevelShield' ) as DOTAEventLevelShield_t;
		let weeklyProgressBar: ProgressBarWithMiddle_t = panel.FindChildInLayoutFile( 'WeeklyProgressBar' ) as ProgressBarWithMiddle_t;
		let compendiumLevelProgressBar: ProgressBarWithMiddle_t = panel.FindChildInLayoutFile( 'CompendiumLevelProgressBar' ) as ProgressBarWithMiddle_t;

		panel.SetDialogVariableInt( "current_week", this.data.current_week );
		panel.SetDialogVariableInt( "weekly_points_max", this.data.weekly_progress_limit );
		weeklyProgressBar.min = 0;
		weeklyProgressBar.max = this.data.weekly_progress_limit;
		weeklyProgressBar.lowervalue = this.data.weekly_progress_initial;
		weeklyProgressBar.uppervalue = this.data.weekly_progress_initial;

		panel.SetDialogVariableInt( "weekly_points_current", this.data.weekly_progress_initial );
		panel.SetDialogVariable( "match_points_reason", $.Localize( this.data.match_points_received_reason ) );
		panel.SetDialogVariableInt( "match_points", this.data.match_points_received );
		panel.SetDialogVariableInt( "daily_win_points", this.data.daily_win_points_received );

		let nCurrentLevelPoints = this.data.compendium_points % this.data.compendium_points_per_level;
		panel.SetDialogVariableInt( "current_level_progress", nCurrentLevelPoints );
		panel.SetDialogVariableInt( "max_level_progress", this.data.compendium_points_per_level );
		compendiumLevelProgressBar.min = 0;
		compendiumLevelProgressBar.max = this.data.compendium_points_per_level;
		compendiumLevelProgressBar.lowervalue = nCurrentLevelPoints;
		compendiumLevelProgressBar.uppervalue = nCurrentLevelPoints;

		levelShield.SetEventLevel( EVENT_ID_INTERNATIONAL_2024, this.data.compendium_level );

		this.actions.push( new AddScreenLinkAction( panel, 'International2024Progress', '#DOTA_EventName_International2024' ) );

		this.actions.push( new WaitAction( 0.5 ) );
		this.actions.push( new AddClassAction( panel, 'ShowMatchProgress' ) );
		this.actions.push( new WaitAction( 0.5 ) );

		let nTotalPointsEarned : number = 0;

		let matchPointsRow: Panel_t = panel.FindChildInLayoutFile( 'MatchPointsRow' );
		this.actions.push( new AddClassAction( matchPointsRow, 'ShowRow' ) );
		this.actions.push( new WaitAction( 0.5 ) );
		nTotalPointsEarned += this.data.match_points_received;

		if ( this.data.daily_win_points_received > 0 )
		{
			let dailyWinRow: Panel_t = panel.FindChildInLayoutFile( 'DailyWinRow' );
			this.actions.push( new AddClassAction( dailyWinRow, 'ShowRow' ) );
			this.actions.push( new WaitAction( 0.5 ) );
			nTotalPointsEarned += this.data.daily_win_points_received;
		}

		                                 
		let nTotalPointsToAnimate: number = nTotalPointsEarned;
		let nWeeklyProgressPoints: number = this.data.weekly_progress_initial;
		let nCurrentCompendiumLevel: number = this.data.compendium_level;
		while ( nTotalPointsToAnimate > 0 )
		{
			let nPointsToNextLevel: number = this.data.compendium_points_per_level - nCurrentLevelPoints;
			let nPointsToWeeklyCap: number = this.data.weekly_progress_limit - nWeeklyProgressPoints;

			let nPointsToAnimate: number = Math.min( nPointsToNextLevel, nPointsToWeeklyCap, nTotalPointsToAnimate );

			let fAnimateSeconds: number = 1.0;
			let par: RunParallelActions = new RunParallelActions();
			par.actions.push( new AnimateDialogVariableIntAction( panel, 'weekly_points_current', nWeeklyProgressPoints, nWeeklyProgressPoints + nPointsToAnimate, fAnimateSeconds ) );
			par.actions.push( new AnimateProgressBarWithMiddleAction( weeklyProgressBar, nWeeklyProgressPoints, nWeeklyProgressPoints + nPointsToAnimate, fAnimateSeconds ) );
			par.actions.push( new AnimateDialogVariableIntAction( panel, 'current_level_progress', nCurrentLevelPoints, nCurrentLevelPoints + nPointsToAnimate, fAnimateSeconds ) );
			par.actions.push( new AnimateProgressBarWithMiddleAction( compendiumLevelProgressBar, nCurrentLevelPoints, nCurrentLevelPoints + nPointsToAnimate, fAnimateSeconds ) );
			par.actions.push( new PlaySoundForDurationAction( "XP.Count", fAnimateSeconds ) );
			this.actions.push( par );

			if ( nPointsToNextLevel == nPointsToAnimate )
			{
				nCurrentCompendiumLevel++;
				nCurrentLevelPoints = 0;
				this.actions.push( new RunFunctionAction( function ()
				{
					levelShield.SetEventLevel( EVENT_ID_INTERNATIONAL_2024, nCurrentCompendiumLevel );
					compendiumLevelProgressBar.lowervalue = 0;
				} ) );
				this.actions.push( new TriggerClassAction( levelShield, 'LevelUp' ) );
			}
			else
			{
				nCurrentLevelPoints += nPointsToAnimate;
			}

			                                                         
			if ( nPointsToWeeklyCap == nPointsToAnimate )
			{
				                                    
				break;
			}
			nWeeklyProgressPoints += nPointsToAnimate;

			nTotalPointsToAnimate -= nPointsToAnimate;
		}

		this.actions.push( new WaitAction( 2.0 ) );

		this.actions.push( new StopSkippingAheadAction() );
		this.actions.push( new SkippableAction( new WaitAction( 1.0 ) ) );

		super.start();
	}
}

function TestAnimateInternational2024()
{
	const data: International2024PostGame_t =
	{
		international2024_progress:
		{
			compendium_level: 23,
			compendium_points: 23250,
			compendium_points_per_level: 1000,
			current_week: 1,
			weekly_progress_initial: 1250,
			weekly_progress_limit: 10000,
			match_points_received: 250,
			match_points_received_reason: "#DOTA_Compendium2024_WeeklyChallenge_WonMatch",
			daily_win_points_received: 1000,
		}
	};

	TestProgressAnimation( data );
}
