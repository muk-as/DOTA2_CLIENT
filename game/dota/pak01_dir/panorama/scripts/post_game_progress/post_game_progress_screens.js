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
    constructor(data) {
        super();
        this.eventHandler = null;
        this.disabled_update = false;
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
class AnimateMVPVotingScreenAction extends RunSequentialActions {
    constructor(data) {
        super();
        this.data = data;
    }
    start() {
        // Create the screen and do a bunch of initial setup
        var panel = StartNewScreen('MVPVotingProgressScreen');
        panel.BLoadLayoutSnippet("MVPVotingProgress");
        var mvpVotePanel = panel.FindChildInLayoutFile('PostGameMVPVote');
        mvpVotePanel.SetMatchID(this.data.mvp_voting_progress.match_id);
        var heroContainer = mvpVotePanel.FindChildInLayoutFile('HeroContainer');
        for (var i = 0; i < this.data.mvp_voting_progress.match_players.length; ++i) {
            var match_player = this.data.mvp_voting_progress.match_players[i];
            var player_slot = match_player.player_slot;
            var player_hero_id = match_player.hero_id;
            var heroInfoPanel = mvpVotePanel.AddHeroPanel(match_player.account_id, match_player.vote_count);
            heroInfoPanel.SetDialogVariable("hero_name_mvp", $.Localize('#' + match_player.hero_name));
            heroInfoPanel.SetDialogVariable("player_name_mvp", match_player.player_name);
            heroInfoPanel.SetDialogVariableInt("mvp_kills", match_player.kills);
            heroInfoPanel.SetDialogVariableInt("mvp_assists", match_player.assists);
            heroInfoPanel.SetDialogVariableInt("mvp_deaths", match_player.deaths);
            heroInfoPanel.SetDialogVariableInt("vote_count", match_player.vote_count);
            var voteClickArea = heroInfoPanel.FindChildInLayoutFile('VoteAreaPanel');
            var j = i + 1;
            if (typeof player_slot !== 'undefined') {
                // Use this normally when viewing the details
                mvpVotePanel.SetPortraitUnitToPlayerHero(player_slot, player_hero_id, "background_hero_" + j);
                (function (panel, account_id) {
                    voteClickArea.SetPanelEvent('onactivate', function () {
                        $.DispatchEvent('PostGameMVPSubmitVote', voteClickArea, account_id);
                    });
                })(voteClickArea, match_player.account_id);
            }
            else {
                // Use this for testing when we don't actually have match data
                mvpVotePanel.SetPortraitUnitToPlayerHero(i, player_hero_id, "background_hero_" + j);
                (function (panel, account_id, player_index) {
                    voteClickArea.SetPanelEvent('onactivate', function () {
                        $.DispatchEvent('PostGameMVPSubmitVoteTest', voteClickArea, player_index + 1);
                    });
                })(voteClickArea, match_player.account_id, i);
            }
            if (match_player.owns_event == 0) {
                heroInfoPanel.AddClass("NoCurrentBattlepass");
            }
            else {
                var eventShieldPanel = heroInfoPanel.FindChildInLayoutFile('BPLevel');
                eventShieldPanel.SetEventPoints(match_player.event_id, match_player.event_points);
            }
        }
        // Setup the sequence of actions to animate the screen
        this.actions.push(new AddClassAction(mvpVotePanel, 'ShowScreen'));
        this.actions.push(new AddScreenLinkAction(panel, 'MVPProgress', '#DOTAMVPVote_TitleLink'));
        this.actions.push(new ActionWithTimeout(new WaitForClassAction(mvpVotePanel, 'HasVotedForMVP'), 25.0));
        this.actions.push(new StopSkippingAheadAction());
        this.actions.push(new ActionWithTimeout(new WaitForClassAction(mvpVotePanel, 'DidNotVoteForMVP'), 1.8));
        this.actions.push(new SwitchClassAction(panel, 'current_screen', ''));
        this.actions.push(new SkippableAction(new WaitAction(1.0)));
        super.start();
    }
}
class AnimateBattlePassScreenAction extends RunSequentialActions {
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
class AnimateGauntletProgressScreenAction extends RunSequentialActions {
    constructor(data, gauntlet) {
        super();
        this.data = data;
        this.gauntlet = gauntlet;
    }
    start() {
        // n.b. these are before this update
        var nWins = this.gauntlet.wins;
        var nLosses = this.gauntlet.losses;
        var bWin = !!this.gauntlet.win_game;
        var nTier = this.gauntlet.tier;
        var nTierBPAward = this.gauntlet.bp_award;
        var nGoldAward = this.gauntlet.gold_award;
        var nShardAward = this.gauntlet.shard_award;
        var bFinished = (bWin && nWins >= 2) || (!bWin && nLosses >= 1);
        var nBPAwarded = 0;
        if (bFinished && bWin) {
            nBPAwarded = nTierBPAward;
        }
        var panel = StartNewScreen('GauntletProgressScreen');
        panel.BLoadLayoutSnippet("GauntletProgress");
        panel.SetDialogVariableInt('total_points_gained', 0);
        panel.SetDialogVariableInt('gauntlet_gold', 0);
        panel.SetDialogVariableInt('gauntlet_shards', 0);
        panel.SetDialogVariable('gauntlet_tier_name', $.Localize('#DOTA_GauntletTierName_' + nTier));
        // Set initial state
        for (var i = 0; i < nWins; ++i) {
            var pipPanel = panel.FindChildInLayoutFile('GauntletWin' + i);
            if (pipPanel == null)
                break;
            pipPanel.AddClass('PipActive');
        }
        for (var i = 0; i < nLosses; ++i) {
            var pipPanel = panel.FindChildInLayoutFile('GauntletLose' + i);
            if (pipPanel == null)
                break;
            pipPanel.AddClass('PipActive');
        }
        // Only show additional points if we won the whole gauntlet
        if (nBPAwarded == 0) {
            panel.AddClass('HideAdditionalBattlePoints');
        }
        const ANIMATE_PIP_WIN_X = 841;
        const ANIMATE_PIP_WIN_Y = 624;
        const ANIMATE_PIP_WIN_OFFSET = 64;
        const ANIMATE_PIP_LOSE_X = 1070;
        const ANIMATE_PIP_LOSE_Y = 624;
        const ANIMATE_PIP_LOSE_OFFSET = 64;
        var newPipPanel = panel.FindChildInLayoutFile('GauntletAnimatePip');
        var resultPipPanel = null;
        if (newPipPanel) {
            if (bWin) {
                newPipPanel.AddClass('GauntletWin');
                newPipPanel.SetPositionInPixels(ANIMATE_PIP_WIN_X + ANIMATE_PIP_WIN_OFFSET * nWins, ANIMATE_PIP_WIN_Y, 0);
                resultPipPanel = panel.FindChildInLayoutFile('GauntletWin' + nWins);
            }
            else {
                newPipPanel.AddClass('GauntletLose');
                newPipPanel.SetPositionInPixels(ANIMATE_PIP_LOSE_X + ANIMATE_PIP_LOSE_OFFSET * nLosses, ANIMATE_PIP_LOSE_Y, 0);
                resultPipPanel = panel.FindChildInLayoutFile('GauntletLose' + nLosses);
            }
        }
        // animation begins 
        this.actions.push(new AddClassAction(panel, 'ShowScreen'));
        this.actions.push(new AddScreenLinkAction(panel, 'GauntletProgress', '#DOTA_GauntletPostGame_Tooltip'));
        this.actions.push(new SkippableAction(new WaitAction(0.5)));
        // gauntlet-specific stuff starts here
        if (newPipPanel != null) {
            this.actions.push(new AddClassAction(newPipPanel, 'Animate'));
            this.actions.push(new AddClassAction(panel, 'GauntletScreenShake'));
            // wait for anim to complete, then remove anim classes and replace with active pip directly
            this.actions.push(new SkippableAction(new WaitAction(1.0)));
            this.actions.push(new OptionalSkippableAction(new PlaySoundAction(bWin ? 'UI.Gauntlet.WinStamp' : 'UI.Gauntlet.LoseStamp')));
            if (resultPipPanel != null) {
                this.actions.push(new AddClassAction(resultPipPanel, 'PipActive'));
            }
            this.actions.push(new SkippableAction(new WaitAction(0.7)));
            this.actions.push(new RemoveClassAction(newPipPanel, 'Animate'));
            this.actions.push(new RemoveClassAction(panel, 'GauntletScreenShake'));
        }
        var resultClass = 'GauntletShowInProgress';
        if (bFinished) {
            if (bWin) {
                resultClass = 'GauntletShowWin';
                if (nTier < 10) {
                    resultClass = 'GauntletShowPromote';
                    panel.SetDialogVariable('promote_tier_name', $.Localize('#DOTA_GauntletTierName_' + (nTier + 1)));
                }
            }
            else {
                resultClass = 'GauntletShowLose';
            }
        }
        this.actions.push(new AddClassAction(panel, resultClass));
        this.actions.push(new SkippableAction(new WaitAction(0.5)));
        if (bFinished && bWin)
            this.actions.push(new OptionalSkippableAction(new PlaySoundAction('UI.Gauntlet.Award')));
        if (bFinished && bWin && nGoldAward > 0) {
            this.actions.push(new SkippableAction(new WaitAction(0.5)));
            var par = new RunParallelActions();
            var duration = GetXPIncreaseAnimationDuration(nGoldAward);
            par.actions.push(new AnimateDialogVariableIntAction(panel, 'gauntlet_gold', 0, nGoldAward, duration));
            par.actions.push(new PlaySoundForDurationAction("Plus.shards_tally", duration));
            this.actions.push(new SkippableAction(par));
        }
        if (bFinished && bWin && nShardAward > 0) {
            this.actions.push(new SkippableAction(new WaitAction(0.5)));
            var par = new RunParallelActions();
            var duration = GetXPIncreaseAnimationDuration(nShardAward);
            par.actions.push(new AnimateDialogVariableIntAction(panel, 'gauntlet_shards', 0, nShardAward, duration));
            par.actions.push(new PlaySoundAction("Plus.shards_tally"));
            this.actions.push(new SkippableAction(par));
        }
        if (nBPAwarded > 0) {
            this.actions.push(new SkippableAction(new WaitAction(0.5)));
            this.actions.push(new RunFunctionAction(function () {
                panel.SetDialogVariableInt('total_points_gained', nBPAwarded);
            }));
            var par = new RunParallelActions();
            par.actions.push(new AnimateDialogVariableIntAction(panel, 'total_points_gained', 0, nBPAwarded, 1));
            par.actions.push(new AnimateBattlePassLevelsAction(panel, this.gauntlet.battle_points_event_id, this.gauntlet.battle_points_start, this.gauntlet.battle_points_per_level, nBPAwarded));
            this.actions.push(new SkippableAction(par));
        }
        else {
            // Need to create this to initialize state even when no BP awarded
            this.actions.push(new AnimateBattlePassLevelsAction(panel, this.gauntlet.battle_points_event_id, this.gauntlet.battle_points_start, this.gauntlet.battle_points_per_level, nBPAwarded));
        }
        // end of gauntlet-specific stuff
        this.actions.push(new StopSkippingAheadAction());
        this.actions.push(new SkippableAction(new WaitAction(1.5)));
        this.actions.push(new SwitchClassAction(panel, 'current_screen', ''));
        this.actions.push(new SkippableAction(new WaitAction(0.5)));
        // animation done, start it
        super.start();
    }
}
class AnimatePlayerMatchSurveyScreenAction extends RunSequentialActions {
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
function TestAnimateGauntletProgress() {
    var data = {
        hero_id: 87,
        gauntlet_progress: {
            tier: 4,
            wins: 2,
            losses: 0,
            win_game: 1,
            bp_award: 1500,
            gold_award: 200,
            shard_award: 1000,
            battle_points_event_id: 29,
            battle_points_start: 73295,
            battle_points_per_level: 1000
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
function TestMVPVotingProgress() {
    var data = {
        mvp_voting_progress: {
            match_id: '123456789',
            match_players: [
                {
                    hero_id: 34,
                    hero_name: 'Tinker',
                    event_points: 0,
                    event_id: 25,
                    vote_count: 2,
                    player_name: 'Eric L',
                    account_id: 1,
                    kills: 7,
                    assists: 3,
                    deaths: 6,
                    owns_event: 0
                },
                {
                    hero_id: 29,
                    hero_name: 'Tidehunter',
                    event_points: 8000,
                    event_id: 25,
                    vote_count: 0,
                    player_name: 'Brett S',
                    account_id: 2,
                    kills: 14,
                    assists: 3,
                    deaths: 8,
                    owns_event: 1
                },
                {
                    hero_id: 86,
                    hero_name: 'Rubick',
                    event_points: 12000,
                    event_id: 25,
                    vote_count: 3,
                    player_name: 'Kyle',
                    account_id: 3,
                    kills: 2,
                    assists: 12,
                    deaths: 0,
                    owns_event: 1
                },
                {
                    hero_id: 102,
                    hero_name: 'Abaddon',
                    event_points: 5000,
                    event_id: 25,
                    vote_count: 0,
                    player_name: 'Sergei',
                    account_id: 4,
                    kills: 21,
                    assists: 12,
                    deaths: 14,
                    owns_event: 1
                },
                {
                    hero_id: 59,
                    hero_name: 'Huskar',
                    event_points: 200,
                    event_id: 25,
                    vote_count: 5,
                    player_name: 'Alex',
                    account_id: 5,
                    kills: 8,
                    assists: 4,
                    deaths: 2,
                    owns_event: 0
                }
            ]
        }
    };
    TestProgressAnimation(data);
}
var s_TestNumber = 271;
function TestMVP2Screen() {
    var accolades = [];
    var max_accolade = 276;
    while (accolades.length < 3) {
        if (g_MVP_Accolade_TypeMap[s_TestNumber] != undefined) {
            accolades.push(s_TestNumber);
        }
        s_TestNumber = (s_TestNumber + 1) % max_accolade;
    }
    var data = {
        mvp2: {
            mvps: [
                {
                    slot: 3,
                    accountid: 174054,
                    guildid: 4,
                    heroname: 'npc_dota_hero_naga_siren',
                    // Find hero id in game\dota\scripts\npc\npc_heroes.txt
                    overrideheroid: 89,
                    // Find econ id in game\dota\scripts\items\items_game.txt
                    overrideeconid: 21136,
                    was_dire: false,
                    featured_hero_sticker_index: 23867,
                    featured_hero_sticker_quality: 0,
                    accolades: [
                        //{ type: accolades[0], detail_value: 113 },
                        //{ type: accolades[1], detail_value: 4 },
                        //{ type: accolades[2], detail_value: 13 }
                        { type: 11, detail_value: 1000 },
                        { type: 2, detail_value: 0 },
                        { type: 264, detail_value: 23 }
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
    TestProgressAnimation(data);
}
function TestAnimatePlayerMatchSurvey() {
    var data = {
        match_id: "0",
        player_match_survey_progress: {}
    };
    TestProgressAnimation(data);
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoicG9zdF9nYW1lX3Byb2dyZXNzX3NjcmVlbnMuanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyJwb3N0X2dhbWVfcHJvZ3Jlc3Nfc2NyZWVucy50cyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiQUFBQSxxQ0FBcUM7QUFDckMsbUNBQW1DO0FBQ25DLCtDQUErQztBQUMvQyxvREFBb0Q7QUFDcEQsdURBQXVEO0FBQ3ZELDRDQUE0QztBQUU1QywrRUFBK0U7QUFDL0UsbUNBQW1DO0FBQ25DLCtFQUErRTtBQUMvRSxNQUFNLDZCQUE4QixTQUFRLG9CQUFvQjtJQVEvRCxZQUFhLEtBQWMsRUFBRSxPQUFlLEVBQUUsYUFBcUIsRUFBRSxnQkFBd0IsRUFBRSxXQUFtQjtRQUVqSCxLQUFLLEVBQUUsQ0FBQztRQUVSLElBQUksQ0FBQyxLQUFLLEdBQUcsS0FBSyxDQUFDO1FBQ25CLElBQUksQ0FBQyxPQUFPLEdBQUcsT0FBTyxDQUFDO1FBQ3ZCLElBQUksQ0FBQyxhQUFhLEdBQUcsYUFBYSxDQUFDO1FBQ25DLElBQUksQ0FBQyxnQkFBZ0IsR0FBRyxnQkFBZ0IsQ0FBQztRQUN6QyxJQUFJLENBQUMsV0FBVyxHQUFHLFdBQVcsQ0FBQztRQUUvQixJQUFJLGlCQUFpQixHQUFHLElBQUksQ0FBQyxhQUFhLENBQUM7UUFDM0MsSUFBSSxnQkFBZ0IsR0FBRyxJQUFJLENBQUMsS0FBSyxDQUFFLGlCQUFpQixHQUFHLElBQUksQ0FBQyxnQkFBZ0IsQ0FBRSxDQUFDO1FBQy9FLElBQUksd0JBQXdCLEdBQUcsZ0JBQWdCLEdBQUcsSUFBSSxDQUFDLGdCQUFnQixDQUFDO1FBQ3hFLElBQUksWUFBWSxHQUFHLGlCQUFpQixHQUFHLHdCQUF3QixDQUFDO1FBQ2hFLElBQUksV0FBVyxHQUFHLElBQUksQ0FBQyxnQkFBZ0IsQ0FBQztRQUV4QyxLQUFLLENBQUMsb0JBQW9CLENBQUUsa0JBQWtCLEVBQUUsWUFBWSxDQUFFLENBQUM7UUFDL0QsS0FBSyxDQUFDLG9CQUFvQixDQUFFLGtC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