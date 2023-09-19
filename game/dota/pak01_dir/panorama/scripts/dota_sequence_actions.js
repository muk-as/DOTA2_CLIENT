"use strict";
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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZG90YV9zZXF1ZW5jZV9hY3Rpb25zLmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsiZG90YV9zZXF1ZW5jZV9hY3Rpb25zLnRzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiI7QUFBQSxrQ0FBa0M7QUFDbEMsZ0NBQWdDO0FBQ2hDLDRDQUE0QztBQUU1QyxpQ0FBaUM7QUFDakMseUZBQXlGO0FBRXpGOztHQUVHO0FBQ0gsTUFBTSxnQkFBaUIsU0FBUSxVQUFVO0lBRXBCO0lBQWdDO0lBQTRCO0lBQTRCO0lBQThCO0lBQThCO0lBQTBCO0lBQTBCO0lBQTRCO0lBQTRCO0lBQXBSLFlBQW9CLEtBQXVCLEVBQVMsV0FBbUIsRUFBUyxXQUFtQixFQUFTLGFBQXFCLEVBQVMsYUFBcUIsRUFBUyxTQUFpQixFQUFTLFNBQWlCLEVBQVMsV0FBbUIsRUFBUyxXQUFtQixFQUFTLE9BQWU7UUFFbFMsS0FBSyxDQUFFLE9BQU8sQ0FBRSxDQUFDO1FBRkUsVUFBSyxHQUFMLEtBQUssQ0FBa0I7UUFBUyxnQkFBVyxHQUFYLFdBQVcsQ0FBUTtRQUFTLGdCQUFXLEdBQVgsV0FBVyxDQUFRO1FBQVMsa0JBQWEsR0FBYixhQUFhLENBQVE7UUFBUyxrQkFBYSxHQUFiLGFBQWEsQ0FBUTtRQUFTLGNBQVMsR0FBVCxTQUFTLENBQVE7UUFBUyxjQUFTLEdBQVQsU0FBUyxDQUFRO1FBQVMsZ0JBQVcsR0FBWCxXQUFXLENBQVE7UUFBUyxnQkFBVyxHQUFYLFdBQVcsQ0FBUTtRQUFTLFlBQU8sR0FBUCxPQUFPLENBQVE7SUFHblMsQ0FBQztJQUVELGFBQWEsQ0FBRSxRQUFnQjtRQUU5QixJQUFJLENBQUMsS0FBSyxDQUFDLGVBQWUsQ0FDekIsSUFBSSxDQUFFLFFBQVEsRUFBRSxJQUFJLENBQUMsV0FBVyxFQUFFLElBQUksQ0FBQyxTQUFTLENBQUUsRUFDbEQsSUFBSSxDQUFFLFFBQVEsRUFBRSxJQUFJLENBQUMsV0FBVyxFQUFFLElBQUksQ0FBQyxTQUFTLENBQUUsRUFDbEQsSUFBSSxD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