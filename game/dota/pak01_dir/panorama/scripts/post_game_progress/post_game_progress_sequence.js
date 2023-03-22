/// <reference path="../dota.d.ts" />
/// <reference path="../util.ts" />
/// <reference path="../sequence_actions.ts" />
/// <reference path="post_game_progress_utils.ts" />
/// <reference path="post_game_progress_screens.ts" />
/// <reference path="../post_game_mvp.ts" />
/// <reference path="post_game_progress_spring2021.ts" />
/// <reference path="post_game_progress_battle_pass_2022.ts" />
// ----------------------------------------------------------------------------
//   All Screens
// ----------------------------------------------------------------------------
function CreateProgressAnimationSequence(data) {
    // Uncomment if you want to see the data coming from C++
    // $.Msg( JSON.stringify( data, null, 2 ) );
    var seq = new RunSequentialActions();
    // While the actions are animating, don't allow clicking links to other screens.
    seq.actions.push(new RunFunctionAction(function () {
        GetScreenLinksContainer().enabled = false;
    }));
    if (data.mvp2 != null) {
        seq.actions.push(new AnimateMVP2ScreenAction(data));
    }
    if (data.coaches_need_rating != null) {
        for (var i = 0; i < data.coaches_need_rating.length; ++i) {
            // @ts-ignore ignore until post_game_progress_rating is TypeScript
            seq.actions.push(new AnimateCoachRatingScreenAction(data, data.coaches_need_rating[i]));
        }
    }
    if (data.mvp_voting_progress != null) {
        seq.actions.push(new AnimateMVPVotingScreenAction(data));
    }
    if (data.cavern_crawl_progress != null) {
        seq.actions.push(new AnimateCavernCrawlScreenAction(data));
    }
    // should be right before battle pass progress screen because it shares the "battle point progress" element
    if (data.gauntlet_progress != null) {
        seq.actions.push(new AnimateGauntletProgressScreenAction(data, data.gauntlet_progress));
    }
    if (data.battle_pass_progress != null) {
        seq.actions.push(new AnimateBattlePassScreenAction(data));
    }
    if (data.spring_2021_progress != null) {
        seq.actions.push(new AnimateSpring2021ScreenAction(data));
    }
    if (data.fall_2021_progress != null) {
        // @ts-ignore ignore until post_game_progress_fall2021 is TypeScript
        seq.actions.push(new AnimateFall2021ScreenAction(data));
    }
    if (data.battle_pass_2022_progress != null) {
        seq.actions.push(new AnimateBattlePass2022ScreenAction(data));
    }
    if (data.arcana_progress != null) {
        // @ts-ignore ignore until post_game_progress_arcanas is TypeScript
        if (data.arcana_progress.hero_id == 6) {
            // @ts-ignore ignore until post_game_progress_arcanas is TypeScript
            seq.actions.push(new AnimateDrowRangerArcanaScreenAction(data));
        }
        else {
            // @ts-ignore ignore until post_game_progress_arcanas is TypeScript
            seq.actions.push(new AnimateGenericArcanaScreenAction(data));
        }
    }
    if (data.rubick_arcana_progress != null) {
        // @ts-ignore ignore until post_game_progress_arcanas is TypeScript
        seq.actions.push(new AnimateRubickArcanaScreenAction(data));
    }
    if (data.wraith_king_arcana_progress != null) {
        // @ts-ignore ignore until post_game_progress_arcanas is TypeScript
        seq.actions.push(new AnimateWraithKingArcanaScreenAction(data));
    }
    if (data.hero_badge_progress_old != null || data.hero_relics_progress_old != null) {
        // @ts-ignore ignore until post_game_progress_hero_badge is TypeScript
        seq.actions.push(new AnimateHeroBadgeLevelScreenAction(data));
    }
    if (data.hero_badge_progress != null || data.dota_plus_progress != null || data.guild_progress != null) {
        // @ts-ignore ignore until post_game_progress_match_rewards is TypeScript
        seq.actions.push(new AnimateMatchRewardsScreenAction(data));
    }
    if (data.hero_relics_progress != null) {
        // @ts-ignore ignore until post_game_progress_hero_relics is TypeScript
        seq.actions.push(new AnimateHeroRelicsScreenAction(data));
    }
    if (data.frostivus_progress != null) {
        seq.actions.push(new AnimateFrostivusScreenAction(data));
    }
    if (data.event_points_progress != null) {
        seq.actions.push(new AnimateEventPointsScreenAction(data));
    }
    if (data.player_match_survey_progress != null) {
        seq.actions.push(new AnimatePlayerMatchSurveyScreenAction(data));
    }
    seq.actions.push(new RunFunctionAction(function () {
        GetScreenLinksContainer().enabled = true;
    }));
    return seq;
}
function TestProgressAnimation(data) {
    StopSkippingAhead();
    RunSingleAction(CreateProgressAnimationSequence(data));
}
/* Called from C++ to start the progress animation */
function StartProgressAnimation(data) {
    ResetScreens();
    StopSkippingAhead();
    var seq = CreateProgressAnimationSequence(data);
    // Signal back to the C++ code that we're done displaying progress
    seq.actions.push(new RunFunctionAction(function () {
        $.DispatchEvent('DOTAPostGameProgressAnimationComplete', $.GetContextPanel());
    }));
    RunSingleAction(seq);
}
function HideProgress() {
    // Just tell the C++ code that we're done by dispatching the event
    $.DispatchEvent('DOTAPostGameProgressAnimationComplete', $.GetContextPanel());
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoicG9zdF9nYW1lX3Byb2dyZXNzX3NlcXVlbmNlLmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsicG9zdF9nYW1lX3Byb2dyZXNzX3NlcXVlbmNlLnRzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiJBQUFBLHFDQUFxQztBQUNyQyxtQ0FBbUM7QUFDbkMsK0NBQStDO0FBQy9DLG9EQUFvRDtBQUNwRCxzREFBc0Q7QUFDdEQsNENBQTRDO0FBQzVDLHlEQUF5RDtBQUN6RCwrREFBK0Q7QUF5Qy9ELCtFQUErRTtBQUMvRSxnQkFBZ0I7QUFDaEIsK0VBQStFO0FBRS9FLFNBQVMsK0JBQStCLENBQUUsSUFBNkI7SUFFdEUsd0RBQXdEO0lBQ3hELDRDQUE0QztJQUU1QyxJQUFJLEdBQUcsR0FBRyxJQUFJLG9CQUFvQixFQUFFLENBQUM7SUFFckMsZ0ZBQWdGO0lBQ2hGLEdBQUcsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksaUJBQWlCLENBQUU7UUFFeEMsdUJBQXVCLEVBQUUsQ0FBQyxPQUFPLEdBQUcsS0FBSyxDQUFDO0lBQzNDLENBQUMsQ0FBRSxDQUFFLENBQUM7SUFFTixJQUFLLElBQUksQ0FBQyxJQUFJLElBQUksSUFBSSxFQUN0QjtRQUNDLEdBQUcsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksdUJBQXVCLENBQUUsSUFBc0IsQ0FBRSxDQUFFLENBQUM7S0FDMUU7SUFFRCxJQUFLLElBQUksQ0FBQyxtQkFBbUIsSUFBSSxJQUFJLEVBQ3JDO1FBQ0MsS0FBTSxJQUFJLENBQUMsR0FBRyxDQUFDLEVBQUUsQ0FBQyxHQUFHLElBQUksQ0FBQyxtQkFBbUIsQ0FBQyxNQUFNLEVBQUUsRUFBRSxDQUFDLEVBQ3pEO1lBQ0Msa0VBQWtFO1lBQ2xFLEdBQUcsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksOEJBQThCLENBQUUsSUFBSSxFQUFFLElBQUksQ0FBQyxtQkFBbUIsQ0FBQyxDQUFDLENBQUMsQ0FBRSxDQUFFLENBQUM7U0FDNUY7S0FD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