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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZG90YV9odWRfc3BlY19yZWxpY19wcm9ncmVzc190b2FzdC5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbImRvdGFfaHVkX3NwZWNfcmVsaWNfcHJvZ3Jlc3NfdG9hc3QudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IkFBQUEscUNBQXFDO0FBRXJDLDBCQUEwQjtBQUMxQixTQUFTLG9CQUFvQixDQUFFLGdCQUF3QixFQUFFLEtBQWM7SUFFbkUsSUFBSSxLQUFLLEdBQUcsQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDO0lBQ2hDLEtBQUssQ0FBQyxRQUFRLENBQUUsYUFBYSxDQUFFLENBQUM7SUFFaEMsSUFBSSxZQUFZLEdBQUcsS0FBSyxDQUFDLHFCQUFxQixDQUFFLG1CQUFtQixDQUFzQixDQUFDO0lBQzFGLENBQUMsQ0FBQyxvQkFBb0IsQ0FBRSwyQkFBMkIsRUFBRSxZQUFZLEVBQUU7UUFFL0QsSUFBSyxLQUFLLEVBQ1Y7WUFDSSxZQUFZLENBQUMsZUFBZSxDQUFFLHdCQUF3QixFQUFFLE9BQU8sRUFBRSxFQUFFLENBQUUsQ0FBQztTQUN6RTthQUNJLElBQUssZ0JBQWdCLElBQUksQ0FBQyxFQUMvQjtZQUNJLFlBQVksQ0FBQyxlQUFlLENBQUUsdUJBQXVCLEVBQUUsT0FBTyxFQUFFLEVBQUUsQ0FBRSxDQUFDO1NBQ3hFO2FBQ0ksSUFBSyxnQkFBZ0IsSUFBSSxDQUFDLEVBQy9CO1lBQ0ksWUFBWSxDQUFDLGVBQWUsQ0FBRSx5QkFBeUIsRUFBRSxPQUFPLEVBQUUsRUFBRSxDQUFFLENBQUM7U0FDMUU7YUFDSSxJQUFLLGdCQUFnQixJQUFJLENBQUMsRUFDL0I7WUFDSSxZQUFZLENBQUMsZUFBZSxDQUFFLHdCQUF3QixFQUFFLE9BQU8sRUFBRSxFQUFFLENBQUUsQ0FBQztTQUN6RTtRQUNELEtBQUssQ0FBQyxXQUFXLENBQUUsYUFBYSxDQUFFLENBQUM7SUFDdkMsQ0FBQyxDQUFFLENBQUM7QUFDUixDQUFDIn0=