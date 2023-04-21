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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZG90YV9odWRfcHJlZ2FtZS5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbImRvdGFfaHVkX3ByZWdhbWUudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IkFBQUEscUNBQXFDO0FBT3JDLDBCQUEwQjtBQUMxQixTQUFTLHFCQUFxQjtJQUU3QixNQUFNLE9BQU8sR0FBRyxDQUFDLENBQUMsZUFBZSxFQUFFLENBQUM7SUFDcEMsT0FBTyxDQUFDLFdBQVcsQ0FBRSwwQkFBMEIsQ0FBRSxDQUFDO0lBQ2xELE9BQU8sQ0FBQyxXQUFXLENBQUUsYUFBYSxDQUFFLENBQUM7SUFDckMsT0FBTyxDQUFDLFdBQVcsQ0FBRSxlQUFlLENBQUUsQ0FBQztJQUN2QyxPQUFPLENBQUMsV0FBVyxDQUFFLFlBQVksQ0FBRSxDQUFDO0lBQ3BDLE9BQU8sQ0FBQyxXQUFXLENBQUUsaUJBQWlCLENBQUUsQ0FBQztBQUMxQyxDQUFDO0FBRUQsMEJBQTBCO0FBQzFCLFNBQVMsMEJBQTBCO0lBRWxDLHFCQUFxQixFQUFFLENBQUM7QUFDekIsQ0FBQztBQUVELDBCQUEwQjtBQUMxQixTQUFTLHVCQUF1QjtJQUUvQixDQUFDLENBQUMsYUFBYSxDQUFFLGdDQUFnQyxFQUFFLFdBQVcsRUFBRSxjQUFjLEVBQUUsR0FBRyxDQUFFLENBQUM7QUFDdkYsQ0FBQztBQUVELDBCQUEwQjtBQUMxQixTQUFTLHVCQUF1QjtJQUUvQixDQUFDLENBQUMsYUFBYSxDQUFFLGdDQUFnQyxFQUFFLFdBQVcsRUFBRSxjQUFjLEVBQUUsR0FBRyxDQUFFLENBQUM7QUFDdkYsQ0FBQztBQUVELDBCQUEwQjtBQUMxQixTQUFTLGtCQUFrQjtJQUUxQixNQUFNLE9BQU8sR0FBRyxDQUFDLENBQUMsZUFBZSxFQUFFLENBQUM7SUFFcEMsT0FBTyxDQUFDLFFBQVEsQ0FBRSwwQkFBMEIsQ0FBRSxDQUFDO0lBQy9DLENBQUMsQ0FBQyxhQUFhLENBQUUsZ0NBQWdDLEVBQUUsV0FBVyxFQUFFLGNBQWMsRUFBRSxHQUFHLENBQUUsQ0FBQztBQUN2RixDQUFDO0FBRUQsMEJBQTBCO0FBQzFCLFNBQVMsb0JBQW9CO0lBRTVCLE1BQU0sT0FBTyxHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQztJQUNwQyxPQUFPLENBQUMsV0FBVyxDQUFFLDBCQUEwQixDQUFFLENBQUM7SUFDbEQsT0FBTyxDQUFDLFFBQVEsQ0FBRSxZQUFZLENBQUUsQ0FBQztBQUNsQyxDQUFDO0FBRUQsMEJBQTBCO0FBQzFCLFNBQVMsOEJBQThCO0lBRXRDLE1BQU0sT0FBTyxHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQztJQUNwQyxPQUFPLENBQUMsUUFBUSxDQUFFLGlCQUFpQixDQUFFLENBQUM7SUFFdEMsK0NBQStDO0lBQy9DLE1BQU0sdUJBQXVCLEdBQUcsR0FBRyxDQUFDO0lBQ3BDLENBQUMsQ0FBQyxRQUFRLENBQUUsdUJBQXVCLEVBQUU7UUFFcEMsQ0FBQyxDQUFDLGVBQWUsRUFBb0IsQ0FBQyx1QkFBdUIsRUFBRSxDQUFDO0lBQ2pFLENBQUMsQ0FBRSxDQUFDO0FBQ0wsQ0FBQyJ9