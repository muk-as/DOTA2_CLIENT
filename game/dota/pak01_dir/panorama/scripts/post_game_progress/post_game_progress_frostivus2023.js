"use strict";
/// <reference path="../dota.d.ts" />
/// <reference path="../util.ts" />
/// <reference path="../sequence_actions.ts" />
/// <reference path="post_game_progress_utils.ts" />
/// <reference path="post_game_progress_screens.ts" />
function GetNextLevel(nCurrentLevel, event_levels) {
    if (event_levels.length < 2)
        return nCurrentLevel;
    var nNextLevel = nCurrentLevel;
    var repeating_reward_levels = event_levels[event_levels.length - 1] - event_levels[event_levels.length - 2];
    var levelIndex = 0;
    for (var levelIndex = 0; (nNextLevel <= nCurrentLevel) && (levelIndex < 200); ++levelIndex) {
        if (levelIndex < event_levels.length) {
            nNextLevel = event_levels[levelIndex];
        }
        else {
            nNextLevel += repeating_reward_levels;
        }
    }
    $.Msg('GetNextLevel(' + nCurrentLevel + ') returning ' + nNextLevel);
    return nNextLevel;
}
function GetStartingLevelForPoints(nPoints, bpPointsPerLevel, event_levels) {
    var nReturnLevel = 0;
    for (var nLevel = 0; (nPoints > nLevel * bpPointsPerLevel) && nLevel < 100; nLevel = GetNextLevel(nLevel, event_levels)) {
        nReturnLevel = nLevel;
    }
    $.Msg('GetStartingLevelForPoints(' + nPoints + ') returning ' + nReturnLevel);
    return nReturnLevel;
}
class AnimateFrostivus2023LevelsAction extends RunSequentialActions {
    panel;
    eventId;
    bpPointsStart;
    bpPointsPerLevel;
    bpPointsAdd;
    event_levels;
    constructor(panel, eventId, bpPointsStart, bpPointsPerLevel, event_levels, bpPointsAdd) {
        super();
        this.panel = panel;
        this.eventId = eventId;
        this.bpPointsStart = bpPointsStart;
        this.bpPointsPerLevel = bpPointsPerLevel;
        this.bpPointsAdd = bpPointsAdd;
        this.event_levels = event_levels;
        var battlePointsStart = this.bpPointsStart;
        var battleLevelStart = GetStartingLevelForPoints(battlePointsStart, bpPointsPerLevel, event_levels);
        var battlePointsAtLevelStart = battleLevelStart * this.bpPointsPerLevel;
        var bpLevelStart = battlePointsStart - battlePointsAtLevelStart;
        var bpLevelNext = GetNextLevel(battleLevelStart, event_levels) * bpPointsPerLevel - battlePointsAtLevelStart;
        $.Msg('start animating ' + battleLevelStart + ' ' + bpLevelStart + ' ' + bpLevelNext);
        if (bpLevelStart >= bpLevelNext) {
            $.Msg("nothing to do...");
            return;
        }
        panel.SetDialogVariableInt('current_level_bp', bpLevelStart);
        panel.SetDialogVariableInt('bp_to_next_level', bpLevelNext);
        //( panel.FindChildInLayoutFile( 'BattlePassLevelShield' ) as DOTAEventLevelShield_t ).SetEventLevel( this.eventId, battleLevelStart );
        var progressBar = panel.FindChildInLayoutFile("BattleLevelProgress");
        progressBar.max = bpLevelNext;
        progressBar.lowervalue = bpLevelStart;
        progressBar.uppervalue = bpLevelStart;
        var bpEarned = 0;
        var bpLevel = bpLevelStart;
        var battleLevel = battleLevelStart;
        var bpRemaining = this.bpPointsAdd;
        var bpEarnedOnRow = 0;
        while (bpRemaining > 0) {
            var bpToAnimate = 0;
            var bpToNextLevel = 0;
            bpToNextLevel = bpLevelNext - bpLevel;
            bpToAnimate = Math.min(bpRemaining, bpToNextLevel);
            if (bpToAnimate > 0) {
                this.actions.push(new SkippableAction(new AnimateBattlePointsIncreaseAction(panel, bpToAnimate, bpEarnedOnRow, bpEarned, bpLevel, "Frostivus.ui_point_increment")));
                bpEarned += bpToAnimate;
                bpLevel += bpToAnimate;
                bpEarnedOnRow += bpToAnimate;
                bpRemaining -= bpToAnimate;
            }
            bpToNextLevel = bpLevelNext - bpLevel;
            $.Msg("bp to next level: " + bpToNextLevel);
            if (bpToNextLevel != 0)
                continue;
            battleLevel = GetNextLevel(battleLevel, event_levels);
            bpLevelNext = GetNextLevel(battleLevel, event_levels) * bpPointsPerLevel - battleLevel * bpPointsPerLevel;
            bpLevel = 0;
            //$.Msg("leveling up, next reward at level: "+battleLevel);
            this.actions.push(new AddClassAction(panel, 'LeveledUpStart'));
            (function (me, battleLevelInternal) {
                me.actions.push(new RunFunctionAction(function () {
                    var treasureRewardIcon = panel.FindChildInLayoutFile('TreasureRewardIcon');
                    treasureRewardIcon.AddClass('LeveledUp');
                }));
            })(this, battleLevel);
            this.actions.push(new RemoveClassAction(panel, 'LeveledUpStart'));
            this.actions.push(new AddClassAction(panel, 'LeveledUpEnd'));
            this.actions.push(new SkippableAction(new WaitAction(1.0)));
            (function (me, battleLevelInternal) {
                me.actions.push(new RunFunctionAction(function () {
                    var treasureRewardIcon = panel.FindChildInLayoutFile('TreasureRewardIcon');
                    treasureRewardIcon.RemoveClass('LeveledUp');
                }));
            })(this, battleLevel);
            this.actions.push(new RemoveClassAction(panel, 'LeveledUpEnd'));
            (function (me, bpLevelInternal, bpLevelNextInternal) {
                me.actions.push(new RunFunctionAction(function () {
                    progressBar.lowervalue = 0;
                    progressBar.uppervalue = 0;
                    panel.SetDialogVariableInt('current_level_bp', bpLevelInternal);
                    panel.SetDialogVariableInt('bp_to_next_level', bpLevelNextInternal);
                    progressBar.max = bpLevelNextInternal;
                    // progressBar.value = bpLevelInternal;
                }));
            })(this, bpLevel, bpLevelNext);
        }
    }
}
//-----------------------------------------------------------------------------
// Animates Frostivus 2023 subpanel
//-----------------------------------------------------------------------------
class AnimateFrostivus2023SubpanelAction extends RunSequentialActions {
    ownerPanel;
    data;
    progress;
    startingPoints;
    total_points;
    constructor(ownerPanel, data, progress, startingPoints) {
        super();
        this.data = data;
        this.progress = progress;
        this.ownerPanel = ownerPanel;
        this.startingPoints = startingPoints;
        this.total_points = this.data.points_granted;
        //this.panel.AddClass( 'Visible' );
    }
    start() {
        $.Msg('processing action ' + this.data.action_name + '\n');
        var corePanel = this.ownerPanel.FindChildInLayoutFile("Frostivus2023ProgressCore");
        function MakeCorePanel(panelName) {
            var panel = $.CreatePanel('Panel', corePanel, panelName);
            panel.BLoadLayoutSnippet(panelName);
            return panel;
        }
        var panel;
        if (this.data.action_name.includes("daily_bonus")) {
            panel = MakeCorePanel("Frostivus2023MatchDailyBonusProgress");
        }
        else if (this.data.action_name.includes("win_")) {
            panel = MakeCorePanel("Frostivus2023MatchGameResultProgress");
            this.actions.push(new AddClassAction(this.ownerPanel, 'WonGame'));
        }
        else if (this.data.action_name.includes("lose_")) {
            panel = MakeCorePanel("Frostivus2023MatchGameResultProgress");
            this.actions.push(new AddClassAction(this.ownerPanel, 'LostGame'));
        }
        else if (this.data.action_name == "tips_received") {
            panel = MakeCorePanel("Frostivus2023MatchTipsProgress");
            panel.SetDialogVariableInt('tips_received', this.data.progress);
        }
        else {
            return;
        }
        panel.SetDialogVariableInt('points_granted', this.data.points_granted);
        if (this.data.action_name.includes("turbo")) {
            this.actions.push(new AddClassAction(this.ownerPanel, 'TurboGame'));
        }
        this.actions.push(new AddClassAction(panel, 'BecomeVisible'));
        this.actions.push(new SkippableAction(new WaitAction(2 * g_DelayAfterStart)));
        this.actions.push(new AddClassAction(panel, 'ShowCompleted'));
        this.actions.push(new SkippableAction(new WaitAction(0.5)));
        var ownerPanel = this.ownerPanel;
        var total_points = this.total_points;
        var startingPoints = this.startingPoints;
        this.actions.push(new RunFunctionAction(function () {
            UpdateSubpanelTotalPoints(panel, ownerPanel, total_points, startingPoints, false);
        }));
        this.actions.push(new AnimateFrostivus2023LevelsAction(ownerPanel, this.progress.battle_points_event_id, this.progress.battle_points_start + startingPoints, this.progress.battle_points_per_level, this.progress.event_levels, total_points));
        super.start();
    }
    ;
}
// Frostivus2023 BP Progress
class AnimateFrostivus2023ScreenAction extends RunSequentialActions {
    data;
    constructor(data) {
        super();
        this.data = data;
    }
    start() {
        // Create the screen and do a bunch of initial setup
        var panel = StartNewScreen('Frostivus2023ProgressScreen');
        panel.BLoadLayoutSnippet("Frostivus2023Progress");
        panel.SetDialogVariableInt('total_points_gained', 0);
        var flSeed = Math.random();
        if (flSeed >= 0.666) {
            panel.SwitchClass('variant', "Variant1");
        }
        else if (flSeed >= 0.333) {
            panel.SwitchClass('variant', "Variant2");
        }
        else {
            panel.SwitchClass('variant', "Variant3");
        }
        //$.Msg( 'frostivus data'+JSON.stringify(this.data) );
        // Setup the sequence of actions to animate the screen
        this.actions.push(new PlaySoundAction("Frostivus.ui_postgame_start"));
        this.actions.push(new AddClassAction(panel, 'ShowScreen'));
        this.actions.push(new SkippableAction(new WaitAction(0.5)));
        this.actions.push(new AddScreenLinkAction(panel, 'Frostivus2023Progress', '#DOTA_PlusPostGame_Frostivus2023Progress', function () {
            panel.SwitchClass('current_screen', 'ShowFrostivus2023Progress');
        }));
        this.actions.push(new SwitchClassAction(panel, 'current_screen', 'ShowFrostivus2023Progress'));
        this.actions.push(new SkippableAction(new WaitAction(0.5)));
        var startingPointsToAdd = 0;
        this.actions.push(new AnimateFrostivus2023LevelsAction(panel, this.data.frostivus2023_progress.battle_points_event_id, this.data.frostivus2023_progress.battle_points_start, this.data.frostivus2023_progress.battle_points_per_level, this.data.frostivus2023_progress.event_levels, 0));
        //var this = new RunSkippableStaggeredActions( 0.3 );
        var nNumRewards = 0;
        for (var ii = 0; ii < this.data.frostivus2023_progress.actions_granted.length; ++ii) {
            const subPanelAction = new AnimateFrostivus2023SubpanelAction(panel, this.data.frostivus2023_progress.actions_granted[ii], this.data.frostivus2023_progress, startingPointsToAdd);
            //$.Msg( 'frostivus action '+JSON.stringify( this.data.frostivus2023_progress.actions_granted[ii] ) + " " + subPanelAction.total_points );
            if (subPanelAction.total_points) {
                startingPointsToAdd += subPanelAction.total_points;
                this.actions.push(subPanelAction);
                ++nNumRewards;
                this.actions.push(new SkippableAction(new WaitAction(0.5)));
            }
        }
        if (this.data.frostivus2023_progress.battle_points_daily_bonus_points > 0) {
            const subPanelAction = new AnimateFrostivus2023SubpanelAction(panel, {
                action_name: "daily_bonus",
                progress: 1,
                points_granted: this.data.frostivus2023_progress.battle_points_daily_bonus_points
            }, this.data.frostivus2023_progress, startingPointsToAdd);
            startingPointsToAdd += subPanelAction.total_points;
            this.actions.push(subPanelAction);
            ++nNumRewards;
        }
        panel.SwitchClass("num_rewards", "NumRewards" + nNumRewards);
        this.actions.push(new WaitAction(0.2));
        this.actions.push(new StopSkippingAheadAction());
        this.actions.push(new SkippableAction(new WaitAction(0.5)));
        this.actions.push(new SwitchClassAction(panel, 'current_screen', ''));
        this.actions.push(new SkippableAction(new WaitAction(1.5)));
        super.start();
    }
}
//----------------------------------
function TestAnimateFrostivus2023() {
    var data = {
        hero_id: 87,
        frostivus2023_progress: {
            battle_points_event_id: 48,
            battle_points_start: 4875,
            battle_points_per_level: 1000,
            battle_points_daily_bonus_points: 2000,
            event_levels: [1, 3, 6, 10, 15, 20],
            actions_granted: [
                {
                    action_name: "win_turbo_matches",
                    progress: 1,
                    points_granted: 250,
                },
                {
                    action_name: "tips_received",
                    progress: 4,
                    points_granted: 100,
                },
            ]
        }
    };
    TestProgressAnimation(data);
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoicG9zdF9nYW1lX3Byb2dyZXNzX2Zyb3N0aXZ1czIwMjMuanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyJwb3N0X2dhbWVfcHJvZ3Jlc3NfZnJvc3RpdnVzMjAyMy50cyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiO0FBQUEscUNBQXFDO0FBQ3JDLG1DQUFtQztBQUNuQywrQ0FBK0M7QUFDL0Msb0RBQW9EO0FBQ3BELHNEQUFzRDtBQTRCdEQsU0FBUyxZQUFZLENBQUUsYUFBcUIsRUFBRSxZQUFzQjtJQUVoRSxJQUFJLFlBQVksQ0FBQyxNQUFNLEdBQUcsQ0FBQztRQUN2QixPQUFPLGFBQWEsQ0FBQztJQUN6QixJQUFJLFVBQVUsR0FBRyxhQUFhLENBQUM7SUFDL0IsSUFBSSx1QkFBdUIsR0FBRyxZQUFZLENBQUMsWUFBWSxDQUFDLE1BQU0sR0FBQyxDQUFDLENBQUMsR0FBRyxZQUFZLENBQUMsWUFBWSxDQUFDLE1BQU0sR0FBQyxDQUFDLENBQUMsQ0FBQztJQUN4RyxJQUFJLFVBQVUsR0FBRyxDQUFDLENBQUM7SUFDbkIsS0FBSyxJQUFJLFVBQVUsR0FBRyxDQUFDLEVBQUUsQ0FBQyxVQUFVLElBQUksYUFBYSxDQUFDLElBQUksQ0FBQyxVQUFVLEdBQUcsR0FBRyxDQUFDLEVBQUUsRUFBRSxVQUFVLEVBQzFGO1FBQ0ksSUFBSyxVQUFVLEdBQUcsWUFBWSxDQUFDLE1BQU0sRUFDckM7WUFDSSxVQUFVLEdBQUcsWUFBWSxDQUFDLFVBQVUsQ0FBQyxDQUFDO1NBQ3pDO2FBRUQ7WUFDSSxVQUFVLElBQUksdUJBQXVCLENBQUM7U0FDekM7S0FDSjtJQUVELENBQUMsQ0FBQyxHQUFHLENBQUUsZUFBZSxHQUFDLGFBQWEsR0FBQyxjQUFjLEdBQUMsVUFBVSxDQUFFLENBQUM7SUFDakUsT0FBTyxVQUFVLENBQUM7QUFDdEIsQ0FBQztBQUdELFNBQVMseUJBQXlCLENBQUUsT0FBZSxFQUFFLGdCQUF3QixFQUFFLFlBQXNCO0lBRWpHLElBQUksWUFBWSxHQUFHLENB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