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
function CreateProgressAnimationSequence(data) {
    var seq = new RunSequentialActions();
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
function StartProgressAnimation(data) {
    ResetScreens();
    StopSkippingAhead();
    var seq = CreateProgressAnimationSequence(data);
    seq.actions.push(new RunFunctionAction(function () {
        $.DispatchEvent('DOTAPostGameProgressAnimationComplete', $.GetContextPanel());
    }));
    RunSingleAction(seq);
}
function HideProgress() {
    $.DispatchEvent('DOTAPostGameProgressAnimationComplete', $.GetContextPanel());
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoicG9zdF9nYW1lX3Byb2dyZXNzX3NlcXVlbmNlLmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsiLi4vLi4vLi4vLi4vLi4vY29udGVudC9kb3RhL3Bhbm9yYW1hL3NjcmlwdHMvcG9zdF9nYW1lX3Byb2dyZXNzL3Bvc3RfZ2FtZV9wcm9ncmVzc19zZXF1ZW5jZS50cyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiO0FBQUEscUNBQXFDO0FBQ3JDLG1DQUFtQztBQUNuQywrQ0FBK0M7QUFDL0Msb0RBQW9EO0FBQ3BELHNEQUFzRDtBQUN0RCw0Q0FBNEM7QUFDNUMseURBQXlEO0FBQ3pELCtEQUErRDtBQUMvRCxnRUFBZ0U7QUFDaEUsZ0VBQWdFO0FBQ2hFLDREQUE0RDtBQUM1RCx3REFBd0Q7QUFDeEQsNERBQTREO0FBZ0Q1RCxTQUFTLCtCQUErQixDQUFFLElBQTZCO0lBS3RFLElBQUksR0FBRyxHQUFHLElBQUksb0JBQW9CLEVBQUUsQ0FBQztJQUdyQyxHQUFHLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGlCQUFpQixDQUFFO1FBRXhDLHVCQUF1QixFQUFFLENBQUMsT0FBTyxHQUFHLEtBQUssQ0FBQztJQUMzQyxDQUFDLENBQUUsQ0FBRSxDQUFDO0lBRU4sSUFBSyxJQUFJLENBQUMsSUFBSSxJQUFJLElBQUksRUFDdEI7UUFDQyxHQUFHLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLHVCQUF1QixDQUFFLElBQXNCLENBQUUsQ0FBRSxDQUFDO0tBQzFFO0lBRUQsSUFBSyxJQUFJLENBQUMsbUJBQW1CLElBQUksSUFBSSxFQUNyQztRQUNDLEtBQU0sSUFBSSxDQUFDLEdBQUcsQ0FBQyxFQUFFLENBQUMsR0FBRyxJQUFJLENBQUMsbUJBQW1CLENBQUMsTUFBTSxFQUFFLEVBQUUsQ0FBQyxFQUN6RDtZQUNDLGtFQUFrRTtZQUNsRSxHQUFHLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLDhCQUE4QixDQUFFLElBQUksRUFBRSxJQUFJ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