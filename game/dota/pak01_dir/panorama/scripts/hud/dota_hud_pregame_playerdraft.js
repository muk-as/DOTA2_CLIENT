/// <reference path="../dota.d.ts" />
/// <reference path="../common/async.ts" />
let gAsyncAbort = null;
/* Called from C++ Code */
function CancelIntroAnimation() {
    if (gAsyncAbort !== null) {
        gAsyncAbort.abort();
        gAsyncAbort = null;
    }
    const preGame = $.GetContextPanel();
    preGame.RemoveClass('PD__Intro');
    preGame.RemoveClass('PD__Versus');
    preGame.RemoveClass('PD__VersusAnimation');
    preGame.RemoveClass('PD__StartDraft');
    preGame.RemoveClass('PD__ListPlayers');
    const playerList = preGame.FindChildInLayoutFile('PlayerList');
    if (playerList) {
        for (const playerPanel of playerList.Children()) {
            playerPanel.RemoveClass('DraftPlayer__PlayIntro');
        }
    }
}
function* _IntroAnimation(preGame) {
    // Show the intro screen and wait for the opening animation to finish
    preGame.AddClass('PD__Intro');
    preGame.AddClass('PD__Description');
    yield Async.Delay(3.5);
    preGame.RemoveClass('PD__Intro');
    yield Async.Delay(0.2);
    // Show VS screen for ~2s
    preGame.AddClass('PD__Versus');
    yield Async.Delay(0.1);
    preGame.AddClass('PD__VersusBadge');
    yield Async.Delay(0.3);
    preGame.AddClass('PD__VersusCaptainsCollide');
    $.DispatchEvent('PlaySoundEffect', 'PlayerDraft.VersusSting');
    yield Async.Delay(2.5);
    preGame.RemoveClass('PD__VersusCaptainsCollide');
    preGame.RemoveClass('PD__Versus');
    preGame.RemoveClass('PD__Description');
    yield Async.Delay(0.2);
    // Hide VS screen, bring in the players
    preGame.AddClass('PD__ListPlayers');
    const playerList = preGame.FindChildInLayoutFile('PlayerList');
    if (playerList) {
        for (let playerPanel of playerList.Children()) {
            playerPanel.AddClass('DraftPlayer__PlayIntro');
            $.DispatchEvent('PlaySoundEffect', 'PlayerDraft.ShowPlayer');
            yield Async.Delay(0.1);
        }
    }
    // Ready to start the draft
    preGame.AddClass('PD__StartDraft');
    preGame.IntroAnimationComplete();
}
/* Called from C++ Code */
function OnIntro() {
    // hotload: clear any old state
    CancelIntroAnimation();
    const preGame = $.GetContextPanel();
    gAsyncAbort = new Async.AbortController();
    Async.RunSequence(function* () { yield* _IntroAnimation(preGame); }, gAsyncAbort.signal);
}
/* Called from C++ Code */
function OnPlayerPanelSpawned(playerId, playerPanel) {
}
/* Called from C++ Code */
function OnPlayerPicked(playerId, playerPanel) {
    $.DispatchEvent('PlaySoundEffect', 'PlayerDraft.Pick');
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZG90YV9odWRfcHJlZ2FtZV9wbGF5ZXJkcmFmdC5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbImRvdGFfaHVkX3ByZWdhbWVfcGxheWVyZHJhZnQudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IkFBQUEscUNBQXFDO0FBQ3JDLDJDQUEyQztBQVczQyxJQUFJLFdBQVcsR0FBa0MsSUFBSSxDQUFDO0FBRXRELDBCQUEwQjtBQUMxQixTQUFTLG9CQUFvQjtJQUU1QixJQUFLLFdBQVcsS0FBSyxJQUFJLEVBQ3pCO1FBQ0MsV0FBVyxDQUFDLEtBQUssRUFBRSxDQUFDO1FBQ3BCLFdBQVcsR0FBRyxJQUFJLENBQUM7S0FDbkI7SUFFRCxNQUFNLE9BQU8sR0FBRyxDQUFDLENBQUMsZUFBZSxFQUFFLENBQUM7SUFFcEMsT0FBTyxDQUFDLFdBQVcsQ0FBRSxXQUFXLENBQUUsQ0FBQztJQUNuQyxPQUFPLENBQUMsV0FBVyxDQUFFLFlBQVksQ0FBRSxDQUFDO0lBQ3BDLE9BQU8sQ0FBQyxXQUFXLENBQUUscUJBQXFCLENBQUUsQ0FBQztJQUM3QyxPQUFPLENBQUMsV0FBVyxDQUFFLGdCQUFnQixDQUFFLENBQUM7SUFDeEMsT0FBTyxDQUFDLFdBQVcsQ0FBRSxpQkFBaUIsQ0FBRSxDQUFDO0lBRXpDLE1BQU0sVUFBVSxHQUFHLE9BQU8sQ0FBQyxxQkFBcUIsQ0FBRSxZQUFZLENBQUUsQ0FBQztJQUNqRSxJQUFLLFVBQVUsRUFDZjtRQUNDLEtBQU0sTUFBTSxXQUFXLElBQUksVUFBVSxDQUFDLFFBQVEsRUFBRSxFQUNoRDtZQUNDLFdBQVcsQ0FBQyxXQUFXLENBQUUsd0JBQXdCLENBQUUsQ0FBQztTQUNwRDtLQUNEO0FBQ0YsQ0FBQztBQUVELFFBQVEsQ0FBQyxDQUFDLGVBQWUsQ0FBRSxPQUFvQztJQUU5RCxxRUFBcUU7SUFDckUsT0FBTyxDQUFDLFFBQVEsQ0FBRSxXQUFXLENBQUUsQ0FBQztJQUNoQyxPQUFPLENBQUMsUUFBUSxDQUFFLGlCQUFpQixDQUFFLENBQUM7SUFDdEMsTUFBTSxLQUFLLENBQUMsS0FBSyxDQUFFLEdBQUcsQ0FBRSxDQUFDO0lBRXpCLE9BQU8sQ0FBQyxXQUFXLENBQUUsV0FBVyxDQUFFLENBQUM7SUFDbkMsTUFBTSxLQUFLLENBQUMsS0FBSyxDQUFFLEdBQUcsQ0FBRSxDQUFDO0lBRXpCLHlCQUF5QjtJQUN6QixPQUFPLENBQUMsUUFBUSxDQUFFLFlBQVksQ0FBRSxDQUFDO0lBQ2pDLE1BQU0sS0FBSyxDQUFDLEtBQUssQ0FBRSxHQUFHLENBQUUsQ0FBQztJQUV6QixPQUFPLENBQUMsUUFBUSxDQUFFLGlCQUFpQixDQUFFLENBQUM7SUFFdEMsTUFBTSxLQUFLLENBQUMsS0FBSyxDQUFFLEdBQUcsQ0FBRSxDQUFDO0lBQ3pCLE9BQU8sQ0FBQyxRQUFRLENBQUUsMkJBQTJCLENBQUUsQ0FBQztJQUVoRCxDQUFDLENBQUMsYUFBYSxDQUFFLGlCQUFpQixFQUFFLHlCQUF5QixDQUFFLENBQUM7SUFDaEUsTUFBTSxLQUFLLENBQUMsS0FBSyxDQUFFLEdBQUcsQ0FBRSxDQUFDO0lBQ3pCLE9BQU8sQ0FBQyxXQUFXLENBQUUsMkJBQTJCLENBQUUsQ0FBQztJQUNuRCxPQUFPLENBQUMsV0FBVyxDQUFFLFlBQVksQ0FBRSxDQUFDO0lBQ3BDLE9BQU8sQ0FBQyxXQUFXLENBQUUsaUJBQWlCLENBQUUsQ0FBQztJQUV6QyxNQUFNLEtBQUssQ0FBQyxLQUFLLENBQUUsR0FBRyxDQUFFLENBQUM7SUFFekIsdUNBQXVDO0lBQ3ZDLE9BQU8sQ0FBQyxRQUFRLENBQUUsaUJBQWlCLENBQUUsQ0FBQztJQUN0QyxNQUFNLFVBQVUsR0FBRyxPQUFPLENBQUMscUJBQXFCLENBQUUsWUFBWSxDQUFFLENBQUM7SUFDakUsSUFBSyxVQUFVLEVBQ2Y7UUFDQyxLQUFNLElBQUksV0FBVyxJQUFJLFVBQVUsQ0FBQyxRQUFRLEVBQUUsRUFDOUM7WUFDQyxXQUFXLENBQUMsUUFBUSxDQUFFLHdCQUF3QixDQUFFLENBQUM7WUFDakQsQ0FBQyxDQUFDLGFBQWEsQ0FBRSxpQkFBaUIsRUFBRSx3QkFBd0IsQ0FBRSxDQUFDO1lBQy9ELE1BQU0sS0FBSyxDQUFDLEtBQUssQ0FBRSxHQUFHLENBQUUsQ0FBQztTQUN6QjtLQUNEO0lBRUQsMkJBQTJCO0lBQzNCLE9BQU8sQ0FBQyxRQUFRLENBQUUsZ0JBQWdCLENBQUUsQ0FBQztJQUNyQyxPQUFPLENBQUMsc0JBQXNCLEVBQUUsQ0FBQztBQUNsQyxDQUFDO0FBRUQsMEJBQTBCO0FBQzFCLFNBQVMsT0FBTztJQUVmLCtCQUErQjtJQUMvQixvQkFBb0IsRUFBRSxDQUFDO0lBRXZCLE1BQU0sT0FBTyxHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQWlDLENBQUM7SUFDbkUsV0FBVyxHQUFHLElBQUksS0FBSyxDQUFDLGVBQWUsRUFBRSxDQUFDO0lBQzFDLEtBQUssQ0FBQyxXQUFXLENBQUUsUUFBUSxDQUFDLE1BQU0sS0FBSyxDQUFDLENBQUMsZUFBZSxDQUFFLE9BQU8sQ0FBRSxDQUFDLENBQUMsQ0FBQyxFQUFFLFdBQVcsQ0FBQyxNQUFNLENBQUUsQ0FBQztBQUM5RixDQUFDO0FBRUQsMEJBQTBCO0FBQzFCLFNBQVMsb0JBQW9CLENBQUUsUUFBZ0IsRUFBRSxXQUFvQjtBQUVyRSxDQUFDO0FBRUQsMEJBQTBCO0FBQzFCLFNBQVMsY0FBYyxDQUFFLFFBQWdCLEVBQUUsV0FBb0I7SUFFOUQsQ0FBQyxDQUFDLGFBQWEsQ0FBRSxpQkFBaUIsRUFBRSxrQkFBa0IsQ0FBRSxDQUFDO0FBQzFELENBQUMifQ==