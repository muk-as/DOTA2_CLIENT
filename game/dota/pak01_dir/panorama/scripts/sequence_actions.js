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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoic2VxdWVuY2VfYWN0aW9ucy5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbInNlcXVlbmNlX2FjdGlvbnMudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IkFBQUEsa0NBQWtDO0FBd0JsQzs7R0FFRztBQUNILFNBQVMsZUFBZSxDQUFFLE1BQXVCO0lBRWhELE1BQU0sQ0FBQyxLQUFLLEVBQUUsQ0FBQztJQUNmLCtCQUErQixDQUFFLE1BQU0sQ0FBRSxDQUFDO0FBQzNDLENBQUM7QUFFRDs7R0FFRztBQUNILFNBQVMsK0JBQStCLENBQUUsTUFBdUI7SUFFaEUsU0FBUyxRQUFRO1FBRWhCLElBQUssQ0FBQyxNQUFNLENBQUMsTUFBTSxFQUFFLEVBQ3JCO1lBQ0MsTUFBTSxDQUFDLE1BQU0sRUFBRSxDQUFDO1NBQ2hCO2FBRUQ7WUFDQyxDQUFDLENBQUMsUUFBUSxDQUFFLEdBQUcsRUFBRSxRQUFRLENBQUUsQ0FBQztTQUM1QjtJQUNGLENBQUM7SUFBQSxDQUFDO0lBQ0YsUUFBUSxFQUFFLENBQUM7QUFDWixDQUFDO0FBRUQsc0hBQXNIO0FBQ3RILE1BQU0sVUFBVTtJQUVmLEtBQUssS0FBVyxDQUFDO0lBQ2pCLE1BQU0sS0FBYyxPQUFPLEtBQUssQ0FBQyxDQUFDLENBQUM7SUFDbkMsTUFBTSxLQUFXLENBQUM7Q0FDbEI7QUFFRDs7R0FFRztBQUNILE1BQU0sb0JBQW9CO0lBRXpCLE9BQU8sQ0FBb0I7SUFDM0Isa0JBQWtCLEdBQUcsQ0FBQyxDQUFDO0lBQ3ZCLG9CQUFvQixHQUFHLEtBQUssQ0FBQztJQUU3QixZQUFhLFVBQTZCLEVBQUU7UUFFM0MsSUFBSSxDQUFDLE9BQU8sR0FBRyxPQUFPLENBQUM7SUFDeEIsQ0FBQztJQUVELEtBQUs7UUFFSixJQUFJLENBQUMsa0JBQWtCLEdBQUcsQ0FBQyxDQUFDO1FBQzVCLElBQUksQ0FBQyxvQkFBb0IsR0FBRyxLQUFLLENBQUM7SUFDbkMsQ0FBQztJQUVELE1BQU07UUFFTCxPQUFRLElBQUksQ0FBQyxrQkFBa0IsR0FBRyxJQUFJLENBQUMsT0FBTyxDQUFDLE1BQU0sRUFDckQ7WUFDQyxJQUFLLENBQUMsSUFBSSxDQUFDLG9CQUFvQixFQUMvQjtnQkFDQyxJQUFJLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBQyxrQkFBa0IsQ0FBQyxDQUFDLEtBQUssRUFBRSxDQUFDO2dCQUM5QyxJQUFJLENBQUMsb0JBQW9CLEdBQUcsSUFBSSxDQUFDO2FBQ2pDO1lBRUQsSUFBSyxDQUFDLElBQUksQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFDLGtCQUFrQixDQUFDLENBQUMsTUFBTSxFQUFFLEVBQ3BEO2dCQUNDLElBQUksQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFDLGtCQUFrQixDQUFDLENBQUMsTUFBTSxFQUFFLENBQUM7Z0JBRS9DLElBQUksQ0FBQyxrQkFBa0IsRUFBRSxDQUFDO2dCQUMxQixJQUFJLENBQUMsb0JBQW9CLEdBQUcsS0FBSyxDQUFDO2FBQ2xDO2lCQUVEO2dCQUNDLE9BQU8sSUFBSSxDQUFDO2FBQ1o7U0FDRDtRQUVELE9BQU8sS0FBSyxDQUFDO0lBQ2QsQ0FBQztJQUVELE1BQU07UUFFTCxPQUFRLElBQUksQ0FBQyxrQkFBa0IsR0FBRyxJQUFJLENBQUMsT0FBTyxDQUFDLE1BQU0sRUFDckQ7WUFDQyxJQUFLLENBQUMsSUFBSSxDQUFDLG9CQUFvQixFQUMvQjtnQkFDQyxJQUFJLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBQyxrQkFBa0IsQ0FBQyxDQUFDLEtBQUssRUFBRSxDQUFDO2dCQUM5QyxJQUFJLENBQUMsb0JBQW9CLEdBQUcsSUFBSSxDQUFDO2dCQUVqQyxJQUFJLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBQyxrQkFBa0IsQ0FBQyxDQUFDLE1BQU0sRUFBRSxDQUFDO2FBQy9DO1lBRUQsSUFBSSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUMsa0JBQWtCLENBQUMsQ0FBQyxNQUFNLEVBQUUsQ0FBQztZQUUvQyxJQUFJLENBQUMsa0JBQWtCLEVBQUUsQ0FBQztZQUMxQixJQUFJLENBQUMsb0JBQW9CLEdBQUcsS0FBSyxDQUFDO1NBQ2xDO0lBQ0YsQ0FBQztDQUNEO0FBRUQ7O0dBRUc7QUFDSCxNQUFNLGtCQUFrQjtJQUV2QixPQUFPLENBQW9CO0lBQzNCLGVBQWUsR0FBYyxFQUFFLENBQUM7SUFFaEMsWUFBYSxVQUE2QixFQUFFO1FBRTNDLElBQUksQ0FBQyxPQUFPLEdBQUcsT0FBTyxDQUFDO0lBQ3hCLENBQUM7SUFFRCxLQUFLO1FBRUosSUFBSSxDQUFDLGVBQWUsR0FBRyxJQUFJLEtBQUssQ0FBRSxJQUFJLENBQUMsT0FBTyxDQUFDLE1BQU0sQ0FBRSxDQUFDLElBQUksQ0FBRSxLQUFLLENBQUUsQ0FBQztRQUN0RSxJQUFJLENBQUMsT0FBTyxDQUFDLE9BQU8sQ0FBRSxDQUFDLENBQUMsRUFBRSxDQUFDLENBQUMsQ0FBQyxLQUFLLEVBQUUsQ0FBRSxDQUFDO0lBQ3hDLENBQUM7SUFFRCxNQUFNO1FBRUwsSUFBSSxVQUFVLEdBQUcsS0FBSyxDQUFDO1FBQ3ZCLElBQUksQ0FBQyxPQUFPLENBQUMsT0FBTyxDQUFFLENBQUUsTUFBTSxFQUFFLEtBQUssRUFBRyxFQUFFO1lBRXpDLElBQUssQ0FBQyxJQUFJLENBQUMsZUFBZSxDQUFDLEtBQUssQ0FBQyxFQUNqQztnQkFDQyxJQUFLLENBQUMsTUFBTSxDQUFDLE1BQU0sRUFBRSxFQUNyQjtvQkFDQyxNQUFNLENBQUMsTUFBTSxFQUFFLENBQUM7b0JBQ2hCLElBQUksQ0FBQyxlQUFlLENBQUMsS0FBSyxDQUFDLEdBQUcsSUFBSSxDQUFDO2lCQUNuQztxQkFFRDtvQkFDQyxVQUFVLEdBQUcsSUFBSSxDQUFDO2lCQUNsQjthQUNEO1FBQ0YsQ0FBQyxDQUFFLENBQUM7UUFFSixPQUFPLFVBQVUsQ0FBQztJQUNuQixDQUFDO0lBRUQsTUFBTTtRQUVMLElBQUksQ0FBQyxPQUFPLENBQUMsT0FBTyxDQUFFLENBQUUsTUFBTSxFQUFFLEtBQUssRUFBRyxFQUFFO1lBRXpDLElBQUssQ0FBQyxJQUFJLENBQUMsZUFBZSxDQUFDLEtBQUssQ0FBQyxFQUNqQztnQkFDQyxNQUFNLENBQUMsTUFBTSxFQUFFLENBQUM7Z0JBQ2hCLElBQUksQ0FBQyxlQUFlLENBQUMsS0FBSyxDQUFDLEdBQUcsSUFBSSxDQUFDO2FBQ25DO1FBQ0YsQ0FBQyxDQUFFLENBQUM7SUFDTCxDQUFDO0NBQ0Q7QUFFRDs7R0FFRztBQUNILE1BQU0saUJBQWlCO0lBQ3RCLE9BQU8sQ0FBb0I7SUFDM0Isa0JBQWtCLEdBQUcsQ0FBQyxDQUFDO0lBQ3ZCLG9CQUFvQixHQUFHLEtBQUssQ0FBQztJQUM3QixTQUFTLEdBQUcsS0FBSyxDQUFDO0lBRWxCLFlBQVksVUFBNkIsRUFBRTtRQUMxQyxJQUFJLENBQUMsT0FBTyxHQUFHLE9BQU8sQ0FBQztJQUN4QixDQUFDO0lBRUQsS0FBSztRQUNKLElBQUksQ0FBQyxrQkFBa0IsR0FBRyxDQUFDLENBQUM7UUFDNUIsSUFBSSxDQUFDLG9CQUFvQixHQUFHLEtBQUssQ0FBQztJQUNuQyxDQUFDO0lBRUQsTUFBTTtRQUNMLE9BQU8sSUFBSSxDQUFDLGtCQUFrQixHQUFHLElBQUksQ0FBQyxPQUFPLENBQUMsTUFBTSxFQUFFO1lBQ3JELElBQUksQ0FBQyxJQUFJLENBQUMsb0JBQW9CLEVBQUU7Z0JBQy9CLElBQUksQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFDLGtCQUFrQixDQUFDLENBQUMsS0FBSyxFQUFFLENBQUM7Z0JBQzlDLElBQUksQ0FBQyxvQkFBb0IsR0FBRyxJQUFJLENBQUM7YUFDakM7WUFFRCxJQUFJLENBQUMsSUFBSSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUMsa0JBQWtCLENBQUMsQ0FBQyxNQUFNLEVBQUUsRUFBRTtnQkFDcEQsSUFBSSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUMsa0JBQWtCLENBQUMsQ0FBQyxNQUFNLEVBQUUsQ0FBQztnQkFFL0MsSUFBSSxDQUFDLGtCQUFrQixFQUFFLENBQUM7Z0JBQzFCLElBQUksQ0FBQyxrQkFBa0IsR0FBRyxJQUFJLENBQUMsa0JBQWtCLEdBQUcsSUFBSSxDQUFDLE9BQU8sQ0FBQyxNQUFNLENBQUM7Z0JBQ3hFLElBQUksQ0FBQyxvQkFBb0IsR0FBRyxLQUFLLENBQUM7YUFDbEM7aUJBQ0k7Z0JBQ0osT0FBTyxJQUFJLENBQUM7YUFDWjtTQUNEO1FBRUQsT0FBTyxLQUFLLENBQUM7SUFDZCxDQUFDO0lBRUQsTUFBTTtRQUNMLE9BQU8sSUFBSSxDQUFDLGtCQUFrQixHQUFHLElBQUksQ0FBQyxPQUFPLENBQUMsTUFBTSxFQUFFO1lBQ3JELElBQUksQ0FBQyxJQUFJLENBQUMsb0JBQW9CLEVBQUU7Z0JBQy9CLElBQUksQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFDLGtCQUFrQixDQUFDLENBQUMsS0FBSyxFQUFFLENBQUM7Z0JBQzlDLElBQUksQ0FBQyxvQkFBb0IsR0FBRyxJQUFJLENBQUM7Z0JBRWpDLElBQUksQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFDLGtCQUFrQixDQUFDLENBQUMsTUFBTSxFQUFFLENBQUM7YUFDL0M7WUFFRCxJQUFJLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBQyxrQkFBa0IsQ0FBQyxDQUFDLE1BQU0sRUFBRSxDQUFDO1lBRS9DLElBQUksQ0FBQyxrQkFBa0IsRUFBRSxDQUFDO1lBQzFCLElBQUksQ0FBQyxvQkFBb0IsR0FBRyxLQUFLLENBQUM7U0FDbEM7SUFDRixDQUFDO0NBQ0Q7QUFFRDs7R0FFRztBQUNILE1BQU0sVUFBVTtJQUdLO0lBRHBCLFlBQVksR0FBRyxDQUFDLENBQUM7SUFDakIsWUFBb0IsT0FBZTtRQUFmLFlBQU8sR0FBUCxPQUFPLENBQVE7SUFBSyxDQUFDO0lBQ3pDLEtBQUssS0FBVyxJQUFJLENBQUMsWUFBWSxHQUFHLElBQUksQ0FBQyxJQUFJLEVBQUUsR0FBRyxJQUFJLENBQUMsT0FBTyxDQUFDLENBQUMsQ0FBQztJQUFBLENBQUM7SUFDbEUsTUFBTSxLQUFjLE9BQU8sSUFBSSxDQUFDLElBQUksRUFBRSxHQUFHLElBQUksQ0FBQyxZQUFZLENBQUMsQ0FBQyxDQUFDO0lBQzdELE1BQU0sS0FBVyxDQUFDO0NBQ2xCO0FBRUQ7O0dBRUc7QUFDSCxNQUFNLG1CQUFtQjtJQUV4QixjQUFjLENBQVM7SUFDdkIsT0FBTyxDQUFvQjtJQUMzQixHQUFHLENBQXNCO0lBRXpCLFlBQWEsY0FBc0IsRUFBRSxVQUE2QixFQUFFO1FBRW5FLElBQUksQ0FBQyxjQUFjLEdBQUcsY0FBYyxDQUFDO1FBQ3JDLElBQUksQ0FBQyxPQUFPLEdBQUcsT0FBTyxDQUFDO0lBQ3hCLENBQUM7SUFFRCxLQUFLO1FBRUosTUFBTSxlQUFlLEdBQUcsSUFBSSxDQUFDLE9BQU8sQ0FBQyxHQUFHLENBQUUsQ0FBRSxNQUFNLEVBQUUsS0FBSyxFQUFHLEVBQUU7WUFFN0QsSUFBSyxLQUFLLEtBQUssQ0FBQyxFQUNoQjtnQkFDQyxPQUFPLE1BQU0sQ0FBQzthQUNkO1lBQ0QsT0FBTyxJQUFJLG9CQUFvQixDQUFFLENBQUMsSUFBSSxVQUFVLENBQUUsS0FBSyxHQUFHLElBQUksQ0FBQyxjQUFjLENBQUUsRUFBRSxNQUFNLENBQUMsQ0FBRSxDQUFDO1FBQzVGLENBQUMsQ0FBRSxDQUFDO1FBRUosSUFBSSxDQUFDLEdBQUcsR0FBRyxJQUFJLGtCQUFrQixDQUFFLGVBQWUsQ0FBRSxDQUFDO1FBQ3JELElBQUksQ0FBQyxHQUFHLENBQUMsS0FBSyxFQUFFLENBQUM7SUFDbEIsQ0FBQztJQUVELE1BQU0sS0FBYyxPQUFPLElBQUksQ0FBQyxHQUFHLENBQUMsTUFBTSxFQUFFLENBQUMsQ0FBQyxDQUFDO0lBRS9DLE1BQU0sS0FBVyxPQUFPLElBQUksQ0FBQyxHQUFHLENBQUMsTUFBTSxFQUFFLENBQUMsQ0FBQyxDQUFDO0NBQzVDO0FBRUQ7OztHQUdHO0FBQ0gsTUFBTSxrQ0FBa0M7SUFFdkMsb0JBQW9CLENBQVU7SUFDOUIsT0FBTyxDQUFvQjtJQUMzQixlQUFlLEdBQWMsRUFBRSxDQUFDO0lBRWhDLFlBQWEsdUJBQWdDLEtBQUssRUFBRSxVQUE2QixFQUFFO1FBRWxGLElBQUksQ0FBQyxvQkFBb0IsR0FBRyxvQkFBb0IsQ0FBQztRQUNqRCxJQUFJLENBQUMsT0FBTyxHQUFHLE9BQU8sQ0FBQztJQUN4QixDQUFDO0lBRUQsS0FBSztRQUVKLElBQUksQ0FBQyxlQUFlLEdBQUcsSUFBSSxLQUFLLENBQUUsSUFBSSxDQUFDLE9BQU8sQ0FBQyxNQUFNLENBQUUsQ0FBQyxJQUFJLENBQUUsS0FBSyxDQUFFLENBQUM7UUFDdEUsSUFBSSxDQUFDLE9BQU8sQ0FBQyxPQUFPLENBQUUsQ0FBQyxDQUFDLEVBQUUsQ0FBQyxDQUFDLENBQUMsS0FBSyxFQUFFLENBQUUsQ0FBQztJQUN4QyxDQUFDO0lBRUQsTUFBTTtRQUVMLElBQUssSUFBSSxDQUFDLE9BQU8sQ0FBQyxNQUFNLElBQUksQ0FBQztZQUM1QixPQUFPLEtBQUssQ0FBQztRQUVkLElBQUksV0FBVyxHQUFHLEtBQUssQ0FBQztRQUN4QixJQUFJLENBQUMsT0FBTyxDQUFDLE9BQU8sQ0FBRSxDQUFFLE1BQU0sRUFBRSxLQUFLLEVBQUcsRUFBRTtZQUV6QyxJQUFLLENBQUMsTUFBTSxDQUFDLE1BQU0sRUFBRSxFQUNyQjtnQkFDQyxNQUFNLENBQUMsTUFBTSxFQUFFLENBQUM7Z0JBQ2hCLElBQUksQ0FBQyxlQUFlLENBQUMsS0FBSyxDQUFDLEdBQUcsSUFBSSxDQUFDO2dCQUNuQyxXQUFXLEdBQUcsSUFBSSxDQUFDO2FBQ25CO1FBQ0YsQ0FBQyxDQUFFLENBQUM7UUFFSixPQUFPLENBQUMsV0FBVyxDQUFDO0lBQ3JCLENBQUM7SUFFRCxNQUFNO1FBRUwsSUFBSSxDQUFDLE9BQU8sQ0FBQyxPQUFPLENBQUUsQ0FBRSxNQUFNLEVBQUUsS0FBSyxFQUFHLEVBQUU7WUFFekMsSUFBSyxDQUFDLElBQUksQ0FBQyxlQUFlLENBQUMsS0FBSyxDQUFDLEVBQ2pDO2dCQUNDLElBQUssSUFBSSxDQUFDLG9CQUFvQjtvQkFDN0IsK0JBQStCLENBQUUsTUFBTSxDQUFFLENBQUM7O29CQUUxQyxNQUFNLENBQUMsTUFBTSxFQUFFLENBQUM7YUFDakI7UUFDRixDQUFDLENBQUUsQ0FBQztJQUNMLENBQUM7Q0FDRDtBQUVELE1BQU0sc0JBQXVCLFNBQVEsVUFBVTtJQUU5QyxDQUFDLENBQWdDO0lBQ2pDLFNBQVMsQ0FBUTtJQUVqQixZQUFhLENBQWdDLEVBQUUsR0FBRyxTQUFnQjtRQUVqRSxLQUFLLEVBQUUsQ0FBQztRQUNSLElBQUksQ0FBQyxDQUFDLEdBQUcsQ0FBQyxDQUFDO1FBQ1gsSUFBSSxDQUFDLFNBQVMsR0FBRyxTQUFTLENBQUM7SUFDNUIsQ0FBQztJQUVELE1BQU07UUFFTCxPQUFPLENBQUMsSUFBSSxDQUFDLENBQUMsQ0FBQyxLQUFLLENBQUUsSUFBSSxFQUFFLElBQUksQ0FBQyxTQUFTLENBQUUsQ0FBQztJQUM5QyxDQUFDO0NBQ0Q7QUFFRCxvQ0FBb0M7QUFDcEMsTUFBTSxrQkFBbUIsU0FBUSxVQUFVO0lBRTFDLE9BQU8sR0FBRyxLQUFLLENBQUM7SUFDaEIsTUFBTTtRQUVMLElBQUssSUFBSSxDQUFDLE9BQU87WUFDaEIsT0FBTyxLQUFLLENBQUM7UUFDZCxJQUFJLENBQUMsT0FBTyxHQUFHLElBQUksQ0FBQztRQUNwQixPQUFPLElBQUksQ0FBQztJQUNiLENBQUM7Q0FDRDtBQUVEOzs7R0FHRztBQUNILE1BQU0saUJBQWlCO0lBRXRCLE1BQU0sQ0FBa0I7SUFDeEIsZUFBZSxDQUFTO0lBQ3hCLG9CQUFvQixDQUFVO0lBQzlCLFNBQVMsQ0FBc0M7SUFFL0MsWUFBYSxNQUF1QixFQUFFLGVBQXVCLEVBQUUsb0JBQThCO1FBRTVGLElBQUksQ0FBQyxNQUFNLEdBQUcsTUFBTSxDQUFDO1FBQ3JCLElBQUksQ0FBQyxlQUFlLEdBQUcsZUFBZSxDQUFDO1FBQ3ZDLElBQUksQ0FBQyxvQkFBb0IsR0FBRyxDQUFDLENBQUMsb0JBQW9CLENBQUM7SUFDcEQsQ0FBQztJQUVELEtBQUs7UUFFSixJQUFJLENBQUMsU0FBUyxHQUFHLElBQUksa0NBQWtDLENBQUUsSUFBSSxDQUFDLG9CQUFvQixFQUFFLENBQUMsSUFBSSxDQUFDLE1BQU0sRUFBRSxJQUFJLFVBQVUsQ0FBRSxJQUFJLENBQUMsZUFBZSxDQUFFLENBQUMsQ0FBRSxDQUFDO1FBQzVJLElBQUksQ0FBQyxTQUFTLENBQUMsS0FBSyxFQUFFLENBQUM7SUFDeEIsQ0FBQztJQUVELE1BQU07UUFFTCxPQUFPLElBQUksQ0FBQyxTQUFTLENBQUMsTUFBTSxFQUFFLENBQUM7SUFDaEMsQ0FBQztJQUVELE1BQU07UUFFTCxJQUFJLENBQUMsU0FBUyxDQUFDLE1BQU0sRUFBRSxDQUFDO0lBQ3pCLENBQUM7Q0FDRDtBQUVEOzs7R0FHRztBQUNILE1BQU0saUJBQWtCLFNBQVEsVUFBVTtJQUV6QyxDQUFDLENBQVc7SUFDWixTQUFTLENBQVE7SUFFakIsWUFBYSxDQUFXLEVBQUUsR0FBRyxTQUFnQjtRQUU1QyxLQUFLLEVBQUUsQ0FBQztRQUNSLElBQUksQ0FBQyxDQUFDLEdBQUcsQ0FBQyxDQUFDO1FBQ1gsSUFBSSxDQUFDLFNBQVMsR0FBRyxTQUFTLENBQUM7SUFDNUIsQ0FBQztJQUVELE1BQU07UUFFTCxJQUFJLENBQUMsQ0FBQyxDQUFDLEtBQUssQ0FBRSxJQUFJLEVBQUUsSUFBSSxDQUFDLFNBQVMsQ0FBRSxDQUFDO1FBQ3JDLE9BQU8sS0FBSyxDQUFDO0lBQ2QsQ0FBQztDQUNEO0FBRUQ7OztHQUdHO0FBQ0gsTUFBTSxtQkFBb0IsU0FBUSxpQkFBaUI7SUFFOUI7SUFBcEIsWUFBb0IsU0FBaUIsRUFBRSxHQUFHLFNBQWdCO1FBRXpELEtBQUssQ0FBRSxHQUFHLEVBQUUsQ0FBQyxDQUFDLENBQUMsYUFBYSxDQUFFLFNBQVMsRUFBRSxHQUFHLFNBQVMsQ0FBRSxDQUFFLENBQUM7UUFGdkMsY0FBUyxHQUFULFNBQVMsQ0FBUTtJQUdyQyxDQUFDO0NBQ0Q7QUFFRCxrRkFBa0Y7QUFDbEYsTUFBTSxrQkFBbUIsU0FBUSxVQUFVO0lBRTFDLEtBQUssQ0FBVTtJQUNmLFNBQVMsQ0FBUztJQUNsQixjQUFjLEdBQUcsS0FBSyxDQUFDO0lBRXZCLFlBQWEsS0FBYyxFQUFFLFNBQWlCO1FBRTdDLEtBQUssRUFBRSxDQUFDO1FBQ1IsSUFBSSxDQUFDLEtBQUssR0FBRyxLQUFLLENBQUM7UUFDbkIsSUFBSSxDQUFDLFNBQVMsR0FBRyxTQUFTLENBQUM7SUFDNUIsQ0FBQztJQUVELEtBQUs7UUFFSixDQUFDLENBQUMsb0JBQW9CLENBQUUsSUFBSSxDQUFDLFNBQVMsRUFBRSxJQUFJLENBQUMsS0FBSyxFQUFFLEdBQUcsRUFBRSxDQUFDLElBQUksQ0FBQyxjQUFjLEdBQUcsSUFBSSxDQUFFLENBQUM7SUFDeEYsQ0FBQztJQUVELE1BQU07UUFFTCxPQUFPLENBQUMsSUFBSSxDQUFDLGNBQWMsQ0FBQztJQUM3QixDQUFDO0NBQ0Q7QUFFRCxzQ0FBc0M7QUFDdEMsTUFBTSxXQUFZLFNBQVEsaUJBQWlCO0lBRXRCO0lBQXBCLFlBQW9CLEdBQVc7UUFFOUIsS0FBSyxDQUFFLEdBQUcsRUFBRSxDQUFDLENBQUMsQ0FBQyxHQUFHLENBQUUsSUFBSSxDQUFDLEdBQUcsQ0FBRSxDQUFFLENBQUM7UUFGZCxRQUFHLEdBQUgsR0FBRyxDQUFRO0lBRy9CLENBQUM7Q0FDRDtBQUVELHVDQUF1QztBQUN2QyxNQUFNLGNBQWUsU0FBUSxpQkFBaUI7SUFFN0MsWUFBYSxLQUFpQyxFQUFFLFVBQWtCO1FBRWpFLEtBQUssQ0FBRSxHQUFHLEVBQUU7WUFFWCxJQUFLLEtBQUssSUFBSSxJQUFJO2dCQUNqQixLQUFLLENBQUMsUUFBUSxDQUFFLFVBQVUsQ0FBRSxDQUFDO1FBQy9CLENBQUMsQ0FBRSxDQUFDO0lBQ0wsQ0FBQztDQUNEO0FBRUQsNENBQTRDO0FBQzVDLE1BQU0saUJBQWtCLFNBQVEsaUJBQWlCO0lBRWhELFlBQWEsS0FBaUMsRUFBRSxVQUFrQjtRQUVqRSxLQUFLLENBQUUsR0FBRyxFQUFFO1lBRVgsSUFBSyxLQUFLLElBQUksSUFBSTtnQkFDakIsS0FBSyxDQUFDLFdBQVcsQ0FBRSxVQUFVLENBQUUsQ0FBQztRQUNsQyxDQUFDLENBQUUsQ0FBQztJQUNMLENBQUM7Q0FDRDtBQUVELGdDQUFnQztBQUNoQyxNQUFNLGlCQUFrQixTQUFRLGlCQUFpQjtJQUVoRCxZQUFhLEtBQWlDLEVBQUUsU0FBaUIsRUFBRSxVQUFrQjtRQUVwRixLQUFLLENBQUUsR0FBRyxFQUFFO1lBRVgsSUFBSyxLQUFLLElBQUksSUFBSTtnQkFDakIsS0FBSyxDQUFDLFdBQVcsQ0FBRSxTQUFTLEVBQUUsVUFBVSxDQUFFLENBQUM7UUFDN0MsQ0FBQyxDQUFFLENBQUM7SUFDTCxDQUFDO0NBQ0Q7QUFFRCwyQ0FBMkM7QUFDM0MsTUFBTSxrQkFBbUIsU0FBUSxpQkFBaUI7SUFFakQsWUFBYSxLQUFpQyxFQUFFLFVBQWtCO1FBRWpFLEtBQUssQ0FBRSxHQUFHLEVBQUU7WUFFWCxJQUFLLEtBQUssSUFBSSxJQUFJO2dCQUNqQixLQUFLLENBQUMsWUFBWSxDQUFFLFVBQVUsQ0FBRSxDQUFDO1FBQ25DLENBQUMsQ0FBRSxDQUFDO0lBQ0wsQ0FBQztDQUNEO0FBRUQsc0RBQXNEO0FBQ3RELE1BQU0sa0JBQW1CLFNBQVEsc0JBQXNCO0lBRXRELFlBQWEsS0FBaUMsRUFBRSxVQUFrQjtRQUVqRSxLQUFLLENBQUUsR0FBRyxFQUFFO1lBRVgsT0FBTyxDQUFDLENBQUMsQ0FBRSxLQUFLLElBQUksS0FBSyxDQUFDLE9BQU8sRUFBRSxJQUFJLEtBQUssQ0FBQyxTQUFTLENBQUUsVUFBVSxDQUFFLENBQUUsQ0FBQztRQUN4RSxDQUFDLENBQUUsQ0FBQztJQUNMLENBQUM7Q0FDRDtBQUVELCtDQUErQztBQUMvQyxNQUFNLDBCQUEyQixTQUFRLGlCQUFpQjtJQUV6RCxZQUFhLEtBQWlDLEVBQUUsY0FBc0IsRUFBRSxLQUFhO1FBRXBGLEtBQUssQ0FBRSxHQUFHLEVBQUU7WUFFWCxJQUFLLEtBQUssSUFBSSxJQUFJO2dCQUNqQixLQUFLLENBQUMsb0JBQW9CLENBQUUsY0FBYyxFQUFFLEtBQUssQ0FBRSxDQUFDO1FBQ3RELENBQUMsQ0FBRSxDQUFDO0lBQ0wsQ0FBQztDQUNEO0FBRUQsaUZBQWlGO0FBQ2pGLE1BQU0sOEJBQThCO0lBSWY7SUFBdUI7SUFBK0I7SUFBMkI7SUFBeUI7SUFGOUgsY0FBYyxHQUFHLENBQUMsQ0FBQztJQUNuQixZQUFZLEdBQUcsQ0FBQyxDQUFDO0lBQ2pCLFlBQW9CLEtBQWMsRUFBUyxjQUFzQixFQUFTLFVBQWtCLEVBQVMsUUFBZ0IsRUFBUyxPQUFlO1FBQXpILFVBQUssR0FBTCxLQUFLLENBQVM7UUFBUyxtQkFBYyxHQUFkLGNBQWMsQ0FBUTtRQUFTLGVBQVUsR0FBVixVQUFVLENBQVE7UUFBUyxhQUFRLEdBQVIsUUFBUSxDQUFRO1FBQVMsWUFBTyxHQUFQLE9BQU8sQ0FBUTtJQUFLLENBQUM7SUFFbkosS0FBSztRQUVKLElBQUksQ0FBQyxjQUFjLEdBQUcsSUFBSSxDQUFDLElBQUksRUFBRSxDQUFDO1FBQ2xDLElBQUksQ0FBQyxZQUFZLEdBQUcsSUFBSSxDQUFDLGNBQWMsR0FBRyxJQUFJLENBQUMsT0FBTyxDQUFDO0lBQ3hELENBQUM7SUFFRCxNQUFNO1FBRUwsTUFBTSxHQUFHLEdBQUcsSUFBSSxDQUFDLElBQUksRUFBRSxDQUFDO1FBQ3hCLElBQUssR0FBRyxJQUFJLElBQUksQ0FBQyxZQUFZO1lBQzVCLE9BQU8sS0FBSyxDQUFDO1FBRWQsTUFBTSxLQUFLLEdBQUcsQ0FBRSxHQUFHLEdBQUcsSUFBSSxDQUFDLGNBQWMsQ0FBRSxHQUFHLENBQUUsSUFBSSxDQUFDLFlBQVksR0FBRyxJQUFJLENBQUMsY0FBYyxDQUFFLENBQUM7UUFFMUYsSUFBSyxJQUFJLENBQUMsS0FBSyxJQUFJLElBQUksQ0FBQyxLQUFLLENBQUMsT0FBTyxFQUFFO1lBQ3RDLElBQUksQ0FBQyxLQUFLLENBQUMsb0JBQW9CLENBQUUsSUFBSSxDQUFDLGNBQWMsRUFBRSxJQUFJLENBQUMsS0FBSyxDQUFFLElBQUksQ0FBQyxVQUFVLEdBQUcsQ0FBRSxJQUFJLENBQUMsUUFBUSxHQUFHLElBQUksQ0FBQyxVQUFVLENBQUUsR0FBRyxLQUFLLENBQUUsQ0FBRSxDQUFDO1FBRXJJLE9BQU8sSUFBSSxDQUFDO0lBQ2IsQ0FBQztJQUVELE1BQU07UUFFTCxJQUFLLElBQUksQ0FBQyxLQUFLLElBQUksSUFBSSxDQUFDLEtBQUssQ0FBQyxPQUFPLEVBQUU7WUFDdEMsSUFBSSxDQUFDLEtBQUssQ0FBQyxvQkFBb0IsQ0FBRSxJQUFJLENBQUMsY0FBYyxFQUFFLElBQUksQ0FBQyxRQUFRLENBQUUsQ0FBQztJQUN4RSxDQUFDO0NBQ0Q7QUFFRCw2Q0FBNkM7QUFDN0MsTUFBTSw2QkFBOEIsU0FBUSxpQkFBaUI7SUFFNUQsWUFBYSxLQUFpQyxFQUFFLGNBQXNCLEVBQUUsS0FBYTtRQUVwRixLQUFLLENBQUUsR0FBRyxFQUFFO1lBRVgsSUFBSyxLQUFLLElBQUksSUFBSSxJQUFJLEtBQUssQ0FBQyxPQUFPLEVBQUU7Z0JBQ3BDLEtBQUssQ0FBQyxpQkFBaUIsQ0FBRSxjQUFjLEVBQUUsS0FBSyxDQUFFLENBQUM7UUFDbkQsQ0FBQyxDQUFFLENBQUM7SUFDTCxDQUFDO0NBQ0Q7QUFFRCwyQ0FBMkM7QUFDM0MsTUFBTSx5QkFBMEIsU0FBUSxpQkFBaUI7SUFFeEQsWUFBYSxXQUEwQixFQUFFLEtBQWE7UUFFckQsS0FBSyxDQUFFLEdBQUcsRUFBRSxDQUFDLFdBQVcsQ0FBQyxLQUFLLEdBQUcsS0FBSyxDQUFFLENBQUM7SUFDMUMsQ0FBQztDQUNEO0FBRUQsdUNBQXVDO0FBQ3ZDLE1BQU0sd0JBQXdCO0lBSVQ7SUFBbUM7SUFBMkI7SUFBeUI7SUFGM0csY0FBYyxHQUFHLENBQUMsQ0FBQztJQUNuQixZQUFZLEdBQUcsQ0FBQyxDQUFDO0lBQ2pCLFlBQW9CLFdBQTBCLEVBQVMsVUFBa0IsRUFBUyxRQUFnQixFQUFTLE9BQWU7UUFBdEcsZ0JBQVcsR0FBWCxXQUFXLENBQWU7UUFBUyxlQUFVLEdBQVYsVUFBVSxDQUFRO1FBQVMsYUFBUSxHQUFSLFFBQVEsQ0FBUTtRQUFTLFlBQU8sR0FBUCxPQUFPLENBQVE7SUFBSyxDQUFDO0lBRWhJLEtBQUs7UUFFSixJQUFJLENBQUMsY0FBYyxHQUFHLElBQUksQ0FBQyxJQUFJLEVBQUUsQ0FBQztRQUNsQyxJQUFJLENBQUMsWUFBWSxHQUFHLElBQUksQ0FBQyxjQUFjLEdBQUcsSUFBSSxDQUFDLE9BQU8sQ0FBQztJQUN4RCxDQUFDO0lBRUQsTUFBTTtRQUVMLE1BQU0sR0FBRyxHQUFHLElBQUksQ0FBQyxJQUFJLEVBQUUsQ0FBQztRQUN4QixJQUFLLEdBQUcsSUFBSSxJQUFJLENBQUMsWUFBWTtZQUM1QixPQUFPLEtBQUssQ0FBQztRQUVkLE1BQU0sS0FBSyxHQUFHLENBQUUsR0FBRyxHQUFHLElBQUksQ0FBQyxjQUFjLENBQUUsR0FBRyxDQUFFLElBQUksQ0FBQyxZQUFZLEdBQUcsSUFBSSxDQUFDLGNBQWMsQ0FBRSxDQUFDO1FBQzFGLElBQUksQ0FBQyxXQUFXLENBQUMsS0FBSyxHQUFHLElBQUksQ0FBQyxVQUFVLEdBQUcsQ0FBRSxJQUFJLENBQUMsUUFBUSxHQUFHLElBQUksQ0FBQyxVQUFVLENBQUUsR0FBRyxLQUFLLENBQUM7UUFDdkYsT0FBTyxJQUFJLENBQUM7SUFDYixDQUFDO0lBRUQsTUFBTTtRQUVMLElBQUksQ0FBQyxXQUFXLENBQUMsS0FBSyxHQUFHLElBQUksQ0FBQyxRQUFRLENBQUM7SUFDeEMsQ0FBQztDQUNEO0FBRUQsd0VBQXdFO0FBQ3hFLE1BQU0sbUNBQW9DLFNBQVEsaUJBQWlCO0lBQ2xFLFlBQVksV0FBb0MsRUFBRSxVQUFrQixFQUFFLFVBQWtCO1FBQ3ZGLEtBQUssQ0FBQyxHQUFHLEVBQUU7WUFFVixXQUFXLENBQUMsVUFBVSxHQUFHLFVBQVUsQ0FBQztZQUNwQyxXQUFXLENBQUMsVUFBVSxHQUFHLFVBQVUsQ0FBQztRQUNyQyxDQUFDLENBQUUsQ0FBQztJQUNMLENBQUM7Q0FDRDtBQUVELG1EQUFtRDtBQUNuRCxNQUFNLGtDQUFrQztJQUluQjtJQUE2QztJQUEyQjtJQUF5QjtJQUZySCxjQUFjLEdBQUcsQ0FBQyxDQUFDO0lBQ25CLFlBQVksR0FBRyxDQUFDLENBQUM7SUFDakIsWUFBb0IsV0FBb0MsRUFBUyxVQUFrQixFQUFTLFFBQWdCLEVBQVMsT0FBZTtRQUFoSCxnQkFBVyxHQUFYLFdBQVcsQ0FBeUI7UUFBUyxlQUFVLEdBQVYsVUFBVSxDQUFRO1FBQVMsYUFBUSxHQUFSLFFBQVEsQ0FBUTtRQUFTLFlBQU8sR0FBUCxPQUFPLENBQVE7SUFBSyxDQUFDO0lBRTFJLEtBQUs7UUFFSixJQUFJLENBQUMsY0FBYyxHQUFHLElBQUksQ0FBQyxJQUFJLEVBQUUsQ0FBQztRQUNsQyxJQUFJLENBQUMsWUFBWSxHQUFHLElBQUksQ0FBQyxjQUFjLEdBQUcsSUFBSSxDQUFDLE9BQU8sQ0FBQztJQUN4RCxDQUFDO0lBRUQsTUFBTTtRQUVMLE1BQU0sR0FBRyxHQUFHLElBQUksQ0FBQyxJQUFJLEVBQUUsQ0FBQztRQUN4QixJQUFLLEdBQUcsSUFBSSxJQUFJLENBQUMsWUFBWTtZQUM1QixPQUFPLEtBQUssQ0FBQztRQUVkLE1BQU0sS0FBSyxHQUFHLENBQUUsR0FBRyxHQUFHLElBQUksQ0FBQyxjQUFjLENBQUUsR0FBRyxDQUFFLElBQUksQ0FBQyxZQUFZLEdBQUcsSUFBSSxDQUFDLGNBQWMsQ0FBRSxDQUFDO1FBQzFGLElBQUksQ0FBQyxXQUFXLENBQUMsVUFBVSxHQUFHLElBQUksQ0FBQyxVQUFVLEdBQUcsQ0FBRSxJQUFJLENBQUMsUUFBUSxHQUFHLElBQUksQ0FBQyxVQUFVLENBQUUsR0FBRyxLQUFLLENBQUM7UUFDNUYsT0FBTyxJQUFJLENBQUM7SUFDYixDQUFDO0lBRUQsTUFBTTtRQUVMLElBQUksQ0FBQyxXQUFXLENBQUMsVUFBVSxHQUFHLElBQUksQ0FBQyxRQUFRLENBQUM7SUFDN0MsQ0FBQztDQUNEO0FBRUQsbUJBQW1CO0FBQ25CLFNBQVMsZUFBZSxDQUFFLFNBQWlCO0lBRTFDLENBQUMsQ0FBQyxhQUFhLENBQUUsaUJBQWlCLEVBQUUsU0FBUyxDQUFFLENBQUM7QUFDakQsQ0FBQztBQUVELG9DQUFvQztBQUNwQyxNQUFNLHFCQUFzQixTQUFRLGlCQUFpQjtJQUVwRCxZQUFhLFNBQWlCO1FBRTdCLEtBQUssQ0FBRSxHQUFHLEVBQUUsQ0FBQyxlQUFlLENBQUUsU0FBUyxDQUFFLENBQUUsQ0FBQztJQUM3QyxDQUFDO0NBQ0Q7QUFFRCxNQUFNLGVBQWdCLFNBQVEsaUJBQWlCO0lBRTlDLFlBQWEsU0FBaUI7UUFFN0IsS0FBSyxDQUFFLEdBQUcsRUFBRSxDQUFDLGlCQUFpQixDQUFFLFNBQVMsQ0FBRSxDQUFFLENBQUM7SUFDL0MsQ0FBQztDQUNEO0FBRUQsTUFBTSwwQkFBMkIsU0FBUSxvQkFBb0I7SUFHeEM7SUFBMEI7SUFEdEMsY0FBYyxHQUFHLENBQUMsQ0FBQztJQUMzQixZQUFvQixTQUFpQixFQUFTLFFBQWdCO1FBRTdELEtBQUssQ0FBRTtZQUNOLElBQUksaUJBQWlCLENBQUUsR0FBRyxFQUFFLENBQUMsSUFBSSxDQUFDLGNBQWMsR0FBRyxpQkFBaUIsQ0FBRSxTQUFTLENBQUUsQ0FBRTtZQUNuRixJQUFJLFVBQVUsQ0FBRSxRQUFRLENBQUU7WUFDMUIsSUFBSSxpQkFBaUIsQ0FBRSxHQUFHLEVBQUUsQ0FBQyxpQkFBaUIsQ0FBRSxJQUFJLENBQUMsY0FBYyxDQUFFLENBQUU7U0FDdkUsQ0FBRSxDQUFDO1FBTmUsY0FBUyxHQUFULFNBQVMsQ0FBUTtRQUFTLGFBQVEsR0FBUixRQUFRLENBQVE7SUFPOUQsQ0FBQztDQUNEO0FBRUQsTUFBTSw0QkFBNkIsU0FBUSxvQkFBb0I7SUFHMUM7SUFEWixjQUFjLEdBQUcsQ0FBQyxDQUFDO0lBQzNCLFlBQW9CLFNBQWlCO1FBRXBDLEtBQUssQ0FBRTtZQUNOLElBQUksaUJBQWlCLENBQUUsR0FBRyxFQUFFLENBQUMsSUFBSSxDQUFDLGNBQWMsR0FBRyxpQkFBaUIsQ0FBRSxTQUFTLENBQUUsQ0FBRTtZQUNuRixJQUFJLHNCQUFzQixDQUFFLEdBQUcsRUFBRSxDQUFDLENBQUMsc0JBQXNCLENBQUUsSUFBSSxDQUFDLGNBQWMsQ0FBRSxDQUFFO1NBQ2xGLENBQUUsQ0FBQztRQUxlLGNBQVMsR0FBVCxTQUFTLENBQVE7SUFNckMsQ0FBQztDQUNEO0FBRUQsOEZBQThGO0FBQzlGLE1BQU0sVUFBVTtJQUtLO0lBSHBCLGNBQWMsR0FBRyxDQUFDLENBQUM7SUFDbkIsWUFBWSxHQUFHLENBQUMsQ0FBQztJQUVqQixZQUFvQixPQUFlO1FBQWYsWUFBTyxHQUFQLE9BQU8sQ0FBUTtJQUFLLENBQUM7SUFFekMsS0FBSztRQUVKLElBQUksQ0FBQyxjQUFjLEdBQUcsSUFBSSxDQUFDLElBQUksRUFBRSxDQUFDO1FBQ2xDLElBQUksQ0FBQyxZQUFZLEdBQUcsSUFBSSxDQUFDLGNBQWMsR0FBRyxJQUFJLENBQUMsT0FBTyxDQUFDO0lBQ3hELENBQUM7SUFFRCxNQUFNO1FBRUwsTUFBTSxHQUFHLEdBQUcsSUFBSSxDQUFDLElBQUksRUFBRSxDQUFDO1FBQ3hCLElBQUssR0FBRyxJQUFJLElBQUksQ0FBQyxZQUFZO1lBQzVCLE9BQU8sS0FBSyxDQUFDO1FBRWQsTUFBTSxLQUFLLEdBQUcsQ0FBRSxHQUFHLEdBQUcsSUFBSSxDQUFDLGNBQWMsQ0FBRSxHQUFHLENBQUUsSUFBSSxDQUFDLFlBQVksR0FBRyxJQUFJLENBQUMsY0FBYyxDQUFFLENBQUM7UUFDMUYsSUFBSSxDQUFDLGFBQWEsQ0FBRSxLQUFLLENBQUUsQ0FBQztRQUM1QixPQUFPLElBQUksQ0FBQztJQUNiLENBQUM7SUFFRCxNQUFNO1FBRUwsSUFBSSxDQUFDLGFBQWEsQ0FBRSxHQUFHLENBQUUsQ0FBQztJQUMzQixDQUFDO0lBRUQsYUFBYSxDQUFFLFFBQWdCO1FBRTlCLDhDQUE4QztJQUMvQyxDQUFDO0NBQ0Q7QUFFRDs7O0dBR0c7QUFDSCxNQUFNLGFBQWE7SUFJRTtJQUFnQztJQUZwRCxXQUFXLEdBQUcsS0FBSyxDQUFDO0lBRXBCLFlBQW9CLE1BQXVCLEVBQVMsS0FBK0I7UUFBL0QsV0FBTSxHQUFOLE1BQU0sQ0FBaUI7UUFBUyxVQUFLLEdBQUwsS0FBSyxDQUEwQjtJQUFLLENBQUM7SUFFekYsY0FBYztRQUViLElBQUksQ0FBQyxXQUFXLEdBQUcsSUFBSSxDQUFDO0lBQ3pCLENBQUM7SUFFRCxpQkFBaUI7UUFFaEIsSUFBSyxJQUFJLENBQUMsV0FBVyxFQUNyQjtZQUNDLE9BQU8sSUFBSSxDQUFDO1NBQ1o7UUFFRCxJQUFLLElBQUksQ0FBQyxLQUFLLElBQUksQ0FBQyxJQUFJLENBQUMsS0FBSyxFQUFFLEVBQ2hDO1lBQ0MsSUFBSSxDQUFDLFdBQVcsR0FBRyxJQUFJLENBQUM7U0FDeEI7UUFFRCxPQUFPLElBQUksQ0FBQyxXQUFXLENBQUM7SUFDekIsQ0FBQztJQUVELEtBQUs7UUFFSixJQUFLLENBQUMsSUFBSSxDQUFDLGlCQUFpQixFQUFFO1lBQzdCLElBQUksQ0FBQyxNQUFNLENBQUMsS0FBSyxFQUFFLENBQUM7SUFDdEIsQ0FBQztJQUVELE1BQU07UUFFTCxPQUFPLENBQUMsSUFBSSxDQUFDLGlCQUFpQixFQUFFLElBQUksSUFBSSxDQUFDLE1BQU0sQ0FBQyxNQUFNLEVBQUUsQ0FBQztJQUMxRCxDQUFDO0lBRUQsTUFBTTtRQUVMLElBQUssQ0FBQyxJQUFJLENBQUMsaUJBQWlCLEVBQUU7WUFDN0IsSUFBSSxDQUFDLE1BQU0sQ0FBQyxNQUFNLEVBQUUsQ0FBQztJQUN2QixDQUFDO0NBQ0Q7QUFFRCxNQUFNLGVBQWdCLFNBQVEsb0JBQW9CO0lBRWpELFlBQWEsVUFBbUI7UUFFL0IsSUFBSSxlQUFlLEdBQUcsS0FBSyxDQUFDO1FBQzVCLENBQUMsQ0FBQyxvQkFBb0IsQ0FBRSwwQkFBMEIsRUFBRSxVQUFVLEVBQUUsR0FBRyxFQUFFLENBQUMsZUFBZSxHQUFHLElBQUksQ0FBRSxDQUFDO1FBQy9GLEtBQUssQ0FBRTtZQUNOLElBQUksaUJBQWlCLENBQUUsR0FBRyxFQUFFLENBQUMsVUFBVSxDQUFDLElBQUksRUFBRSxDQUFFO1lBQ2hELElBQUksc0JBQXNCLENBQUUsR0FBRyxFQUFFLENBQUMsZUFBZSxDQUFFO1NBQ25ELENBQUUsQ0FBQztJQUNMLENBQUM7Q0FDRCJ9