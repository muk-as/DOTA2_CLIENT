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
    constructor(actions = []) {
        this.currentActionIndex = 0;
        this.currentActionStarted = false;
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
    constructor(actions = []) {
        this.actionsFinished = [];
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
 * Action to wait for some amount of seconds before resuming
 */
class WaitAction {
    constructor(seconds) {
        this.seconds = seconds;
        this.endTimestamp = 0;
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
    constructor(continueOtherActions = false, actions = []) {
        this.actionsFinished = [];
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
    constructor() {
        super(...arguments);
        this.updated = false;
    }
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
    constructor(eventName, ...argsArray) {
        super(() => $.DispatchEvent(eventName, ...argsArray));
        this.eventName = eventName;
    }
}
/** Action that waits for a specific event type to be fired on the given panel. */
class WaitForEventAction extends BaseAction {
    constructor(panel, eventName) {
        super();
        this.receievedEvent = false;
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
    constructor(panel, dialogVariable, startValue, endValue, seconds) {
        this.panel = panel;
        this.dialogVariable = dialogVariable;
        this.startValue = startValue;
        this.endValue = endValue;
        this.seconds = seconds;
        this.startTimestamp = 0;
        this.endTimestamp = 0;
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
    constructor(progressBar, startValue, endValue, seconds) {
        this.progressBar = progressBar;
        this.startValue = startValue;
        this.endValue = endValue;
        this.seconds = seconds;
        this.startTimestamp = 0;
        this.endTimestamp = 0;
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
    constructor(progressBar, startValue, endValue, seconds) {
        this.progressBar = progressBar;
        this.startValue = startValue;
        this.endValue = endValue;
        this.seconds = seconds;
        this.startTimestamp = 0;
        this.endTimestamp = 0;
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
    constructor(soundName, duration) {
        super([
            new RunFunctionAction(() => this.soundEventGuid = PlayUISoundScript(soundName)),
            new WaitAction(duration),
            new RunFunctionAction(() => StopUISoundScript(this.soundEventGuid))
        ]);
        this.soundName = soundName;
        this.duration = duration;
        this.soundEventGuid = 0;
    }
}
class PlaySoundUntilFinishedAction extends RunSequentialActions {
    constructor(soundName) {
        super([
            new RunFunctionAction(() => this.soundEventGuid = PlayUISoundScript(soundName)),
            new WaitForConditionAction(() => !IsUISoundScriptPlaying(this.soundEventGuid))
        ]);
        this.soundName = soundName;
        this.soundEventGuid = 0;
    }
}
/** Base class that you can override an `applyProgress` to do a simple Lerp over X seconds. */
class LerpAction {
    constructor(seconds) {
        this.seconds = seconds;
        this.startTimestamp = 0;
        this.endTimestamp = 0;
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
    constructor(action, guard) {
        this.action = action;
        this.guard = guard;
        this.guardFailed = false;
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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoic2VxdWVuY2VfYWN0aW9ucy5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbInNlcXVlbmNlX2FjdGlvbnMudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IkFBQUEsa0NBQWtDO0FBd0JsQzs7R0FFRztBQUNILFNBQVMsZUFBZSxDQUFFLE1BQXVCO0lBRWhELE1BQU0sQ0FBQyxLQUFLLEVBQUUsQ0FBQztJQUNmLCtCQUErQixDQUFFLE1BQU0sQ0FBRSxDQUFDO0FBQzNDLENBQUM7QUFFRDs7R0FFRztBQUNILFNBQVMsK0JBQStCLENBQUUsTUFBdUI7SUFFaEUsU0FBUyxRQUFRO1FBRWhCLElBQUssQ0FBQyxNQUFNLENBQUMsTUFBTSxFQUFFLEVBQ3JCO1lBQ0MsTUFBTSxDQUFDLE1BQU0sRUFBRSxDQUFDO1NBQ2hCO2FBRUQ7WUFDQyxDQUFDLENBQUMsUUFBUSxDQUFFLEdBQUcsRUFBRSxRQUFRLENBQUUsQ0FBQztTQUM1QjtJQUNGLENBQUM7SUFBQSxDQUFDO0lBQ0YsUUFBUSxFQUFFLENBQUM7QUFDWixDQUFDO0FBRUQsc0hBQXNIO0FBQ3RILE1BQU0sVUFBVTtJQUVmLEtBQUssS0FBVyxDQUFDO0lBQ2pCLE1BQU0sS0FBYyxPQUFPLEtBQUssQ0FBQyxDQUFDLENBQUM7SUFDbkMsTUFBTSxLQUFXLENBQUM7Q0FDbEI7QUFFRDs7R0FFRztBQUNILE1BQU0sb0JBQW9CO0lBTXpCLFlBQWEsVUFBNkIsRUFBRTtRQUg1Qyx1QkFBa0IsR0FBRyxDQUFDLENBQUM7UUFDdkIseUJBQW9CLEdBQUcsS0FBSyxDQUFDO1FBSTVCLElBQUksQ0FBQyxPQUFPLEdBQUcsT0FBTyxDQUFDO0lBQ3hCLENBQUM7SUFFRCxLQUFLO1FBRUosSUFBSSxDQUFDLGtCQUFrQixHQUFHLENBQUMsQ0FBQztRQUM1QixJQUFJLENBQUMsb0JBQW9CLEdBQUcsS0FBSyxDQUFDO0lBQ25DLENBQUM7SUFFRCxNQUFNO1FBRUwsT0FBUSxJQUFJLENBQUMsa0JBQWtCLEdBQUcsSUFBSSxDQUFD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