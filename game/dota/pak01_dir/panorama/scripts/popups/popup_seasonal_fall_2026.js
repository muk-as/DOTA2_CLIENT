"use strict";
/// <reference path="../util.ts" />
/// <reference path="../dota.d.ts" />
/// <reference path="../dota_sequence_actions.ts" />
/// <reference path="popup_seasonal_shared.ts" />
var seq;
function PlayQuarteroDialog() {
    seq = new RunSequentialActions();
    let mainPanel = $.GetContextPanel();
    SetDuckingUIMusic($.GetContextPanel(), true);
    seq.actions.push(new Quartero_RunSequentialActionsUntilClickThrough('q05_previously_01', 'Description_q05_intro_01', ''));
    seq.actions.push(new Quartero_RunSequentialActionsUntilClickThrough('q05_previously_02', 'Description_q05_intro_02', ''));
    seq.actions.push(new Quartero_RunSequentialActionsUntilClickThrough('q05_previously_03', 'Description_q05_intro_03', ''));
    seq.actions.push(new Quartero_RunSequentialActionsUntilClickThrough('q05_previously_04', 'Description_q05_intro_04', ''));
    seq.actions.push(new Quartero_RunSequentialActionsUntilClickThrough('q05_previously_05', 'Description_q05_intro_05', ''));
    seq.actions.push(new Quartero_RunSequentialActionsUntilClickThrough('q05_previously_06', 'Description_q05_intro_06', ''));
    seq.actions.push(new Quartero_RunSequentialActionsUntilClickThrough('q05_previously_07', 'Description_q05_intro_07', ''));
    seq.actions.push(new Quartero_RunSequentialActionsUntilClickThrough('q05_previously_08', 'Description_q05_intro_08', ''));
    seq.actions.push(new Quartero_RunSequentialActionsUntilClickThrough('q05_previously_09', 'Description_q05_intro_09', ''));
    var instruction_container = $.GetContextPanel().FindChildInLayoutFile('InstructionContainer');
    if (instruction_container) {
        seq.actions.push(new AddClassAction(instruction_container, 'HideInstructionContainer'));
    }
    var button = $.GetContextPanel().FindChildInLayoutFile('PrimaryButton');
    if (button) {
        seq.actions.push(new AddClassAction(button, 'Show'));
    }
    RunSingleAction(seq);
}
function CloseQuarteroPopup() {
    if (seq != undefined) {
        seq.finish();
    }
    PlayAndTrackSoundAction.StopAllTrackedSounds();
    SetDuckingUIMusic($.GetContextPanel(), false);
    $.DispatchEvent("UIPopupButtonClicked", '');
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoicG9wdXBfc2Vhc29uYWxfZmFsbF8yMDI2LmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsiLi4vLi4vLi4vLi4vLi4vY29udGVudC9kb3RhL3Bhbm9yYW1hL3NjcmlwdHMvcG9wdXBzL3BvcHVwX3NlYXNvbmFsX2ZhbGxfMjAyNi50cyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiO0FBQUEsbUNBQW1DO0FBQ25DLHFDQUFxQztBQUNyQyxvREFBb0Q7QUFDcEQsaURBQWlEO0FBRWpELElBQUksR0FBd0IsQ0FBQztBQUU3QixTQUFTLGtCQUFrQjtJQUMxQixHQUFHLEdBQUcsSUFBSSxvQkFBb0IsRUFBRSxDQUFDO0lBRWpDLElBQUksU0FBUyxHQUFhLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQztJQUU5QyxpQkFBaUIsQ0FBRSxDQUFDLENBQUMsZUFBZSxFQUFFLEVBQUUsSUFBSSxDQUFFLENBQUM7SUFDL0MsR0FBRyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSw4Q0FBOEMsQ0FBRSxtQkFBbUIsRUFBRSwwQkFBMEIsRUFBRSxFQUFFLENBQUUsQ0FBRSxDQUFDO0lBQzlILEdBQUcsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksOENBQThDLENBQUUsbUJBQW1CLEVBQUUsMEJBQTBCLEVBQUUsRUFBRSxDQUFFLENBQUUsQ0FBQztJQUM5SCxHQUFHLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLDhDQUE4QyxDQUFFLG1CQUFtQixFQUFFLDBCQUEwQixFQUFFLEVBQUUsQ0FBRSxDQUFFLENBQUM7SUFDOUgsR0FBRyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSw4Q0FBOEMsQ0FBRSxtQkFBbUIsRUFBRSwwQkFBMEIsRUFBRSxFQUFFLENBQUUsQ0FBRSxDQUFDO0lBQzlILEdBQUcsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksOENBQThDLENBQUUsbUJBQW1CLEVBQUUsMEJBQTBCLEVBQUUsRUFBRSxDQUFFLENBQUUsQ0FBQztJQUM5SCxHQUFHLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLDhDQUE4QyxDQUFFLG1CQUFtQixFQUFFLDBCQUEwQixFQUFFLEVBQUUsQ0FBRSxDQUFFLENBQUM7SUFDOUgsR0FBRyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSw4Q0FBOEMsQ0FBRSxtQkFBbUIsRUFBRSwwQkFBMEIsRUFBRSxFQUFFLENBQUUsQ0FBRSxDQUFDO0lBQzlILEdBQUcsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksOENBQThDLENBQUUsbUJBQW1CLEVBQUUsMEJBQTBCLEVBQUUsRUFBRSxDQUFFLENBQUUsQ0FBQztJQUM5SCxHQUFHLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLDhDQUE4QyxDQUFFLG1CQUFtQixFQUFFLDBCQUEwQixFQUFFLEVBQUUsQ0FBRSxDQUFFLENBQUM7SUFFOUgsSUFBSSxxQkFBcUIsR0FBYSxDQUFDLENBQUMsZUFBZSxFQUFFLENBQUMscUJBQXFCLENBQUUsc0JBQXNCLENBQUUsQ0FBQztJQUMxRyxJQUFLLHFCQUFxQixFQUMxQjtRQUNDLEdBQUcsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksY0FBYyxDQUFFLHFCQUFxQixFQUFFLDBCQUEwQixDQUFFLENBQUUsQ0FBQztLQUM1RjtJQUVELElBQUksTUFBTSxHQUFhLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQyxxQkFBcUIsQ0FBRSxlQUFlLENBQUUsQ0FBQztJQUNwRixJQUFLLE1BQU0sRUFDWDtRQUNDLEdBQUcsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksY0FBYyxDQUFFLE1BQU0sRUFBRSxNQUFNLENBQUUsQ0FBRSxDQUFBO0tBQ3hEO0lBRUQsZUFBZSxDQUFFLEdBQUcsQ0FBRSxDQUFDO0FBQ3hCLENBQUM7QUFFRCxTQUFTLGtCQUFrQjtJQUN2QixJQUFLLEdBQUcsSUFBSSxTQUFTLEVBQ3JCO1FBQ0ksR0FBRyxDQUFDLE1BQU0sRUFBRSxDQUFDO0tBQ2hCO0lBQ0osdUJBQXVCLENBQUMsb0JBQW9CLEVBQUUsQ0FBQztJQUMvQyxpQkFBaUIsQ0FBRSxDQUFDLENBQUMsZUFBZSxFQUFFLEVBQUUsS0FBSyxDQUFFLENBQUM7SUFFaEQsQ0FBQyxDQUFDLGFBQWEsQ0FBRSxzQkFBc0IsRUFBRSxFQUFFLENBQUUsQ0FBQztBQUMvQyxDQUFDIn0=