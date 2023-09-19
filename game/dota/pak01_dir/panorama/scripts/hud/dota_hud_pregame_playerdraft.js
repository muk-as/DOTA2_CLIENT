"use strict";
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
function OnPlayerPicked(playerId, playerPanel) {
    $.DispatchEvent('PlaySoundEffect', 'PlayerDraft.Pick');
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZG90YV9odWRfcHJlZ2FtZV9wbGF5ZXJkcmFmdC5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbImRvdGFfaHVkX3ByZWdhbWVfcGxheWVyZHJhZnQudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IjtBQUFBLHFDQUFxQztBQUNyQywyQ0FBMkM7QUFXM0MsSUFBSSxXQUFXLEdBQWtDLElBQUksQ0FBQztBQUV0RCwwQkFBMEI7QUFDMUIsU0FBUyxvQkFBb0I7SUFFNUIsSUFBSyxXQUFXLEtBQUssSUFBSSxFQUN6QjtRQUNDLFdBQVcsQ0FBQyxLQUFLLEVBQUUsQ0FBQztRQUNwQixXQUFXLEdBQUcsSUFBSSxDQUFDO0tBQ25CO0lBRUQsTUFBTSxPQUFPLEdBQUcsQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDO0lBRXBDLE9BQU8sQ0FBQyxXQUFXLENBQUUsV0FBVyxDQUFFLENBQUM7SUFDbkMsT0FBTyxDQUFDLFdBQVcsQ0FBRSxZQUFZLENBQUUsQ0FBQztJQUNwQyxPQUFPLENBQUMsV0FBVyxDQUFFLHFCQUFxQixDQUFFLENBQUM7SUFDN0MsT0FBTyxDQUFDLFdBQVcsQ0FBRSxnQkFBZ0IsQ0FBRSxDQUFDO0lBQ3hDLE9BQU8sQ0FBQyxXQUFXLENBQUUsaUJBQWlCLENBQUUsQ0FBQztJQUV6QyxNQUFNLFVBQVUsR0FBRyxPQUFPLENBQUMscUJBQXFCLENBQUUsWUFBWSxDQUFFLENBQUM7SUFDakUsSUFBSyxVQUFVLEVBQ2Y7UUFDQyxLQUFNLE1BQU0sV0FBVyxJQUFJLFVBQVUsQ0FBQyxRQUFRLEVBQUUsRUFDaEQ7WUFDQyxXQUFXLENBQUMsV0FBVyxDQUFFLHdCQUF3QixDQUFFLENBQUM7U0FDcEQ7S0FDRDtBQUNGLENBQUM7QUFFRCxRQUFRLENBQUMsQ0FBQyxlQUFlLENBQUUsT0FBb0M7SUFFOUQscUVBQXFFO0lBQ3JFLE9BQU8sQ0FBQyxRQUFRLENBQUUsV0FBVyxDQUFFLENBQUM7SUFDaEMsT0FBTyxDQUFDLFFBQVEsQ0FBRSxpQkFBaUIsQ0FBRSxDQUFDO0lBQ3RDLE1BQU0sS0FBSyxDQUFDLEtBQUssQ0FBRSxHQUFHLENBQUUsQ0FBQztJQUV6QixPQUFPLENBQUMsV0FBVyxDQUFFLFdBQVcsQ0FBRSxDQUFDO0lBQ25DLE1BQU0sS0FBSyxDQUFDLEtBQUssQ0FBRSxHQUFHLENBQUUsQ0FBQztJQUV6Qix5QkFBeUI7SUFDekIsT0FBTyxDQUFDLFFBQVEsQ0FBRSxZQUFZLENBQUUsQ0FBQztJQUNqQyxNQUFNLEtBQUssQ0FBQyxLQUFLLENBQUUsR0FBRyxDQUFFLENBQUM7SUFFekIsT0FBTyxDQUFDLFFBQVEsQ0FBRSxpQkFBaUIsQ0FBRSxDQUFDO0lBRXRDLE1BQU0sS0FBSyxDQUFDLEtBQUssQ0FBRSxHQUFHLENBQUUsQ0FBQztJQUN6QixPQUFPLENBQUMsUUFBUSxDQUFFLDJCQUEyQixDQUFFLENBQUM7SUFFaEQsQ0FBQyxDQUFDLGFBQWEsQ0FBRSxpQkFBaUIsRUFBRSx5QkFBeUIsQ0FBRSxDQUFDO0lBQ2hFLE1BQU0sS0FBSyxDQUFDLEtBQUssQ0FBRSxHQUFHLENBQUUsQ0FBQztJQUN6QixPQUFPLENBQUMsV0FBVyxDQUFFLDJCQUEyQixDQUFFLENBQUM7SUFDbkQsT0FBTyxDQUFDLFdBQVcsQ0FBRSxZQUFZLENBQUUsQ0FBQztJQUNwQyxPQUFPLENBQUMsV0FBVyxDQUFFLGlCQUFpQixDQUFFLENBQUM7SUFFekMsTUFBTSxLQUFLLENBQUMsS0FBSyxDQUFFLEdBQUcsQ0FBRSxDQUFDO0lBRXpCLHVDQUF1QztJQUN2QyxPQUFPLENBQUMsUUFBUSxDQUFFLGlCQUFpQixDQUFFLENBQUM7SUFDdEMsTUFBTSxVQUFVLEdBQUcsT0FBTyxDQUFDLHFCQUFxQixDQUFFLFlBQVksQ0FBRSxDQUFDO0lBQ2pFLElBQUssVUFBVSxFQUNmO1FBQ0MsS0FBTSxJQUFJLFdBQVcsSUFBSSxVQUFVLENBQUMsUUFBUSxFQUFFLEVBQzlDO1lBQ0MsV0FBVyxDQUFDLFFBQVEsQ0FBRSx3QkFBd0IsQ0FBRSxDQUFDO1lBQ2pELENBQUMsQ0FBQyxhQUFhLENBQUUsaUJBQWlCLEVBQUUsd0JBQXdCLENBQUUsQ0FBQztZQUMvRCxNQUFNLEtBQUssQ0FBQyxLQUFLLENBQUUsR0FBRyxDQUFFLENBQUM7U0FDekI7S0FDRDtJQUVELDJCQUEyQjtJQUMzQixPQUFPLENBQUMsUUFBUSxDQUFFLGdCQUFnQixDQUFFLENBQUM7SUFDckMsT0FBTyxDQUFDLHNCQUFzQixFQUFFLENBQUM7QUFDbEMsQ0FBQztBQUVELDBCQUEwQjtBQUMxQixTQUFTLE9BQU87SUFFZiwrQkFBK0I7SUFDL0Isb0JBQW9CLEVBQUUsQ0FBQztJQUV2QixNQUFNLE9BQU8sR0FBRyxDQUFDLENBQUMsZUFBZSxFQUFpQyxDQUFDO0lBQ25FLFdBQVcsR0FBRyxJQUFJLEtBQUssQ0FBQyxlQUFlLEVBQUUsQ0FBQztJQUMxQyxLQUFLLENBQUMsV0FBVyxDQUFFLFFBQVEsQ0FBQyxNQUFNLEtBQUssQ0FBQyxDQUFDLGVBQWUsQ0FBRSxPQUFPLENBQUUsQ0FBQyxDQUFDLENBQUMsRUFBRSxXQUFXLENBQUMsTUFBTSxDQUFFLENBQUM7QUFDOUYsQ0FBQztBQUVELDBCQUEwQjtBQUMxQixTQUFTLGNBQWMsQ0FBRSxRQUFnQixFQUFFLFdBQW9CO0lBRTlELENBQUMsQ0FBQyxhQUFhLENBQUUsaUJBQWlCLEVBQUUsa0JBQWtCLENBQUUsQ0FBQztBQUMxRCxDQUFDIn0=