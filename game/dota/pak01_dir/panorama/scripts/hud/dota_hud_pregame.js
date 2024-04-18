"use strict";
/// <reference path="../dota.d.ts" />
/* Called from C++ Code */
function OnPreGameBecameHidden() {
    const preGame = $.GetContextPanel();
    preGame.RemoveClass('StrategyVersusTransition');
    preGame.RemoveClass('VersusOutro');
    preGame.RemoveClass('VersusVisible');
    preGame.RemoveClass('MapLoading');
    preGame.RemoveClass('MapLoadingOutro');
}
/* Called from C++ Code */
function OnPlayerDraftBecameVisible() {
    OnPreGameBecameHidden();
}
/* Called from C++ Code */
function OnStrategyBecameVisible() {
    $.DispatchEvent('DOTAGlobalSceneSetCameraEntity', 'PregameBG', 'shot_cameraB', 1.0);
}
/* Called from C++ Code */
function OnHeroGridBecameVisible() {
    $.DispatchEvent('DOTAGlobalSceneSetCameraEntity', 'PregameBG', 'shot_cameraA', 1.0);
}
/* Called from C++ Code */
function ShowVersusScreenV2() {
    const preGame = $.GetContextPanel();
    preGame.AddClass('StrategyVersusTransition');
    $.DispatchEvent('DOTAGlobalSceneSetCameraEntity', 'PregameBG', 'shot_cameraC', 5.0);
}
/* Called from C++ Code */
function ShowMapLoadingScreen() {
    const preGame = $.GetContextPanel();
    preGame.RemoveClass('StrategyVersusTransition');
    preGame.AddClass('MapLoading');
}
/* Called from C++ Code */
function TransitionFromMapLoadingScreen() {
    const preGame = $.GetContextPanel();
    preGame.AddClass('MapLoadingOutro');
    // Poke the C++ when the transition is finished
    const mapLoadingOutroDuration = 5.0;
    $.Schedule(mapLoadingOutroDuration, function () {
        $.GetContextPanel().MapLoadingOutroFinished();
    });
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZG90YV9odWRfcHJlZ2FtZS5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbIi4uLy4uLy4uLy4uLy4uL2NvbnRlbnQvZG90YS9wYW5vcmFtYS9zY3JpcHRzL2h1ZC9kb3RhX2h1ZF9wcmVnYW1lLnRzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiI7QUFBQSxxQ0FBcUM7QUFPckMsMEJBQTBCO0FBQzFCLFNBQVMscUJBQXFCO0lBRTdCLE1BQU0sT0FBTyxHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQztJQUNwQyxPQUFPLENBQUMsV0FBVyxDQUFFLDBCQUEwQixDQUFFLENBQUM7SUFDbEQsT0FBTyxDQUFDLFdBQVcsQ0FBRSxhQUFhLENBQUUsQ0FBQztJQUNyQyxPQUFPLENBQUMsV0FBVyxDQUFFLGVBQWUsQ0FBRSxDQUFDO0lBQ3ZDLE9BQU8sQ0FBQyxXQUFXLENBQUUsWUFBWSxDQUFFLENBQUM7SUFDcEMsT0FBTyxDQUFDLFdBQVcsQ0FBRSxpQkFBaUIsQ0FBRSxDQUFDO0FBQzFDLENBQUM7QUFFRCwwQkFBMEI7QUFDMUIsU0FBUywwQkFBMEI7SUFFbEMscUJBQXFCLEVBQUUsQ0FBQztBQUN6QixDQUFDO0FBRUQsMEJBQTBCO0FBQzFCLFNBQVMsdUJBQXVCO0lBRS9CLENBQUMsQ0FBQyxhQUFhLENBQUUsZ0NBQWdDLEVBQUUsV0FBVyxFQUFFLGNBQWMsRUFBRSxHQUFHLENBQUUsQ0FBQztBQUN2RixDQUFDO0FBRUQsMEJBQTBCO0FBQzFCLFNBQVMsdUJBQXVCO0lBRS9CLENBQUMsQ0FBQyxhQUFhLENBQUUsZ0NBQWdDLEVBQUUsV0FBVyxFQUFFLGNBQWMsRUFBRSxHQUFHLENBQUUsQ0FBQztBQUN2RixDQUFDO0FBRUQsMEJBQTBCO0FBQzFCLFNBQVMsa0JBQWtCO0lBRTFCLE1BQU0sT0FBTyxHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQztJQUVwQyxPQUFPLENBQUMsUUFBUSxDQUFFLDBCQUEwQixDQUFFLENBQUM7SUFDL0MsQ0FBQyxDQUFDLGFBQWEsQ0FBRSxnQ0FBZ0MsRUFBRSxXQUFXLEVBQUUsY0FBYyxFQUFFLEdBQUcsQ0FBRSxDQUFDO0FBQ3ZGLENBQUM7QUFFRCwwQkFBMEI7QUFDMUIsU0FBUyxvQkFBb0I7SUFFNUIsTUFBTSxPQUFPLEdBQUcsQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDO0lBQ3BDLE9BQU8sQ0FBQyxXQUFXLENBQUUsMEJBQTBCLENBQUUsQ0FBQztJQUNsRCxPQUFPLENBQUMsUUFBUSxDQUFFLFlBQVksQ0FBRSxDQUFDO0FBQ2xDLENBQUM7QUFFRCwwQkFBMEI7QUFDMUIsU0FBUyw4QkFBOEI7SUFFdEMsTUFBTSxPQUFPLEdBQUcsQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDO0lBQ3BDLE9BQU8sQ0FBQyxRQUFRLENBQUUsaUJBQWlCLENBQUUsQ0FBQztJQUV0QywrQ0FBK0M7SUFDL0MsTUFBTSx1QkFBdUIsR0FBRyxHQUFHLENBQUM7SUFDcEMsQ0FBQyxDQUFDLFFBQVEsQ0FBRSx1QkFBdUIsRUFBRTtRQUVwQyxDQUFDLENBQUMsZUFBZSxFQUFvQixDQUFDLHVCQUF1QixFQUFFLENBQUM7SUFDakUsQ0FBQyxDQUFFLENBQUM7QUFDTCxDQUFDIn0=