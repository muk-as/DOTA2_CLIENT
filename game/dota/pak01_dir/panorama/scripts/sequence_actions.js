"use strict";
/// <reference path="dota.d.ts" />
/**
 * Call RunSingleAction to start a single action and continue ticking it until it's done
 */
function RunSingleAction(action) {
    action.start();
    UpdateSingleActionUntilFinished(action);
}
/**
 * asynchronously tick a single action until it's finished, then call finish on it.
 */
function UpdateSingleActionUntilFinished(action) {
    function callback() {
        if (!action.update()) {
            action.finish();
        }
        else {
            $.Schedule(0.0, callback);
        }
    }
    ;
    callback();
}
/** Empty sequence action implementation useful for creating new actions that only implement a few of the functions */
class BaseAction {
    start() { }
    update() { return false; }
    finish() { }
}
/**
 * Action to run a group of other actions in sequence
 */
class RunSequentialActions {
    actions;
    currentActionIndex = 0;
    currentActionStarted = false;
    constructor(actions = []) {
        this.actions = actions;
    }
    start() {
        this.currentActionIndex = 0;
        this.currentActionStarted = false;
    }
    update() {
        while (this.currentActionIndex < this.actions.length) {
            if (!this.currentActionStarted) {
                this.actions[this.currentActionIndex].start();
                this.currentActionStarted = true;
            }
            if (!this.actions[this.currentActionIndex].update()) {
                this.actions[this.currentActionIndex].finish();
                this.currentActionIndex++;
                this.currentActionStarted = false;
            }
            else {
                return true;
            }
        }
        return false;
    }
    finish() {
        while (this.currentActionIndex < this.actions.length) {
            if (!this.currentActionStarted) {
                this.actions[this.currentActionIndex].start();
                this.currentActionStarted = true;
                this.actions[this.currentActionIndex].update();
            }
            this.actions[this.currentActionIndex].finish();
            this.currentActionIndex++;
            this.currentActionStarted = false;
        }
    }
}
/**
 * Action to run multiple actions all at once. The action is complete once all sub actions are done.
 */
class RunParallelActions {
    actions;
    actionsFinished = [];
    constructor(actions = []) {
        this.actions = actions;
    }
    start() {
        this.actionsFinished = new Array(this.actions.length).fill(false);
        this.actions.forEach(a => a.start());
    }
    update() {
        let anyTicking = false;
        this.actions.forEach((action, index) => {
            if (!this.actionsFinished[index]) {
                if (!action.update()) {
                    action.finish();
                    this.actionsFinished[index] = true;
                }
                else {
                    anyTicking = true;
                }
            }
        });
        return anyTicking;
    }
    finish() {
        this.actions.forEach((action, index) => {
            if (!this.actionsFinished[index]) {
                action.finish();
                this.actionsFinished[index] = true;
            }
        });
    }
}
/**
 * Action to run actions looping infinitely until finish is called.
 */
class RunLoopingActions {
    actions;
    currentActionIndex = 0;
    currentActionStarted = false;
    isStopped = false;
    constructor(actions = []) {
        this.actions = actions;
    }
    start() {
        this.currentActionIndex = 0;
        this.currentActionStarted = false;
    }
    update() {
        while (this.currentActionIndex < this.actions.length) {
            if (!this.currentActionStarted) {
                this.actions[this.currentActionIndex].start();
                this.currentActionStarted = true;
            }
            if (!this.actions[this.currentActionIndex].update()) {
                this.actions[this.currentActionIndex].finish();
                this.currentActionIndex++;
                this.currentActionIndex = this.currentActionIndex % this.actions.length;
                this.currentActionStarted = false;
            }
            else {
                return true;
            }
        }
        return false;
    }
    finish() {
        while (this.currentActionIndex < this.actions.length) {
            if (!this.currentActionStarted) {
                this.actions[this.currentActionIndex].start();
                this.currentActionStarted = true;
                this.actions[this.currentActionIndex].update();
            }
            this.actions[this.currentActionIndex].finish();
            this.currentActionIndex++;
            this.currentActionStarted = false;
        }
    }
}
/**
 * Action to wait for some amount of seconds before resuming
 */
class WaitAction {
    seconds;
    endTimestamp = 0;
    constructor(seconds) {
        this.seconds = seconds;
    }
    start() { this.endTimestamp = Game.Time() + this.seconds; }
    ;
    update() { return Game.Time() < this.endTimestamp; }
    finish() { }
}
/**
 * Action to run multiple actions in parallel, but with a slight stagger start between each of them.
 */
class RunStaggeredActions {
    staggerSeconds;
    actions;
    par;
    constructor(staggerSeconds, actions = []) {
        this.staggerSeconds = staggerSeconds;
        this.actions = actions;
    }
    start() {
        const parallelActions = this.actions.map((action, index) => {
            if (index === 0) {
                return action;
            }
            return new RunSequentialActions([new WaitAction(index * this.staggerSeconds), action]);
        });
        this.par = new RunParallelActions(parallelActions);
        this.par.start();
    }
    update() { return this.par.update(); }
    finish() { return this.par.finish(); }
}
/**
 * Runs a set of actions but stops as soon as any of them are finished.
 * `continueOtherActions` is a bool that determines whether to continue ticking the remaining actions, or whether to just finish them immediately.
 */
class RunUntilSingleActionFinishedAction {
    continueOtherActions;
    actions;
    actionsFinished = [];
    constructor(continueOtherActions = false, actions = []) {
        this.continueOtherActions = continueOtherActions;
        this.actions = actions;
    }
    start() {
        this.actionsFinished = new Array(this.actions.length).fill(false);
        this.actions.forEach(a => a.start());
    }
    update() {
        if (this.actions.length == 0)
            return false;
        let anyFinished = false;
        this.actions.forEach((action, index) => {
            if (!action.update()) {
                action.finish();
                this.actionsFinished[index] = true;
                anyFinished = true;
            }
        });
        return !anyFinished;
    }
    finish() {
        this.actions.forEach((action, index) => {
            if (!this.actionsFinished[index]) {
                if (this.continueOtherActions)
                    UpdateSingleActionUntilFinished(action);
                else
                    action.finish();
            }
        });
    }
}
class WaitForConditionAction extends BaseAction {
    f;
    argsArray;
    constructor(f, ...argsArray) {
        super();
        this.f = f;
        this.argsArray = argsArray;
    }
    update() {
        return !this.f.apply(null, this.argsArray);
    }
}
/** Action to wait a single frame */
class WaitOneFrameAction extends BaseAction {
    updated = false;
    update() {
        if (this.updated)
            return false;
        this.updated = true;
        return true;
    }
}
/**
 * Run an action until it's complete, or until it hits a timeout.
 * `continueAfterTimeout` is a bool determining whether to continue ticking the action after it has timed out
 */
class ActionWithTimeout {
    action;
    timeoutDuration;
    continueAfterTimeout;
    allAction;
    constructor(action, timeoutDuration, continueAfterTimeout) {
        this.action = action;
        this.timeoutDuration = timeoutDuration;
        this.continueAfterTimeout = !!continueAfterTimeout;
    }
    start() {
        this.allAction = new RunUntilSingleActionFinishedAction(this.continueAfterTimeout, [this.action, new WaitAction(this.timeoutDuration)]);
        this.allAction.start();
    }
    update() {
        return this.allAction.update();
    }
    finish() {
        this.allAction.finish();
    }
}
/**
 * Action that simply runs a passed in function.
 * You may include extra arguments and they will be passed to the called function.
 */
class RunFunctionAction extends BaseAction {
    f;
    argsArray;
    constructor(f, ...argsArray) {
        super();
        this.f = f;
        this.argsArray = argsArray;
    }
    update() {
        this.f.apply(null, this.argsArray);
        return false;
    }
}
/**
 * Action that calls $.DispatchEvent.
 * You may include extra arguments and they will be passed to event.
 */
class DispatchEventAction extends RunFunctionAction {
    eventName;
    constructor(eventName, ...argsArray) {
        super(() => $.DispatchEvent(eventName, ...argsArray));
        this.eventName = eventName;
    }
}
/** Action that waits for a specific event type to be fired on the given panel. */
class WaitForEventAction extends BaseAction {
    panel;
    eventName;
    receievedEvent = false;
    constructor(panel, eventName) {
        super();
        this.panel = panel;
        this.eventName = eventName;
    }
    start() {
        $.RegisterEventHandler(this.eventName, this.panel, () => this.receievedEvent = true);
    }
    update() {
        return !this.receievedEvent;
    }
}
/** Action to print a debug message */
class PrintAction extends RunFunctionAction {
    msg;
    constructor(msg) {
        super(() => $.Msg(this.msg));
        this.msg = msg;
    }
}
/** Action to add a class to a panel */
class AddClassAction extends RunFunctionAction {
    constructor(panel, panelClass) {
        super(() => {
            if (panel != null)
                panel.AddClass(panelClass);
        });
    }
}
/** Action to remove a class from a panel */
class RemoveClassAction extends RunFunctionAction {
    constructor(panel, panelClass) {
        super(() => {
            if (panel != null)
                panel.RemoveClass(panelClass);
        });
    }
}
/** Switch a class on a panel */
class SwitchClassAction extends RunFunctionAction {
    constructor(panel, panelSlot, panelClass) {
        super(() => {
            if (panel != null)
                panel.SwitchClass(panelSlot, panelClass);
        });
    }
}
/** Action to trigger a class on a panel */
class TriggerClassAction extends RunFunctionAction {
    constructor(panel, panelClass) {
        super(() => {
            if (panel != null)
                panel.TriggerClass(panelClass);
        });
    }
}
/** Action to wait for a class to appear on a panel */
class WaitForClassAction extends WaitForConditionAction {
    constructor(panel, panelClass) {
        super(() => {
            return !!(panel && panel.IsValid() && panel.BHasClass(panelClass));
        });
    }
}
/** Action to set an integer dialog variable */
class SetDialogVariableIntAction extends RunFunctionAction {
    constructor(panel, dialogVariable, value) {
        super(() => {
            if (panel != null)
                panel.SetDialogVariableInt(dialogVariable, value);
        });
    }
}
/** Action to animate an integer dialog variable over some duration of seconds */
class AnimateDialogVariableIntAction {
    panel;
    dialogVariable;
    startValue;
    endValue;
    seconds;
    startTimestamp = 0;
    endTimestamp = 0;
    constructor(panel, dialogVariable, startValue, endValue, seconds) {
        this.panel = panel;
        this.dialogVariable = dialogVariable;
        this.startValue = startValue;
        this.endValue = endValue;
        this.seconds = seconds;
    }
    start() {
        this.startTimestamp = Game.Time();
        this.endTimestamp = this.startTimestamp + this.seconds;
    }
    update() {
        const now = Game.Time();
        if (now >= this.endTimestamp)
            return false;
        const ratio = (now - this.startTimestamp) / (this.endTimestamp - this.startTimestamp);
        if (this.panel && this.panel.IsValid())
            this.panel.SetDialogVariableInt(this.dialogVariable, Math.floor(this.startValue + (this.endValue - this.startValue) * ratio));
        return true;
    }
    finish() {
        if (this.panel && this.panel.IsValid())
            this.panel.SetDialogVariableInt(this.dialogVariable, this.endValue);
    }
}
/** Action to set a string dialog variable */
class SetDialogVariableStringAction extends RunFunctionAction {
    constructor(panel, dialogVariable, value) {
        super(() => {
            if (panel != null && panel.IsValid())
                panel.SetDialogVariable(dialogVariable, value);
        });
    }
}
/** Action to set a progress bar's value */
class SetProgressBarValueAction extends RunFunctionAction {
    constructor(progressBar, value) {
        super(() => progressBar.value = value);
    }
}
/** Action to animate a progress bar */
class AnimateProgressBarAction {
    progressBar;
    startValue;
    endValue;
    seconds;
    startTimestamp = 0;
    endTimestamp = 0;
    constructor(progressBar, startValue, endValue, seconds) {
        this.progressBar = progressBar;
        this.startValue = startValue;
        this.endValue = endValue;
        this.seconds = seconds;
    }
    start() {
        this.startTimestamp = Game.Time();
        this.endTimestamp = this.startTimestamp + this.seconds;
    }
    update() {
        const now = Game.Time();
        if (now >= this.endTimestamp)
            return false;
        const ratio = (now - this.startTimestamp) / (this.endTimestamp - this.startTimestamp);
        this.progressBar.value = this.startValue + (this.endValue - this.startValue) * ratio;
        return true;
    }
    finish() {
        this.progressBar.value = this.endValue;
    }
}
/** Action to set a progress bar with middle's upper and lower values */
class SetProgressBarWithMiddleValueAction extends RunFunctionAction {
    constructor(progressBar, upperValue, lowerValue) {
        super(() => {
            progressBar.uppervalue = upperValue;
            progressBar.lowervalue = lowerValue;
        });
    }
}
/** Action to animate a progress bar with middle */
class AnimateProgressBarWithMiddleAction {
    progressBar;
    startValue;
    endValue;
    seconds;
    startTimestamp = 0;
    endTimestamp = 0;
    constructor(progressBar, startValue, endValue, seconds) {
        this.progressBar = progressBar;
        this.startValue = startValue;
        this.endValue = endValue;
        this.seconds = seconds;
    }
    start() {
        this.startTimestamp = Game.Time();
        this.endTimestamp = this.startTimestamp + this.seconds;
    }
    update() {
        const now = Game.Time();
        if (now >= this.endTimestamp)
            return false;
        const ratio = (now - this.startTimestamp) / (this.endTimestamp - this.startTimestamp);
        this.progressBar.uppervalue = this.startValue + (this.endValue - this.startValue) * ratio;
        return true;
    }
    finish() {
        this.progressBar.uppervalue = this.endValue;
    }
}
/** Convenience  */
function PlaySoundEffect(soundName) {
    $.DispatchEvent('PlaySoundEffect', soundName);
}
/** Action to play a sound effect */
class PlaySoundEffectAction extends RunFunctionAction {
    constructor(soundName) {
        super(() => PlaySoundEffect(soundName));
    }
}
class PlaySoundAction extends RunFunctionAction {
    constructor(soundName) {
        super(() => PlayUISoundScript(soundName));
    }
}
class PlaySoundForDurationAction extends RunSequentialActions {
    soundName;
    duration;
    soundEventGuid = 0;
    constructor(soundName, duration) {
        super([
            new RunFunctionAction(() => this.soundEventGuid = PlayUISoundScript(soundName)),
            new WaitAction(duration),
            new RunFunctionAction(() => StopUISoundScript(this.soundEventGuid))
        ]);
        this.soundName = soundName;
        this.duration = duration;
    }
}
class PlaySoundUntilFinishedAction extends RunSequentialActions {
    soundName;
    soundEventGuid = 0;
    constructor(soundName) {
        super([
            new RunFunctionAction(() => this.soundEventGuid = PlayUISoundScript(soundName)),
            new WaitForConditionAction(() => !IsUISoundScriptPlaying(this.soundEventGuid))
        ]);
        this.soundName = soundName;
    }
}
/** Base class that you can override an `applyProgress` to do a simple Lerp over X seconds. */
class LerpAction {
    seconds;
    startTimestamp = 0;
    endTimestamp = 0;
    constructor(seconds) {
        this.seconds = seconds;
    }
    start() {
        this.startTimestamp = Game.Time();
        this.endTimestamp = this.startTimestamp + this.seconds;
    }
    update() {
        const now = Game.Time();
        if (now >= this.endTimestamp)
            return false;
        const ratio = (now - this.startTimestamp) / (this.endTimestamp - this.startTimestamp);
        this.applyProgress(ratio);
        return true;
    }
    finish() {
        this.applyProgress(1.0);
    }
    applyProgress(progress) {
        // Override this method to apply your progress
    }
}
/**
 * Runs a contained action, except that it's immediately aborted if the passed-in guard function ever returns false -- not even finishing the contained action.
 * Alternatively you can keep a reference to the GuardedAction and just set guardFailed to true to trigger this abort.
 */
class GuardedAction {
    action;
    guard;
    guardFailed = false;
    constructor(action, guard) {
        this.action = action;
        this.guard = guard;
    }
    TriggerFailure() {
        this.guardFailed = true;
    }
    checkGuardFailure() {
        if (this.guardFailed) {
            return true;
        }
        if (this.guard && !this.guard()) {
            this.guardFailed = true;
        }
        return this.guardFailed;
    }
    start() {
        if (!this.checkGuardFailure())
            this.action.start();
    }
    update() {
        return !this.checkGuardFailure() || this.action.update();
    }
    finish() {
        if (!this.checkGuardFailure())
            this.action.finish();
    }
}
class PlayMovieAction extends RunSequentialActions {
    constructor(moviePanel) {
        let isMovieFinished = false;
        $.RegisterEventHandler('MoviePlayerPlaybackEnded', moviePanel, () => isMovieFinished = true);
        super([
            new RunFunctionAction(() => moviePanel.Play()),
            new WaitForConditionAction(() => isMovieFinished)
        ]);
    }
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoic2VxdWVuY2VfYWN0aW9ucy5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbInNlcXVlbmNlX2FjdGlvbnMudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IjtBQUFBLGtDQUFrQztBQXdCbEM7O0dBRUc7QUFDSCxTQUFTLGVBQWUsQ0FBRSxNQUF1QjtJQUVoRCxNQUFNLENBQUMsS0FBSyxFQUFFLENBQUM7SUFDZiwrQkFBK0IsQ0FBRSxNQUFNLENBQUUsQ0FBQztBQUMzQyxDQUFDO0FBRUQ7O0dBRUc7QUFDSCxTQUFTLCtCQUErQixDQUFFLE1BQXVCO0lBRWhFLFNBQVMsUUFBUTtRQUVoQixJQUFLLENBQUMsTUFBTSxDQUFDLE1BQU0sRUFBRSxFQUNyQjtZQUNDLE1BQU0sQ0FBQyxNQUFNLEVBQUUsQ0FBQztTQUNoQjthQUVEO1lBQ0MsQ0FBQyxDQUFDLFFBQVEsQ0FBRSxHQUFHLEVBQUUsUUFBUSxDQUFFLENBQUM7U0FDNUI7SUFDRixDQUFDO0lBQUEsQ0FBQztJQUNGLFFBQVEsRUFBRSxDQUFDO0FBQ1osQ0FBQztBQUVELHNIQUFzSDtBQUN0SCxNQUFNLFVBQVU7SUFFZixLQUFLLEtBQVcsQ0FBQztJQUNqQixNQUFNLEtBQWMsT0FBTyxLQUFLLENBQUMsQ0FBQyxDQUFDO0lBQ25DLE1BQU0sS0FBVyxDQUFDO0NBQ2xCO0FBRUQ7O0dBRUc7QUFDSCxNQUFNLG9CQUFvQjtJQUV6QixPQUFPLENBQW9CO0lBQzNCLGtCQUFrQixHQUFHLENBQUMsQ0FBQztJQUN2QixvQkFBb0IsR0FBRyxLQUFLLENBQUM7SUFFN0IsWUFBYSxVQUE2QixFQUFFO1FBRTNDLElBQUksQ0FBQyxPQUFPLEdBQUcsT0FBTyxDQUFDO0lBQ3hCLENBQUM7SUFFRCxLQUFLO1FBRUosSUFBSSxDQUFDLGtCQUFrQixHQUFHLENBQUMsQ0FBQztRQUM1QixJQUFJLENBQUMsb0JBQW9CLEdBQUcsS0FBSyxDQUFDO0lBQ25DLENBQUM7SUFFRCxNQUFNO1FBRUwsT0FBUSxJQUFJLENBQUMsa0JB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