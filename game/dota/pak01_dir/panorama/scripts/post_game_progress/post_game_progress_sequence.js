"use strict";
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
/// <reference path="post_game_progress_monster_hunter.ts" />
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
    if (data.international2023_progress != null) {
        seq.actions.push(new AnimateInternational2023ScreenAction(data));
    }
    if (data.international2024_progress != null) {
        seq.actions.push(new AnimateInternational2024ScreenAction(data));
    }
    if (data.frostivus2023_progress != null) {
        seq.actions.push(new AnimateFrostivus2023ScreenAction(data));
    }
    if (data.crownfall_progress != null) {
        seq.actions.push(new AnimateCrownfallScreenAction(data));
    }
    if (data.frostivus2024_progress != null) {
        seq.actions.push(new AnimateFrostivus2024ScreenAction(data));
    }
    if (data.monster_hunter_progress != null) {
        seq.actions.push(new AnimateMonsterHunterScreenAction(data));
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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoicG9zdF9nYW1lX3Byb2dyZXNzX3NlcXVlbmNlLmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsiLi4vLi4vLi4vLi4vLi4vY29udGVudC9kb3RhL3Bhbm9yYW1hL3NjcmlwdHMvcG9zdF9nYW1lX3Byb2dyZXNzL3Bvc3RfZ2FtZV9wcm9ncmVzc19zZXF1ZW5jZS50cyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiO0FBQUEscUNBQXFDO0FBQ3JDLG1DQUFtQztBQUNuQywrQ0FBK0M7QUFDL0Msb0RBQW9EO0FBQ3BELHNEQUFzRDtBQUN0RCw0Q0FBNEM7QUFDNUMseURBQXlEO0FBQ3pELCtEQUErRDtBQUMvRCxnRUFBZ0U7QUFDaEUsZ0VBQWdFO0FBQ2hFLDREQUE0RDtBQUM1RCx3REFBd0Q7QUFDeEQsNERBQTREO0FBQzVELDZEQUE2RDtBQTZDN0QsK0VBQStFO0FBQy9FLGdCQUFnQjtBQUNoQiwrRUFBK0U7QUFFL0UsU0FBUywrQkFBK0IsQ0FBRSxJQUE2QjtJQUV0RSx3REFBd0Q7SUFDeEQsNENBQTRDO0lBRTVDLElBQUksR0FBRyxHQUFHLElBQUksb0JBQW9CLEVBQUUsQ0FBQztJQUVyQyxnRkFBZ0Y7SUFDaEYsR0FBRyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxpQkFBaUIsQ0FBRTtRQUV4Qyx1QkFBdUIsRUFBRSxDQUFDLE9BQU8sR0FBRyxLQUFLLENBQUM7SUFDM0MsQ0FBQyxDQUFFLENBQUUsQ0FBQztJQUVOLElBQUssSUFBSSxDQUFDLElBQUksSUFBSSxJQUFJLEVBQ3RCO1FBQ0MsR0FBRyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSx1QkFBdUIsQ0FBRSxJQUFzQixDQUFFLENBQUUsQ0FBQztLQUMxRTtJQUVELElBQUssSUFBSSxDQUFDLG1CQUFtQixJQUFJLElBQUksRUFDckM7UUFDQyxLQUFNLElBQUksQ0FBQyxHQUFHLENBQUMsRUFBRSxDQUFDLEdBQUcsSUFBSSxDQUFDLG1CQUFtQixDQUFDLE1BQU0sRUFBRSxFQUFF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