"use strict";
/// <reference path="../dota.d.ts" />
/// <reference path="../util.ts" />
/// <reference path="../sequence_actions.ts" />
const HERO_BADGE_XP_TYPE_MATCH_FINISHED = 0;
const HERO_BADGE_XP_TYPE_MATCH_WON = 1;
const HERO_BADGE_XP_TYPE_CHALLENGE_COMPLETED = 2;
const HERO_BADGE_XP_TYPE_RELIC_LEVELS = 3;
const HERO_BADGE_LEVEL_REWARD_TIER = 0;
const HERO_BADGE_LEVEL_REWARD_CHAT_WHEEL = 1;
const HERO_BADGE_LEVEL_REWARD_CURRENCY = 2;
const k_unMaxHeroRewardLevel = 30;
function CreateProgressScreen(panelID) {
    const screenPanel = $.CreatePanel('Panel', $('#ProgressScreens'), panelID);
    screenPanel.AddClass('ProgressScreen');
    return screenPanel;
}
function ShowProgressScreen(screenPanel) {
    const screensContainer = $('#ProgressScreens');
    for (let i = 0; i < screensContainer.GetChildCount(); ++i) {
        const otherScreenPanel = screensContainer.GetChild(i);
        otherScreenPanel.SetHasClass('ShowScreen', otherScreenPanel == screenPanel);
    }
}
function StartNewScreen(panelID) {
    const screenPanel = CreateProgressScreen(panelID);
    ShowProgressScreen(screenPanel);
    return screenPanel;
}
function GetScreenLinksContainer() {
    return $.GetContextPanel().GetParent().FindPanelInThisOrParentLayoutFile('ProgressScreenButtons');
}
function ResetScreens() {
    $('#ProgressScreens').RemoveAndDeleteChildren();
    GetScreenLinksContainer().RemoveAndDeleteChildren();
}
function AddScreenLink(screenPanel, linkClass, tooltipText, activateFunction) {
    const link = $.CreatePanel('Button', GetScreenLinksContainer(), '');
    link.AddClass('ProgressScreenButton');
    link.AddClass(linkClass);
    link.SetPanelEvent('onactivate', function () {
        $.DispatchEvent('DOTAPostGameProgressShowSummary', screenPanel);
        ShowProgressScreen(screenPanel);
        if (activateFunction) {
            activateFunction();
        }
    });
    link.SetPanelEvent('onmouseover', function () { $.DispatchEvent('UIShowTextTooltip', link, tooltipText); });
    link.SetPanelEvent('onmouseout', function () { $.DispatchEvent('UIHideTextTooltip', link); });
    return link;
}
class AddScreenLinkAction extends RunFunctionAction {
    constructor(screenPanel, linkClass, tooltipText, activateFunction) {
        super(function () { AddScreenLink(screenPanel, linkClass, tooltipText, activateFunction); });
    }
}
let g_bSkipAheadActions = false;
function IsSkippingAhead() {
    return g_bSkipAheadActions;
}
function SetSkippingAhead(bSkipAhead) {
    if (g_bSkipAheadActions == bSkipAhead)
        return;
    if (bSkipAhead) {
        $.DispatchEvent("PostGameProgressSkippingAhead");
    }
    $.GetContextPanel().SetHasClass('SkippingAhead', bSkipAhead);
    g_bSkipAheadActions = bSkipAhead;
    if (bSkipAhead) {
        PlayUISoundScript("ui_generic_button_click");
    }
}
function StopSkippingAhead() { SetSkippingAhead(false); }
function StartSkippingAhead() { SetSkippingAhead(true); }
class StopSkippingAheadAction extends RunFunctionAction {
    constructor() {
        super(() => StopSkippingAhead());
    }
}
class SkippableAction extends BaseAction {
    innerAction;
    constructor(actionToMaybeSkip) {
        super();
        this.innerAction = actionToMaybeSkip;
    }
    start() {
        this.innerAction.start();
    }
    update() {
        return this.innerAction.update() && !IsSkippingAhead();
    }
    finish() {
        this.innerAction.finish();
    }
}
class RunSkippableStaggeredActions extends RunParallelActions {
    staggerSeconds;
    constructor(staggerSeconds) {
        super();
        this.staggerSeconds = staggerSeconds;
    }
    start() {
        const inputActions = this.actions;
        this.actions = [];
        for (let i = 0; i < inputActions.length; ++i) {
            const delay = i * this.staggerSeconds;
            if (delay > 0) {
                const seq = new RunSequentialActions();
                seq.actions.push(new SkippableAction(new WaitAction(delay)));
                seq.actions.push(inputActions[i]);
                this.actions.push(seq);
            }
            else {
                this.actions.push(inputActions[i]);
            }
        }
        super.start();
    }
}
class OptionalSkippableAction extends BaseAction {
    innerAction;
    innerActionStarted = false;
    constructor(actionToMaybeSkip) {
        super();
        this.innerAction = actionToMaybeSkip;
    }
    start() {
        this.innerActionStarted = false;
        if (!IsSkippingAhead()) {
            this.innerAction.start();
            this.innerActionStarted = true;
        }
    }
    update() {
        if (this.innerActionStarted)
            return this.innerAction.update() && !IsSkippingAhead();
        if (IsSkippingAhead())
            return false;
        this.innerAction.start();
        this.innerActionStarted = true;
        return this.innerAction.update();
    }
    ;
    finish() {
        if (this.innerActionStarted) {
            this.innerAction.finish();
        }
    }
}
function GetXPIncreaseAnimationDuration(xpAmount) {
    return RemapValClamped(xpAmount, 0, 500, 0.3, 0.6);
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoicG9zdF9nYW1lX3Byb2dyZXNzX3V0aWxzLmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsiLi4vLi4vLi4vLi4vLi4vY29udGVudC9kb3RhL3Bhbm9yYW1hL3NjcmlwdHMvcG9zdF9nYW1lX3Byb2dyZXNzL3Bvc3RfZ2FtZV9wcm9ncmVzc191dGlscy50cyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiO0FBQUEscUNBQXFDO0FBQ3JDLG1DQUFtQztBQUNuQywrQ0FBK0M7QUFHL0MsTUFBTSxpQ0FBaUMsR0FBRyxDQUFDLENBQUM7QUFDNUMsTUFBTSw0QkFBNEIsR0FBRyxDQUFDLENBQUM7QUFDdkMsTUFBTSxzQ0FBc0MsR0FBRyxDQUFDLENBQUM7QUFDakQsTUFBTSwrQkFBK0IsR0FBRyxDQUFDLENBQUM7QUFHMUMsTUFBTSw0QkFBNEIsR0FBRyxDQUFDLENBQUM7QUFDdkMsTUFBTSxrQ0FBa0MsR0FBRyxDQUFDLENBQUM7QUFDN0MsTUFBTSxnQ0FBZ0MsR0FBRyxDQUFDLENBQUM7QUFHM0MsTUFBTSxzQkFBc0IsR0FBRyxFQUFFLENBQUM7QUFNbEMsU0FBUyxvQkFBb0IsQ0FBRSxPQUFlO0lBRTdDLE1BQU0sV0FBVyxHQUFHLENBQUMsQ0FBQyxXQUFXLENBQUUsT0FBTyxFQUFFLENBQUMsQ0FBRSxrQkFBa0IsQ0FBRSxFQUFFLE9BQU8sQ0FBRSxDQUFDO0lBQy9FLFdBQVcsQ0FBQyxRQUFRLENBQUUsZ0JBQWdCLENBQUUsQ0FBQztJQUN6QyxPQUFPLFdBQVcsQ0FBQztBQUNwQixDQUFDO0FBRUQsU0FBUyxrQkFBa0IsQ0FBRSxXQUFvQjtJQUVoRCxNQUFNLGdCQUFnQixHQUFHLENBQUMsQ0FBRSxrQkFBa0IsQ0FBRyxDQUFDO0lBQ2xELEtBQU0sSUFBSSxDQUFDLEdBQUcsQ0FBQyxFQUFFLENBQUMsR0FBRyxnQkFBZ0IsQ0FBQyxhQUFhLEVBQUUsRUFBRSxFQUFFLENBQUMsRUFDMUQ7UUFDQyxNQUFNLGdCQUFnQixHQUFHLGdCQUFnQixDQUFDLFFBQVEs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