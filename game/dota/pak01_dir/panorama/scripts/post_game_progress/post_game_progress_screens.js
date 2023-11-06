"use strict";
/// <reference path="../dota.d.ts" />
/// <reference path="../util.ts" />
/// <reference path="../sequence_actions.ts" />
/// <reference path="post_game_progress_utils.ts" />
/// <reference path="post_game_progress_sequence.ts" />
/// <reference path="../post_game_mvp.ts" />
// ----------------------------------------------------------------------------
//   Battle pass level progress bar
// ----------------------------------------------------------------------------
class AnimateBattlePassLevelsAction extends RunSequentialActions {
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
        var bpLevelShield = panel.FindChildInLayoutFile('BattlePassLevelShield');
        bpLevelShield.SetEventLevel(this.eventId, battleLevelStart);
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
                    bpLevelShield.AddClass('LeveledUp');
                    bpLevelShield.SetEventLevel(me.eventId, battleLevelInternal);
                }));
            })(this, battleLevel);
            this.actions.push(new RemoveClassAction(panel, 'LeveledUpStart'));
            this.actions.push(new AddClassAction(panel, 'LeveledUpEnd'));
            this.actions.push(new SkippableAction(new WaitAction(1.0)));
            (function (me, battleLevelInternal) {
                me.actions.push(new RunFunctionAction(function () {
                    bpLevelShield.RemoveClass('LeveledUp');
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
class AnimateCavernCrawlScreenAction extends RunSequentialActions {
    data;
    cavern_panel;
    eventHandler = null;
    disabled_update = false;
    constructor(data) {
        super();
        this.data = data;
    }
    start() {
        var heroID = this.data.hero_id;
        var eventID = this.data.cavern_crawl_progress.event_id;
        var mapVariant = this.data.cavern_crawl_progress.map_variant;
        var turboMode = this.data.cavern_crawl_progress.turbo_mode;
        var mapProgress = this.data.cavern_crawl_progress.map_progress;
        // Create the screen and do a bunch of initial setup
        var panel = StartNewScreen('CavernCrawlProgressScreen');
        panel.BLoadLayoutSnippet("CavernCrawlProgress");
        // Setup the sequence of actions to animate the screen
        this.cavern_panel = panel.FindChildInLayoutFile('CavernCrawl');
        this.eventHandler = null;
        this.actions.push(new RunFunctionAction(() => {
            this.eventHandler = $.RegisterForUnhandledEvent("PostGameProgressSkippingAhead", () => {
                if (!this.disabled_update) {
                    this.disabled_update = true;
                    this.cavern_panel.DisableUpdateDisplay(true);
                }
            });
        }));
        this.actions.push(new AddScreenLinkAction(panel, 'CavernsProgress', '#DOTACavernCrawl_Title_TI2020'));
        this.actions.push(new AddClassAction(panel, 'ShowScreen'));
        this.actions.push(new SkippableAction(new WaitAction(1.0)));
        this.actions.push(new AddClassAction(panel, 'ShowCavernCrawlProgress'));
        this.actions.push(new RunFunctionAction(() => {
            this.cavern_panel.ClearMapResults();
            if (mapProgress) {
                for (var i = 0; i < mapProgress.length; ++i) {
                    var result = mapProgress[i];
                    this.cavern_panel.AddMapResult(result.path_id_completed, result.room_id_claimed);
                }
            }
            this.cavern_panel.ShowPostGameProgress(eventID, 0, mapVariant, heroID, turboMode);
        }));
        this.actions.push(new WaitForEventAction(this.cavern_panel, 'DOTACavernCrawlPostGameProgressComplete'));
        this.actions.push(new StopSkippingAheadAction());
        super.start();
    }
    finish() {
        if (this.eventHandler != null) {
            $.UnregisterForUnhandledEvent("PostGameProgressSkippingAhead", this.eventHandler);
            this.eventHandler = null;
        }
        if (this.disabled_update) {
            this.cavern_panel.DisableUpdateDisplay(false);
            this.disabled_update = false;
        }
        super.finish();
    }
}
// ----------------------------------------------------------------------------
//
// Battle Points
//
// ----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
// Animates battle points within a single level
//-----------------------------------------------------------------------------
function GetBPIncreaseAnimationDuration(bpAmount) {
    return RemapValClamped(bpAmount, 0, 500, 0.2, 0.6);
}
// Action to animate a battle pass bp increase
class AnimateBattlePointsIncreaseAction extends RunParallelActions {
    panel;
    bpAmount;
    bpValueStart;
    bpEarnedStart;
    bpLevelStart;
    constructor(panel, bpAmount, bpValueStart, bpEarnedStart, bpLevelStart) {
        super();
        this.panel = panel;
        this.bpAmount = bpAmount;
        this.bpValueStart = bpValueStart;
        this.bpEarnedStart = bpEarnedStart;
        this.bpLevelStart = bpLevelStart;
    }
    start() {
        var duration = GetBPIncreaseAnimationDuration(this.bpAmount);
        var levelProgressBar = this.panel.FindChildInLayoutFile('BattleLevelProgress');
        var minLevelBP = Math.min(this.bpLevelStart, levelProgressBar.max);
        var maxLevelBP = Math.min(this.bpLevelStart + this.bpAmount, levelProgressBar.max);
        this.actions.push(new AnimateDialogVariableIntAction(this.panel, 'current_level_bp', minLevelBP, maxLevelBP, duration));
        this.actions.push(new AnimateProgressBarWithMiddleAction(levelProgressBar, minLevelBP, maxLevelBP, duration));
        this.actions.push(new PlaySoundForDurationAction("XP.Count", duration));
        super.start();
    }
}
//-----------------------------------------------------------------------------
// Adds points to totals bar
//-----------------------------------------------------------------------------
function UpdateSubpanelTotalPoints(panel, ownerPanel, bpAmount, bpStartingSubTotal, displayOnly) {
    panel.SetDialogVariableInt('xp_circle_points', bpAmount);
    panel.AddClass('ShowTotals');
    if (!displayOnly) {
        ownerPanel.SetDialogVariableInt('total_points_gained', bpStartingSubTotal + bpAmount);
    }
}
//-----------------------------------------------------------------------------
// Subpanel animation timings
//-----------------------------------------------------------------------------
var g_DelayAfterStart = 0.05;
var g_SubElementDelay = 0.05;
// Action to animate a battle pass bp increase
class AnimateWageringSubpanelAction extends RunSequentialActions {
    panel;
    ownerPanel;
    startingPoints;
    total_points;
    constructor(panel, ownerPanel, wagering_data, startingPoints) {
        super();
        this.panel = panel;
        this.ownerPanel = ownerPanel;
        this.startingPoints = startingPoints;
        panel.AddClass('Visible');
        var panelXPCircle = panel.FindChildInLayoutFile("XPCircleContainer");
        panelXPCircle.BLoadLayoutSnippet('BattlePassXPCircle');
        panel.SetDialogVariableInt('wager_amount', wagering_data.wager_amount);
        panel.SetDialogVariableInt('wager_conversion_ratio', wagering_data.conversion_ratio);
        panel.SetDialogVariableInt('wager_token_bonus_pct', wagering_data.wager_token_bonus_pct);
        panel.SetDialogVariableInt('wager_streak_bonus_pct', wagering_data.wager_streak_bonus_pct);
        this.total_points = wagering_data.wager_amount * wagering_data.conversion_ratio * (100 + wagering_data.wager_streak_bonus_pct + wagering_data.wager_token_bonus_pct) / 100;
    }
    start() {
        this.actions.push(new AddClassAction(this.panel, 'BecomeVisible'));
        this.actions.push(new SkippableAction(new WaitAction(g_DelayAfterStart)));
        this.actions.push(new AddClassAction(this.panel, 'ShowWager'));
        this.actions.push(new AddClassAction(this.panel, 'ShowTeamWagerBonus'));
        this.actions.push(new SkippableAction(new WaitAction(g_SubElementDelay)));
        var panel = this.panel;
        var ownerPanel = this.ownerPanel;
        var total_points = this.total_points;
        var startingPoints = this.startingPoints;
        this.actions.push(new RunFunctionAction(function () {
            UpdateSubpanelTotalPoints(panel, ownerPanel, total_points, startingPoints, false);
        }));
        super.start();
    }
}
// Action to animate a battle pass bp increase
class AnimateTippingSubpanelAction extends RunSequentialActions {
    panel;
    ownerPanel;
    startingPoints;
    panelCount;
    total_points;
    constructor(panel, ownerPanel, tips, startingPoints) {
        super();
        this.panel = panel;
        this.ownerPanel = ownerPanel;
        this.startingPoints = startingPoints;
        panel.AddClass('Visible');
        var panelXPCircle = panel.FindChildInLayoutFile("XPCircleContainer");
        panelXPCircle.BLoadLayoutSnippet('BattlePassXPCircle');
        var totalTipCount = 0;
        this.panelCount = 0;
        this.total_points = 0;
        var tipContainer = panel.FindChildInLayoutFile("TipContainer");
        var tipContainer2 = panel.FindChildInLayoutFile("TipContainer2");
        var tipParent = tipContainer;
        for (var i = 0; i < tips.length; ++i) {
            if (i == 4) {
                tipParent = tipContainer2;
                panel.AddClass("TwoTipColumns");
            }
            var tipperPanel = $.CreatePanel('Panel', tipParent, 'Tipper' + i);
            tipperPanel.BLoadLayoutSnippet('BattlePassTip');
            var avatarPanel = tipperPanel.FindChildInLayoutFile("Avatar");
            avatarPanel.SetAccountID(tips[i].account_id);
            tipperPanel.SetDialogVariableInt('tip_points', tips[i].amount);
            tipperPanel.AddClass('TipCount' + tips[i].count);
            totalTipCount += tips[i].count;
            this.panelCount = this.panelCount + 1;
            this.total_points += tips[i].count * tips[i].amount;
        }
        panel.SetDialogVariableInt('total_tip_count', totalTipCount);
    }
    start() {
        this.actions.push(new AddClassAction(this.panel, 'BecomeVisible'));
        this.actions.push(new SkippableAction(new WaitAction(g_DelayAfterStart)));
        this.actions.push(new AddClassAction(this.panel, 'ShowTotalTips'));
        this.actions.push(new SkippableAction(new WaitAction(g_SubElementDelay)));
        for (var i = 0; i < this.panelCount; ++i) {
            var tipperPanel = this.panel.FindChildInLayoutFile('Tipper' + i);
            this.actions.push(new AddClassAction(tipperPanel, 'ShowTip'));
        }
        this.actions.push(new SkippableAction(new WaitAction(g_SubElementDelay)));
        var panel = this.panel;
        var ownerPanel = this.ownerPanel;
        var total_points = this.total_points;
        var startingPoints = this.startingPoints;
        this.actions.push(new RunFunctionAction(function () {
            UpdateSubpanelTotalPoints(panel, ownerPanel, total_points, startingPoints, false);
        }));
        super.start();
    }
}
// Action to animate a battle pass bp increase
class AnimateActionsGrantedSubpanelAction extends RunSequentialActions {
    panel;
    ownerPanel;
    startingPoints;
    panelCount;
    total_points;
    constructor(panel, ownerPanel, actions_granted, startingPoints) {
        super();
        this.panel = panel;
        this.ownerPanel = ownerPanel;
        this.startingPoints = startingPoints;
        panel.AddClass('Visible');
        var panelXPCircle = panel.FindChildInLayoutFile("XPCircleContainer");
        panelXPCircle.BLoadLayoutSnippet('BattlePassXPCircle');
        this.panelCount = 0;
        this.total_points = 0;
        var actionContainer = panel.FindChildInLayoutFile("ActionContainer");
        for (var i = 0; i < actions_granted.length; ++i) {
            var actionPanel = $.CreatePanel('Panel', actionContainer, 'Action' + i);
            actionPanel.BLoadLayoutSnippet('BattlePassAction');
            if (actions_granted[i].action_image != null) {
                var imagePanel = actionPanel.FindChildInLayoutFile("ConsumableImage");
                imagePanel.SetImage(actions_granted[i].action_image);
            }
            actionPanel.SetDialogVariableInt('action_points', actions_granted[i].bp_amount);
            actionPanel.SetDialogVariableInt('action_quantity', actions_granted[i].quantity);
            this.panelCount = this.panelCount + 1;
            this.total_points += actions_granted[i].quantity * actions_granted[i].bp_amount;
        }
    }
    start() {
        this.actions.push(new AddClassAction(this.panel, 'BecomeVisible'));
        this.actions.push(new SkippableAction(new WaitAction(g_DelayAfterStart)));
        this.actions.push(new AddClassAction(this.panel, 'ShowTotalActions'));
        this.actions.push(new SkippableAction(new WaitAction(g_SubElementDelay)));
        for (var i = 0; i < this.panelCount; ++i) {
            var actionPanel = this.panel.FindChildInLayoutFile('Action' + i);
            this.actions.push(new AddClassAction(actionPanel, 'ShowAction'));
        }
        this.actions.push(new SkippableAction(new WaitAction(g_SubElementDelay)));
        var panel = this.panel;
        var ownerPanel = this.ownerPanel;
        var total_points = this.total_points;
        var startingPoints = this.startingPoints;
        this.actions.push(new RunFunctionAction(function () {
            UpdateSubpanelTotalPoints(panel, ownerPanel, total_points, startingPoints, false);
        }));
        super.start();
    }
}
// Action to animate a battle pass bp increase
class AnimateCavernCrawlSubpanelAction extends RunSequentialActions {
    panel;
    ownerPanel;
    startingPoints;
    total_points;
    constructor(panel, ownerPanel, cavern_data, startingPoints) {
        super();
        this.panel = panel;
        this.ownerPanel = ownerPanel;
        this.startingPoints = startingPoints;
        panel.AddClass('Visible');
        panel.FindChildInLayoutFile("CavernCrawlHero").heroid = cavern_data.hero_id;
        this.total_points = cavern_data.bp_amount;
    }
    start() {
        this.actions.push(new AddClassAction(this.panel, 'BecomeVisible'));
        this.actions.push(new SkippableAction(new WaitAction(g_DelayAfterStart)));
        this.actions.push(new AddClassAction(this.panel, 'ShowMap'));
        this.actions.push(new SkippableAction(new WaitAction(g_SubElementDelay)));
        this.actions.push(new AddClassAction(this.panel, 'ShowCompleted'));
        this.actions.push(new SkippableAction(new WaitAction(g_SubElementDelay)));
        var panel = this.panel;
        var ownerPanel = this.ownerPanel;
        var total_points = this.total_points;
        var startingPoints = this.startingPoints;
        this.actions.push(new RunFunctionAction(function () {
            UpdateSubpanelTotalPoints(panel, ownerPanel, total_points, startingPoints, false);
        }));
        super.start();
    }
}
class AnimateEventGameTI9SubpanelAction extends RunSequentialActions {
    panel;
    ownerPanel;
    startingPoints;
    total_points;
    show_win;
    show_loss;
    show_daily_bonus;
    show_treasure;
    constructor(panel, ownerPanel, event_game_ti9, startingPoints) {
        super();
        var kWinPointsBase = 300;
        this.panel = panel;
        this.ownerPanel = ownerPanel;
        this.startingPoints = startingPoints;
        this.total_points = event_game_ti9.bp_amount;
        this.show_win = (event_game_ti9.win_points > 0);
        this.show_loss = (event_game_ti9.loss_points > 0);
        this.show_daily_bonus = (event_game_ti9.win_points > kWinPointsBase);
        this.show_treasure = (event_game_ti9.treasure_points > 0);
        panel.AddClass('Visible');
        if (this.show_win) {
            panel.AddClass("EventGame_HasWin");
        }
        if (this.show_loss) {
            panel.AddClass("EventGame_HasLoss");
        }
        if (this.show_daily_bonus) {
            panel.AddClass("EventGame_HasDailyBonus");
        }
        if (this.show_treasure) {
            panel.AddClass("EventGame_HasTreasure");
        }
        var panelXPCircle = panel.FindChildInLayoutFile("XPCircleContainer");
        panelXPCircle.BLoadLayoutSnippet('BattlePassXPCircle');
        panel.SetDialogVariableInt("win_points", event_game_ti9.win_points > kWinPointsBase ? kWinPointsBase : event_game_ti9.win_points);
        panel.SetDialogVariableInt("bonus_points", event_game_ti9.win_points - kWinPointsBase);
        panel.SetDialogVariableInt("loss_points", event_game_ti9.loss_points);
        panel.SetDialogVariableInt("treasure_points", event_game_ti9.treasure_points);
        var progressMax = event_game_ti9.weekly_cap_total;
        var progressEnd = progressMax - event_game_ti9.weekly_cap_remaining;
        var progressStart = progressEnd - event_game_ti9.bp_amount;
        panel.SetDialogVariableInt("weekly_progress", progressEnd);
        panel.SetDialogVariableInt("weekly_complete_limit", progressMax);
        var progressBar = panel.FindChildInLayoutFile("EventGameWeeklyProgress");
        progressBar.max = progressMax;
        progressBar.lowervalue = progressStart;
        progressBar.uppervalue = progressEnd;
    }
    start() {
        this.actions.push(new AddClassAction(this.panel, 'BecomeVisible'));
        this.actions.push(new SkippableAction(new WaitAction(g_DelayAfterStart)));
        if (this.show_win) {
            this.actions.push(new AddClassAction(this.panel, 'EventGame_ShowWin'));
            this.actions.push(new SkippableAction(new WaitAction(g_SubElementDelay)));
            if (this.show_daily_bonus) {
                this.actions.push(new AddClassAction(this.panel, 'EventGame_ShowDailyBonus'));
                this.actions.push(new SkippableAction(new WaitAction(g_SubElementDelay)));
            }
        }
        if (this.show_loss) {
            this.actions.push(new AddClassAction(this.panel, 'EventGame_ShowLoss'));
            this.actions.push(new SkippableAction(new WaitAction(g_SubElementDelay)));
        }
        if (this.show_treasure) {
            this.actions.push(new AddClassAction(this.panel, 'EventGame_ShowTreasure'));
            this.actions.push(new SkippableAction(new WaitAction(g_SubElementDelay)));
        }
        this.actions.push(new AddClassAction(this.panel, 'EventGame_ShowWeeklyProgress'));
        this.actions.push(new SkippableAction(new WaitAction(g_SubElementDelay)));
        var panel = this.panel;
        var ownerPanel = this.ownerPanel;
        var total_points = this.total_points;
        var startingPoints = this.startingPoints;
        this.actions.push(new RunFunctionAction(function () {
            UpdateSubpanelTotalPoints(panel, ownerPanel, total_points, startingPoints, false);
        }));
        super.start();
    }
}
class AnimateEventGameTI10SubpanelAction extends RunSequentialActions {
    panel;
    ownerPanel;
    startingPoints;
    total_points;
    premium_starting_points;
    premium_progress;
    show_weekly_progress;
    show_premium_weekly_progress;
    constructor(panel, ownerPanel, event_game_ti10, startingPoints) {
        super();
        this.panel = panel;
        this.ownerPanel = ownerPanel;
        this.startingPoints = startingPoints;
        this.total_points = event_game_ti10.bp_amount;
        this.premium_starting_points = event_game_ti10.premium_start;
        this.premium_progress = event_game_ti10.bonus_premium_amount;
        this.show_weekly_progress = (event_game_ti10.bp_amount > 0);
        this.show_premium_weekly_progress = (event_game_ti10.bonus_premium_amount > 0);
        panel.AddClass('Visible');
        var panelXPCircle = panel.FindChildInLayoutFile("XPCircleContainer");
        panelXPCircle.BLoadLayoutSnippet('BattlePassXPCircle');
        panel.SetDialogVariableInt("win_points", event_game_ti10.bp_amount);
        var nPremiumPoints = event_game_ti10.premium_amount;
        var nExtraPremiumPoints = 0;
        if (event_game_ti10.bonus_premium_amount > 0) {
            nExtraPremiumPoints = event_game_ti10.premium_amount - event_game_ti10.bonus_premium_amount;
            nPremiumPoints = event_game_ti10.bonus_premium_amount;
        }
        panel.SetDialogVariableInt("premium_points", nPremiumPoints);
        panel.SetDialogVariableInt("extra_premium_points", nExtraPremiumPoints);
        panel.SetHasClass('HasExtraPremiumPoints', nExtraPremiumPoints > 0);
        panel.SetHasClass('HasBonusPremiumPoints', event_game_ti10.bonus_premium_amount > 0);
        var progressMax = event_game_ti10.bp_max;
        var progressStart = event_game_ti10.bp_start;
        var progressEnd = this.total_points + event_game_ti10.bp_start;
        panel.SetDialogVariableInt("weekly_progress", this.total_points);
        panel.SetDialogVariableInt("weekly_start_value", progressStart);
        panel.SetDialogVariableInt("weekly_complete_limit", progressMax);
        var progressBar = panel.FindChildInLayoutFile("EventGameWeeklyProgress");
        progressBar.max = Math.max(progressMax, 1);
        progressBar.lowervalue = progressStart;
        progressBar.uppervalue = progressEnd;
        panel.SetDialogVariableInt("weekly_premium_progress", event_game_ti10.bonus_premium_amount);
        panel.SetDialogVariableInt("weekly_premium_start_value", event_game_ti10.premium_start);
        panel.SetDialogVariableInt("weekly_premium_complete_limit", event_game_ti10.premium_max);
        var progressBar = panel.FindChildInLayoutFile("EventGameWeeklyPremiumProgress");
        progressBar.max = Math.max(event_game_ti10.premium_max, 1);
        progressBar.lowervalue = event_game_ti10.premium_start;
        progressBar.uppervalue = progressBar.lowervalue;
    }
    start() {
        this.actions.push(new AddClassAction(this.panel, 'BecomeVisible'));
        this.actions.push(new SkippableAction(new WaitAction(g_DelayAfterStart)));
        if (this.show_premium_weekly_progress) {
            this.actions.push(new AddClassAction(this.panel, 'EventGame_ShowWeeklyPremiumProgress'));
            this.actions.push(new SkippableAction(new WaitAction(g_SubElementDelay)));
        }
        if (this.show_weekly_progress) {
            this.actions.push(new AddClassAction(this.panel, 'EventGame_ShowWeeklyProgress'));
            this.actions.push(new SkippableAction(new WaitAction(g_SubElementDelay)));
        }
        var panel = this.panel;
        var ownerPanel = this.ownerPanel;
        var total_points = this.total_points;
        var startingPoints = this.startingPoints;
        this.actions.push(new RunFunctionAction(function () {
            UpdateSubpanelTotalPoints(panel, ownerPanel, total_points, startingPoints, false);
        }));
        if (this.show_premium_weekly_progress) {
            this.actions.push(new SkippableAction(new WaitAction(0.2)));
            this.actions.push(new AddClassAction(this.panel, 'EventGame_ShowWeeklyPremiumBonus'));
            (function (me) {
                me.actions.push(new RunFunctionAction(function () {
                    var progressBar = me.panel.FindChildInLayoutFile("EventGameWeeklyPremiumProgress");
                    progressBar.uppervalue = me.premium_starting_points + me.premium_progress;
                }));
            })(this);
        }
        super.start();
    }
}
class AnimateEventGameNemesticeSubpanelAction extends RunSequentialActions {
    panel;
    ownerPanel;
    startingPoints;
    total_points;
    show_weekly_progress;
    constructor(panel, ownerPanel, event_game_nemestice, startingPoints) {
        super();
        this.panel = panel;
        this.ownerPanel = ownerPanel;
        this.startingPoints = startingPoints;
        this.total_points = event_game_nemestice.bp_amount;
        this.show_weekly_progress = (event_game_nemestice.bp_amount > 0);
        panel.AddClass('Visible');
        var panelXPCircle = panel.FindChildInLayoutFile("XPCircleContainer");
        panelXPCircle.BLoadLayoutSnippet('BattlePassXPCircle');
        panel.SetDialogVariableInt("win_points", event_game_nemestice.bp_amount);
        panel.SetHasClass('HasExtraPremiumPoints', false);
        panel.SetHasClass('HasBonusPremiumPoints', false);
        var progressMax = event_game_nemestice.bp_max;
        var progressStart = event_game_nemestice.bp_start;
        var progressEnd = this.total_points + event_game_nemestice.bp_start;
        panel.SetDialogVariableInt("weekly_progress", this.total_points);
        panel.SetDialogVariableInt("weekly_start_value", progressStart);
        panel.SetDialogVariableInt("weekly_complete_limit", progressMax);
        var progressBar = panel.FindChildInLayoutFile("EventGameWeeklyProgress");
        progressBar.max = Math.max(progressMax, 1);
        progressBar.lowervalue = progressStart;
        progressBar.uppervalue = progressEnd;
    }
    start() {
        this.actions.push(new AddClassAction(this.panel, 'BecomeVisible'));
        this.actions.push(new SkippableAction(new WaitAction(g_DelayAfterStart)));
        if (this.show_weekly_progress) {
            this.actions.push(new AddClassAction(this.panel, 'EventGame_ShowWeeklyProgress'));
            this.actions.push(new SkippableAction(new WaitAction(g_SubElementDelay)));
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
}
// Action to animate a battle pass bp increase
class AnimateDailyChallengeSubpanelAction extends RunSequentialActions {
    panel;
    ownerPanel;
    startingPoints;
    total_points;
    constructor(panel, ownerPanel, daily_challenge, startingPoints) {
        super();
        this.panel = panel;
        this.ownerPanel = ownerPanel;
        this.startingPoints = startingPoints;
        panel.AddClass('Visible');
        var panelXPCircle = panel.FindChildInLayoutFile("XPCircleContainer");
        panelXPCircle.BLoadLayoutSnippet('BattlePassXPCircle');
        panel.FindChildInLayoutFile("DailyChallengeHeroMovie").heroid = daily_challenge.hero_id;
        this.total_points = daily_challenge.bp_amount;
    }
    start() {
        this.actions.push(new AddClassAction(this.panel, 'BecomeVisible'));
        this.actions.push(new SkippableAction(new WaitAction(g_DelayAfterStart)));
        this.actions.push(new AddClassAction(this.panel, 'ShowHero'));
        this.actions.push(new SkippableAction(new WaitAction(g_SubElementDelay)));
        this.actions.push(new AddClassAction(this.panel, 'ShowCompleted'));
        this.actions.push(new SkippableAction(new WaitAction(g_SubElementDelay)));
        var panel = this.panel;
        var ownerPanel = this.ownerPanel;
        var total_points = this.total_points;
        var startingPoints = this.startingPoints;
        this.actions.push(new RunFunctionAction(function () {
            UpdateSubpanelTotalPoints(panel, ownerPanel, total_points, startingPoints, false);
        }));
        super.start();
    }
}
// Action to animate a battle pass bp increase
class AnimateWeeklyChallengeSubpanelAction extends RunSequentialActions {
    panel;
    ownerPanel;
    startingPoints;
    points_for_display;
    total_points;
    constructor(panel, ownerPanel, weekly_challenge, startingPoints) {
        super();
        this.panel = panel;
        this.ownerPanel = ownerPanel;
        this.startingPoints = startingPoints;
        panel.AddClass('Visible');
        var panelXPCircle = panel.FindChildInLayoutFile("XPCircleContainer");
        panelXPCircle.BLoadLayoutSnippet('BattlePassXPCircle');
        panelXPCircle.SetDialogVariableInt('points', 1000); // Not sure why this is necesssary, we used to do this?
        panel.SetDialogVariable('weekly_challenge_description', weekly_challenge.challenge_description);
        panel.SetDialogVariableInt('weekly_progress', weekly_challenge.progress);
        panel.SetDialogVariableInt('weekly_complete_limit', weekly_challenge.complete_limit);
        panel.SetDialogVariableInt('weekly_increment', weekly_challenge.end_progress - weekly_challenge.progress);
        var progressBar = panel.FindChildInLayoutFile("WeeklyChallengeProgress");
        progressBar.max = weekly_challenge.complete_limit;
        progressBar.lowervalue = weekly_challenge.progress;
        progressBar.uppervalue = weekly_challenge.end_progress;
        this.points_for_display = weekly_challenge.bp_amount;
        this.total_points = 0;
        if (weekly_challenge.end_progress == weekly_challenge.complete_limit) {
            this.total_points = weekly_challenge.bp_amount;
        }
        else {
            panel.AddClass("HideXPCircle");
        }
    }
    start() {
        this.actions.push(new AddClassAction(this.panel, 'BecomeVisible'));
        this.actions.push(new SkippableAction(new WaitAction(g_DelayAfterStart)));
        this.actions.push(new AddClassAction(this.panel, 'ShowChallenge'));
        this.actions.push(new SkippableAction(new WaitAction(g_SubElementDelay)));
        if (this.total_points != 0) {
            this.actions.push(new AddClassAction(this.panel, 'ShowCompleted'));
            this.actions.push(new SkippableAction(new WaitAction(g_SubElementDelay)));
        }
        var panel = this.panel;
        var ownerPanel = this.ownerPanel;
        var total_points = this.points_for_display;
        var displayOnly = (this.total_points == 0);
        var startingPoints = this.startingPoints;
        this.actions.push(new RunFunctionAction(function () {
            UpdateSubpanelTotalPoints(panel, ownerPanel, total_points, startingPoints, displayOnly);
        }));
        super.start();
    }
}
// Action to animate a battle pass bp increase
class AnimateGuildSubpanelAction extends RunSequentialActions {
    panel;
    ownerPanel;
    startingPoints;
    total_points;
    guild_progress;
    constructor(panel, ownerPanel, guild_progress, startingPoints, event_id) {
        super();
        this.panel = panel;
        this.ownerPanel = ownerPanel;
        this.startingPoints = startingPoints;
        this.total_points = 0;
        this.guild_progress = guild_progress;
        panel.AddClass('Visible');
        if (guild_progress.guild_contracts != null && guild_progress.guild_contracts.length > 0) {
            var contractsList = panel.FindChildInLayoutFile("GuildContractList");
            for (var i = 0; i < guild_progress.guild_contracts.length; ++i) {
                var guildContract = guild_progress.guild_contracts[i];
                var contractPanel = $.CreatePanel('Panel', contractsList, '');
                contractPanel.BLoadLayoutSnippet('BattlePassGuildContract');
                var contract = contractPanel.FindChildInLayoutFile('GuildContract');
                contract.SetContract(event_id, guildContract.challenge_instance_id, guildContract.challenge_parameter, guildContract.completed);
                contractPanel.SetHasClass("ContractCompleted", guildContract.completed);
                if (guildContract.completed)
                    this.total_points += guildContract.battle_point_reward;
            }
            panel.AddClass("HasGuildContracts");
        }
        if (guild_progress.guild_challenge != null) {
            var guildChallenge = guild_progress.guild_challenge;
            var challengeImage = panel.FindChildInLayoutFile("GuildChallengeImage");
            challengeImage.SetImage(guildChallenge.challenge_image);
            panel.SetDialogVariableInt("challenge_start_value", guildChallenge.challenge_start_value);
            panel.SetDialogVariableInt("challenge_max_value", guildChallenge.challenge_max_value);
            panel.SetDialogVariableInt("challenge_progress", guildChallenge.challenge_progress);
            var challengeProgressBar = panel.FindChildInLayoutFile("GuildChallengeProgressBar");
            challengeProgressBar.min = 0;
            challengeProgressBar.max = guildChallenge.challenge_max_value;
            challengeProgressBar.lowervalue = guildChallenge.challenge_start_value;
            challengeProgressBar.uppervalue = guildChallenge.challenge_start_value + guildChallenge.challenge_progress;
            panel.AddClass("HasGuildChallenge");
        }
        var panelXPCircle = panel.FindChildInLayoutFile("XPCircleContainer");
        panelXPCircle.BLoadLayoutSnippet('BattlePassXPCircle');
    }
    start() {
        this.actions.push(new AddClassAction(this.panel, 'BecomeVisible'));
        this.actions.push(new SkippableAction(new WaitAction(g_DelayAfterStart)));
        var contractsList = this.panel.FindChildInLayoutFile("GuildContractList");
        if (contractsList.GetChildCount() > 0) {
            this.actions.push(new AddClassAction(this.panel, "ShowGuildContracts"));
            for (var i = 0; i < contractsList.GetChildCount(); ++i) {
                var contractPanel = contractsList.GetChild(i);
                this.actions.push(new RunFunctionAction((function (contract) {
                    return function () { contract.AddClass("ShowGuildContract"); };
                })(contractPanel)));
                this.actions.push(new SkippableAction(new WaitAction(g_SubElementDelay)));
            }
        }
        if (this.guild_progress.guild_challenge != null) {
            this.actions.push(new AddClassAction(this.panel, 'ShowGuildChallenge'));
            this.actions.push(new SkippableAction(new WaitAction(g_SubElementDelay)));
        }
        if (this.total_points != 0) {
            this.actions.push(new AddClassAction(this.panel, 'ShowCompleted'));
            this.actions.push(new SkippableAction(new WaitAction(g_SubElementDelay)));
        }
        var panel = this.panel;
        var ownerPanel = this.ownerPanel;
        var total_points = this.total_points;
        var displayOnly = (this.total_points == 0);
        var startingPoints = this.startingPoints;
        this.actions.push(new RunFunctionAction(function () {
            UpdateSubpanelTotalPoints(panel, ownerPanel, total_points, startingPoints, displayOnly);
        }));
        super.start();
    }
}
class AnimateBattlePassScreenAction extends RunSequentialActions {
    data;
    constructor(data) {
        super();
        this.data = data;
    }
    start() {
        var battlePointsStart = this.data.battle_pass_progress.battle_points_start;
        var battleLevelStart = Math.floor(battlePointsStart / this.data.battle_pass_progress.battle_points_per_level);
        var battlePointsAtLevelStart = battleLevelStart * this.data.battle_pass_progress.battle_points_per_level;
        var bpLevelStart = battlePointsStart - battlePointsAtLevelStart;
        var bpLevelNext = this.data.battle_pass_progress.battle_points_per_level;
        // Create the screen and do a bunch of initial setup
        var panel = StartNewScreen('BattlePassProgressScreen');
        panel.BLoadLayoutSnippet("BattlePassProgress");
        panel.SetDialogVariableInt('total_points_gained', 0);
        // Setup the sequence of actions to animate the screen
        this.actions.push(new AddClassAction(panel, 'ShowScreen'));
        this.actions.push(new SkippableAction(new WaitAction(0.5)));
        this.actions.push(new AddScreenLinkAction(panel, 'BattlePassProgress', '#DOTA_PlusPostGame_BattlePassProgress', function () {
            panel.SwitchClass('current_screen', 'ShowBattlePassProgress');
        }));
        this.actions.push(new SwitchClassAction(panel, 'current_screen', 'ShowBattlePassProgress'));
        this.actions.push(new SkippableAction(new WaitAction(0.5)));
        var subPanelActions = new RunSkippableStaggeredActions(.3);
        var startingPointsToAdd = 0;
        var panelCount = 0;
        var kMaxPanels = 6;
        if (this.data.battle_pass_progress.event_game_ti9 != null) {
            var eventPanel = panel.FindChildInLayoutFile("BattlePassEventGameTI9Progress");
            const subpanelAction = new AnimateEventGameTI9SubpanelAction(eventPanel, panel, this.data.battle_pass_progress.event_game_ti9, startingPointsToAdd);
            startingPointsToAdd += subpanelAction.total_points;
            subPanelActions.actions.push(subpanelAction);
            if (++panelCount > kMaxPanels)
                eventPanel.RemoveClass('Visible');
        }
        if (this.data.battle_pass_progress.event_game_ti10 != null) {
            var eventPanel = panel.FindChildInLayoutFile("BattlePassEventGameTI10Progress");
            const subpanelAction = new AnimateEventGameTI10SubpanelAction(eventPanel, panel, this.data.battle_pass_progress.event_game_ti10, startingPointsToAdd);
            startingPointsToAdd += subpanelAction.total_points;
            subPanelActions.actions.push(subpanelAction);
            if (++panelCount > kMaxPanels)
                eventPanel.RemoveClass('Visible');
        }
        if (this.data.battle_pass_progress.cavern_crawl != null) {
            var cavernPanel = panel.FindChildInLayoutFile("BattlePassCavernCrawlProgress");
            const subpanelAction = new AnimateCavernCrawlSubpanelAction(cavernPanel, panel, this.data.battle_pass_progress.cavern_crawl, startingPointsToAdd);
            startingPointsToAdd += subpanelAction.total_points;
            subPanelActions.actions.push(subpanelAction);
            if (++panelCount > kMaxPanels)
                cavernPanel.RemoveClass('Visible');
        }
        if (this.data.battle_pass_progress.wagering != null) {
            var wagerPanel = panel.FindChildInLayoutFile("BattlePassWagerProgress");
            const subpanelAction = new AnimateWageringSubpanelAction(wagerPanel, panel, this.data.battle_pass_progress.wagering, startingPointsToAdd);
            startingPointsToAdd += subpanelAction.total_points;
            subPanelActions.actions.push(subpanelAction);
            if (++panelCount > kMaxPanels)
                wagerPanel.RemoveClass('Visible');
        }
        if (this.data.battle_pass_progress.tips != null && this.data.battle_pass_progress.tips.length != 0) {
            var tipPanel = panel.FindChildInLayoutFile("BattlePassTipsProgress");
            const subpanelAction = new AnimateTippingSubpanelAction(tipPanel, panel, this.data.battle_pass_progress.tips, startingPointsToAdd);
            startingPointsToAdd += subpanelAction.total_points;
            subPanelActions.actions.push(subpanelAction);
            if (++panelCount > kMaxPanels)
                tipPanel.RemoveClass('Visible');
        }
        if (this.data.battle_pass_progress.actions_granted != null && this.data.battle_pass_progress.actions_granted.length != 0) {
            var actionPanel = panel.FindChildInLayoutFile("BattlePassActionsGrantedProgress");
            const subpanelAction = new AnimateActionsGrantedSubpanelAction(actionPanel, panel, this.data.battle_pass_progress.actions_granted, startingPointsToAdd);
            startingPointsToAdd += subpanelAction.total_points;
            subPanelActions.actions.push(subpanelAction);
            if (++panelCount > kMaxPanels)
                actionPanel.RemoveClass('Visible');
        }
        if (this.data.battle_pass_progress.daily_challenge != null) {
            var dailyPanel = panel.FindChildInLayoutFile("BattlePassDailyChallengeProgress");
            const subpanelAction = new AnimateDailyChallengeSubpanelAction(dailyPanel, panel, this.data.battle_pass_progress.daily_challenge, startingPointsToAdd);
            startingPointsToAdd += subpanelAction.total_points;
            subPanelActions.actions.push(subpanelAction);
            if (++panelCount > kMaxPanels)
                dailyPanel.RemoveClass('Visible');
        }
        if (this.data.battle_pass_progress.weekly_challenge_1 != null) {
            var weeklyPanel = panel.FindChildInLayoutFile("BattlePassWeeklyChallengeProgress");
            const subpanelAction = new AnimateWeeklyChallengeSubpanelAction(weeklyPanel, panel, this.data.battle_pass_progress.weekly_challenge_1, startingPointsToAdd);
            startingPointsToAdd += subpanelAction.total_points;
            subPanelActions.actions.push(subpanelAction);
            if (++panelCount > kMaxPanels)
                weeklyPanel.RemoveClass('Visible');
        }
        if (this.data.battle_pass_progress.guild_progress != null) {
            var guildPanel = panel.FindChildInLayoutFile("BattlePassGuildProgress");
            const subpanelAction = new AnimateGuildSubpanelAction(guildPanel, panel, this.data.battle_pass_progress.guild_progress, startingPointsToAdd, this.data.battle_pass_progress.battle_points_event_id);
            startingPointsToAdd += subpanelAction.total_points;
            subPanelActions.actions.push(subpanelAction);
            if (++panelCount > kMaxPanels)
                guildPanel.RemoveClass('Visible');
        }
        this.actions.push(subPanelActions);
        this.actions.push(new AnimateBattlePassLevelsAction(panel, this.data.battle_pass_progress.battle_points_event_id, this.data.battle_pass_progress.battle_points_start, this.data.battle_pass_progress.battle_points_per_level, startingPointsToAdd));
        this.actions.push(new WaitAction(0.2));
        this.actions.push(new StopSkippingAheadAction());
        this.actions.push(new SkippableAction(new WaitAction(1.5)));
        this.actions.push(new SwitchClassAction(panel, 'current_screen', ''));
        this.actions.push(new SkippableAction(new WaitAction(0.5)));
        super.start();
    }
}
// Frostivus 2018
class AnimateFrostivusScreenAction extends RunSequentialActions {
    data;
    constructor(data) {
        super();
        this.data = data;
    }
    start() {
        var battlePointsStart = this.data.frostivus_progress.battle_points_start;
        var battleLevelStart = Math.floor(battlePointsStart / this.data.frostivus_progress.battle_points_per_level);
        var battlePointsAtLevelStart = battleLevelStart * this.data.frostivus_progress.battle_points_per_level;
        var bpLevelStart = battlePointsStart - battlePointsAtLevelStart;
        var bpLevelNext = this.data.frostivus_progress.battle_points_per_level;
        // Create the screen and do a bunch of initial setup
        var panel = StartNewScreen('Frostivus2018ProgressScreen');
        panel.BLoadLayoutSnippet("Frostivus2018Progress");
        panel.SetDialogVariableInt('total_points_gained', 0);
        // Setup the sequence of actions to animate the screen
        this.actions.push(new AddClassAction(panel, 'ShowScreen'));
        this.actions.push(new SkippableAction(new WaitAction(0.5)));
        this.actions.push(new AddScreenLinkAction(panel, 'Frostivus2018Progress', '#DOTA_PlusPostGame_Frostivus2018Progress', function () {
            panel.SwitchClass('current_screen', 'ShowFrostivus2018Progress');
        }));
        this.actions.push(new SwitchClassAction(panel, 'current_screen', 'ShowFrostivus2018Progress'));
        this.actions.push(new SkippableAction(new WaitAction(0.5)));
        (function (me, myPanel) {
            me.actions.push(new RunFunctionAction(function () {
                myPanel.SetDialogVariableInt('total_points_gained', me.data.frostivus_progress.battle_points_earned);
            }));
        })(this, panel);
        //panel.FindChildInLayoutFile( "Frostivus2018TotalsRow" ).SetDialogVariableInt( 'bp_value', 0 );
        panel.SetDialogVariableInt('current_level_bp', bpLevelStart);
        panel.SetDialogVariableInt('bp_to_next_level', bpLevelNext);
        panel.FindChildInLayoutFile('Frostivus2018LevelShield').SetEventLevel(this.data.frostivus_progress.battle_points_event_id, battleLevelStart);
        this.actions.push(new SkippableAction(new WaitAction(0.75)));
        var progressBar = panel.FindChildInLayoutFile("BattleLevelProgress");
        progressBar.max = bpLevelNext;
        progressBar.lowervalue = bpLevelStart;
        progressBar.uppervalue = bpLevelStart;
        var bpEarned = 0;
        var bpLevel = bpLevelStart;
        var battleLevel = battleLevelStart;
        var bpRemaining = this.data.frostivus_progress.battle_points_earned;
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
                    var levelShield = panel.FindChildInLayoutFile('Frostivus2018LevelShield');
                    levelShield.AddClass('LeveledUp');
                    levelShield.SetEventLevel(me.data.frostivus_progress.battle_points_event_id, battleLevelInternal);
                }));
            })(this, battleLevel);
            this.actions.push(new RemoveClassAction(panel, 'LeveledUpStart'));
            this.actions.push(new AddClassAction(panel, 'LeveledUpEnd'));
            this.actions.push(new SkippableAction(new WaitAction(1.0)));
            (function (me, battleLevelInternal) {
                me.actions.push(new RunFunctionAction(function () {
                    var levelShield = panel.FindChildInLayoutFile('Frostivus2018LevelShield');
                    levelShield.RemoveClass('LeveledUp');
                }));
            })(this, battleLevel);
            this.actions.push(new RemoveClassAction(panel, 'LeveledUpEnd'));
            (function (me, bpLevelInternal, bpLevelNextInternal) {
                me.actions.push(new RunFunctionAction(function () {
                    progressBar.lowervalue = 0;
                    progressBar.uppervalue = 0;
                    progressBar.max = bpLevelNextInternal;
                    panel.SetDialogVariableInt('current_level_bp', bpLevelInternal);
                    panel.SetDialogVariableInt('bp_to_next_level', bpLevelNextInternal);
                }));
            })(this, bpLevel, bpLevelNext);
        }
        this.actions.push(new WaitAction(0.2));
        this.actions.push(new StopSkippingAheadAction());
        this.actions.push(new SkippableAction(new WaitAction(1.5)));
        this.actions.push(new SwitchClassAction(panel, 'current_screen', ''));
        this.actions.push(new SkippableAction(new WaitAction(0.5)));
        super.start();
    }
}
// Event Points [New Bloom 2019, etc]
class AnimateEventPointsScreenAction extends RunSequentialActions {
    data;
    constructor(data) {
        super();
        this.data = data;
    }
    start() {
        var battlePointsStart = this.data.event_points_progress.battle_points_start;
        var battleLevelStart = Math.floor(battlePointsStart / this.data.event_points_progress.battle_points_per_level);
        var heroID = this.data.hero_id;
        var battlePointsAtLevelStart = battleLevelStart * this.data.event_points_progress.battle_points_per_level;
        var bpLevelStart = 0;
        var bpLevelNext = 0;
        bpLevelStart = battlePointsStart - battlePointsAtLevelStart;
        bpLevelNext = this.data.event_points_progress.battle_points_per_level;
        // Create the screen and do a bunch of initial setup
        var panel = StartNewScreen('EventPointsProgressScreen');
        panel.BLoadLayoutSnippet("EventPointsProgress");
        panel.SetDialogVariableInt('total_points_gained', 0);
        panel.SetDialogVariable('event_name', $.Localize(this.data.event_points_progress.battle_points_event_name));
        // Setup the sequence of actions to animate the screen
        this.actions.push(new AddClassAction(panel, 'ShowScreen'));
        this.actions.push(new SkippableAction(new WaitAction(0.5)));
        this.actions.push(new AddScreenLinkAction(panel, 'EventPointsProgress', '#DOTA_PlusPostGame_EventPointsProgress', function () {
            panel.SwitchClass('current_screen', 'ShowEventPointsProgress');
        }));
        this.actions.push(new SwitchClassAction(panel, 'current_screen', 'ShowEventPointsProgress'));
        this.actions.push(new SkippableAction(new WaitAction(0.5)));
        (function (me, myPanel) {
            me.actions.push(new RunFunctionAction(function () {
                myPanel.SetDialogVariableInt('total_points_gained', me.data.event_points_progress.battle_points_earned);
            }));
        })(this, panel);
        //panel.FindChildInLayoutFile( "EventPointsTotalsRow" ).SetDialogVariableInt( 'bp_value', 0 );
        panel.SetDialogVariableInt('current_level_bp', bpLevelStart);
        panel.SetDialogVariableInt('bp_to_next_level', bpLevelNext);
        panel.FindChildInLayoutFile('EventPointsLevelShield').SetEventLevel(this.data.event_points_progress.battle_points_event_id, battleLevelStart);
        this.actions.push(new SkippableAction(new WaitAction(0.75)));
        var wonGameRow = panel.FindChildInLayoutFile("EventPointsWonGameRow");
        this.actions.push(new AddClassAction(wonGameRow, 'ShowRow'));
        this.actions.push(new AddClassAction(wonGameRow, 'ShowValue'));
        var progressBar = panel.FindChildInLayoutFile("BattleLevelProgress");
        progressBar.max = bpLevelNext;
        progressBar.lowervalue = bpLevelStart;
        progressBar.uppervalue = bpLevelStart;
        var bpEarned = 0;
        var bpLevel = bpLevelStart;
        var battleLevel = battleLevelStart;
        var bpRemaining = this.data.event_points_progress.battle_points_earned;
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
                    var levelShield = panel.FindChildInLayoutFile('EventPointsLevelShield');
                    levelShield.AddClass('LeveledUp');
                    levelShield.SetEventLevel(me.data.event_points_progress.battle_points_event_id, battleLevelInternal);
                }));
            })(this, battleLevel);
            this.actions.push(new RemoveClassAction(panel, 'LeveledUpStart'));
            this.actions.push(new AddClassAction(panel, 'LeveledUpEnd'));
            this.actions.push(new SkippableAction(new WaitAction(1.0)));
            (function (me, battleLevelInternal) {
                me.actions.push(new RunFunctionAction(function () {
                    var levelShield = panel.FindChildInLayoutFile('EventPointsLevelShield');
                    levelShield.RemoveClass('LeveledUp');
                }));
            })(this, battleLevel);
            this.actions.push(new RemoveClassAction(panel, 'LeveledUpEnd'));
            (function (me, bpLevelInternal, bpLevelNextInternal) {
                me.actions.push(new RunFunctionAction(function () {
                    progressBar.lowervalue = 0;
                    progressBar.uppervalue = 0;
                    progressBar.max = bpLevelNextInternal;
                    panel.SetDialogVariableInt('current_level_bp', bpLevelInternal);
                    panel.SetDialogVariableInt('bp_to_next_level', bpLevelNextInternal);
                }));
            })(this, bpLevel, bpLevelNext);
        }
        this.actions.push(new WaitAction(0.2));
        this.actions.push(new StopSkippingAheadAction());
        this.actions.push(new SkippableAction(new WaitAction(1.5)));
        this.actions.push(new SwitchClassAction(panel, 'current_screen', ''));
        this.actions.push(new SkippableAction(new WaitAction(0.5)));
        super.start();
    }
}
class AnimatePlayerMatchSurveyScreenAction extends RunSequentialActions {
    data;
    constructor(data) {
        super();
        this.data = data;
    }
    start() {
        var data = this.data;
        // Create the screen and do a bunch of initial setup
        var panel = StartNewScreen('PlayerMatchSurveyScreen');
        panel.BLoadLayoutSnippet("PlayerMatchSurvey");
        var goodRatingContainer = panel.FindChildInLayoutFile('GoodRatingContainer');
        var badRatingContainer = panel.FindChildInLayoutFile('BadRatingContainer');
        var skipButton = panel.FindChildInLayoutFile('SkipButton');
        var SubmitRating = function (nRating, nFlags) {
            const matchId = data.match_id ? Number(data.match_id) : 0;
            $.DispatchEvent('DOTAMatchSubmitPlayerMatchSurvey', matchId, nRating, nFlags);
            // Once a rating has been changed, disable all the other UI
            goodRatingContainer.enabled = false;
            badRatingContainer.enabled = false;
            PlayUISoundScript("ui_goto_player_page");
        };
        for (var i = 1; i < goodRatingContainer.GetChildCount(); ++i) {
            var goodRatingButton = goodRatingContainer.GetChild(i);
            var nRating = goodRatingButton.GetAttributeInt("rating_flag", 0);
            var reg = function (goodRatingButton, nRating) {
                $.RegisterEventHandler('Activated', goodRatingButton, function () {
                    goodRatingButton.AddClass('Selected');
                    SubmitRating(1, nRating);
                });
            };
            reg(goodRatingButton, nRating);
        }
        for (var i = 1; i < badRatingContainer.GetChildCount(); ++i) {
            var badRatingButton = badRatingContainer.GetChild(i);
            var nRating = badRatingButton.GetAttributeInt("rating_flag", 0);
            var reg = function (badRatingButton, nRating) {
                $.RegisterEventHandler('Activated', badRatingButton, function () {
                    badRatingButton.AddClass('Selected');
                    SubmitRating(-1, nRating);
                });
            };
            reg(badRatingButton, nRating);
        }
        // scramble the buttons to avoid bias
        for (var k = 0; k < 5; ++k) {
            for (var i = 1; i < goodRatingContainer.GetChildCount(); ++i) {
                var randint = Math.floor((goodRatingContainer.GetChildCount() - 1) * Math.random()) + 1;
                var button = goodRatingContainer.GetChild(i);
                goodRatingContainer.MoveChildAfter(button, goodRatingContainer.GetChild(randint));
            }
            for (var i = 1; i < badRatingContainer.GetChildCount(); ++i) {
                var randint = Math.floor((badRatingContainer.GetChildCount() - 1) * Math.random()) + 1;
                var button = badRatingContainer.GetChild(i);
                badRatingContainer.MoveChildAfter(button, badRatingContainer.GetChild(randint));
            }
        }
        $.RegisterEventHandler('Activated', skipButton, function () {
            skipButton.AddClass('Selected');
            panel.AddClass("Skipped");
            SubmitRating(0, 0);
        });
        // Setup the sequence of actions to animate the screen
        this.actions.push(new StopSkippingAheadAction());
        this.actions.push(new AddClassAction(panel, 'ShowScreen'));
        this.actions.push(new AddScreenLinkAction(panel, 'PlayerMatchSurveyProgress', '#DOTA_PlayerMatchSurveyPostGame_PlayerMatchSurvey', function () {
            panel.AddClass('RatingScreenForceVisible');
        }));
        this.actions.push(new WaitAction(0.25));
        this.actions.push(new AddClassAction(panel, 'RatingScreenVisible'));
        var durationAction = new RunUntilSingleActionFinishedAction();
        // @ts-ignore ignore until post_game_progress_coach_rating is TypeScript
        durationAction.actions.push(new WaitForSurveyStateChange(panel));
        this.actions.push(durationAction);
        this.actions.push(new AddClassAction(panel, 'HideSkipButton'));
        this.actions.push(new WaitAction(0.5));
        this.actions.push(new PlaySoundAction("ui_hero_select_slide_late"));
        this.actions.push(new AddClassAction(panel, 'SubmitFeedbackVisible'));
        this.actions.push(new WaitAction(1.25));
        this.actions.push(new RemoveClassAction(panel, 'RatingScreenVisible'));
        this.actions.push(new WaitAction(0.5));
        super.start();
    }
}
// ----------------------------------------------------------------------------
// MVP v2
// ----------------------------------------------------------------------------
class AnimateMVP2ScreenAction extends AnimateMVP2TabAction {
    start() {
        // Create the screen and do a bunch of initial setup
        var mvp2ScreenPanel = StartNewScreen('MVP2Screen');
        mvp2ScreenPanel.BLoadLayoutSnippet("MVP2Screen");
        this.data.bProgressVersion = true;
        this.init(mvp2ScreenPanel);
    }
}
class AnimateDiretideRewardsScreenAction extends BaseAction {
    data;
    seq;
    constructor(data) {
        super();
        this.data = data;
    }
    start() {
        var rootPanel = $('#Diretide2020RewardsScreen');
        if (rootPanel !== null) {
            rootPanel.DeleteAsync(0);
            rootPanel = null;
        }
        rootPanel = StartNewScreen('Diretide2020RewardsScreen');
        rootPanel.BLoadLayout('file://{resources}/layout/diretide/post_game_diretide.xml', false, false);
        // @ts-ignore ignore until post_game_diretide is TypeScript
        this.seq = rootPanel.CreatePostgameAction(this.data);
        this.seq.start();
        var screenLinksContainer = $.GetContextPanel().GetParent().FindPanelInLayoutFile('ProgressScreenButtons');
        if (screenLinksContainer.FindChildInLayoutFile('DireTide') === null) {
            var link = $.CreatePanel('Button', screenLinksContainer, 'DireTide');
            link.AddClass('ProgressScreenButton');
            link.AddClass('DiretideProgress');
            var me = this;
            link.SetPanelEvent('onactivate', function () {
                $.DispatchEvent('DOTAPostGameProgressShowSummary', rootPanel);
                var seq = new RunSequentialActions();
                seq.actions.push(new RunFunctionAction(function () {
                    screenLinksContainer.enabled = false;
                }));
                seq.actions.push(me);
                seq.actions.push(new RunFunctionAction(function () {
                    screenLinksContainer.enabled = true;
                }));
                RunSingleAction(seq);
            });
        }
    }
    update() {
        return this.seq.update();
    }
    finish() {
        this.seq.finish();
    }
}
function TestAnimateBattlePass() {
    var data = {
        hero_id: 87,
        battle_pass_progress: {
            battle_points_event_id: 29,
            battle_points_start: 74850,
            battle_points_per_level: 1000,
            wagering: {
                wager_amount: 2,
                conversion_ratio: 100,
                wager_token_bonus_pct: 25,
                wager_streak_bonus_pct: 10,
            },
            tips: [
                {
                    account_id: 172258,
                    count: 2,
                    amount: 250,
                },
                //				{
                //					account_id: 236096,
                //					count: 1,
                //					amount: 500,
                //				},
                //				{
                //					account_id: 236096,
                //					count: 3,
                //					amount: 500,
                //				},
                //				{
                //					account_id: 236096,
                //					count: 1,
                //					amount: 500,
                //				},
                //				{
                //					account_id: 172258,
                //					count: 2,
                //					amount: 250,
                //				},
                //				{
                //					account_id: 236096,
                //					count: 1,
                //					amount: 500,
                //				},
                //				{
                //					account_id: 236096,
                //					count: 3,
                //					amount: 500,
                //				},
                //				{
                //					account_id: 236096,
                //					count: 1,
                //					amount: 500,
                //				},
                //				{
                //					account_id: 236096,
                //					count: 1,
                //					amount: 500,
                //				},
            ],
            cavern_crawl: {
                hero_id: 87,
                bp_amount: 375,
            },
            //           event_game_ti9:
            //           {
            //               bp_amount: 1200,
            //               win_points: 1000,
            //               loss_points: 0,
            //               treasure_points: 200,
            //               weekly_cap_remaining: 1000,
            //               weekly_cap_total: 3000,
            //           },
            //
            event_game_ti10: {
                bp_amount: 1200,
                premium_amount: 500,
                bonus_premium_amount: 500,
                bp_start: 350,
                bp_max: 2000,
                premium_start: 2250,
                premium_max: 2500,
            },
            //daily_challenge:
            //{
            //	hero_id: 87,
            //	bp_amount: 125,
            //},
            //weekly_challenge_1:
            //{
            //	challenge_description: 'Kill 50 enemy heroes',
            //	progress: 20000,
            //	end_progress: 30000,
            //	complete_limit: 50000,
            //	bp_amount: 250,
            //},
            actions_granted: [
                {
                    action_id: 704,
                    quantity: 2,
                    bp_amount: 100,
                    action_image: "file://{images}/spellicons/consumables/seasonal_ti9_shovel.png"
                },
                {
                    action_id: 705,
                    quantity: 1,
                    bp_amount: 5000,
                    action_image: "file://{images}/spellicons/consumables/seasonal_ti9_shovel.png"
                },
            ],
            guild_progress: {
                guild_contracts: [
                    {
                        challenge_instance_id: 2152900061,
                        challenge_parameter: 23,
                        completed: true,
                        battle_point_reward: 150,
                        guild_point_reward: 150
                    },
                    {
                        challenge_instance_id: 2506886225,
                        challenge_parameter: 22000,
                        completed: true,
                        battle_point_reward: 150,
                        guild_point_reward: 150
                    },
                    {
                        challenge_instance_id: 2506886225,
                        challenge_parameter: 22000,
                        completed: false,
                        battle_point_reward: 150,
                        guild_point_reward: 150
                    },
                ],
                guild_challenge: {
                    challenge_image: "file://{images}/guilds/challenges/guild_networth_by_time.png",
                    challenge_start_value: 1234,
                    challenge_max_value: 4500,
                    challenge_progress: 400
                }
            }
        }
    };
    TestProgressAnimation(data);
}
function TestAnimateCavernCrawl() {
    var data = {
        hero_id: 92,
        cavern_crawl_progress: {
            event_id: 36,
            map_variant: 0,
            turbo_mode: false,
            map_progress: [
                {
                    path_id_completed: 0,
                    room_id_claimed: 1,
                }
            ],
        },
    };
    TestProgressAnimation(data);
}
function TestAnimateRubickArcanaProgress() {
    var data = {
        hero_id: 86,
        rubick_arcana_progress: {
            arcana_start_score: 34,
            arcana_end_score: 36
        }
    };
    TestProgressAnimation(data);
}
function TestAnimateWraithKingArcanaProgress() {
    var data = {
        hero_id: 42,
        wraith_king_arcana_progress: {
            previous_heroes_killed_mask: [
                1, 2, 3, 4, 5
            ],
            heroes_killed: [
                6, 82
            ]
        }
    };
    TestProgressAnimation(data);
}
function TestAnimateFrostivusProgress() {
    var data = {
        hero_id: 87,
        frostivus_progress: {
            battle_points_event_id: 24,
            battle_points_start: 2200,
            battle_points_per_level: 1000,
            battle_points_earned: 1250,
            battle_points_daily_bonus_earned: 1000,
        }
    };
    TestProgressAnimation(data);
}
function TestAnimateEventPointsProgress() {
    $.GetContextPanel().AddClass('Season_NewBloom2019');
    var data = {
        hero_id: 87,
        event_points_progress: {
            battle_points_event_id: 24,
            battle_points_start: 2200,
            battle_points_per_level: 1000,
            battle_points_earned: 1250,
            battle_points_event_name: '#DOTA_EventName_NewBloom2019',
        }
    };
    TestProgressAnimation(data);
}
function TestAnimateDiretideProgress() {
    $.GetContextPanel().AddClass('Season_Diretide2020');
    var data = {
        player_slot: 3,
        diretide_rewards_progress: {
            match_id: '1000030665004',
            awards: [
                {
                    award_name: '#DOTA_Diretide_Candy_Reason7',
                    award_amounts: [35],
                    award_player_slots: [2]
                },
                {
                    award_name: '#DOTA_Diretide_Candy_Reason2',
                    award_amounts: [25, 25, 25, 25, 25],
                    award_player_slots: [0, 1, 2, 3, 4]
                },
                {
                    award_name: '#DOTA_Diretide_Candy_Reason9',
                    award_amounts: [25, 125, 45],
                    award_player_slots: [1, 2, 3]
                },
                {
                    award_name: '#DOTA_Diretide_Candy_Reason1',
                    award_amounts: [10, 10, 10, 10, 10, 10, 10, 10, 10, 10],
                    award_player_slots: [0, 1, 2, 3, 4, 128, 129, 130, 131, 132]
                },
            ],
            items: [
                {
                    item_id: 13780,
                    item_player_slot: 1,
                    item_image: ""
                },
                {
                    item_id: 17626,
                    item_player_slot: 2,
                    item_image: ""
                },
                {
                    item_id: 13812,
                    item_player_slot: 2,
                    item_image: "file://{images}/events/diretide/spray.png"
                }
            ],
            match_players: [
                {
                    player_slot: 0,
                    player_name: 'Eric L',
                    event_points: 0,
                    account_id: 85501006,
                    owns_event: 0
                },
                {
                    player_slot: 1,
                    player_name: 'Greg',
                    event_points: 450,
                    account_id: 146131,
                    owns_event: 1
                },
                {
                    player_slot: 2,
                    event_points: 45,
                    player_name: 'AlexF',
                    account_id: 156258214,
                    owns_event: 1
                },
                {
                    player_slot: 3,
                    event_points: 92,
                    player_name: 'bradm',
                    account_id: 85501369,
                    owns_event: 1
                },
                {
                    player_slot: 4,
                    event_points: 11,
                    player_name: 'anishc',
                    account_id: 85501621,
                    owns_event: 0
                },
                {
                    player_slot: 128,
                    event_points: 60,
                    player_name: 'BoyangZ',
                    account_id: 85501128,
                    owns_event: 0
                },
                {
                    player_slot: 129,
                    event_points: 0,
                    player_name: 'irvz',
                    account_id: 85502069,
                    owns_event: 1
                },
                {
                    player_slot: 130,
                    event_points: 22,
                    player_name: 'CameronC',
                    account_id: 85501829,
                    owns_event: 1
                },
                {
                    player_slot: 131,
                    event_points: 50,
                    player_name: 'Alireza',
                    account_id: 170021,
                    owns_event: 1
                },
                {
                    player_slot: 132,
                    event_points: 5067,
                    player_name: 'philco',
                    account_id: 70071,
                    owns_event: 0
                }
            ]
        }
    };
    TestProgressAnimation(data);
}
var s_TestNumber = 271;
function TestMVP2Screen() {
    /*
    var accolades: number[] = [];

    var max_accolade = 276;
    while ( accolades.length < 3 )
    {
        if ( g_MVP_Accolade_TypeMap[s_TestNumber] != undefined )
        {
            accolades.push( s_TestNumber );
        }

        s_TestNumber = ( s_TestNumber + 1 ) % max_accolade;
    }
    var data: MVP2PostGame_t =
    {
        mvp2:
        {
            mvps: [
                {
                    slot: 3,
                    accountid: 174054,
                    guildid: 4,
                    heroname: 'npc_dota_hero_muerta', // just for display
                    // Find hero id in game\dota\scripts\npc\npc_heroes.txt
                    overrideheroid: 138,
                    // Find econ id in game\dota\scripts\items\items_game.txt
                    //overrideeconid: 21136,
                    was_dire: false,
                    featured_hero_sticker_index: 23867,
                    featured_hero_sticker_quality: 0,
                    accolades: [
                        //{ type: accolades[0], detail_value: 113 },
                        //{ type: accolades[1], detail_value: 4 },
                        //{ type: accolades[2], detail_value: 13 }
                        { type: 275, detail_value: 10 },
                        { type: 276, detail_value: 1 },
                        { type: 278, detail_value: 4 }
                    ]
                },
                {
                    slot: 1,
                    accountid: 85501829,
                    guildid: 18,
                    heroname: 'npc_dota_hero_windrunner',
                    overrideheroid: 21,
                    was_dire: false,
                    featured_hero_sticker_index: 23867,
                    featured_hero_sticker_quality: 0,
                    accolades: [
                        { type: 3, detail_value: 11 }
                    ]
                },
                {
                    slot: 2,
                    accountid: 85501006,
                    guildid: 4,
                    was_dire: true,
                    heroname: 'npc_dota_hero_axe',
                    overrideheroid: 2,
                    featured_hero_sticker_index: 23867,
                    featured_hero_sticker_quality: 0,
                    accolades: [
                        { type: 18, detail_value: 1 }
                    ]
                }
            ]
        }
    };

    TestProgressAnimation( data );
    //*/
}
function TestAnimatePlayerMatchSurvey() {
    var data = {
        match_id: "0",
        player_match_survey_progress: {}
    };
    TestProgressAnimation(data);
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoicG9zdF9nYW1lX3Byb2dyZXNzX3NjcmVlbnMuanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyJwb3N0X2dhbWVfcHJvZ3Jlc3Nfc2NyZWVucy50cyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiO0FBQUEscUNBQXFDO0FBQ3JDLG1DQUFtQztBQUNuQywrQ0FBK0M7QUFDL0Msb0RBQW9EO0FBQ3BELHVEQUF1RDtBQUN2RCw0Q0FBNEM7QUFFNUMsK0VBQStFO0FBQy9FLG1DQUFtQztBQUNuQywrRUFBK0U7QUFDL0UsTUFBTSw2QkFBOEIsU0FBUSxvQkFBb0I7SUFFL0QsS0FBSyxDQUFVO0lBQ2YsT0FBTyxDQUFTO0lBQ2hCLGFBQWEsQ0FBUztJQUN0QixnQkFBZ0IsQ0FBUztJQUN6QixXQUFXLENBQVM7SUFFcEIsWUFBYSxLQUFjLEVBQUUsT0FBZSxFQUFFLGFBQXFCLEVBQUUsZ0JBQXdCLEVBQUUsV0FBbUI7UUFFakgsS0FBSyxFQUFFLENBQUM7UUFFUixJQUFJLENBQUMsS0FBSyxHQUFHLEtBQUssQ0FBQztRQUNuQixJQUFJLENBQUMsT0FBTyxHQUFHLE9BQU8sQ0FBQztRQUN2QixJQUFJLENBQUMsYUFBYSxHQUFHLGFBQWEsQ0FBQztRQUNuQyxJQUFJLENBQUMsZ0JBQWdCLEdBQUcsZ0JBQWdCLENBQUM7UUFDekMsSUFBSSxDQUFDLFdBQVcsR0FBRyxXQUFXLENBQUM7UUFFL0IsSUFBSSxpQkFBaUIsR0FBRyxJQUFJLENBQUMsYUFBYSxDQUFDO1FBQzNDLElBQUksZ0JBQWdCLEdBQUcsSUFBSSxDQUFDLEtBQUssQ0FBRSxpQkFBaUIsR0FBRyxJQUFJLENBQUMsZ0JBQWdCLENBQUUsQ0FBQztRQUMvRSxJQUFJLHdCQUF3QixHQUFHLGdCQUFnQixHQUFHLElBQUksQ0FBQyxnQkFBZ0IsQ0FBQztRQUN4RSxJQUFJLFlBQVksR0FBRyxpQkFBaUIsR0FBRyx3QkFBd0IsQ0FBQztRQUNoRSxJQUFJLFdBQVcsR0FBRyxJQUFJLENBQUMsZ0JBQWdCLENBQUM7UUFF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