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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZG90YV9odWRfcmVsaWNfcHJvZ3Jlc3MuanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyJkb3RhX2h1ZF9yZWxpY19wcm9ncmVzcy50cyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiQUFBQSxxQ0FBcUM7QUFFckMsMEJBQTBCO0FBQzFCLFNBQVMsb0JBQW9CLENBQUUsT0FBZSxFQUFFLGdCQUF3QixFQUFFLEtBQWM7SUFFcEYsTUFBTSxLQUFLLEdBQUcsQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDLHFCQUFxQixDQUFFLE9BQU8sQ0FBRSxDQUFDO0lBQ25FLEtBQUssQ0FBQyxRQUFRLENBQUUsYUFBYSxDQUFFLENBQUM7SUFFaEMsTUFBTSxZQUFZLEdBQUcsS0FBSyxDQUFDLHFCQUFxQixDQUFFLGNBQWMsQ0FBc0IsQ0FBQztJQUN2RixDQUFDLENBQUMsb0JBQW9CLENBQUUsMkJBQTJCLEVBQUUsWUFBWSxFQUFFO1FBRS9ELElBQUssS0FBSyxFQUNWO1lBQ0ksWUFBWSxDQUFDLGVBQWUsQ0FBRSx3QkFBd0IsRUFBRSxPQUFPLEVBQUUsRUFBRSxDQUFFLENBQUM7U0FDekU7YUFDSSxJQUFLLGdCQUFnQixJQUFJLENBQUMsRUFDL0I7WUFDSSxZQUFZLENBQUMsZUFBZSxDQUFFLHVCQUF1QixFQUFFLE9BQU8sRUFBRSxFQUFFLENBQUUsQ0FBQztTQUN4RTthQUNJLElBQUssZ0JBQWdCLElBQUksQ0FBQyxFQUMvQjtZQUNJLFlBQVksQ0FBQyxlQUFlLENBQUUseUJBQXlCLEVBQUUsT0FBTyxFQUFFLEVBQUUsQ0FBRSxDQUFDO1NBQzFFO2FBQ0ksSUFBSyxnQkFBZ0IsSUFBSSxDQUFDLEVBQy9CO1lBQ0ksWUFBWSxDQUFDLGVBQWUsQ0FBRSx3QkFBd0IsRUFBRSxPQUFPLEVBQUUsRUFBRSxDQUFFLENBQUM7U0FDekU7UUFDRCxLQUFLLENBQUMsV0FBVyxDQUFFLGFBQWEsQ0FBRSxDQUFDO0lBQ3ZDLENBQUMsQ0FBRSxDQUFDO0lBRUosTUFBTSxnQkFBZ0IsR0FBRyxLQUFLLENBQUMscUJBQXFCLENBQUUsa0JBQWtCLENBQXNCLENBQUM7SUFDL0YsQ0FBQyxDQUFDLG9CQUFvQixDQUFFLDJCQUEyQixFQUFFLGdCQUFnQixFQUFFO1FBRW5FLElBQUssS0FBSyxFQUNWO1lBQ0ksZ0JBQWdCLENBQUMsZUFBZSxDQUFFLDhCQUE4QixFQUFFLE9BQU8sRUFBRSxFQUFFLENBQUUsQ0FBQztZQUNoRixnQkFBZ0IsQ0FBQyxlQUFlLENBQUUsMEJBQTBCLEVBQUUsT0FBTyxFQUFFLEVBQUUsQ0FBRSxDQUFDO1NBQy9FO2FBRUQ7WUFDSSxnQkFBZ0IsQ0FBQyxlQUFlLENBQUUseUJBQXlCLEVBQUUsT0FBTyxFQUFFLEVBQUUsQ0FBRSxDQUFDO1lBQzNFLGdCQUFnQixDQUFDLGVBQWUsQ0FBRSxxQkFBcUIsRUFBRSxPQUFPLEVBQUUsRUFBRSxDQUFFLENBQUM7U0FDMUU7SUFDTCxDQUFDLENBQUUsQ0FBQztBQUNSLENBQUMifQ==