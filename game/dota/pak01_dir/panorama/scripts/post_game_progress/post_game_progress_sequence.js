"use strict";
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
    if (data.cavern_crawl_progress != null) {
        seq.actions.push(new AnimateCavernCrawlScreenAction(data));
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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoicG9zdF9nYW1lX3Byb2dyZXNzX3NlcXVlbmNlLmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsicG9zdF9nYW1lX3Byb2dyZXNzX3NlcXVlbmNlLnRzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiI7QUFBQSxxQ0FBcUM7QUFDckMsbUNBQW1DO0FBQ25DLCtDQUErQztBQUMvQyxvREFBb0Q7QUFDcEQsc0RBQXNEO0FBQ3RELDRDQUE0QztBQUM1Qyx5REFBeUQ7QUFDekQsK0RBQStEO0FBdUMvRCwrRUFBK0U7QUFDL0UsZ0JBQWdCO0FBQ2hCLCtFQUErRTtBQUUvRSxTQUFTLCtCQUErQixDQUFFLElBQTZCO0lBRXRFLHdEQUF3RDtJQUN4RCw0Q0FBNEM7SUFFNUMsSUFBSSxHQUFHLEdBQUcsSUFBSSxvQkFBb0IsRUFBRSxDQUFDO0lBRXJDLGdGQUFnRjtJQUNoRixHQUFHLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGlCQUFpQixDQUFFO1FBRXhDLHVCQUF1QixFQUFFLENBQUMsT0FBTyxHQUFHLEtBQUssQ0FBQztJQUMzQyxDQUFDLENBQUUsQ0FBRSxDQUFDO0lBRU4sSUFBSyxJQUFJLENBQUMsSUFBSSxJQUFJLElBQUksRUFDdEI7UUFDQyxHQUFHLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLHVCQUF1QixDQUFFLElBQXNCLENBQUUsQ0FBRSxDQUFDO0tBQzFFO0lBRUQsSUFBSyxJQUFJLENBQUMsbUJBQW1CLElBQUksSUFBSSxFQUNyQztRQUNDLEtBQU0sSUFBSSxDQUFDLEdBQUcsQ0FBQyxFQUFFLENBQUMsR0FBRyxJQUFJLENBQUMsbUJBQW1CLENBQUMsTUFBTSxFQUFFLEVBQUUsQ0FBQyxFQUN6RDtZQUNDLGtFQUFrRTtZQUNsRSxHQUFHLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLDhCQUE4QixDQUFFLElBQUksRUFBRSxJQUFJLENBQUMsbUJBQW1CLENBQUMsQ0FBQyxDQUFDLENBQUUsQ0FBRSxDQUFDO1NBQzVGO0tB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