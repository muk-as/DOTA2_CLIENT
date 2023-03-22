/// <reference path="dota.d.ts" />
/// <reference path="sequence_actions.ts" />
/// <reference path="dota_sequence_actions.ts" />
var ETreasureOpeningAnimationState;
(function (ETreasureOpeningAnimationState) {
    ETreasureOpeningAnimationState[ETreasureOpeningAnimationState["None"] = 0] = "None";
    ETreasureOpeningAnimationState[ETreasureOpeningAnimationState["Entrance"] = 1] = "Entrance";
    ETreasureOpeningAnimationState[ETreasureOpeningAnimationState["SpinUp"] = 2] = "SpinUp";
    ETreasureOpeningAnimationState[ETreasureOpeningAnimationState["AnimateContents"] = 3] = "AnimateContents";
    ETreasureOpeningAnimationState[ETreasureOpeningAnimationState["Exit"] = 4] = "Exit";
})(ETreasureOpeningAnimationState || (ETreasureOpeningAnimationState = {}));
const strCalaveraTreasureEntityName = 'calavera_chest';
$.Schedule(0.0, function () {
    const treasureModelScene = $('#TreasureModel');
    if (treasureModelScene == null)
        return;
    $.RegisterEventHandler('DOTAScenePanelSceneLoaded', treasureModelScene, function () {
        treasureModelScene.FireEntityInput(strCalaveraTreasureEntityName, 'SetAnimation', 'calavera_chest_idle');
    });
});
function SetTreasureModelAnimation(strAnimationName, flDelay) {
    const sequence = new RunSequentialActions();
    if (flDelay > 0.0) {
        sequence.actions.push(new WaitAction(flDelay));
    }
    sequence.actions.push(new RunFunctionAction(function () {
        const treasureModelScene = $.GetContextPanel().FindChildTraverse('TreasureModel');
        if (treasureModelScene == null)
            return;
        treasureModelScene.FireEntityInput(strCalaveraTreasureEntityName, 'SetAnimation', strAnimationName);
    }));
    RunSingleAction(sequence);
}
function OnAnimationStateChanged(nAnimationState) {
    if (nAnimationState == ETreasureOpeningAnimationState.Entrance) {
        SetTreasureModelAnimation('calavera_chest_antecipation', 0);
    }
    else if (nAnimationState == ETreasureOpeningAnimationState.AnimateContents) {
        SetTreasureModelAnimation('calavera_chest_open', 0);
    }
    else if (nAnimationState == ETreasureOpeningAnimationState.Exit || nAnimationState == ETreasureOpeningAnimationState.None) {
        SetTreasureModelAnimation('calavera_chest_idle', 0.3);
    }
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZGFzaGJvYXJkX3BhZ2VfdGllcl90cmVhc3VyZS5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbImRhc2hib2FyZF9wYWdlX3RpZXJfdHJlYXN1cmUudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IkFBQUEsa0NBQWtDO0FBQ2xDLDRDQUE0QztBQUM1QyxpREFBaUQ7QUFFakQsSUFBSyw4QkFPSjtBQVBELFdBQUssOEJBQThCO0lBRWxDLG1GQUFRLENBQUE7SUFDUiwyRkFBWSxDQUFBO0lBQ1osdUZBQVUsQ0FBQTtJQUNWLHlHQUFtQixDQUFBO0lBQ25CLG1GQUFRLENBQUE7QUFDVCxDQUFDLEVBUEksOEJBQThCLEtBQTlCLDhCQUE4QixRQU9sQztBQUVELE1BQU0sNkJBQTZCLEdBQUcsZ0JBQWdCLENBQUM7QUFFdkQsQ0FBQyxDQUFDLFFBQVEsQ0FBRSxHQUFHLEVBQUU7SUFFaEIsTUFBTSxrQkFBa0IsR0FBRyxDQUFDLENBQUUsZ0JBQWdCLENBQXNCLENBQUM7SUFFckUsSUFBSyxrQkFBa0IsSUFBSSxJQUFJO1FBQzlCLE9BQU87SUFFUixDQUFDLENBQUMsb0JBQW9CLENBQUUsMkJBQTJCLEVBQUUsa0JBQWtCLEVBQUU7UUFFeEUsa0JBQWtCLENBQUMsZUFBZSxDQUFFLDZCQUE2QixFQUFFLGNBQWMsRUFBRSxxQkFBcUIsQ0FBRSxDQUFDO0lBQzVHLENBQUMsQ0FBRSxDQUFDO0FBQ0wsQ0FBQyxDQUFFLENBQUM7QUFFSixTQUFTLHlCQUF5QixDQUFFLGdCQUF3QixFQUFFLE9BQWU7SUFFNUUsTUFBTSxRQUFRLEdBQUcsSUFBSSxvQkFBb0IsRUFBRSxDQUFDO0lBRTVDLElBQUssT0FBTyxHQUFHLEdBQUcsRUFDbEI7UUFDQyxRQUFRLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLFVBQVUsQ0FBRSxPQUFPLENBQUUsQ0FBRSxDQUFDO0tBQ25EO0lBRUQsUUFBUSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxpQkFBaUIsQ0FBRTtRQUU3QyxNQUFNLGtCQUFrQixHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQyxpQkFBaUIsQ0FBRSxlQUFlLENBQXNCLENBQUM7UUFFeEcsSUFBSyxrQkFBa0IsSUFBSSxJQUFJO1lBQzlCLE9BQU87UUFFUixrQkFBa0IsQ0FBQyxlQUFlLENBQUUsNkJBQTZCLEVBQUUsY0FBYyxFQUFFLGdCQUFnQixDQUFFLENBQUM7SUFDdkcsQ0FBQyxDQUFFLENBQUUsQ0FBQztJQUVOLGVBQWUsQ0FBRSxRQUFRLENBQUUsQ0FBQztBQUM3QixDQUFDO0FBRUQsU0FBUyx1QkFBdUIsQ0FBRSxlQUErQztJQUVoRixJQUFLLGVBQWUsSUFBSSw4QkFBOEIsQ0FBQyxRQUFRLEVBQy9EO1FBQ0MseUJBQXlCLENBQUUsNkJBQTZCLEVBQUUsQ0FBQyxDQUFFLENBQUM7S0FDOUQ7U0FDSSxJQUFLLGVBQWUsSUFBSSw4QkFBOEIsQ0FBQyxlQUFlLEVBQzNFO1FBQ0MseUJBQXlCLENBQUUscUJBQXFCLEVBQUUsQ0FBQyxDQUFFLENBQUM7S0FDdEQ7U0FDSSxJQUFLLGVBQWUsSUFBSSw4QkFBOEIsQ0FBQyxJQUFJLElBQUksZUFBZSxJQUFJLDhCQUE4QixDQUFDLElBQUksRUFDMUg7UUFDQyx5QkFBeUIsQ0FBRSxxQkFBcUIsRUFBRSxHQUFHLENBQUUsQ0FBQztLQUN4RDtBQUNGLENBQUMifQ==