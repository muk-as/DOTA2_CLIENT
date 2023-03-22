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
    constructor(actionToMaybeSkip) {
        super();
        this.innerActionStarted = false;
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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoicG9zdF9nYW1lX3Byb2dyZXNzX3V0aWxzLmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsicG9zdF9nYW1lX3Byb2dyZXNzX3V0aWxzLnRzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiJBQUFBLHFDQUFxQztBQUNyQyxtQ0FBbUM7QUFDbkMsK0NBQStDO0FBRS9DLHFDQUFxQztBQUNyQyxNQUFNLGlDQUFpQyxHQUFHLENBQUMsQ0FBQztBQUM1QyxNQUFNLDRCQUE0QixHQUFHLENBQUMsQ0FBQztBQUN2QyxNQUFNLHNDQUFzQyxHQUFHLENBQUMsQ0FBQztBQUNqRCxNQUFNLCtCQUErQixHQUFHLENBQUMsQ0FBQztBQUUxQywwQ0FBMEM7QUFDMUMsTUFBTSw0QkFBNEIsR0FBRyxDQUFDLENBQUM7QUFDdkMsTUFBTSxrQ0FBa0MsR0FBRyxDQUFDLENBQUM7QUFDN0MsTUFBTSxnQ0FBZ0MsR0FBRyxDQUFDLENBQUM7QUFFM0MsK0NBQStDO0FBQy9DLE1BQU0sc0JBQXNCLEdBQUcsRUFBRSxDQUFDO0FBRWxDLCtFQUErRTtBQUMvRSw4QkFBOEI7QUFDOUIsK0VBQStFO0FBRS9FLFNBQVMsb0JBQW9CLENBQUUsT0FBZTtJQUU3QyxNQUFNLFdBQVcsR0FBRyxDQUFDLENBQUMsV0FBVyxDQUFFLE9BQU8sRUFBRSxDQUFDLENBQUUsa0JBQWtCLENBQUUsRUFBRSxPQUFPLENBQUUsQ0FBQztJQUMvRSxXQUFXLENBQUMsUUFBUSxDQUFFLGdCQUFnQixDQUFFLENBQUM7SUFDekMsT0FBTyxXQUFXLENBQUM7QUFDcEIsQ0FBQztBQUVELFNBQVMsa0JBQWtCLENBQUUsV0FBb0I7SUFFaEQsTUFBTSxnQkFBZ0IsR0FBRyxDQUFDLENBQUUsa0JBQWtCLENBQUcsQ0FBQztJQUNsRCxLQUFNLElBQUksQ0FBQyxHQUFHLENBQUMsRUFBRSxDQUFDLEdBQUcsZ0JBQWdCLENBQUMsYUFBYSxFQUFFLEVBQUUsRUFBRSxDQUFDLEVBQzFEO1FBQ0MsTUFBTSxnQkFBZ0IsR0FBRyxnQkFB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