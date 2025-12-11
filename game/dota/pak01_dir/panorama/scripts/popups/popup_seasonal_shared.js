"use strict";
/// <reference path="../util.ts" />
/// <reference path="../dota.d.ts" />
/// <reference path="../dota_sequence_actions.ts" />
class Quartero_RunSequentialActionsUntilClickThrough extends RunSequentialActions {
    soundEventGuid = 0;
    constructor(soundName, textPanelName, quarteroArtClassName) {
        var bClickedThrough = false;
        super([
            new RunFunctionAction(() => {
                this.soundEventGuid = PlayUISoundScript(soundName);
                g_trackedSoundEvents.push(this.soundEventGuid);
                if (quarteroArtClassName) {
                    $.GetContextPanel().SwitchClass('quartero_art', quarteroArtClassName);
                }
                let label = $.GetContextPanel().FindChildInLayoutFile(textPanelName);
                if (label) {
                    label.AddClass('ShowLabel');
                }
                $.RegisterEventHandler('Activated', $.GetContextPanel(), function () {
                    bClickedThrough = true;
                });
            }),
            new WaitForConditionAction(() => !IsUISoundScriptPlaying(this.soundEventGuid) || bClickedThrough)
        ]);
    }
    finish() {
        PlayAndTrackSoundAction.StopAllTrackedSounds();
        super.finish();
    }
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoicG9wdXBfc2Vhc29uYWxfc2hhcmVkLmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsiLi4vLi4vLi4vLi4vLi4vY29udGVudC9kb3RhL3Bhbm9yYW1hL3NjcmlwdHMvcG9wdXBzL3BvcHVwX3NlYXNvbmFsX3NoYXJlZC50cyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiO0FBQUEsbUNBQW1DO0FBQ25DLHFDQUFxQztBQUNyQyxvREFBb0Q7QUFFcEQsTUFBTSw4Q0FBK0MsU0FBUSxvQkFBb0I7SUFFeEUsY0FBYyxHQUFHLENBQUMsQ0FBQztJQUUzQixZQUFhLFNBQWlCLEVBQUUsYUFBcUIsRUFBRSxvQkFBNEI7UUFFbEYsSUFBSSxlQUFlLEdBQVksS0FBSyxDQUFDO1FBQ3JDLEtBQUssQ0FBRTtZQUNOLElBQUksaUJBQWlCLENBQUUsR0FBRyxFQUFFO2dCQUMzQixJQUFJLENBQUMsY0FBYyxHQUFHLGlCQUFpQixDQUFFLFNBQVMsQ0FBRSxDQUFDO2dCQUNyRCxvQkFBb0IsQ0FBQyxJQUFJLENBQUUsSUFBSSxDQUFDLGNBQWMsQ0FBRSxDQUFDO2dCQUVqRCxJQUFLLG9CQUFvQixFQUN6QjtvQkFDQyxDQUFDLENBQUMsZUFBZSxFQUFFLENBQUMsV0FBVyxDQUFFLGNBQWMsRUFBRSxvQkFBb0IsQ0FBRSxDQUFDO2lCQUN4RTtnQkFFRCxJQUFJLEtBQUssR0FBYSxDQUFDLENBQUMsZUFBZSxFQUFFLENBQUMscUJBQXFCLENBQUUsYUFBYSxDQUFFLENBQUM7Z0JBQ2pGLElBQUssS0FBSyxFQUNWO29CQUNDLEtBQUssQ0FBQyxRQUFRLENBQUUsV0FBVyxDQUFFLENBQUM7aUJBQzlCO2dCQUVELENBQUMsQ0FBQyxvQkFBb0IsQ0FBRSxXQUFXLEVBQUUsQ0FBQyxDQUFDLGVBQWUsRUFBRSxFQUFFO29CQUV6RCxlQUFlLEdBQUcsSUFBSSxDQUFDO2dCQUN4QixDQUFDLENBQUUsQ0FBQztZQUNMLENBQUMsQ0FBRTtZQUVILElBQUksc0JBQXNCLENBQUUsR0FBRyxFQUFFLENBQUMsQ0FBQyxzQkFBc0IsQ0FBRSxJQUFJLENBQUMsY0FBYyxDQUFFLElBQUksZUFBZSxDQUFFO1NBQ3JHLENBQUUsQ0FBQztJQUNMLENBQUM7SUFFRCxNQUFNO1FBRUwsdUJBQXVCLENBQUMsb0JBQW9CLEVBQUUsQ0FBQztRQUMvQyxLQUFLLENBQUMsTUFBTSxFQUFFLENBQUM7SUFDaEIsQ0FBQztDQUNEIn0=