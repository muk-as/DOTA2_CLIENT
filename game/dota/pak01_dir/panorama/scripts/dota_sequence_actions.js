/// <reference path="dota.d.ts" />
/// <reference path="util.ts" />
/// <reference path="sequence_actions.ts" />
// Dota specific sequence actions
// Depends on util.ts and sequence_actions.ts being included first in the XML layout file
/**
 * Action to lerp the rotation parameters of a Scene Panel_t
 */
class LerpRotateAction extends LerpAction {
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
    constructor(scenePanel, entityName, entityInput, startValue, endValue, seconds) {
        this.scenePanel = scenePanel;
        this.entityName = entityName;
        this.entityInput = entityInput;
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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZG90YV9zZXF1ZW5jZV9hY3Rpb25zLmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsiZG90YV9zZXF1ZW5jZV9hY3Rpb25zLnRzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiJBQUFBLGtDQUFrQztBQUNsQyxnQ0FBZ0M7QUFDaEMsNENBQTRDO0FBRTVDLGlDQUFpQztBQUNqQyx5RkFBeUY7QUFFekY7O0dBRUc7QUFDSCxNQUFNLGdCQUFpQixTQUFRLFVBQVU7SUFFeEMsWUFBb0IsS0FBdUIsRUFBUyxXQUFtQixFQUFTLFdBQW1CLEVBQVMsYUFBcUIsRUFBUyxhQUFxQixFQUFTLFNBQWlCLEVBQVMsU0FBaUIsRUFBUyxXQUFtQixFQUFTLFdBQW1CLEVBQVMsT0FBZTtRQUVsUyxLQUFLLENBQUUsT0FBTyxDQUFFLENBQUM7UUFGRSxVQUFLLEdBQUwsS0FBSyxDQUFrQjtRQUFTLGdCQUFXLEdBQVgsV0FBVyxDQUFRO1FBQVMsZ0JBQVcsR0FBWCxXQUFXLENBQVE7UUFBUyxrQkFBYSxHQUFiLGFBQWEsQ0FBUTtRQUFTLGtCQUFhLEdBQWIsYUFBYSxDQUFRO1FBQVMsY0FBUyxHQUFULFNBQVMsQ0FBUTtRQUFTLGNBQVMsR0FBVCxTQUFTLENBQVE7UUFBUyxnQkFBVyxHQUFYLFdBQVcsQ0FBUTtRQUFTLGdCQUFXLEdBQVgsV0FBVyxDQUFRO1FBQVMsWUFBTyxHQUFQLE9BQU8sQ0FBUTtJQUduUyxDQUFDO0lBRUQsYUFBYSxDQUFFLFFBQWdCO1FBRTlCLElBQUksQ0FBQyxLQUFLLENBQUMsZUFBZSxDQUN6QixJQUFJLENBQUUsUUFBUSxFQUFFLElBQUksQ0FBQyxXQUFXLEVBQUUsSUFBSSxDQUFDLFNBQVMsQ0FBRSxFQUNsRCxJQUFJLENBQUUsUUFBUSxFQUFFLElBQUksQ0FBQyxXQUFXLEVBQUUsSUFBSSxDQUFDLFNBQVMsQ0FBRSxFQUNsRCxJQUFJLENBQUUsUUFBUSxFQUFFLElBQUksQ0FBQyxhQUFhLEVBQUUsSUFBSSxDQUFDLFdBQVcsQ0FBRSxFQUN0RCxJ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