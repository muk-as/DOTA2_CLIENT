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
    seq.actions.push(new Quartero_RunSequentialActionsUntilClickThrough('q02_intro_01', 'Description_q02_intro_01', 'ShowQuarteroArt_01'));
    seq.actions.push(new Quartero_RunSequentialActionsUntilClickThrough('q02_intro_02', 'Description_q02_intro_02', 'ShowQuarteroArt_02'));
    seq.actions.push(new Quartero_RunSequentialActionsUntilClickThrough('q02_intro_03', 'Description_q02_intro_03', ''));
    seq.actions.push(new Quartero_RunSequentialActionsUntilClickThrough('q02_intro_04', 'Description_q02_intro_04', 'ShowQuarteroArt_03'));
    seq.actions.push(new Quartero_RunSequentialActionsUntilClickThrough('q02_intro_05', 'Description_q02_intro_05', ''));
    seq.actions.push(new Quartero_RunSequentialActionsUntilClickThrough('q02_intro_06', 'Description_q02_intro_06', ''));
    seq.actions.push(new Quartero_RunSequentialActionsUntilClickThrough('q02_intro_07', 'Description_q02_intro_07', ''));
    seq.actions.push(new Quartero_RunSequentialActionsUntilClickThrough('q02_intro_08', 'Description_q02_intro_08', 'ShowQuarteroArt_04'));
    seq.actions.push(new Quartero_RunSequentialActionsUntilClickThrough('q02_intro_09', 'Description_q02_intro_09', ''));
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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoicG9wdXBfc2Vhc29uYWxfd2ludGVyXzIwMjUuanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyIuLi8uLi8uLi8uLi8uLi9jb250ZW50L2RvdGEvcGFub3JhbWEvc2NyaXB0cy9wb3B1cHMvcG9wdXBfc2Vhc29uYWxfd2ludGVyXzIwMjUudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IjtBQUFBLG1DQUFtQztBQUNuQyxxQ0FBcUM7QUFDckMsb0RBQW9EO0FBQ3BELGlEQUFpRDtBQUVqRCxJQUFJLEdBQXdCLENBQUM7QUFFN0IsU0FBUyxrQkFBa0I7SUFDMUIsR0FBRyxHQUFHLElBQUksb0JBQW9CLEVBQUUsQ0FBQztJQUVqQyxJQUFJLFNBQVMsR0FBYSxDQUFDLENBQUMsZUFBZSxFQUFFLENBQUM7SUFFOUMsaUJBQWlCLENBQUUsQ0FBQyxDQUFDLGVBQWUsRUFBRSxFQUFFLElBQUksQ0FBRSxDQUFDO0lBQy9DLEdBQUcsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksOENBQThDLENBQUUsY0FBYyxFQUFFLDBCQUEwQixFQUFFLG9CQUFvQixDQUFFLENBQUUsQ0FBQztJQUMzSSxHQUFHLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLDhDQUE4QyxDQUFFLGNBQWMsRUFBRSwwQkFBMEIsRUFBRSxvQkFBb0IsQ0FBRSxDQUFFLENBQUM7SUFDM0ksR0FBRyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSw4Q0FBOEMsQ0FBRSxjQUFjLEVBQUUsMEJBQTBCLEVBQUUsRUFBRSxDQUFFLENBQUUsQ0FBQztJQUN6SCxHQUFHLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLDhDQUE4QyxDQUFFLGNBQWMsRUFBRSwwQkFBMEIsRUFBRSxvQkFBb0IsQ0FBRSxDQUFFLENBQUM7SUFDM0ksR0FBRyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSw4Q0FBOEMsQ0FBRSxjQUFjLEVBQUUsMEJBQTBCLEVBQUUsRUFBRSxDQUFFLENBQUUsQ0FBQztJQUN6SCxHQUFHLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLDhDQUE4QyxDQUFFLGNBQWMsRUFBRSwwQkFBMEIsRUFBRSxFQUFFLENBQUUsQ0FBRSxDQUFDO0lBQ3pILEdBQUcsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksOENBQThDLENBQUUsY0FBYyxFQUFFLDBCQUEwQixFQUFFLEVBQUUsQ0FBRSxDQUFFLENBQUM7SUFDekgsR0FBRyxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSw4Q0FBOEMsQ0FBRSxjQUFjLEVBQUUsMEJBQTBCLEVBQUUsb0JBQW9CLENBQUUsQ0FBRSxDQUFDO0lBQzNJLEdBQUcsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksOENBQThDLENBQUUsY0FBYyxFQUFFLDBCQUEwQixFQUFFLEVBQUUsQ0FBRSxDQUFFLENBQUM7SUFFekgsSUFBSSxxQkFBcUIsR0FBYSxDQUFDLENBQUMsZUFBZSxFQUFFLENBQUMscUJBQXFCLENBQUUsc0JBQXNCLENBQUUsQ0FBQztJQUMxRyxJQUFLLHFCQUFxQixFQUMxQjtRQUNDLEdBQUcsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksY0FBYyxDQUFFLHFCQUFxQixFQUFFLE1BQU0sQ0FBRSxDQUFFLENBQUM7S0FDeEU7SUFFRCxJQUFJLE1BQU0sR0FBYSxDQUFDLENBQUMsZUFBZSxFQUFFLENBQUMscUJBQXFCLENBQUUsZUFBZSxDQUFFLENBQUM7SUFDcEYsSUFBSyxNQUFNLEVBQ1g7UUFDQyxHQUFHLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGNBQWMsQ0FBRSxNQUFNLEVBQUUsTUFBTSxDQUFFLENBQUUsQ0FBQTtLQUN4RDtJQUVELGVBQWUsQ0FBRSxHQUFHLENBQUUsQ0FBQztBQUN4QixDQUFDO0FBRUQsU0FBUyxrQkFBa0I7SUFDdkIsSUFBSyxHQUFHLElBQUksU0FBUyxFQUNyQjtRQUNJLEdBQUcsQ0FBQyxNQUFNLEVBQUUsQ0FBQztLQUNoQjtJQUNKLHVCQUF1QixDQUFDLG9CQUFvQixFQUFFLENBQUM7SUFDL0MsaUJBQWlCLENBQUUsQ0FBQyxDQUFDLGVBQWUsRUFBRSxFQUFFLEtBQUssQ0FBRSxDQUFDO0lBRWhELENBQUMsQ0FBQyxhQUFhLENBQUUsc0JBQXNCLEVBQUUsRUFBRSxDQUFFLENBQUM7QUFDL0MsQ0FBQyJ9