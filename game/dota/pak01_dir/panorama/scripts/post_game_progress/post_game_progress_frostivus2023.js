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
                }));
            })(this, bpLevel, bpLevelNext);
        }
    }
}
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
class AnimateFrostivus2023ScreenAction extends RunSequentialActions {
    data;
    constructor(data) {
        super();
        this.data = data;
    }
    start() {
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
        var nNumRewards = 0;
        for (var ii = 0; ii < this.data.frostivus2023_progress.actions_granted.length; ++ii) {
            const subPanelAction = new AnimateFrostivus2023SubpanelAction(panel, this.data.frostivus2023_progress.actions_granted[ii], this.data.frostivus2023_progress, startingPointsToAdd);
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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoicG9zdF9nYW1lX3Byb2dyZXNzX2Zyb3N0aXZ1czIwMjMuanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyIuLi8uLi8uLi8uLi8uLi9jb250ZW50L2RvdGEvcGFub3JhbWEvc2NyaXB0cy9wb3N0X2dhbWVfcHJvZ3Jlc3MvcG9zdF9nYW1lX3Byb2dyZXNzX2Zyb3N0aXZ1czIwMjMudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IjtBQUFBLHFDQUFxQztBQUNyQyxtQ0FBbUM7QUFDbkMsK0NBQStDO0FBQy9DLG9EQUFvRDtBQUNwRCxzREFBc0Q7QUE0QnRELFNBQVMsWUFBWSxDQUFFLGFBQXFCLEVBQUUsWUFBc0I7SUFFaEUsSUFBSSxZQUFZLENBQUMsTUFBTSxHQUFHLENBQUM7UUFDdkIsT0FBTyxhQUFhLENBQUM7SUFDekIsSUFBSSxVQUFVLEdBQUcsYUFBYSxDQUFDO0lBQy9CLElBQUksdUJBQXVCLEdBQUcsWUFBWSxDQUFDLFlBQVksQ0FBQyxNQUFNLEdBQUMsQ0FBQyxDQUFDLEdBQUcsWUFBWSxDQUFDLFlBQVksQ0FBQyxNQUFNLEdBQUMsQ0FBQyxDQUFDLENBQUM7SUFDeEcsSUFBSSxVQUFVLEdBQUcsQ0FBQyxDQUFDO0lBQ25CLEtBQUssSUFBSSxVQUFVLEdBQUcsQ0FBQyxFQUFFLENBQUMsVUFBVSxJQUFJLGFBQWEsQ0FBQyxJQUFJLENBQUMsVUFBVSxHQUFHLEdBQUcsQ0FBQyxFQUFFLEVBQUUsVUFBVSxFQUMxRjtRQUNJLElBQUssVUFBVSxHQUFHLFlBQVksQ0FBQyxNQUFNLEVBQ3JDO1lBQ0ksVUFBVSxHQUFHLFlBQVksQ0FBQyxVQUFVLENBQUMsQ0FBQztTQUN6QzthQUVEO1lBQ0ksVUFBVSxJQUFJLHVCQUF1QixDQUFDO1NBQ3pDO0tBQ0o7SUFFRCxDQUFDLENBQUMsR0FBRyxDQUFFLGVBQWUsR0FBQyxhQUFhLEdBQUMsY0FBYyxHQUFDLFVBQVUsQ0FBRSxDQUFDO0lBQ2pFLE9BQU8sVUFBVSxDQUFDO0FBQ3RCLENBQUM7QUFHRCxTQUFT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