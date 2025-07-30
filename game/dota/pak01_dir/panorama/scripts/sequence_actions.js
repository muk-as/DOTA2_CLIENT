"use strict";
/// <reference path="dota.d.ts" />
function RunSingleAction(action) {
    action.start();
    UpdateSingleActionUntilFinished(action);
}
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
class BaseAction {
    start() { }
    update() { return false; }
    finish() { }
}
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
class WaitOneFrameAction extends BaseAction {
    updated = false;
    update() {
        if (this.updated)
            return false;
        this.updated = true;
        return true;
    }
}
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
class DispatchEventAction extends RunFunctionAction {
    eventName;
    constructor(eventName, ...argsArray) {
        super(() => $.DispatchEvent(eventName, ...argsArray));
        this.eventName = eventName;
    }
}
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
class PrintAction extends RunFunctionAction {
    msg;
    constructor(msg) {
        super(() => $.Msg(this.msg));
        this.msg = msg;
    }
}
class AddClassAction extends RunFunctionAction {
    constructor(panel, panelClass) {
        super(() => {
            if (panel != null)
                panel.AddClass(panelClass);
        });
    }
}
class RemoveClassAction extends RunFunctionAction {
    constructor(panel, panelClass) {
        super(() => {
            if (panel != null)
                panel.RemoveClass(panelClass);
        });
    }
}
class SwitchClassAction extends RunFunctionAction {
    constructor(panel, panelSlot, panelClass) {
        super(() => {
            if (panel != null)
                panel.SwitchClass(panelSlot, panelClass);
        });
    }
}
class TriggerClassAction extends RunFunctionAction {
    constructor(panel, panelClass) {
        super(() => {
            if (panel != null)
                panel.TriggerClass(panelClass);
        });
    }
}
class WaitForClassAction extends WaitForConditionAction {
    constructor(panel, panelClass) {
        super(() => {
            return !!(panel && panel.IsValid() && panel.BHasClass(panelClass));
        });
    }
}
class SetDialogVariableIntAction extends RunFunctionAction {
    constructor(panel, dialogVariable, value) {
        super(() => {
            if (panel != null)
                panel.SetDialogVariableInt(dialogVariable, value);
        });
    }
}
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
class SetDialogVariableStringAction extends RunFunctionAction {
    constructor(panel, dialogVariable, value) {
        super(() => {
            if (panel != null && panel.IsValid())
                panel.SetDialogVariable(dialogVariable, value);
        });
    }
}
class SetProgressBarValueAction extends RunFunctionAction {
    constructor(progressBar, value) {
        super(() => progressBar.value = value);
    }
}
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
class SetProgressBarWithMiddleValueAction extends RunFunctionAction {
    constructor(progressBar, upperValue, lowerValue) {
        super(() => {
            progressBar.uppervalue = upperValue;
            progressBar.lowervalue = lowerValue;
        });
    }
}
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
function PlaySoundEffect(soundName) {
    $.DispatchEvent('PlaySoundEffect', soundName);
}
class PlaySoundEffectAction extends RunFunctionAction {
    constructor(soundName) {
        super(() => PlaySoundEffect(soundName));
    }
}
class PlaySoundAction extends RunFunctionAction {
    soundEventGuid = 0;
    constructor(soundName) {
        super(() => this.soundEventGuid = PlayUISoundScript(soundName));
    }
    GetSoundEventGuid() {
        return this.soundEventGuid;
    }
}
class StopSoundAction extends RunFunctionAction {
    constructor(action) {
        super(() => StopUISoundScript(action.GetSoundEventGuid()));
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
    }
}
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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoic2VxdWVuY2VfYWN0aW9ucy5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbIi4uLy4uLy4uLy4uL2NvbnRlbnQvZG90YS9wYW5vcmFtYS9zY3JpcHRzL3NlcXVlbmNlX2FjdGlvbnMudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IjtBQUFBLGtDQUFrQztBQTJCbEMsU0FBUyxlQUFlLENBQUcsTUFBdUI7SUFFakQsTUFBTSxDQUFDLEtBQUssRUFBRSxDQUFDO0lBQ2YsK0JBQStCLENBQUUsTUFBTSxDQUFFLENBQUM7QUFDM0MsQ0FBQztBQUtELFNBQVMsK0JBQStCLENBQUcsTUFBdUI7SUFFakUsU0FBUyxRQUFRO1FBRWhCLElBQUssQ0FBQyxNQUFNLENBQUMsTUFBTSxFQUFFLEVBQ3JCO1lBQ0MsTUFBTSxDQUFDLE1BQU0sRUFBRSxDQUFDO1NBQ2hCO2FBRUQ7WUFDQyxDQUFDLENBQUMsUUFBUSxDQUFFLEdBQUcsRUFBRSxRQUFRLENBQUUsQ0FBQztTQUM1QjtJQUNGLENBQUM7SUFBQSxDQUFDO0lBQ0YsUUFBUSxFQUFFLENBQUM7QUFDWixDQUFDO0FBR0QsTUFBTSxVQUFVO0lBRWYsS0FBSyxLQUFZLENBQUM7SUFDbEIsTUFBTSxLQUFlLE9BQU8sS0FBSyxDQUFDLENBQUMsQ0FBQztJQUNwQyxNQUFNLEtBQVksQ0FBQztDQUNuQjtBQUtELE1BQU0sb0JBQW9CO0lBRXpCLE9BQU8sQ0FBb0I7SUFDM0Isa0JBQWtCLEdBQUcsQ0FBQyxDQUFDO0lBQ3ZCLG9CQUFvQixHQUFHLEtBQUssQ0FBQztJQUU3QixZQUFhLFVBQTZCLEVBQUU7UUFFM0MsSUFBSSxDQUFDLE9BQU8sR0FBRyxPQUFPLENBQUM7SUFDeEIsQ0FBQztJQUVELEtBQUs7UUFFSixJQUFJLENBQUMsa0JBQWtCLEdBQUcsQ0FBQyxDQUFDO1FBQzVCLElBQUksQ0FBQyxvQkFBb0IsR0FBRyxLQUFLLENBQUM7SUFDbkMsQ0FBQztJQUVELE1BQU07UUFFTCxPQUFRLElBQUksQ0FBQyxrQkFBa0Is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