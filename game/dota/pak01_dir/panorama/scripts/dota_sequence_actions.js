"use strict";
/// <reference path="dota.d.ts" />
/// <reference path="util.ts" />
/// <reference path="sequence_actions.ts" />
class LerpRotateAction extends LerpAction {
    panel;
    yawMinStart;
    yawMaxStart;
    pitchMinStart;
    pitchMaxStart;
    yawMinEnd;
    yawMaxEnd;
    pitchMinEnd;
    pitchMaxEnd;
    seconds;
    constructor(panel, yawMinStart, yawMaxStart, pitchMinStart, pitchMaxStart, yawMinEnd, yawMaxEnd, pitchMinEnd, pitchMaxEnd, seconds) {
        super(seconds);
        this.panel = panel;
        this.yawMinStart = yawMinStart;
        this.yawMaxStart = yawMaxStart;
        this.pitchMinStart = pitchMinStart;
        this.pitchMaxStart = pitchMaxStart;
        this.yawMinEnd = yawMinEnd;
        this.yawMaxEnd = yawMaxEnd;
        this.pitchMinEnd = pitchMinEnd;
        this.pitchMaxEnd = pitchMaxEnd;
        this.seconds = seconds;
    }
    applyProgress(progress) {
        this.panel.SetRotateParams(Lerp(progress, this.yawMinStart, this.yawMinEnd), Lerp(progress, this.yawMaxStart, this.yawMaxEnd), Lerp(progress, this.pitchMinStart, this.pitchMinEnd), Lerp(progress, this.pitchMaxStart, this.pitchMaxEnd));
    }
}
class LerpDepthOfFieldAction extends LerpAction {
    panel;
    cameraName;
    nearBlurryDistanceStart;
    nearCrispDistanceStart;
    farCrispDistanceStart;
    farBlurryDistanceStart;
    nearBlurryDistanceEnd;
    nearCrispDistanceEnd;
    farCrispDistanceEnd;
    farBlurryDistanceEnd;
    seconds;
    constructor(panel, cameraName, nearBlurryDistanceStart, nearCrispDistanceStart, farCrispDistanceStart, farBlurryDistanceStart, nearBlurryDistanceEnd, nearCrispDistanceEnd, farCrispDistanceEnd, farBlurryDistanceEnd, seconds) {
        super(seconds);
        this.panel = panel;
        this.cameraName = cameraName;
        this.nearBlurryDistanceStart = nearBlurryDistanceStart;
        this.nearCrispDistanceStart = nearCrispDistanceStart;
        this.farCrispDistanceStart = farCrispDistanceStart;
        this.farBlurryDistanceStart = farBlurryDistanceStart;
        this.nearBlurryDistanceEnd = nearBlurryDistanceEnd;
        this.nearCrispDistanceEnd = nearCrispDistanceEnd;
        this.farCrispDistanceEnd = farCrispDistanceEnd;
        this.farBlurryDistanceEnd = farBlurryDistanceEnd;
        this.seconds = seconds;
    }
    applyProgress(progress) {
        this.panel.FireEntityInput(this.cameraName, 'SetDOFNearBlurry', Lerp(progress, this.nearBlurryDistanceStart, this.nearBlurryDistanceEnd));
        this.panel.FireEntityInput(this.cameraName, 'SetDOFNearCrisp', Lerp(progress, this.nearCrispDistanceStart, this.nearCrispDistanceEnd));
        this.panel.FireEntityInput(this.cameraName, 'SetDOFFarCrisp', Lerp(progress, this.farCrispDistanceStart, this.farCrispDistanceEnd));
        this.panel.FireEntityInput(this.cameraName, 'SetDOFFarBlurry', Lerp(progress, this.farBlurryDistanceStart, this.farBlurryDistanceEnd));
    }
}
class FireEntityInputAction extends RunFunctionAction {
    constructor(scenePanel, entityName, entityInput, entityInputValue) {
        super(() => {
            scenePanel.FireEntityInput(entityName, entityInput, entityInputValue);
        });
    }
}
class AnimateEntityInputAction {
    scenePanel;
    entityName;
    entityInput;
    startValue;
    endValue;
    seconds;
    startTimestamp = 0;
    endTimestamp = 0;
    constructor(scenePanel, entityName, entityInput, startValue, endValue, seconds) {
        this.scenePanel = scenePanel;
        this.entityName = entityName;
        this.entityInput = entityInput;
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
        this.scenePanel.FireEntityInput(this.entityName, this.entityInput, RemapValClamped(now, this.startTimestamp, this.endTimestamp, this.startValue, this.endValue));
        return true;
    }
    finish() {
        this.scenePanel.FireEntityInput(this.entityName, this.entityInput, this.endValue);
    }
}
class StartDuckingUIMusicAction extends RunFunctionAction {
    constructor(panel) {
        super(() => { SetDuckingUIMusic(panel, true); });
    }
}
class StopDuckingUIMusicAction extends RunFunctionAction {
    constructor(panel) {
        super(() => { SetDuckingUIMusic(panel, false); });
    }
}
const g_trackedSoundEvents = [];
class PlayAndTrackSoundAction extends RunFunctionAction {
    constructor(soundName) {
        super(() => g_trackedSoundEvents.push(PlayUISoundScript(soundName)));
    }
    static StopAllTrackedSounds() {
        g_trackedSoundEvents.forEach(handle => StopUISoundScript(handle));
        g_trackedSoundEvents.length = 0;
    }
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZG90YV9zZXF1ZW5jZV9hY3Rpb25zLmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsiLi4vLi4vLi4vLi4vY29udGVudC9kb3RhL3Bhbm9yYW1hL3NjcmlwdHMvZG90YV9zZXF1ZW5jZV9hY3Rpb25zLnRzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiI7QUFBQSxrQ0FBa0M7QUFDbEMsZ0NBQWdDO0FBQ2hDLDRDQUE0QztBQVE1QyxNQUFNLGdCQUFpQixTQUFRLFVBQVU7SUFFcEI7SUFBZ0M7SUFBNEI7SUFBNEI7SUFBOEI7SUFBOEI7SUFBMEI7SUFBMEI7SUFBNEI7SUFBNEI7SUFBcFIsWUFBb0IsS0FBdUIsRUFBUyxXQUFtQixFQUFTLFdBQW1CLEVBQVMsYUFBcUIsRUFBUyxhQUFxQixFQUFTLFNBQWlCLEVBQVMsU0FBaUIsRUFBUyxXQUFtQixFQUFTLFdBQW1CLEVBQVMsT0FBZTtRQUVsUyxLQUFLLENBQUUsT0FBTyxDQUFFLENBQUM7UUFGRSxVQUFLLEdBQUwsS0FBSyxDQUFrQjtRQUFTLGdCQUFXLEdBQVgsV0FBVyxDQUFRO1FBQVMsZ0JBQVcsR0FBWCxXQUFXLENBQVE7UUFBUyxrQkFBYSxHQUFiLGFBQWEsQ0FBUTtRQUFTLGtCQUFhLEdBQWIsYUFBYSxDQUFRO1FBQVMsY0FBUyxHQUFULFNBQVMsQ0FBUTtRQUFTLGNBQVMsR0FBVCxTQUFTLENBQVE7UUFBUyxnQkFBVyxHQUFYLFdBQVcsQ0FBUTtRQUFTLGdCQUFXLEdBQVgsV0FBVyxDQUFRO1FBQVMsWUFBTyxHQUFQLE9BQU8sQ0FBUTtJQUduUyxDQUFDO0lBRUQsYUFBYSxDQUFFLFFBQWdCO1FBRTlCLElBQUksQ0FBQyxLQUFLLENBQUMsZUFBZSxDQUN6QixJQUFJLENBQUUsUUFBUSxFQUFFLElBQUksQ0FBQyxXQUFXLEVBQUUsSUFBSSxDQUFDLFNBQVMsQ0FBRSxFQUNsRCxJQUFJLENBQUUsUUFBUSxFQUFFLElBQUksQ0FBQyxXQUFXLEVBQUUsSUFBSSxDQUFDLFNBQVMsQ0FBRSxFQUNsRCxJ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