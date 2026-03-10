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
    seq.actions.push(new Quartero_RunSequentialActionsUntilClickThrough('q03_intro_qart_01', 'Description_q02_intro_01', 'ShowQuarteroArt_01'));
    //seq.actions.push( new Quartero_RunSequentialActionsUntilClickThrough( 'q03_intro_qart_02', 'Description_q02_intro_02', '' ) );
    seq.actions.push(new Quartero_RunSequentialActionsUntilClickThrough('q03_intro_qart_03', 'Description_q02_intro_03', ''));
    seq.actions.push(new Quartero_RunSequentialActionsUntilClickThrough('q03_intro_qart_04', 'Description_q02_intro_04', ''));
    seq.actions.push(new Quartero_RunSequentialActionsUntilClickThrough('q03_intro_qart_05', 'Description_q02_intro_05', ''));
    seq.actions.push(new Quartero_RunSequentialActionsUntilClickThrough('q03_intro_qart_06', 'Description_q02_intro_06', ''));
    seq.actions.push(new Quartero_RunSequentialActionsUntilClickThrough('q03_intro_qart_07', 'Description_q02_intro_07', ''));
    seq.actions.push(new Quartero_RunSequentialActionsUntilClickThrough('q03_intro_qart_08', 'Description_q02_intro_08', ''));
    seq.actions.push(new Quartero_RunSequentialActionsUntilClickThrough('q03_intro_qart_09', 'Description_q02_intro_09', ''));
    seq.actions.push(new Quartero_RunSequentialActionsUntilClickThrough('q03_intro_qart_10', 'Description_q02_intro_10', ''));
    var instruction_container = $.GetContextPanel().FindChildInLayoutFile('InstructionContainer');
    if (instruction_container) {
        seq.actions.push(new AddClassAction(instruction_container, 'Hide'));
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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoicG9wdXBfc2Vhc29uYWxfc3ByaW5nXzIwMjYuanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyIuLi8uLi8uLi8uLi8uLi9jb250ZW50L2RvdGEvcGFub3JhbWEvc2NyaXB0cy9wb3B1cHMvcG9wdXBfc2Vhc29uYWxfc3ByaW5nXzIwMjYudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IjtBQUFBLG1DQUFtQztBQUNuQyxxQ0FBcUM7QUFDckMsb0RBQW9EO0FBQ3BELGlEQUFpRDtBQUVqRCxJQUFJLEdBQXdCLENBQUM7QUFFN0IsU0FBUyxrQkFBa0I7SUFDMUIsR0FBRyxHQUFHLElBQUksb0JBQW9CLEVBQUUsQ0FBQztJQUVqQyxJQUFJLFNBQVMsR0FBYSxDQUFDLENBQUMsZUFBZSxFQUFFLENBQUM7SUFFOUMsaUJBQWlCLENBQUUsQ0FBQyxDQUFDLGVBQWUsRUFBRSxFQUFFLElBQUksQ0FBRSxDQUFDO0lBQy9DLEdBQUcsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksOENBQThDLENBQUUsbUJBQW1CLEVBQUUsMEJBQTBCLEVBQUUsb0JBQW9CLENBQUUsQ0FBRSxDQUFDO0lBQ2hKLGdJQUFnSTtJQUNoSSxHQUFHLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLDhDQUE4QyxDQUFFLG1CQUFtQixFQUFFLDBCQUEwQixFQUFFLEVBQUUsQ0FBRSxDQUFFLENBQUM7SUFDOUgsR0FBRyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSw4Q0FBOEMsQ0FBRSxtQkFBbUIsRUFBRSwwQkFBMEIsRUFBRSxFQUFFLENBQUUsQ0FBRSxDQUFDO0lBQzlILEdBQUcsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksOENBQThDLENBQUUsbUJBQW1CLEVBQUUsMEJBQTBCLEVBQUUsRUFBRSxDQUFFLENBQUUsQ0FBQztJQUM5SCxHQUFHLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLDhDQUE4QyxDQUFFLG1CQUFtQixFQUFFLDBCQUEwQixFQUFFLEVBQUUsQ0FBRSxDQUFFLENBQUM7SUFDOUgsR0FBRyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSw4Q0FBOEMsQ0FBRSxtQkFBbUIsRUFBRSwwQkFBMEIsRUFBRSxFQUFFLENBQUUsQ0FBRSxDQUFDO0lBQzlILEdBQUcsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksOENBQThDLENBQUUsbUJBQW1CLEVBQUUsMEJBQTBCLEVBQUUsRUFBRSxDQUFFLENBQUUsQ0FBQztJQUM5SCxHQUFHLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLDhDQUE4QyxDQUFFLG1CQUFtQixFQUFFLDBCQUEwQixFQUFFLEVBQUUsQ0FBRSxDQUFFLENBQUM7SUFDOUgsR0FBRyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSw4Q0FBOEMsQ0FBRSxtQkFBbUIsRUFBRSwwQkFBMEIsRUFBRSxFQUFFLENBQUUsQ0FBRSxDQUFDO0lBRTlILElBQUkscUJBQXFCLEdBQWEsQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDLHFCQUFxQixDQUFFLHNCQUFzQixDQUFFLENBQUM7SUFDMUcsSUFBSyxxQkFBcUIsRUFDMUI7UUFDQyxHQUFHLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGNBQWMsQ0FBRSxxQkFBcUIsRUFBRSxNQUFNLENBQUUsQ0FBRSxDQUFDO0tBQ3hFO0lBRUQsSUFBSSxNQUFNLEdBQWEsQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDLHFCQUFxQixDQUFFLGVBQWUsQ0FBRSxDQUFDO0lBQ3BGLElBQUssTUFBTSxFQUNYO1FBQ0MsR0FBRyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxjQUFjLENBQUUsTUFBTSxFQUFFLE1BQU0sQ0FBRSxDQUFFLENBQUE7S0FDeEQ7SUFFRCxlQUFlLENBQUUsR0FBRyxDQUFFLENBQUM7QUFDeEIsQ0FBQztBQUVELFNBQVMsa0JBQWtCO0lBQ3ZCLElBQUssR0FBRyxJQUFJLFNBQVMsRUFDckI7UUFDSSxHQUFHLENBQUMsTUFBTSxFQUFFLENBQUM7S0FDaEI7SUFDSix1QkFBdUIsQ0FBQyxvQkFBb0IsRUFBRSxDQUFDO0lBQy9DLGlCQUFpQixDQUFFLENBQUMsQ0FBQyxlQUFlLEVBQUUsRUFBRSxLQUFLLENBQUUsQ0FBQztJQUVoRCxDQUFDLENBQUMsYUFBYSxDQUFFLHNCQUFzQixFQUFFLEVBQUUsQ0FBRSxDQUFDO0FBQy9DLENBQUMifQ==