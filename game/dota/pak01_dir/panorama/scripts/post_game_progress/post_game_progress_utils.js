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
    return $.GetContextPanel().GetParent().FindPanelInThisOrParentLayoutFile('ProgressScreenButtons');
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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoicG9zdF9nYW1lX3Byb2dyZXNzX3V0aWxzLmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsiLi4vLi4vLi4vLi4vLi4vY29udGVudC9kb3RhL3Bhbm9yYW1hL3NjcmlwdHMvcG9zdF9nYW1lX3Byb2dyZXNzL3Bvc3RfZ2FtZV9wcm9ncmVzc191dGlscy50cyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiO0FBQUEscUNBQXFDO0FBQ3JDLG1DQUFtQztBQUNuQywrQ0FBK0M7QUFFL0MscUNBQXFDO0FBQ3JDLE1BQU0saUNBQWlDLEdBQUcsQ0FBQyxDQUFDO0FBQzVDLE1BQU0sNEJBQTRCLEdBQUcsQ0FBQyxDQUFDO0FBQ3ZDLE1BQU0sc0NBQXNDLEdBQUcsQ0FBQyxDQUFDO0FBQ2pELE1BQU0sK0JBQStCLEdBQUcsQ0FBQyxDQUFDO0FBRTFDLDBDQUEwQztBQUMxQyxNQUFNLDRCQUE0QixHQUFHLENBQUMsQ0FBQztBQUN2QyxNQUFNLGtDQUFrQyxHQUFHLENBQUMsQ0FBQztBQUM3QyxNQUFNLGdDQUFnQyxHQUFHLENBQUMsQ0FBQztBQUUzQywrQ0FBK0M7QUFDL0MsTUFBTSxzQkFBc0IsR0FBRyxFQUFFLENBQUM7QUFFbEMsK0VBQStFO0FBQy9FLDhCQUE4QjtBQUM5QiwrRUFBK0U7QUFFL0UsU0FBUyxvQkFBb0IsQ0FBRSxPQUFlO0lBRTdDLE1BQU0sV0FBVyxHQUFHLENBQUMsQ0FBQyxXQUFXLENBQUUsT0FBTyxFQUFFLENBQUMsQ0FBRSxrQkFBa0IsQ0FBRSxFQUFFLE9BQU8sQ0FBRSxDQUFDO0lBQy9FLFdBQVcsQ0FBQyxRQUFRLENBQUUsZ0JBQWdCLENBQUUsQ0FBQztJQUN6QyxPQUFPLFdBQVcsQ0FBQztBQUNwQixDQUFDO0FBRUQsU0FBUyxrQkFBa0IsQ0FBRSxXQUFvQjtJQUVoRCxNQUFNLGdCQUFnQixHQUFHLENBQUMsQ0FBRSxrQkFBa0IsQ0FBRyxDQUFDO0lBQ2xELEtBQU0sSUFBSSxDQUFDLEdBQUcsQ0FBQyxFQUFFLENBQUMsR0FBRyxnQkFB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