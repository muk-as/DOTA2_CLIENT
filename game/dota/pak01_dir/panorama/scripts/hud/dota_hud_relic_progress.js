"use strict";
/// <reference path="../dota.d.ts" />
function OnRelicProgressShown(panelId, primaryAttribute, bRare) {
    const panel = $.GetContextPanel().FindChildInLayoutFile(panelId);
    panel.AddClass("GemNotReady");
    const relicFXPanel = panel.FindChildInLayoutFile('RelicFXPanel');
    $.RegisterEventHandler('DOTAScenePanelSceneLoaded', relicFXPanel, function () {
        if (bRare) {
            relicFXPanel.FireEntityInput('hero_relic_gem_gold_fx', 'Start', '');
        }
        else if (primaryAttribute == 0) {
            relicFXPanel.FireEntityInput('hero_relic_gem_red_fx', 'Start', '');
        }
        else if (primaryAttribute == 1) {
            relicFXPanel.FireEntityInput('hero_relic_gem_green_fx', 'Start', '');
        }
        else if (primaryAttribute == 2) {
            relicFXPanel.FireEntityInput('hero_relic_gem_blue_fx', 'Start', '');
        }
        panel.RemoveClass("GemNotReady");
    });
    const relicFXFullPanel = panel.FindChildInLayoutFile('RelicFXFullPanel');
    $.RegisterEventHandler('DOTAScenePanelSceneLoaded', relicFXFullPanel, function () {
        if (bRare) {
            relicFXFullPanel.FireEntityInput('hero_relic_separator_gold_fx', 'Start', '');
            relicFXFullPanel.FireEntityInput('hero_relic_burst_rare_fx', 'Start', '');
        }
        else {
            relicFXFullPanel.FireEntityInput('hero_relic_separator_fx', 'Start', '');
            relicFXFullPanel.FireEntityInput('hero_relic_burst_fx', 'Start', '');
        }
    });
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZG90YV9odWRfcmVsaWNfcHJvZ3Jlc3MuanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyIuLi8uLi8uLi8uLi8uLi9jb250ZW50L2RvdGEvcGFub3JhbWEvc2NyaXB0cy9odWQvZG90YV9odWRfcmVsaWNfcHJvZ3Jlc3MudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IjtBQUFBLHFDQUFxQztBQUdyQyxTQUFTLG9CQUFvQixDQUFFLE9BQWUsRUFBRSxnQkFBd0IsRUFBRSxLQUFjO0lBRXBGLE1BQU0sS0FBSyxHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQyxxQkFBcUIsQ0FBRSxPQUFPLENBQUUsQ0FBQztJQUNuRSxLQUFLLENBQUMsUUFBUSxDQUFFLGFBQWEsQ0FBRSxDQUFDO0lBRWhDLE1BQU0sWUFBWSxHQUFHLEtBQUssQ0FBQyxxQkFBcUIsQ0FBRSxjQUFjLENBQXNCLENBQUM7SUFDdkYsQ0FBQyxDQUFDLG9CQUFvQixDQUFFLDJCQUEyQixFQUFFLFlBQVksRUFBRTtRQUUvRCxJQUFLLEtBQUssRUFDVjtZQUNJLFlBQVksQ0FBQyxlQUFlLENBQUUsd0JBQXdCLEVBQUUsT0FBTyxFQUFFLEVBQUUsQ0FBRSxDQUFDO1NBQ3pFO2FBQ0ksSUFBSyxnQkFBZ0IsSUFBSSxDQUFDLEVBQy9CO1lBQ0ksWUFBWSxDQUFDLGVBQWUsQ0FBRSx1QkFBdUIsRUFBRSxPQUFPLEVBQUUsRUFBRSxDQUFFLENBQUM7U0FDeEU7YUFDSSxJQUFLLGdCQUFnQixJQUFJLENBQUMsRUFDL0I7WUFDSSxZQUFZLENBQUMsZUFBZSxDQUFFLHlCQUF5QixFQUFFLE9BQU8sRUFBRSxFQUFFLENBQUUsQ0FBQztTQUMxRTthQUNJLElBQUssZ0JBQWdCLElBQUksQ0FBQyxFQUMvQjtZQUNJLFlBQVksQ0FBQyxlQUFlLENBQUUsd0JBQXdCLEVBQUUsT0FBTyxFQUFFLEVBQUUsQ0FBRSxDQUFDO1NBQ3pFO1FBQ0QsS0FBSyxDQUFDLFdBQVcsQ0FBRSxhQUFhLENBQUUsQ0FBQztJQUN2QyxDQUFDLENBQUUsQ0FBQztJQUVKLE1BQU0sZ0JBQWdCLEdBQUcsS0FBSyxDQUFDLHFCQUFxQixDQUFFLGtCQUFrQixDQUFzQixDQUFDO0lBQy9GLENBQUMsQ0FBQyxvQkFBb0IsQ0FBRSwyQkFBMkIsRUFBRSxnQkFBZ0IsRUFBRTtRQUVuRSxJQUFLLEtBQUssRUFDVjtZQUNJLGdCQUFnQixDQUFDLGVBQWUsQ0FBRSw4QkFBOEIsRUFBRSxPQUFPLEVBQUUsRUFBRSxDQUFFLENBQUM7WUFDaEYsZ0JBQWdCLENBQUMsZUFBZSxDQUFFLDBCQUEwQixFQUFFLE9BQU8sRUFBRSxFQUFFLENBQUUsQ0FBQztTQUMvRTthQUVEO1lBQ0ksZ0JBQWdCLENBQUMsZUFBZSxDQUFFLHlCQUF5QixFQUFFLE9BQU8sRUFBRSxFQUFFLENBQUUsQ0FBQztZQUMzRSxnQkFBZ0IsQ0FBQyxlQUFlLENBQUUscUJBQXFCLEVBQUUsT0FBTyxFQUFFLEVBQUUsQ0FBRSxDQUFDO1NBQzFFO0lBQ0wsQ0FBQyxDQUFFLENBQUM7QUFDUixDQUFDIn0=