"use strict";
/// <reference path="../dota.d.ts" />
/* Called from C++ Code */
function OnRelicProgressToast(primaryAttribute, bRare) {
    var panel = $.GetContextPanel();
    panel.AddClass("GemNotReady");
    var relicFXPanel = panel.FindChildInLayoutFile('ToastRelicFXPanel');
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
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZG90YV9odWRfc3BlY19yZWxpY19wcm9ncmVzc190b2FzdC5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbIi4uLy4uLy4uLy4uLy4uL2NvbnRlbnQvZG90YS9wYW5vcmFtYS9zY3JpcHRzL2h1ZC9kb3RhX2h1ZF9zcGVjX3JlbGljX3Byb2dyZXNzX3RvYXN0LnRzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiI7QUFBQSxxQ0FBcUM7QUFFckMsMEJBQTBCO0FBQzFCLFNBQVMsb0JBQW9CLENBQUUsZ0JBQXdCLEVBQUUsS0FBYztJQUVuRSxJQUFJLEtBQUssR0FBRyxDQUFDLENBQUMsZUFBZSxFQUFFLENBQUM7SUFDaEMsS0FBSyxDQUFDLFFBQVEsQ0FBRSxhQUFhLENBQUUsQ0FBQztJQUVoQyxJQUFJLFlBQVksR0FBRyxLQUFLLENBQUMscUJBQXFCLENBQUUsbUJBQW1CLENBQXNCLENBQUM7SUFDMUYsQ0FBQyxDQUFDLG9CQUFvQixDQUFFLDJCQUEyQixFQUFFLFlBQVksRUFBRTtRQUUvRCxJQUFLLEtBQUssRUFDVjtZQUNJLFlBQVksQ0FBQyxlQUFlLENBQUUsd0JBQXdCLEVBQUUsT0FBTyxFQUFFLEVBQUUsQ0FBRSxDQUFDO1NBQ3pFO2FBQ0ksSUFBSyxnQkFBZ0IsSUFBSSxDQUFDLEVBQy9CO1lBQ0ksWUFBWSxDQUFDLGVBQWUsQ0FBRSx1QkFBdUIsRUFBRSxPQUFPLEVBQUUsRUFBRSxDQUFFLENBQUM7U0FDeEU7YUFDSSxJQUFLLGdCQUFnQixJQUFJLENBQUMsRUFDL0I7WUFDSSxZQUFZLENBQUMsZUFBZSxDQUFFLHlCQUF5QixFQUFFLE9BQU8sRUFBRSxFQUFFLENBQUUsQ0FBQztTQUMxRTthQUNJLElBQUssZ0JBQWdCLElBQUksQ0FBQyxFQUMvQjtZQUNJLFlBQVksQ0FBQyxlQUFlLENBQUUsd0JBQXdCLEVBQUUsT0FBTyxFQUFFLEVBQUUsQ0FBRSxDQUFDO1NBQ3pFO1FBQ0QsS0FBSyxDQUFDLFdBQVcsQ0FBRSxhQUFhLENBQUUsQ0FBQztJQUN2QyxDQUFDLENBQUUsQ0FBQztBQUNSLENBQUMifQ==