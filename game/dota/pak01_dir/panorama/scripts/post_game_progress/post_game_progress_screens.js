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
    uiSound;
    constructor(panel, bpAmount, bpValueStart, bpEarnedStart, bpLevelStart, uiSound = "XP.Count") {
        super();
        this.panel = panel;
        this.bpAmount = bpAmount;
        this.bpValueStart = bpValueStart;
        this.bpEarnedStart = bpEarnedStart;
        this.bpLevelStart = bpLevelStart;
        this.uiSound = uiSound;
    }
    start() {
        var duration = GetBPIncreaseAnimationDuration(this.bpAmount);
        var levelProgressBar = this.panel.FindChildInLayoutFile('BattleLevelProgress');
        var minLevelBP = Math.min(this.bpLevelStart, levelProgressBar.max);
        var maxLevelBP = Math.min(this.bpLevelStart + this.bpAmount, levelProgressBar.max);
        var uiSound = this.uiSound;
        this.actions.push(new AnimateDialogVariableIntAction(this.panel, 'current_level_bp', minLevelBP, maxLevelBP, duration));
        this.actions.push(new AnimateProgressBarWithMiddleAction(levelProgressBar, minLevelBP, maxLevelBP, duration));
        this.actions.push(new PlaySoundForDurationAction(uiSound, duration));
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
        this.actions.push(new WaitAction(0.0));
        this.actions.push(new RemoveClassAction(panel, 'RatingScreenVisible'));
        this.actions.push(new WaitAction(0.0));
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
        const oldRootPanel = $('#Diretide2020RewardsScreen');
        if (oldRootPanel) {
            oldRootPanel.DeleteAsync(0);
        }
        const rootPanel = StartNewScreen('Diretide2020RewardsScreen');
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
                    herounit: 'npc_dota_hero_ringmaster', // just for display
                    herotoken: '#npc_dota_hero_ringmaster',
                    // Find hero id in game\dota\scripts\npc\npc_heroes.txt
                    overrideheroid: 131,
                    // Find econ id in game\dota\scripts\items\items_game.txt
                    //overrideeconid: 21136,
                    was_dire: false,
                    featured_hero_sticker_index: 23867,
                    featured_hero_sticker_quality: 0,
                    accolades: [
                        { type: 279, detail_value: 10 },
                        { type: 280, detail_value: 1 },
                        { type: 281, detail_value: 4 }
                    ]
                },
                {
                    slot: 1,
                    accountid: 85501829,
                    guildid: 18,
                    herounit: 'npc_dota_hero_windrunner',
                    herotoken: '#npc_dota_hero_windrunner',
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
                    herounit: 'npc_dota_hero_axe',
                    herotoken: '#npc_dota_hero_axe',
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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoicG9zdF9nYW1lX3Byb2dyZXNzX3NjcmVlbnMuanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyIuLi8uLi8uLi8uLi8uLi9jb250ZW50L2RvdGEvcGFub3JhbWEvc2NyaXB0cy9wb3N0X2dhbWVfcHJvZ3Jlc3MvcG9zdF9nYW1lX3Byb2dyZXNzX3NjcmVlbnMudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IjtBQUFBLHFDQUFxQztBQUNyQyxtQ0FBbUM7QUFDbkMsK0NBQStDO0FBQy9DLG9EQUFvRDtBQUNwRCx1REFBdUQ7QUFDdkQsNENBQTRDO0FBRTVDLCtFQUErRTtBQUMvRSxtQ0FBbUM7QUFDbkMsK0VBQStFO0FBQy9FLE1BQU0sNkJBQThCLFNBQVEsb0JBQW9CO0lBRS9ELEtBQUssQ0FBVTtJQUNmLE9BQU8sQ0FBUztJQUNoQixhQUFhLENBQVM7SUFDdEIsZ0JBQWdCLENBQVM7SUFDekIsV0FBVyxDQUFTO0lBRXBCLFlBQWEsS0FBYyxFQUFFLE9BQWUsRUFBRSxhQUFxQixFQUFFLGdCQUF3QixFQUFFLFdBQW1CO1FBRWpILEtBQUssRUFBRSxDQUFDO1FBRVIsSUFBSSxDQUFDLEtBQUssR0FBRyxLQUFLLENBQUM7UUFDbkIsSUFBSSxDQUFDLE9BQU8sR0FBRyxPQUFPLENBQUM7UUFDdkIsSUFBSSxDQUFDLGFBQWEsR0FBRyxhQUFhLENBQUM7UUFDbkMsSUFBSSxDQUFDLGdCQUFnQixHQUFHLGdCQUFnQixDQUFDO1FBQ3pDLElBQUksQ0FBQyxXQUFXLEdBQUcsV0FBVyxDQUFDO1FBRS9CLElBQUksaUJBQWlCLEdBQUcsSUFBSSxDQUFDLGFBQWEsQ0FBQztRQUMzQyxJQUFJLGdCQUFnQixHQUFHLElBQUksQ0FBQyxLQUFLLENBQUUsaUJBQWlCLEdBQUcsSUFBSSxDQUFDLGdCQUFnQixDQUFFLENBQUM7UUFDL0UsSUFBSSx3QkFBd0IsR0FBRyxnQkFBZ0IsR0FBRyxJQUFJLENBQUMsZ0JBQWdCLENBQUM7UUFDeEUsSUFBSSxZQUFZLEdBQUcsaUJBQWlC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