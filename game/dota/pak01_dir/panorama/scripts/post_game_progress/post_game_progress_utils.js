"use strict";
/// <reference path="../dota.d.ts" />
/// <reference path="../util.ts" />
/// <reference path="../sequence_actions.ts" />
// Keep in sync with EHeroBadgeXPType
const HERO_BADGE_XP_TYPE_MATCH_FINISHED = 0;
const HERO_BADGE_XP_TYPE_MATCH_WON = 1;
const HERO_BADGE_XP_TYPE_CHALLENGE_COMPLETED = 2;
const HERO_BADGE_XP_TYPE_RELIC_LEVELS = 3;
// Keep in sync with EHeroBadgeLevelReward
const HERO_BADGE_LEVEL_REWARD_TIER = 0;
const HERO_BADGE_LEVEL_REWARD_CHAT_WHEEL = 1;
const HERO_BADGE_LEVEL_REWARD_CURRENCY = 2;
// Keep in sync with the version in dota_plus.h
const k_unMaxHeroRewardLevel = 30;
// ----------------------------------------------------------------------------
//   Screen Handling functions
// ----------------------------------------------------------------------------
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
    // This is sorta hacky, but we need to reach into the parent's layout file to find our button container.
    return $.GetContextPanel().GetParent().FindPanelInLayoutFile('ProgressScreenButtons');
}
/* Called from C++ code */
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
// ----------------------------------------------------------------------------
//   Skip Ahead Functions
// ----------------------------------------------------------------------------
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
// ----------------------------------------------------------------------------
//   StopSkippingAheadAction
// 
//   Define a point at which we stop skipping (usually the end of a screen)
// ----------------------------------------------------------------------------
// Use a StopSkippingAheadAction to define a stopping point
class StopSkippingAheadAction extends RunFunctionAction {
    constructor() {
        super(() => StopSkippingAhead());
    }
}
// ----------------------------------------------------------------------------
//   SkippableAction
// 
//   Wrap a SkippableAction around any other action to have it skip ahead
//   whenever we're supposed to skip ahead. SkippableAction guarantees that the
//   inner action will at least have start/update/finish called on it.
// ----------------------------------------------------------------------------
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
// Action to rum multiple actions in parallel, but with a slight stagger start between each of them
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
// ----------------------------------------------------------------------------
//   OptionalSkippableAction
// 
//   Wrap a OptionalSkippableAction around any other action to have it skip it
//   if requested. OptionalSkippableAction will skip the inner action entirely
//   if skipping is currently enabled. However, if it starts the inner action
//   at all, then it will guarantee at least a call to start/update/finish.
// ----------------------------------------------------------------------------
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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoicG9zdF9nYW1lX3Byb2dyZXNzX3V0aWxzLmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsicG9zdF9nYW1lX3Byb2dyZXNzX3V0aWxzLnRzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiI7QUFBQSxxQ0FBcUM7QUFDckMsbUNBQW1DO0FBQ25DLCtDQUErQztBQUUvQyxxQ0FBcUM7QUFDckMsTUFBTSxpQ0FBaUMsR0FBRyxDQUFDLENBQUM7QUFDNUMsTUFBTSw0QkFBNEIsR0FBRyxDQUFDLENBQUM7QUFDdkMsTUFBTSxzQ0FBc0MsR0FBRyxDQUFDLENBQUM7QUFDakQsTUFBTSwrQkFBK0IsR0FBRyxDQUFDLENBQUM7QUFFMUMsMENBQTBDO0FBQzFDLE1BQU0sNEJBQTRCLEdBQUcsQ0FBQyxDQUFDO0FBQ3ZDLE1BQU0sa0NBQWtDLEdBQUcsQ0FBQyxDQUFDO0FBQzdDLE1BQU0sZ0NBQWdDLEdBQUcsQ0FBQyxDQUFDO0FBRTNDLCtDQUErQztBQUMvQyxNQUFNLHNCQUFzQixHQUFHLEVBQUUsQ0FBQztBQUVsQywrRUFBK0U7QUFDL0UsOEJBQThCO0FBQzlCLCtFQUErRTtBQUUvRSxTQUFTLG9CQUFvQixDQUFFLE9BQWU7SUFFN0MsTUFBTSxXQUFXLEdBQUcsQ0FBQyxDQUFDLFdBQVcsQ0FBRSxPQUFPLEVBQUUsQ0FBQyxDQUFFLGtCQUFrQixDQUFFLEVBQUUsT0FBTyxDQUFFLENBQUM7SUFDL0UsV0FBVyxDQUFDLFFBQVEsQ0FBRSxnQkFBZ0IsQ0FBRSxDQUFDO0lBQ3pDLE9BQU8sV0FBVyxDQUFDO0FBQ3BCLENBQUM7QUFFRCxTQUFTLGtCQUFrQixDQUFFLFdBQW9CO0lBRWhELE1BQU0sZ0JBQWdCLEdBQUcsQ0FBQyxDQUFFLGtCQUFrQixDQUFHLENBQUM7SUFDbEQsS0FBTSxJQUFJLENBQUMsR0FBRyxDQUFDLEVBQUUsQ0FBQyxHQUFHLGdCQUFnQixDQUFDLGFBQWEsRUFBRSxFQUFFLEVBQUUsQ0FBQyxFQUMxRDtRQUNDLE1BQU0sZ0JBQWdCLEdBQUcsZ0JB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