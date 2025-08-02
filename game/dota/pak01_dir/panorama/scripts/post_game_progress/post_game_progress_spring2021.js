"use strict";
/// <reference path="../dota.d.ts" />
/// <reference path="../util.ts" />
/// <reference path="../sequence_actions.ts" />
/// <reference path="post_game_progress_utils.ts" />
/// <reference path="post_game_progress_screens.ts" />
class AnimateSpring2021LevelsAction extends RunSequentialActions {
    panel;
    eventId;
    bpPointsStart;
    bpPointsPerLevel;
    bpPointsAdd;
    constructor(panel, eventId, bpPointsStart, bpPointsPerLevel, bpPointsAdd) {
        super();
        this.panel = panel;
        this.eventId = eventId;
        this.bpPointsStart = bpPointsStart;
        this.bpPointsPerLevel = bpPointsPerLevel;
        this.bpPointsAdd = bpPointsAdd;
        var battlePointsStart = this.bpPointsStart;
        var battleLevelStart = Math.floor(battlePointsStart / this.bpPointsPerLevel);
        var battlePointsAtLevelStart = battleLevelStart * this.bpPointsPerLevel;
        var bpLevelStart = battlePointsStart - battlePointsAtLevelStart;
        var bpLevelNext = this.bpPointsPerLevel;
        panel.SetDialogVariableInt('current_level_bp', bpLevelStart);
        panel.SetDialogVariableInt('bp_to_next_level', bpLevelNext);
        panel.FindChildInLayoutFile('BattlePassLevelShield').SetEventLevel(this.eventId, battleLevelStart);
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
                this.actions.push(new SkippableAction(new AnimateBattlePointsIncreaseAction(panel, bpToAnimate, bpEarnedOnRow, bpEarned, bpLevel)));
                bpEarned += bpToAnimate;
                bpLevel += bpToAnimate;
                bpEarnedOnRow += bpToAnimate;
                bpRemaining -= bpToAnimate;
            }
            bpToNextLevel = bpLevelNext - bpLevel;
            if (bpToNextLevel != 0)
                continue;
            battleLevel = battleLevel + 1;
            bpLevel = 0;
            this.actions.push(new AddClassAction(panel, 'LeveledUpStart'));
            (function (me, battleLevelInternal) {
                me.actions.push(new RunFunctionAction(function () {
                    var levelShield = panel.FindChildInLayoutFile('BattlePassLevelShield');
                    levelShield.AddClass('LeveledUp');
                    levelShield.SetEventLevel(me.eventId, battleLevelInternal);
                }));
            })(this, battleLevel);
            this.actions.push(new RemoveClassAction(panel, 'LeveledUpStart'));
            this.actions.push(new AddClassAction(panel, 'LeveledUpEnd'));
            this.actions.push(new SkippableAction(new WaitAction(1.0)));
            (function (me, battleLevelInternal) {
                me.actions.push(new RunFunctionAction(function () {
                    var levelShield = panel.FindChildInLayoutFile('BattlePassLevelShield');
                    levelShield.RemoveClass('LeveledUp');
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
// Animates spring 2021 subpanel
//-----------------------------------------------------------------------------
class AnimateSpring2021WeeklyProgressSubpanelAction extends RunSequentialActions {
    panel;
    ownerPanel;
    data;
    startingPoints;
    total_points;
    constructor(panel, ownerPanel, data, startingPoints) {
        super();
        this.data = data;
        this.panel = panel;
        this.ownerPanel = ownerPanel;
        this.startingPoints = startingPoints;
        this.total_points = 0;
        panel.AddClass('Visible');
    }
    start() {
        this.actions.push(new AddClassAction(this.panel, 'BecomeVisible'));
        this.actions.push(new SkippableAction(new WaitAction(g_DelayAfterStart)));
        this.actions.push(new AddClassAction(this.panel, 'ShowMap'));
        this.actions.push(new SkippableAction(new WaitAction(g_SubElementDelay)));
        this.actions.push(new AddClassAction(this.panel, 'ShowCompleted'));
        this.actions.push(new SkippableAction(new WaitAction(g_SubElementDelay)));
        var panel = this.panel;
        var weeklyProgressPanelParent = panel.FindChildInLayoutFile("Spring2021WeeklyProgressTypeDetails");
        for (var i = 0; i < this.data.length; ++i) {
            var data = this.data[i];
            AddNewWeeklyProgressPanelSpring2021(this, weeklyProgressPanelParent, i, data);
        }
        var panel = this.panel;
        var ownerPanel = this.ownerPanel;
        var total_points = this.total_points;
        var startingPoints = this.startingPoints;
        this.actions.push(new RunFunctionAction(function () {
            UpdateSubpanelTotalPoints(panel, ownerPanel, total_points, startingPoints, false);
        }));
        super.start();
    }
    ;
}
class AnimateSpring2021WeeklyProgressIncreaseAction extends RunParallelActions {
    panel;
    name;
    description;
    nStarsGranted;
    nProgressAmount;
    nStartAmount;
    nMaxAmount;
    constructor(panel, name, description, nStarsGranted, nProgressAmount, nStartAmount, nMaxAmount) {
        super();
        this.panel = panel;
        this.name = name;
        this.description = description;
        this.nStarsGranted = nStarsGranted;
        this.nProgressAmount = nProgressAmount;
        this.nStartAmount = nStartAmount;
        this.nMaxAmount = nMaxAmount;
    }
    start() {
        var duration = GetBPIncreaseAnimationDuration(this.nProgressAmount) * 3.0;
        var levelProgressBar = this.panel.FindChildInLayoutFile('ProgressBar');
        var minProgressValue = Math.min(this.nStartAmount, this.nMaxAmount);
        var maxProgressValue = Math.min(this.nStartAmount + this.nProgressAmount, this.nMaxAmount);
        var self = this;
        this.actions.push(new RunFunctionAction(function () {
            levelProgressBar.lowervalue = self.panel.nInitialAmount;
            levelProgressBar.uppervalue = maxProgressValue;
            levelProgressBar.max = self.nMaxAmount;
            // $.Msg( "setting progress bar values " + self.nStartAmount + " " + self.nProgressAmount + " " + levelProgressBar.max );
            self.panel.SetDialogVariableInt("progress_max_value", self.nMaxAmount);
            self.panel.SetDialogVariableLocString("progress_name", self.name);
            self.panel.SetDialogVariable("progress_description", self.description);
        }));
        this.actions.push(new AnimateDialogVariableIntAction(this.panel, 'progress_start_value', minProgressValue, maxProgressValue, duration));
        this.actions.push(new AnimateDialogVariableIntAction(this.panel, 'current_level_bp', minProgressValue, maxProgressValue, duration));
        this.actions.push(new AnimateProgressBarWithMiddleAction(levelProgressBar, minProgressValue, maxProgressValue, duration));
        this.actions.push(new PlaySoundForDurationAction("XP.Count", duration));
        super.start();
    }
    finish() {
        var maxProgressValue = Math.min(this.nStartAmount + this.nProgressAmount, this.nMaxAmount);
        var nStarsGranted = this.nStarsGranted;
        if (maxProgressValue == this.nMaxAmount) {
            ++nStarsGranted;
        }
        this.panel.SetHasClass("StarsGranted1", nStarsGranted > 0);
        this.panel.SetHasClass("StarsGranted2", nStarsGranted > 1);
        this.panel.SetHasClass("StarsGranted3", nStarsGranted > 2);
        if (nStarsGranted > this.panel.nStarsGranted) {
            this.panel.AddClass("StarsGrantedPulse" + nStarsGranted);
            $.DispatchEvent('PlaySoundEffect', "WeeklyQuest.StarGranted");
        }
        this.panel.nStarsGranted = nStarsGranted;
        super.finish();
    }
}
class AnimateSpring2021WeeklyProgressLevels extends RunSequentialActions {
    constructor(panel, nStartValue, nProgress, levelThresholds) {
        super();
        var nCurrentProgress = nStartValue;
        var nProgressRemaining = nProgress;
        var nNextThresholdIndex = 0;
        for (let i = 0; i < levelThresholds.length; ++i) {
            if (levelThresholds[i].threshold > nCurrentProgress) {
                nNextThresholdIndex = i;
                break;
            }
        }
        var bFirst = true;
        while (nProgressRemaining > 0) {
            var levelThreshold = levelThresholds[nNextThresholdIndex++];
            if (levelThreshold != undefined) {
                var nNextProgressThreshold = levelThreshold.threshold;
                var nProgressToNextLevel = nNextProgressThreshold - nCurrentProgress;
                var nProgressToAnimateThisThreshold = Math.min(nProgressRemaining, nProgressToNextLevel);
                if (nProgressToAnimateThisThreshold > 0) {
                    var nStarsGranted = Math.max(0, nNextThresholdIndex - 1);
                    if (bFirst) {
                        // initialize values before the animation plays so we don't get blank dialog variables
                        panel.SetDialogVariable("progress_description", levelThreshold.description);
                        panel.SetDialogVariableLocString("progress_name", levelThreshold.name);
                        panel.nStarsGranted = nStarsGranted;
                        panel.nInitialAmount = nStartValue;
                        panel.SetHasClass("StarsGranted1", nStarsGranted > 0);
                        panel.SetHasClass("StarsGranted2", nStarsGranted > 1);
                        panel.SetHasClass("StarsGranted3", nStarsGranted > 2);
                        bFirst = false;
                    }
                    // Build a set of sequences for levelling up to the threshold.
                    this.actions.push(new SkippableAction(new AnimateSpring2021WeeklyProgressIncreaseAction(panel, levelThreshold.name, levelThreshold.description, nStarsGranted, nProgressToAnimateThisThreshold, nCurrentProgress, nNextProgressThreshold)));
                    nCurrentProgress += nProgressToAnimateThisThreshold;
                    nProgressRemaining -= nProgressToAnimateThisThreshold;
                }
                nProgressToNextLevel = nNextProgressThreshold - nCurrentProgress;
                continue;
            }
            // Show the next tier if it exists:
            {
                if (nNextThresholdIndex < levelThresholds.length) {
                    var nNextProgressThreshold = levelThresholds[Math.min(nNextThresholdIndex, levelThresholds.length - 1)].threshold;
                    this.actions.push(new SkippableAction(new AnimateSpring2021WeeklyProgressIncreaseAction(panel, levelThresholds[nNextThresholdIndex].name, levelThresholds[nNextThresholdIndex].description, nNextThresholdIndex, 0, nCurrentProgress, nNextProgressThreshold)));
                }
            }
            break;
        }
    }
}
var AddNewWeeklyProgressPanelSpring2021 = function (seq, parentPanel, i, data) {
    var panel = $.CreatePanel('Panel', parentPanel, 'WeeklyProgress' + i);
    panel.BLoadLayoutSnippet('Spring2021WeeklyProgressEntry');
    panel.SetDialogVariableInt("progress_start_value", data.progress_start_value);
    panel.SetDialogVariableInt("progress_max_value", data.progress_start_value);
    panel.SetDialogVariable("progress", data.progress.toString());
    seq.actions.push(new AnimateSpring2021WeeklyProgressLevels(panel, data.progress_start_value, data.progress, data.level_thresholds));
};
// Spring2021 BP Progress
class AnimateSpring2021ScreenAction extends RunSequentialActions {
    data;
    constructor(data) {
        super();
        this.data = data;
    }
    start() {
        // Create the screen and do a bunch of initial setup
        var panel = StartNewScreen('Spring2021ProgressScreen');
        panel.BLoadLayoutSnippet("Spring2021Progress");
        panel.SetDialogVariableInt('points_available', this.data.spring_2021_progress.points_available);
        panel.SetDialogVariableInt('active_week', this.data.spring_2021_progress.active_season_id);
        panel.FindChildInLayoutFile('WeeklyQuestProgressPipBar').SetLocalUserSeasonInfo(this.data.spring_2021_progress.battle_points_event_id, this.data.spring_2021_progress.active_season_id);
        panel.SetDialogVariableInt('total_points_gained', 0);
        // Setup the sequence of actions to animate the screen
        this.actions.push(new AddClassAction(panel, 'ShowScreen'));
        this.actions.push(new SkippableAction(new WaitAction(0.5)));
        this.actions.push(new AddScreenLinkAction(panel, 'Spring2021Progress', '#DOTA_PlusPostGame_Spring2021Progress', function () {
            panel.SwitchClass('current_screen', 'ShowSpring2021Progress');
        }));
        this.actions.push(new SwitchClassAction(panel, 'current_screen', 'ShowSpring2021Progress'));
        this.actions.push(new SkippableAction(new WaitAction(0.5)));
        var subPanelActions = new RunSkippableStaggeredActions(.3);
        var startingPointsToAdd = 0;
        var panelCount = 0;
        var kMaxPanels = 6;
        if (this.data.spring_2021_progress.actions_granted != null) {
            var progressPanel = panel.FindChildInLayoutFile("Spring2021WeeklyProgress");
            const subpanelAction = new AnimateSpring2021WeeklyProgressSubpanelAction(progressPanel, panel, this.data.spring_2021_progress.actions_granted, startingPointsToAdd);
            startingPointsToAdd += subpanelAction.total_points;
            subPanelActions.actions.push(subpanelAction);
            if (++panelCount > kMaxPanels)
                progressPanel.RemoveClass('Visible');
        }
        if (this.data.spring_2021_progress.event_game_nemestice != null) {
            var progressPanel = panel.FindChildInLayoutFile("Spring2021EventGameNemesticeProgress");
            const subpanelAction = new AnimateEventGameNemesticeSubpanelAction(progressPanel, panel, this.data.spring_2021_progress.event_game_nemestice, startingPointsToAdd);
            startingPointsToAdd += subpanelAction.total_points;
            subPanelActions.actions.push(subpanelAction);
            if (++panelCount > kMaxPanels)
                progressPanel.RemoveClass('Visible');
        }
        if (this.data.spring_2021_progress.cavern_crawl != null) {
            var cavernPanel = panel.FindChildInLayoutFile("Spring2021CavernCrawlProgress");
            const subpanelAction = new AnimateCavernCrawlSubpanelAction(cavernPanel, panel, this.data.spring_2021_progress.cavern_crawl, startingPointsToAdd);
            startingPointsToAdd += subpanelAction.total_points;
            subPanelActions.actions.push(subpanelAction);
            if (++panelCount > kMaxPanels)
                cavernPanel.RemoveClass('Visible');
        }
        this.actions.push(subPanelActions);
        this.actions.push(new AnimateSpring2021LevelsAction(panel, this.data.spring_2021_progress.battle_points_event_id, this.data.spring_2021_progress.battle_points_start, this.data.spring_2021_progress.battle_points_per_level, startingPointsToAdd));
        this.actions.push(new WaitAction(0.2));
        this.actions.push(new StopSkippingAheadAction());
        this.actions.push(new SkippableAction(new WaitAction(0.5)));
        this.actions.push(new SwitchClassAction(panel, 'current_screen', ''));
        this.actions.push(new SkippableAction(new WaitAction(0.5)));
        super.start();
    }
}
//----------------------------------
function TestAnimateSpring2021() {
    var data = {
        hero_id: 87,
        spring_2021_progress: {
            active_season_id: 1,
            battle_points_event_id: 32,
            battle_points_start: 74850,
            battle_points_per_level: 1000,
            points_available: 1000,
            actions_granted: [
                {
                    // Cross a tier
                    progress_start_value: 1,
                    progress: 40,
                    level_thresholds: [
                        {
                            name: "#DOTA_Spring2021_Quest_Plays_Name",
                            description: 'Win <span class="ScoreTierCurrent">3</span> Matches',
                            threshold: 3
                        },
                        {
                            name: "#DOTA_Spring2021_Quest_Plays_Name",
                            description: 'Win <span class="ScoreTierCurrent">10</span> Matches',
                            threshold: 10
                        },
                        {
                            name: "#DOTA_Spring2021_Quest_Plays_Name",
                            description: 'Win <span class="ScoreTierCurrent">30</span> Matches',
                            threshold: 30
                        },
                    ]
                },
                {
                    // Cross past max tier
                    progress_start_value: 141,
                    progress: 10,
                    level_thresholds: [
                        {
                            name: "#DOTA_Spring2021_Quest_Wins_Name",
                            description: 'Win <span class="ScoreTierCurrent">10</span> Matches',
                            threshold: 10
                        },
                        {
                            name: "#DOTA_Spring2021_Quest_Wins_Name",
                            description: 'Win <span class="ScoreTierCurrent">50</span> Matches',
                            threshold: 50
                        },
                        {
                            name: "#DOTA_Spring2021_Quest_Wins_Name",
                            description: 'Win <span class="ScoreTierCurrent">150</span> Matches',
                            threshold: 150
                        },
                    ]
                },
                {
                    // Minor increment
                    progress_start_value: 0,
                    progress: 0.5,
                    level_thresholds: [
                        {
                            name: "#DOTA_Spring2021_Quest_Kills_Name",
                            description: 'Win <span class="ScoreTierCurrent">10</span> Matches',
                            threshold: 10
                        },
                        {
                            name: "#DOTA_Spring2021_Quest_Kills_Name",
                            description: 'Win <span class="ScoreTierCurrent">50</span> Matches',
                            threshold: 50
                        },
                        {
                            name: "#DOTA_Spring2021_Quest_Kills_Name",
                            description: 'Win <span class="ScoreTierCurrent">150</span> Matches',
                            threshold: 150
                        },
                    ]
                },
            ],
            cavern_crawl: {
                hero_id: 87,
                bp_amount: 375,
            },
            event_game_nemestice: {
                bp_amount: 225,
                bp_start: 50,
                bp_max: 2000,
            }
        }
    };
    TestProgressAnimation(data);
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoicG9zdF9nYW1lX3Byb2dyZXNzX3NwcmluZzIwMjEuanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyIuLi8uLi8uLi8uLi8uLi9jb250ZW50L2RvdGEvcGFub3JhbWEvc2NyaXB0cy9wb3N0X2dhbWVfcHJvZ3Jlc3MvcG9zdF9nYW1lX3Byb2dyZXNzX3NwcmluZzIwMjEudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IjtBQUFBLHFDQUFxQztBQUNyQyxtQ0FBbUM7QUFDbkMsK0NBQStDO0FBQy9DLG9EQUFvRDtBQUNwRCxzREFBc0Q7QUFpRHRELE1BQU0sNkJBQThCLFNBQVEsb0JBQW9CO0lBRTVELEtBQUssQ0FBVTtJQUNmLE9BQU8sQ0FBUztJQUNoQixhQUFhLENBQVM7SUFDdEIsZ0JBQWdCLENBQVM7SUFDekIsV0FBVyxDQUFTO0lBRXBCLFlBQWEsS0FBYyxFQUFFLE9BQWUsRUFBRSxhQUFxQixFQUFFLGdCQUF3QixFQUFFLFdBQW1CO1FBRTlHLEtBQUssRUFBRSxDQUFDO1FBRVIsSUFBSSxDQUFDLEtBQUssR0FBRyxLQUFLLENBQUM7UUFDbkIsSUFBSSxDQUFDLE9BQU8sR0FBRyxPQUFPLENBQUM7UUFDdkIsSUFBSSxDQUFDLGFBQWEsR0FBRyxhQUFhLENBQUM7UUFDbkMsSUFBSSxDQUFDLGdCQUFnQixHQUFHLGdCQUFnQixDQUFDO1FBQ3pDLElBQUksQ0FBQyxXQUFXLEdBQUcsV0FBVyxDQUFDO1FBRS9CLElBQUksaUJBQWlCLEdBQUcsSUFBSSxDQUFDLGFBQWEsQ0FBQztRQUMzQyxJQUFJLGdCQUFnQixHQUFHLElBQUksQ0FBQyxLQUFLLENBQUUsaUJBQWlCLEdBQUcsSUFBSSxDQUFDLGdCQUFnQixDQUFFLENBQUM7UUFDL0UsSUFBSSx3QkFBd0IsR0FBRyxnQkFBZ0IsR0FBRyxJQUFJLENBQUMsZ0JBQWdCLENBQUM7UUFDeEUsSUFBSSxZQUFZLEdBQUcsaUJBQWlCLEdBQUcsd0JBQXdCLENBQUM7UUFDaEUsSUFBSSxXQUFXLEdBQUcsSUFBSSxD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