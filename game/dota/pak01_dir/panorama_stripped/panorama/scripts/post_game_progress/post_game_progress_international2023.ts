/// <reference path="../dota.d.ts" />
/// <reference path="../util.ts" />
/// <reference path="../sequence_actions.ts" />
/// <reference path="post_game_progress_utils.ts" />
/// <reference path="post_game_progress_sequence.ts" />

const HERO_PROGRESS_INCOMPLETE = 0;
const HERO_PROGRESS_HALF = 1;
const HERO_PROGRESS_COMPLETE = 2;

interface International2023PostGame_t
{
	international2023_progress: International2023Progress_t;
}

interface International2023Progress_t
{
	progress_hero_index: number;
	progress_is_half: boolean;
	quest_difficulty: number;
	quest_progress: number; 
	quest_reward: number;

	heroes: International2023HeroState_t[];
}

interface International2023HeroState_t
{
	hero_id: number;
	past_progress: number;
}

class AnimateInternational2023ScreenAction extends RunSequentialActions
{
	data: International2023Progress_t;

	constructor( data: International2023PostGame_t )
	{
		super();
		this.data = data.international2023_progress;
	}

	start()
	{
		                                                    
		var panel = StartNewScreen( 'International2023ProgressScreen' );
		panel.BLoadLayoutSnippet( "International2023Progress" );
		this.actions.push( new AddScreenLinkAction( panel, 'International2023Progress', '#DOTA_International2023PostGame_Progress' ) );

		panel.SetDialogVariableInt( "quest_difficulty", this.data.quest_difficulty );
		panel.SetDialogVariableInt( "quest_progress", this.data.quest_progress );
		panel.SetDialogVariableInt( "quest_reward", this.data.quest_reward );

		var tiShield = panel.FindChildInLayoutFile( "TILogoShield" );
		this.actions.push( new AddClassAction( tiShield, "Display" ) );

		this.actions.push( new SkippableAction( new WaitAction( 0.1 ) ) );

		var headerPanel = panel.FindChildInLayoutFile( "Header" );
		this.actions.push( new AddClassAction( headerPanel, "Display" ) );
		
		this.actions.push( new SkippableAction( new WaitAction( 0.4 ) ) );

		                 
		var heroListPanel = panel.FindChildInLayoutFile( 'HeroList' );
		var progressHeroPanel = null;
		for ( var i = 0; i < this.data.heroes.length; ++i )
		{
			var heroPanel = $.CreatePanel( "Panel", heroListPanel, "QuestHero" + i );
			heroPanel.BLoadLayoutSnippet( "International2023Hero" );

			var heroMovie = heroPanel.FindChildInLayoutFile( 'QuestHeroMovie' ) as DOTAHeroMovie_t;
			heroMovie.heroid = this.data.heroes[ i ].hero_id;

			var progressClass = "Incomplete";
			if ( this.data.heroes[ i ].past_progress == HERO_PROGRESS_HALF )
			{
				progressClass = "HalfProgress";
			}
			else if ( this.data.heroes[ i ].past_progress == HERO_PROGRESS_COMPLETE )
			{
				progressClass = "Completed";
			}
			heroPanel.AddClass( progressClass );

			this.actions.push( new SkippableAction( new WaitAction( 0.2 ) ) );
			this.actions.push( new AddClassAction( heroPanel, "Display" ) );
			this.actions.push( new RunFunctionAction( function () {	PlaySoundEffect( 'Relic.Received' ); } ) );

			if ( i == this.data.progress_hero_index )
			{
				progressHeroPanel = heroPanel;
			}
		}

		this.actions.push( new SkippableAction( new WaitAction( 0.5 ) ) );

		                   
		if ( progressHeroPanel != null )
		{
			var progressClass = "NewFullProgress";
			if ( this.data.progress_is_half )
			{
				if ( this.data.heroes[ this.data.progress_hero_index ].past_progress == HERO_PROGRESS_INCOMPLETE )
				{
					progressClass = "NewHalfProgress";
				}
			}

			this.actions.push( new AddClassAction( progressHeroPanel, progressClass ) );
			this.actions.push( new RunFunctionAction( function () { PlaySoundEffect( 'HeroBadgeLevelUpReward.ShowReward' ); } ) );
		}

		this.actions.push( new SkippableAction( new WaitAction( 0.8 ) ) );
		var questProgressLabel = panel.FindChildInLayoutFile( "QuestProgress" );
		this.actions.push( new AddClassAction( questProgressLabel, "Display" ) );

		if ( this.data.quest_progress == this.data.quest_difficulty )
		{
			this.actions.push( new SkippableAction( new WaitAction( 1 ) ) );
			this.actions.push( new RemoveClassAction( questProgressLabel, "Display" ) );

			this.actions.push( new SkippableAction( new WaitAction( 0.2 ) ) );
			var completeLabel = panel.FindChildInLayoutFile( "QuestComplete" );
			this.actions.push( new AddClassAction( completeLabel, "Display" ) );
			this.actions.push( new RunFunctionAction( function () {	PlaySoundEffect( 'WeeklyQuest.ClaimReward' ); } ) );

			this.actions.push( new SkippableAction( new WaitAction( 0.5 ) ) );
			var rewardsLabel = panel.FindChildInLayoutFile( "QuestReward" );
			this.actions.push( new AddClassAction( rewardsLabel, "Display" ) );

			this.actions.push( new SkippableAction( new WaitAction( 0.5 ) ) );
			this.actions.push( new RunFunctionAction( function () { PlaySoundEffect( 'Shards.Stop.Increase' ); } ) );
		}

		this.actions.push( new StopSkippingAheadAction() );
		this.actions.push( new SkippableAction( new WaitAction( 1.0 ) ) );

		super.start();
	}
}

function TestAnimateInternational2023()
{
	const data: International2023PostGame_t =
	{
		international2023_progress:
		{
			progress_hero_index: 3,                                                      
			progress_is_half: false,
			quest_difficulty: 3,
			quest_progress: 3,                                             
			quest_reward: 1000,

			heroes:
				[
					{
						hero_id: 11,
						past_progress: HERO_PROGRESS_COMPLETE,
					},
					{
						hero_id: 2,
						past_progress: HERO_PROGRESS_COMPLETE,
					},
					{
						hero_id: 41,
						past_progress: HERO_PROGRESS_INCOMPLETE,
					},
					{
						hero_id: 18,
						past_progress: HERO_PROGRESS_INCOMPLETE,
					},
					{
						hero_id: 32,
						past_progress: HERO_PROGRESS_HALF,
					}
				]
		}
	};

	TestProgressAnimation( data );
}
