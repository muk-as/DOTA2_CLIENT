"use strict";
/// <reference path="../../dota.d.ts" />
/// <reference path="../../util.ts" />
/// <reference path="../../dota_sequence_actions.ts" />
let g_bFadeOutEnabled = true;
function IsFadeOutEnabled() {
    return g_bFadeOutEnabled;
}
function SetFadeOutEnabled(bEnabled) {
    g_bFadeOutEnabled = bEnabled;
    const toggleButton = $('#ToggleFadeOut');
    if (toggleButton) {
        toggleButton.SetSelected(bEnabled);
    }
}
function ToggleFadeOutEnabled() {
    SetFadeOutEnabled(!IsFadeOutEnabled());
}
class WaitForHeroModelsAction extends WaitForConditionAction {
    constructor() {
        super(() => $.GetContextPanel().AreHeroModelsLoaded());
    }
}
class WaitForScenesToLoadAction {
    scenePanels;
    loadingSeq;
    uiSeq;
    constructor(...scenePanels) {
        this.scenePanels = scenePanels;
    }
    start() {
        this.loadingSeq = new RunSequentialActions();
        const par = new RunParallelActions();
        for (let i = 0; i < this.scenePanels.length; ++i) {
            par.actions.push(new WaitForClassAction(this.scenePanels[i], 'SceneLoaded'));
        }
        this.loadingSeq.actions.push(par);
        this.loadingSeq.actions.push(new WaitOneFrameAction());
        this.loadingSeq.actions.push(new WaitForHeroModelsAction());
        this.uiSeq = new RunSequentialActions();
        this.uiSeq.actions.push(new WaitAction(2.0));
        this.uiSeq.actions.push(new AddClassAction($.GetContextPanel(), 'LoadingVersusScreen'));
        this.loadingSeq.start();
        this.uiSeq.start();
    }
    update() {
        this.uiSeq.update();
        return this.loadingSeq.update();
    }
    ;
    finish() {
        this.uiSeq.finish();
        this.loadingSeq.finish();
        $.GetContextPanel().RemoveClass('LoadingVersusScreen');
    }
    ;
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZG90YV9odWRfdmVyc3VzX3NjZW5lX3NoYXJlZC5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbIi4uLy4uLy4uLy4uLy4uLy4uL2NvbnRlbnQvZG90YS9wYW5vcmFtYS9zY3JpcHRzL2h1ZC92ZXJzdXMvZG90YV9odWRfdmVyc3VzX3NjZW5lX3NoYXJlZC50cyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiO0FBQUEsd0NBQXdDO0FBQ3hDLHNDQUFzQztBQUN0Qyx1REFBdUQ7QUFHdkQsSUFBSSxpQkFBaUIsR0FBRyxJQUFJLENBQUM7QUFDN0IsU0FBUyxnQkFBZ0I7SUFFeEIsT0FBTyxpQkFBaUIsQ0FBQztBQUMxQixDQUFDO0FBQ0QsU0FBUyxpQkFBaUIsQ0FBRSxRQUFpQjtJQUU1QyxpQkFBaUIsR0FBRyxRQUFRLENBQUM7SUFFN0IsTUFBTSxZQUFZLEdBQUcsQ0FBQyxDQUF5QixnQkFBZ0IsQ0FBRSxDQUFDO0lBQ2xFLElBQUssWUFBWSxFQUNqQjtRQUNDLFlBQVksQ0FBQyxXQUFXLENBQUUsUUFBUSxDQUFFLENBQUM7S0FDckM7QUFDRixDQUFDO0FBQ0QsU0FBUyxvQkFBb0I7SUFFNUIsaUJBQWlCLENBQUUsQ0FBQyxnQkFBZ0IsRUFBRSxDQUFFLENBQUM7QUFDMUMsQ0FBQztBQUdELE1BQU0sdUJBQXdCLFNBQVEsc0JBQXNCO0lBRTNEO1FBRUMsS0FBSyxDQUFFLEdBQUcsRUFBRSxDQUFDLENBQUMsQ0FBQyxlQUFlLEVBQXdCLENBQUMsbUJBQW1CLEVBQUUsQ0FBRSxDQUFDO0lBQ2hGLENBQUM7Q0FDRDtBQUdELE1BQU0seUJBQXlCO0lBRTlCLFdBQVcsQ0FBWTtJQUV2QixVQUFVLENBQXdCO0lBQ2xDLEtBQUssQ0FBd0I7SUFFN0IsWUFBYSxHQUFHLFdBQXNCO1FBRXJDLElBQUksQ0FBQyxXQUFXLEdBQUcsV0FBVyxDQUFDO0lBQ2hDLENBQUM7SUFFRCxLQUFLO1FBR0osSUFBSSxDQUFDLFVBQVUsR0FBRyxJQUFJLG9CQUFvQixFQUFFLENBQUM7UUFFN0MsTUFBTSxHQUFHLEdBQUcsSUFBSSxrQkFBa0IsRUFBRSxDQUFDO1FBQ3JDLEtBQU0sSUFBSSxDQUFDLEdBQUcsQ0FBQyxFQUFFLENBQUMsR0FBRyxJQUFJLENBQUMsV0FBVyxDQUFDLE1BQU0sRUFBRSxFQUFFLENBQUMsRUFDakQ7WUFDQyxHQUFHLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGtCQUFrQixDQUFFLElBQUksQ0FBQyxXQUFXLENBQUMsQ0FBQyxDQUFDLEVBQUUsYUFBYSxDQUFFLENBQUUsQ0FBQztTQUNqRjtRQUNELElBQUksQ0FBQyxVQUFVLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxHQUFHLENBQUUsQ0FBQztRQUlwQyxJQUFJLENBQUMsVUFBVSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxrQkFBa0IsRUFBRSxDQUFFLENBQUM7UUFDekQsSUFBSSxDQUFDLFVBQVUsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksdUJBQXVCLEVBQUUsQ0FBRSxDQUFDO1FBRzlELElBQUksQ0FBQyxLQUFLLEdBQUcsSUFBSSxvQkFBb0IsRUFBRSxDQUFDO1FBQ3hDLElBQUksQ0FBQyxLQUFLLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLFVBQVUsQ0FBRSxHQUFHLENBQUUsQ0FBRSxDQUFDO1FBQ2pELElBQUksQ0FBQyxLQUFLLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGNBQWMsQ0FBRSxDQUFDLENBQUMsZUFBZSxFQUF3QixFQUFFLHFCQUFxQixDQUFFLENBQUUsQ0FBQztRQUdsSCxJQUFJLENBQUMsVUFBVSxDQUFDLEtBQUssRUFBRSxDQUFDO1FBQ3hCLElBQUksQ0FBQyxLQUFLLENBQUMsS0FBSyxFQUFFLENBQUM7SUFDcEIsQ0FBQztJQUVELE1BQU07UUFHTCxJQUFJLENBQUMsS0FBSyxDQUFDLE1BQU0sRUFBRSxDQUFDO1FBQ3BCLE9BQU8sSUFBSSxDQUFDLFVBQVUsQ0FBQyxNQUFNLEVBQUUsQ0FBQztJQUNqQyxDQUFDO0lBQUEsQ0FBQztJQUVGLE1BQU07UUFFTCxJQUFJLENBQUMsS0FBSyxDQUFDLE1BQU0sRUFBRSxDQUFDO1FBQ3BCLElBQUksQ0FBQyxVQUFVLENBQUMsTUFBTSxFQUFFLENBQUM7UUFDekIsQ0FBQyxDQUFDLGVBQWUsRUFBd0IsQ0FBQyxXQUFXLENBQUUscUJBQXFCLENBQUUsQ0FBQztJQUNoRixDQUFDO0lBQUEsQ0FBQztDQUNGIn0=