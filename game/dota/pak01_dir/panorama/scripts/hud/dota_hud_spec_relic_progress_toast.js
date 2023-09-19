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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZG90YV9odWRfc3BlY19yZWxpY19wcm9ncmVzc190b2FzdC5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbImRvdGFfaHVkX3NwZWNfcmVsaWNfcHJvZ3Jlc3NfdG9hc3QudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IjtBQUFBLHFDQUFxQztBQUVyQywwQkFBMEI7QUFDMUIsU0FBUyxvQkFBb0IsQ0FBRSxnQkFBd0IsRUFBRSxLQUFjO0lBRW5FLElBQUksS0FBSyxHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQztJQUNoQyxLQUFLLENBQUMsUUFBUSxDQUFFLGFBQWEsQ0FBRSxDQUFDO0lBRWhDLElBQUksWUFBWSxHQUFHLEtBQUssQ0FBQyxxQkFBcUIsQ0FBRSxtQkFBbUIsQ0FBc0IsQ0FBQztJQUMxRixDQUFDLENBQUMsb0JBQW9CLENBQUUsMkJBQTJCLEVBQUUsWUFBWSxFQUFFO1FBRS9ELElBQUssS0FBSyxFQUNWO1lBQ0ksWUFBWSxDQUFDLGVBQWUsQ0FBRSx3QkFBd0IsRUFBRSxPQUFPLEVBQUUsRUFBRSxDQUFFLENBQUM7U0FDekU7YUFDSSxJQUFLLGdCQUFnQixJQUFJLENBQUMsRUFDL0I7WUFDSSxZQUFZLENBQUMsZUFBZSxDQUFFLHVCQUF1QixFQUFFLE9BQU8sRUFBRSxFQUFFLENBQUUsQ0FBQztTQUN4RTthQUNJLElBQUssZ0JBQWdCLElBQUksQ0FBQyxFQUMvQjtZQUNJLFlBQVksQ0FBQyxlQUFlLENBQUUseUJBQXlCLEVBQUUsT0FBTyxFQUFFLEVBQUUsQ0FBRSxDQUFDO1NBQzFFO2FBQ0ksSUFBSyxnQkFBZ0IsSUFBSSxDQUFDLEVBQy9CO1lBQ0ksWUFBWSxDQUFDLGVBQWUsQ0FBRSx3QkFBd0IsRUFBRSxPQUFPLEVBQUUsRUFBRSxDQUFFLENBQUM7U0FDekU7UUFDRCxLQUFLLENBQUMsV0FBVyxDQUFFLGFBQWEsQ0FBRSxDQUFDO0lBQ3ZDLENBQUMsQ0FBRSxDQUFDO0FBQ1IsQ0FBQyJ9