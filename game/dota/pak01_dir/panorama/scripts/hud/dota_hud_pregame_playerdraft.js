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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZG90YV9odWRfcHJlZ2FtZV9wbGF5ZXJkcmFmdC5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbIi4uLy4uLy4uLy4uLy4uL2NvbnRlbnQvZG90YS9wYW5vcmFtYS9zY3JpcHRzL2h1ZC9kb3RhX2h1ZF9wcmVnYW1lX3BsYXllcmRyYWZ0LnRzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiI7QUFBQSxxQ0FBcUM7QUFDckMsMkNBQTJDO0FBVzNDLElBQUksV0FBVyxHQUFrQyxJQUFJLENBQUM7QUFFdEQsMEJBQTBCO0FBQzFCLFNBQVMsb0JBQW9CO0lBRTVCLElBQUssV0FBVyxLQUFLLElBQUksRUFDekI7UUFDQyxXQUFXLENBQUMsS0FBSyxFQUFFLENBQUM7UUFDcEIsV0FBVyxHQUFHLElBQUksQ0FBQztLQUNuQjtJQUVELE1BQU0sT0FBTyxHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQztJQUVwQyxPQUFPLENBQUMsV0FBVyxDQUFFLFdBQVcsQ0FBRSxDQUFDO0lBQ25DLE9BQU8sQ0FBQyxXQUFXLENBQUUsWUFBWSxDQUFFLENBQUM7SUFDcEMsT0FBTyxDQUFDLFdBQVcsQ0FBRSxxQkFBcUIsQ0FBRSxDQUFDO0lBQzdDLE9BQU8sQ0FBQyxXQUFXLENBQUUsZ0JBQWdCLENBQUUsQ0FBQztJQUN4QyxPQUFPLENBQUMsV0FBVyxDQUFFLGlCQUFpQixDQUFFLENBQUM7SUFFekMsTUFBTSxVQUFVLEdBQUcsT0FBTyxDQUFDLHFCQUFxQixDQUFFLFlBQVksQ0FBRSxDQUFDO0lBQ2pFLElBQUssVUFBVSxFQUNmO1FBQ0MsS0FBTSxNQUFNLFdBQVcsSUFBSSxVQUFVLENBQUMsUUFBUSxFQUFFLEVBQ2hEO1lBQ0MsV0FBVyxDQUFDLFdBQVcsQ0FBRSx3QkFBd0IsQ0FBRSxDQUFDO1NBQ3BEO0tBQ0Q7QUFDRixDQUFDO0FBRUQsUUFBUSxDQUFDLENBQUMsZUFBZSxDQUFFLE9BQW9DO0lBRTlELHFFQUFxRTtJQUNyRSxPQUFPLENBQUMsUUFBUSxDQUFFLFdBQVcs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