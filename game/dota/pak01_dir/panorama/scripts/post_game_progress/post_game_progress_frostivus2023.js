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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoicG9zdF9nYW1lX3Byb2dyZXNzX2Zyb3N0aXZ1czIwMjMuanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyIuLi8uLi8uLi8uLi8uLi9jb250ZW50L2RvdGEvcGFub3JhbWEvc2NyaXB0cy9wb3N0X2dhbWVfcHJvZ3Jlc3MvcG9zdF9nYW1lX3Byb2dyZXNzX2Zyb3N0aXZ1czIwMjMudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IjtBQUFBLHFDQUFxQztBQUNyQyxtQ0FBbUM7QUFDbkMsK0NBQStDO0FBQy9DLG9EQUFvRDtBQUNwRCxzREFBc0Q7QUE0QnRELFNBQVMsWUFBWSxDQUFFLGFBQXFCLEVBQUUsWUFBc0I7SUFFaEUsSUFBSSxZQUFZLENBQUMsTUFBTSxHQUFHLENBQUM7UUFDdkIsT0FBTyxhQUFhLENBQUM7SUFDekIsSUFBSSxVQUFVLEdBQUcsYUFBYSxDQUFDO0lBQy9CLElBQUksdUJBQXVCLEdBQUcsWUFBWSxDQUFDLFlBQVksQ0FBQyxNQUFNLEdBQUMsQ0FBQyxDQUFDLEdBQUcsWUFBWSxDQUFDLFlBQVksQ0FBQyxNQUFNLEdBQUMsQ0FBQyxDQUFDLENBQUM7SUFDeEcsSUFBSSxVQUFVLEdBQUcsQ0FBQyxDQUFDO0lBQ25CLEtBQUssSUFBSSxVQUFVLEdBQUcsQ0FBQyxFQUFFLENBQUMsVUFBVSxJQUFJLGFBQWEsQ0FBQyxJQUFJLENBQUMsVUFBVSxHQUFHLEdBQUcsQ0FBQyxFQUFFLEVBQUUsVUFBVSxFQUMxRjtRQUNJLElBQUssVUFBVSxHQUFHLFlBQVksQ0FBQyxNQUFNLEVBQ3JDO1lBQ0ksVUFBVSxHQUFHLFlBQVksQ0FBQyxVQUFVLENBQUMsQ0FBQztTQUN6QzthQUVEO1lBQ0ksVUFBVSxJQUFJLHVCQUF1QixDQUFDO1NBQ3pDO0tBQ0o7SUFFRCxDQUFDLENBQUMsR0FBRyxDQUFFLGVBQWUsR0FBQyxhQUFhLEdBQUMsY0FBYyxHQUFDLFVBQVUsQ0FBRSxDQUFDO0lBQ2pFLE9BQU8sVUFBVSxDQUFDO0FBQ3RCLENBQUM7QUFHRCxTQUFT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