"use strict";
/// <reference path="../dota.d.ts" />
/* Called from C++ Code */
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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZG90YV9odWRfcmVsaWNfcHJvZ3Jlc3MuanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyIuLi8uLi8uLi8uLi8uLi9jb250ZW50L2RvdGEvcGFub3JhbWEvc2NyaXB0cy9odWQvZG90YV9odWRfcmVsaWNfcHJvZ3Jlc3MudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IjtBQUFBLHFDQUFxQztBQUVyQywwQkFBMEI7QUFDMUIsU0FBUyxvQkFBb0IsQ0FBRSxPQUFlLEVBQUUsZ0JBQXdCLEVBQUUsS0FBYztJQUVwRixNQUFNLEtBQUssR0FBRyxDQUFDLENBQUMsZUFBZSxFQUFFLENBQUMscUJBQXFCLENBQUUsT0FBTyxDQUFFLENBQUM7SUFDbkUsS0FBSyxDQUFDLFFBQVEsQ0FBRSxhQUFhLENBQUUsQ0FBQztJQUVoQyxNQUFNLFlBQVksR0FBRyxLQUFLLENBQUMscUJBQXFCLENBQUUsY0FBYyxDQUFzQixDQUFDO0lBQ3ZGLENBQUMsQ0FBQyxvQkFBb0IsQ0FBRSwyQkFBMkIsRUFBRSxZQUFZLEVBQUU7UUFFL0QsSUFBSyxLQUFLLEVBQ1Y7WUFDSSxZQUFZLENBQUMsZUFBZSxDQUFFLHdCQUF3QixFQUFFLE9BQU8sRUFBRSxFQUFFLENBQUUsQ0FBQztTQUN6RTthQUNJLElBQUssZ0JBQWdCLElBQUksQ0FBQyxFQUMvQjtZQUNJLFlBQVksQ0FBQyxlQUFlLENBQUUsdUJBQXVCLEVBQUUsT0FBTyxFQUFFLEVBQUUsQ0FBRSxDQUFDO1NBQ3hFO2FBQ0ksSUFBSyxnQkFBZ0IsSUFBSSxDQUFDLEVBQy9CO1lBQ0ksWUFBWSxDQUFDLGVBQWUsQ0FBRSx5QkFBeUIsRUFBRSxPQUFPLEVBQUUsRUFBRSxDQUFFLENBQUM7U0FDMUU7YUFDSSxJQUFLLGdCQUFnQixJQUFJLENBQUMsRUFDL0I7WUFDSSxZQUFZLENBQUMsZUFBZSxDQUFFLHdCQUF3QixFQUFFLE9BQU8sRUFBRSxFQUFFLENBQUUsQ0FBQztTQUN6RTtRQUNELEtBQUssQ0FBQyxXQUFXLENBQUUsYUFBYSxDQUFFLENBQUM7SUFDdkMsQ0FBQyxDQUFFLENBQUM7SUFFSixNQUFNLGdCQUFnQixHQUFHLEtBQUssQ0FBQyxxQkFBcUIsQ0FBRSxrQkFBa0IsQ0FBc0IsQ0FBQztJQUMvRixDQUFDLENBQUMsb0JBQW9CLENBQUUsMkJBQTJCLEVBQUUsZ0JBQWdCLEVBQUU7UUFFbkUsSUFBSyxLQUFLLEVBQ1Y7WUFDSSxnQkFBZ0IsQ0FBQyxlQUFlLENBQUUsOEJBQThCLEVBQUUsT0FBTyxFQUFFLEVBQUUsQ0FBRSxDQUFDO1lBQ2hGLGdCQUFnQixDQUFDLGVBQWUsQ0FBRSwwQkFBMEIsRUFBRSxPQUFPLEVBQUUsRUFBRSxDQUFFLENBQUM7U0FDL0U7YUFFRDtZQUNJLGdCQUFnQixDQUFDLGVBQWUsQ0FBRSx5QkFBeUIsRUFBRSxPQUFPLEVBQUUsRUFBRSxDQUFFLENBQUM7WUFDM0UsZ0JBQWdCLENBQUMsZUFBZSxDQUFFLHFCQUFxQixFQUFFLE9BQU8sRUFBRSxFQUFFLENBQUUsQ0FBQztTQUMxRTtJQUNMLENBQUMsQ0FBRSxDQUFDO0FBQ1IsQ0FBQyJ9