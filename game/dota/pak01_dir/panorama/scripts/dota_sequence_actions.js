/// <reference path="dota.d.ts" />
/// <reference path="util.ts" />
/// <reference path="sequence_actions.ts" />
// Dota specific sequence actions
// Depends on util.ts and sequence_actions.ts being included first in the XML layout file
/**
 * Action to lerp the rotation parameters of a Scene Panel_t
 */
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
/** Action to lerp the Depth of Field parameters of a Scene Panel_t */
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
/** Action to fire entity input on a scene panel */
class FireEntityInputAction extends RunFunctionAction {
    constructor(scenePanel, entityName, entityInput, entityInputValue) {
        super(() => {
            scenePanel.FireEntityInput(entityName, entityInput, entityInputValue);
        });
    }
}
/** Action to animate an entity input value */
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
/** Starts ducking all UI music. Quack */
class StartDuckingUIMusicAction extends RunFunctionAction {
    constructor(panel) {
        super(() => { SetDuckingUIMusic(panel, true); });
    }
}
/** Stops ducking all UI music. Quack */
class StopDuckingUIMusicAction extends RunFunctionAction {
    constructor(panel) {
        super(() => { SetDuckingUIMusic(panel, false); });
    }
}
const g_trackedSoundEvents = [];
/** Helper action that keeps track of any sounds that are playing.
 *  Call `StopAllTrackedSounds` when the page is closing to stop them. */
class PlayAndTrackSoundAction extends RunFunctionAction {
    constructor(soundName) {
        super(() => g_trackedSoundEvents.push(PlayUISoundScript(soundName)));
    }
    static StopAllTrackedSounds() {
        g_trackedSoundEvents.forEach(handle => StopUISoundScript(handle));
        g_trackedSoundEvents.length = 0;
    }
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZG90YV9zZXF1ZW5jZV9hY3Rpb25zLmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsiZG90YV9zZXF1ZW5jZV9hY3Rpb25zLnRzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiJBQUFBLGtDQUFrQztBQUNsQyxnQ0FBZ0M7QUFDaEMsNENBQTRDO0FBRTVDLGlDQUFpQztBQUNqQyx5RkFBeUY7QUFFekY7O0dBRUc7QUFDSCxNQUFNLGdCQUFpQixTQUFRLFVBQVU7SUFFcEI7SUFBZ0M7SUFBNEI7SUFBNEI7SUFBOEI7SUFBOEI7SUFBMEI7SUFBMEI7SUFBNEI7SUFBNEI7SUFBcFIsWUFBb0IsS0FBdUIsRUFBUyxXQUFtQixFQUFTLFdBQW1CLEVBQVMsYUFBcUIsRUFBUyxhQUFxQixFQUFTLFNBQWlCLEVBQVMsU0FBaUIsRUFBUyxXQUFtQixFQUFTLFdBQW1CLEVBQVMsT0FBZTtRQUVsUyxLQUFLLENBQUUsT0FBTyxDQUFFLENBQUM7UUFGRSxVQUFLLEdBQUwsS0FBSyxDQUFrQjtRQUFTLGdCQUFXLEdBQVgsV0FBVyxDQUFRO1FBQVMsZ0JBQVcsR0FBWCxXQUFXLENBQVE7UUFBUyxrQkFBYSxHQUFiLGFBQWEsQ0FBUTtRQUFTLGtCQUFhLEdBQWIsYUFBYSxDQUFRO1FBQVMsY0FBUyxHQUFULFNBQVMsQ0FBUTtRQUFTLGNBQVMsR0FBVCxTQUFTLENBQVE7UUFBUyxnQkFBVyxHQUFYLFdBQVcsQ0FBUTtRQUFTLGdCQUFXLEdBQVgsV0FBVyxDQUFRO1FBQVMsWUFBTyxHQUFQLE9BQU8sQ0FBUTtJQUduUyxDQUFDO0lBRUQsYUFBYSxDQUFFLFFBQWdCO1FBRTlCLElBQUksQ0FBQyxLQUFLLENBQUMsZUFBZSxDQUN6QixJQUFJLENBQUUsUUFBUSxFQUFFLElBQUksQ0FBQyxXQUFXLEVBQUUsSUFBSSxDQUFDLFNBQVMsQ0FBRSxFQUNsRCxJQUFJLENBQUUsUUFBUSxFQUFFLElBQUksQ0FBQyxXQUFXLEVBQUUsSUFBSSxDQUFDLFNBQVMsQ0FBRSxFQUNsRCxJQUFJLENB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