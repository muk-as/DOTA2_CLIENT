/// <reference path="../dota.d.ts" />
/// <reference path="../util.ts" />
/// <reference path="../sequence_actions.ts" />
/// <reference path="post_game_progress_utils.ts" />
/// <reference path="post_game_progress_screens.ts" />
/// <reference path="../post_game_mvp.ts" />
/// <reference path="post_game_progress_spring2021.ts" />
/// <reference path="post_game_progress_battle_pass_2022.ts" />
/// <reference path="post_game_progress_international2023.ts" />
/// <reference path="post_game_progress_international2024.ts" />
/// <reference path="post_game_progress_frostivus2023.ts" />
/// <reference path="post_game_progress_crownfall.ts" />
/// <reference path="post_game_progress_frostivus2024.ts" />

interface PostGameShared_t
{
	player_id: number;
	player_slot: number;
	hero_id: number;
	match_id: string;
}

interface __temp__
{
	coaches_need_rating: {}[];
	fall_2021_progress: {};
	arcana_progress: {};
	rubick_arcana_progress: {};
	wraith_king_arcana_progress: {};
	hero_badge_progress_old: {};
	hero_relics_progress_old: {};
	hero_badge_progress: {};
	dota_plus_progress: {};
	guild_progress: {};
	hero_relics_progress: {};
}

type PostGameScreenData_t =
	BPSpring2021PostGame_t &
	Diretide2020PostGame_t &
	PlayerMatchSurveyPostGame_t &
	MVP2PostGame_t &
	CavernCrawlPostGame_t &
	BattlePassPostGame_t &
	BP2022PostGame_t &
	Frostivus2018PostGame_t &
	EventPointsPostGame_t &
	International2023PostGame_t &
	International2024PostGame_t &
	Frostivus2023PostGame_t &
	CrownfallPostGame_t &
	Frostivus2024PostGame_t &
	__temp__;

type PostGameData_t = PostGameShared_t & Partial<PostGameScreenData_t>;

                                                                               
                
                                                                               

function CreateProgressAnimationSequence( data: Partial<PostGameData_t> ): RunSequentialActions
{
	                                                        
	                                            

	var seq = new RunSequentialActions();

	                                                                                
	seq.actions.push( new RunFunctionAction( function () 
	{
		GetScreenLinksContainer().enabled = false;
	} ) );

	if ( data.mvp2 != null )
	{
		seq.actions.push( new AnimateMVP2ScreenAction( data as MVP2PostGame_t ) );
	}

	if ( data.coaches_need_rating != null )
	{
		for ( var i = 0; i < data.coaches_need_rating.length; ++i )
		{
			// @ts-ignore ignore until post_game_progress_rating is TypeScript
			seq.actions.push( new AnimateCoachRatingScreenAction( data, data.coaches_need_rating[i] ) );
		}
	}

	if ( data.cavern_crawl_progress != null )
	{
		seq.actions.push( new AnimateCavernCrawlScreenAction( data as CavernCrawlPostGame_t ) );
	}

	if ( data.battle_pass_progress != null )
	{
		seq.actions.push( new AnimateBattlePassScreenAction( data as BattlePassPostGame_t ) );
	}

	if ( data.spring_2021_progress != null )
	{
		seq.actions.push( new AnimateSpring2021ScreenAction( data as BPSpring2021PostGame_t ) );
	}

	if ( data.fall_2021_progress != null )
	{
		// @ts-ignore ignore until post_game_progress_fall2021 is TypeScript
		seq.actions.push( new AnimateFall2021ScreenAction( data ) );
	}

	if ( data.battle_pass_2022_progress != null )
	{
		seq.actions.push( new AnimateBattlePass2022ScreenAction( data as BP2022PostGame_t ) );
	}

	if ( data.international2023_progress != null )
	{
		seq.actions.push( new AnimateInternational2023ScreenAction( data as International2023PostGame_t ) );
	}

	if ( data.international2024_progress != null )
	{
		seq.actions.push( new AnimateInternational2024ScreenAction( data as International2024PostGame_t ) );
	}

	if ( data.frostivus2023_progress != null )
	{
		seq.actions.push( new AnimateFrostivus2023ScreenAction( data as Frostivus2023PostGame_t ) );
	}
	 
	if (data.crownfall_progress != null) {
		seq.actions.push( new AnimateCrownfallScreenAction( data as CrownfallPostGame_t ) );
	}

	if (data.frostivus2024_progress != null) {
		seq.actions.push(new AnimateFrostivus2024ScreenAction(data as Frostivus2024PostGame_t));
	}

	if ( data.arcana_progress != null )
	{
		// @ts-ignore ignore until post_game_progress_arcanas is TypeScript
		if ( data.arcana_progress.hero_id == 6 )
		{
			// @ts-ignore ignore until post_game_progress_arcanas is TypeScript
			seq.actions.push( new AnimateDrowRangerArcanaScreenAction( data ) );
		}
		else
		{
			// @ts-ignore ignore until post_game_progress_arcanas is TypeScript
			seq.actions.push( new AnimateGenericArcanaScreenAction( data ) );
		}
	}

	if ( data.rubick_arcana_progress != null )
	{
		// @ts-ignore ignore until post_game_progress_arcanas is TypeScript
		seq.actions.push( new AnimateRubickArcanaScreenAction( data ) );
	}

	if ( data.wraith_king_arcana_progress != null )
	{
		// @ts-ignore ignore until post_game_progress_arcanas is TypeScript
		seq.actions.push( new AnimateWraithKingArcanaScreenAction( data ) );
	}

	if ( data.hero_badge_progress_old != null || data.hero_relics_progress_old != null )
	{
		// @ts-ignore ignore until post_game_progress_hero_badge is TypeScript
		seq.actions.push( new AnimateHeroBadgeLevelScreenAction( data ) );
	}

	if ( data.hero_badge_progress != null || data.dota_plus_progress != null || data.guild_progress != null )
	{
		// @ts-ignore ignore until post_game_progress_match_rewards is TypeScript
		seq.actions.push( new AnimateMatchRewardsScreenAction( data ) );
	}

	if ( data.hero_relics_progress != null )
	{
		// @ts-ignore ignore until post_game_progress_hero_relics is TypeScript
		seq.actions.push( new AnimateHeroRelicsScreenAction( data ) );
	}

	if ( data.frostivus_progress != null )
	{
		seq.actions.push( new AnimateFrostivusScreenAction( data as Frostivus2018PostGame_t ) );
	}

	if ( data.event_points_progress != null )
	{
		seq.actions.push( new AnimateEventPointsScreenAction( data as EventPointsPostGame_t ) );
	}

	if ( data.player_match_survey_progress != null )
	{
		seq.actions.push( new AnimatePlayerMatchSurveyScreenAction( data as PlayerMatchSurveyPostGame_t ) );
	}

	seq.actions.push( new RunFunctionAction( function ()
	{
		GetScreenLinksContainer().enabled = true;
	} ) );

	return seq;
}

function TestProgressAnimation( data: Partial<PostGameData_t> ): void
{
	StopSkippingAhead();
	RunSingleAction( CreateProgressAnimationSequence( data ) );
}

                                                     
function StartProgressAnimation( data: Partial<PostGameData_t> ): void
{
	ResetScreens();
	StopSkippingAhead();

	var seq = CreateProgressAnimationSequence( data );
	                                                                  
	seq.actions.push( new RunFunctionAction( function ()
	{
		$.DispatchEvent( 'DOTAPostGameProgressAnimationComplete', $.GetContextPanel() );
	} ) );

	RunSingleAction(seq);
}

function HideProgress(): void
{
	                                                                  
	$.DispatchEvent( 'DOTAPostGameProgressAnimationComplete', $.GetContextPanel() );
}
