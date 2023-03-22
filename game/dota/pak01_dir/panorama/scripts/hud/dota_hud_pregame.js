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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZG90YV9odWRfcHJlZ2FtZS5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbImRvdGFfaHVkX3ByZWdhbWUudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IkFBQUEscUNBQXFDO0FBT3JDLDBCQUEwQjtBQUMxQixTQUFTLHFCQUFxQjtJQUU3QixNQUFNLE9BQU8sR0FBRyxDQUFDLENBQUMsZUFBZSxFQUFFLENBQUM7SUFDcEMsT0FBTyxDQUFDLFdBQVcsQ0FBRSwwQkFBMEIsQ0FBRSxDQUFDO0lBQ2xELE9BQU8sQ0FBQyxXQUFXLENBQUUsYUFBYSxDQUFFLENBQUM7SUFDckMsT0FBTyxDQUFDLFdBQVcsQ0FBRSxlQUFlLENBQUUsQ0FBQztJQUN2QyxPQUFPLENBQUMsV0FBVyxDQUFFLFlBQVksQ0FBRSxDQUFDO0lBQ3BDLE9BQU8sQ0FBQyxXQUFXLENBQUUsaUJBQWlCLENBQUUsQ0FBQztBQUMxQyxDQUFDO0FBRUQsMEJBQTBCO0FBQzFCLFNBQVMsdUJBQXVCO0lBRS9CLENBQUMsQ0FBQyxhQUFhLENBQUUsZ0NBQWdDLEVBQUUsV0FBVyxFQUFFLGNBQWMsRUFBRSxHQUFHLENBQUUsQ0FBQztBQUN2RixDQUFDO0FBRUQsMEJBQTBCO0FBQzFCLFNBQVMsdUJBQXVCO0lBRS9CLENBQUMsQ0FBQyxhQUFhLENBQUUsZ0NBQWdDLEVBQUUsV0FBVyxFQUFFLGNBQWMsRUFBRSxHQUFHLENBQUUsQ0FBQztBQUN2RixDQUFDO0FBRUQsMEJBQTBCO0FBQzFCLFNBQVMsa0JBQWtCO0lBRTFCLE1BQU0sT0FBTyxHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQztJQUVwQyxPQUFPLENBQUMsUUFBUSxDQUFFLDBCQUEwQixDQUFFLENBQUM7SUFDL0MsQ0FBQyxDQUFDLGFBQWEsQ0FBRSxnQ0FBZ0MsRUFBRSxXQUFXLEVBQUUsY0FBYyxFQUFFLEdBQUcsQ0FBRSxDQUFDO0FBQ3ZGLENBQUM7QUFFRCwwQkFBMEI7QUFDMUIsU0FBUyxvQkFBb0I7SUFFNUIsTUFBTSxPQUFPLEdBQUcsQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDO0lBQ3BDLE9BQU8sQ0FBQyxXQUFXLENBQUUsMEJBQTBCLENBQUUsQ0FBQztJQUNsRCxPQUFPLENBQUMsUUFBUSxDQUFFLFlBQVksQ0FBRSxDQUFDO0FBQ2xDLENBQUM7QUFFRCwwQkFBMEI7QUFDMUIsU0FBUyw4QkFBOEI7SUFFdEMsTUFBTSxPQUFPLEdBQUcsQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDO0lBQ3BDLE9BQU8sQ0FBQyxRQUFRLENBQUUsaUJBQWlCLENBQUUsQ0FBQztJQUV0QywrQ0FBK0M7SUFDL0MsTUFBTSx1QkFBdUIsR0FBRyxHQUFHLENBQUM7SUFDcEMsQ0FBQyxDQUFDLFFBQVEsQ0FBRSx1QkFBdUIsRUFBRTtRQUVwQyxDQUFDLENBQUMsZUFBZSxFQUFvQixDQUFDLHVCQUF1QixFQUFFLENBQUM7SUFDakUsQ0FBQyxDQUFFLENBQUM7QUFDTCxDQUFDIn0=