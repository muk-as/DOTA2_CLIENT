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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZG90YV9odWRfcHJlZ2FtZS5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbImRvdGFfaHVkX3ByZWdhbWUudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IjtBQUFBLHFDQUFxQztBQU9yQywwQkFBMEI7QUFDMUIsU0FBUyxxQkFBcUI7SUFFN0IsTUFBTSxPQUFPLEdBQUcsQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDO0lBQ3BDLE9BQU8sQ0FBQyxXQUFXLENBQUUsMEJBQTBCLENBQUUsQ0FBQztJQUNsRCxPQUFPLENBQUMsV0FBVyxDQUFFLGFBQWEsQ0FBRSxDQUFDO0lBQ3JDLE9BQU8sQ0FBQyxXQUFXLENBQUUsZUFBZSxDQUFFLENBQUM7SUFDdkMsT0FBTyxDQUFDLFdBQVcsQ0FBRSxZQUFZLENBQUUsQ0FBQztJQUNwQyxPQUFPLENBQUMsV0FBVyxDQUFFLGlCQUFpQixDQUFFLENBQUM7QUFDMUMsQ0FBQztBQUVELDBCQUEwQjtBQUMxQixTQUFTLDBCQUEwQjtJQUVsQyxxQkFBcUIsRUFBRSxDQUFDO0FBQ3pCLENBQUM7QUFFRCwwQkFBMEI7QUFDMUIsU0FBUyx1QkFBdUI7SUFFL0IsQ0FBQyxDQUFDLGFBQWEsQ0FBRSxnQ0FBZ0MsRUFBRSxXQUFXLEVBQUUsY0FBYyxFQUFFLEdBQUcsQ0FBRSxDQUFDO0FBQ3ZGLENBQUM7QUFFRCwwQkFBMEI7QUFDMUIsU0FBUyx1QkFBdUI7SUFFL0IsQ0FBQyxDQUFDLGFBQWEsQ0FBRSxnQ0FBZ0MsRUFBRSxXQUFXLEVBQUUsY0FBYyxFQUFFLEdBQUcsQ0FBRSxDQUFDO0FBQ3ZGLENBQUM7QUFFRCwwQkFBMEI7QUFDMUIsU0FBUyxrQkFBa0I7SUFFMUIsTUFBTSxPQUFPLEdBQUcsQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDO0lBRXBDLE9BQU8sQ0FBQyxRQUFRLENBQUUsMEJBQTBCLENBQUUsQ0FBQztJQUMvQyxDQUFDLENBQUMsYUFBYSxDQUFFLGdDQUFnQyxFQUFFLFdBQVcsRUFBRSxjQUFjLEVBQUUsR0FBRyxDQUFFLENBQUM7QUFDdkYsQ0FBQztBQUVELDBCQUEwQjtBQUMxQixTQUFTLG9CQUFvQjtJQUU1QixNQUFNLE9BQU8sR0FBRyxDQUFDLENBQUMsZUFBZSxFQUFFLENBQUM7SUFDcEMsT0FBTyxDQUFDLFdBQVcsQ0FBRSwwQkFBMEIsQ0FBRSxDQUFDO0lBQ2xELE9BQU8sQ0FBQyxRQUFRLENBQUUsWUFBWSxDQUFFLENBQUM7QUFDbEMsQ0FBQztBQUVELDBCQUEwQjtBQUMxQixTQUFTLDhCQUE4QjtJQUV0QyxNQUFNLE9BQU8sR0FBRyxDQUFDLENBQUMsZUFBZSxFQUFFLENBQUM7SUFDcEMsT0FBTyxDQUFDLFFBQVEsQ0FBRSxpQkFBaUIsQ0FBRSxDQUFDO0lBRXRDLCtDQUErQztJQUMvQyxNQUFNLHVCQUF1QixHQUFHLEdBQUcsQ0FBQztJQUNwQyxDQUFDLENBQUMsUUFBUSxDQUFFLHVCQUF1QixFQUFFO1FBRXBDLENBQUMsQ0FBQyxlQUFlLEVBQW9CLENBQUMsdUJBQXVCLEVBQUUsQ0FBQztJQUNqRSxDQUFDLENBQUUsQ0FBQztBQUNMLENBQUMifQ==