"use strict";
/// <reference path="../util.ts" />
/// <reference path="../dota.d.ts" />
/// <reference path="../dota_sequence_actions.ts" />
/// <reference path="popup_seasonal_shared.ts" />
var seq;
function PlayQuarteroDialog() {
    seq = new RunSequentialActions();
    seq.actions.push(new Quartero_RunSequentialActionsUntilClickThrough('q02_outro_01', 'Description_q02_outro_01', 'ShowQuarteroHead_01'));
    seq.actions.push(new Quartero_RunSequentialActionsUntilClickThrough('q02_outro_02', 'Description_q02_outro_02', 'ShowQuarteroHead_02'));
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
    $.DispatchEvent("UIPopupButtonClicked", '');
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoicG9wdXBfc2Vhc29uYWxfd2ludGVyXzIwMjVfb3V0cm8uanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyIuLi8uLi8uLi8uLi8uLi9jb250ZW50L2RvdGEvcGFub3JhbWEvc2NyaXB0cy9wb3B1cHMvcG9wdXBfc2Vhc29uYWxfd2ludGVyXzIwMjVfb3V0cm8udHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IjtBQUFBLG1DQUFtQztBQUNuQyxxQ0FBcUM7QUFDckMsb0RBQW9EO0FBQ3BELGlEQUFpRDtBQUVqRCxJQUFJLEdBQXdCLENBQUM7QUFFN0IsU0FBUyxrQkFBa0I7SUFDMUIsR0FBRyxHQUFHLElBQUksb0JBQW9CLEVBQUUsQ0FBQztJQUVqQyxHQUFHLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLDhDQUE4QyxDQUFFLGNBQWMsRUFBRSwwQkFBMEIsRUFBRSxxQkFBcUIsQ0FBRSxDQUFFLENBQUM7SUFDNUksR0FBRyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSw4Q0FBOEMsQ0FBRSxjQUFjLEVBQUUsMEJBQTBCLEVBQUUscUJBQXFCLENBQUUsQ0FBRSxDQUFDO0lBRTVJLElBQUkscUJBQXFCLEdBQWEsQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDLHFCQUFxQixDQUFFLHNCQUFzQixDQUFFLENBQUM7SUFDMUcsSUFBSyxxQkFBcUIsRUFDMUI7UUFDQyxHQUFHLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGNBQWMsQ0FBRSxxQkFBcUIsRUFBRSxNQUFNLENBQUUsQ0FBRSxDQUFDO0tBQ3hFO0lBRUQsSUFBSSxNQUFNLEdBQWEsQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDLHFCQUFxQixDQUFFLGVBQWUsQ0FBRSxDQUFDO0lBQ3BGLElBQUssTUFBTSxFQUNYO1FBQ0MsR0FBRyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxjQUFjLENBQUUsTUFBTSxFQUFFLE1BQU0sQ0FBRSxDQUFFLENBQUE7S0FDeEQ7SUFFRCxlQUFlLENBQUUsR0FBRyxDQUFFLENBQUM7QUFDeEIsQ0FBQztBQUVELFNBQVMsa0JBQWtCO0lBQ3ZCLElBQUssR0FBRyxJQUFJLFNBQVMsRUFDckI7UUFDSSxHQUFHLENBQUMsTUFBTSxFQUFFLENBQUM7S0FDaEI7SUFDSix1QkFBdUIsQ0FBQyxvQkFBb0IsRUFBRSxDQUFDO0lBRS9DLENBQUMsQ0FBQyxhQUFhLENBQUUsc0JBQXNCLEVBQUUsRUFBRSxDQUFFLENBQUM7QUFDL0MsQ0FBQyJ9