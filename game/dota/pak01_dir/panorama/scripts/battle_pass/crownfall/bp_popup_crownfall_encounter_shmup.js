"use strict";
/// <reference path="../../dota.d.ts" />
/// <reference path="../../common/async.ts" />
let gGameStateAsyncAbort = null;
let gUIEventAsyncAbort = null;
let gVersion = 0;
;
;
;
let gVictoryInfo = null;
const kState = {
    Attract: 0,
    Running: 1,
    Paused: 2,
    GameOver: 3,
    Victory: 4
};
function _CancelUIAnimations() {
    if (gUIEventAsyncAbort !== null) {
        gUIEventAsyncAbort.abort();
        gUIEventAsyncAbort = null;
    }
    const panel = $.GetContextPanel();
    if (!panel)
        return;
    // undo any animation edit state we might have added
    panel.RemoveClass("BossWarning_Active");
    panel.RemoveClass("BossWarning_Show");
    panel.RemoveClass("BossWarning_PlayAnimation");
    panel.RemoveClass("BossWarning_PlaySubtitleAnimation");
}
function _RunUIAnimation(animFunc) {
    _CancelUIAnimations();
    const panel = $.GetContextPanel();
    gUIEventAsyncAbort = new Async.AbortController();
    Async.RunSequence(function* (abortSignal) { yield* animFunc(panel, abortSignal); }, gUIEventAsyncAbort.signal);
}
function _CancelStateAnimations() {
    if (gGameStateAsyncAbort !== null) {
        gGameStateAsyncAbort.abort();
        gGameStateAsyncAbort = null;
    }
    const panel = $.GetContextPanel();
    if (!panel)
        return;
    // undo any animation edit state we might have added
    panel.RemoveClass("ShowGameOverFade");
    panel.RemoveClass("ShowGameOverText");
    panel.RemoveClass("ShowGameOverButton");
    panel.RemoveClass("Victory_Active");
    panel.RemoveClass("Victory_Show");
    panel.RemoveClass("Victory_Title");
    panel.RemoveClass("Victory_PerformanceSummary");
    panel.RemoveClass("Victory_ScoreTitle");
    panel.RemoveClass("Victory_ScoreValue");
    panel.RemoveClass("Victory_ComboTitle");
    panel.RemoveClass("Victory_ComboValue");
    panel.RemoveClass("Victory_RatingTitle");
    panel.RemoveClass("Victory_RatingValue");
    panel.RemoveClass("Victory_ShowButtons");
    const scoreCategories = panel.FindChildInLayoutFile("VictoryCategories");
    if (scoreCategories) {
        scoreCategories.RemoveAndDeleteChildren();
    }
}
function _RunStateAnimation(animFunc) {
    _CancelStateAnimations();
    _CancelUIAnimations();
    const panel = $.GetContextPanel();
    gGameStateAsyncAbort = new Async.AbortController();
    Async.RunSequence(function* (abortSignal) { yield* animFunc(panel, abortSignal); }, gGameStateAsyncAbort.signal);
}
function* _GameOverAnimation(panel) {
    // Wait for death animation and camera to stop
    yield Async.Delay(1.5);
    // Fade to gray
    panel.AddClass("ShowGameOverFade");
    yield Async.Delay(1.5);
    // game over
    panel.AddClass("ShowGameOverText");
    yield Async.Delay(1);
    // play again
    panel.AddClass("ShowGameOverButton");
}
function DebugScoreInfo(score, token) {
    return { token: token, score: score, score_per_instance: 0 };
}
const kDebugVictoryInfo = {
    total_score: 513500 + 1838 + 424600 + 500000 + 160000 + 49000,
    scores: [
        DebugScoreInfo(513500, '#DOTA_Crownfall_Shmup_ScoreCategory_EnemyKill'),
        DebugScoreInfo(1838, '#DOTA_Crownfall_Shmup_ScoreCategory_Damage'),
        DebugScoreInfo(424600, '#DOTA_Crownfall_Shmup_ScoreCategory_Combo'),
        DebugScoreInfo(500000, '#DOTA_Crownfall_Shmup_ScoreCategory_BossKill'),
        DebugScoreInfo(160000, '#DOTA_Crownfall_Shmup_ScoreCategory_RemainingLives'),
        DebugScoreInfo(49000, '#DOTA_Crownfall_Shmup_ScoreCategory_RemainingTime'),
    ]
};
function* _VictoryAnimation(panel, abortSignal) {
    var victoryInfo;
    if (gVictoryInfo) {
        victoryInfo = gVictoryInfo;
    }
    else {
        // really expect this to be set, but let's muddle forward if it isn't
        $.Warning('shmup victory screen with no score info\n');
        victoryInfo = kDebugVictoryInfo;
    }
    // Run this in parallel using the same abort signal.
    var bScoreUpdateInProgress = true;
    var nCurrentScore = 0;
    function* ScoreAnim() {
        var nDisplayedScore = 0;
        var nDisplayedScorePerTick = 0;
        var msLast = Date.now();
        var msLeftover = 0;
        var sfx = null;
        const SCORE_TICKS = 23;
        const MS_PER_TICK = 1000.0 / 60.0; // 60fps
        panel.SetDialogVariableInt("victory_score", nDisplayedScore);
        while (nCurrentScore > nDisplayedScore || bScoreUpdateInProgress) {
            yield Async.NextFrame();
            const msCurrent = Date.now();
            msLeftover += msCurrent - msLast;
            msLast = msCurrent;
            if (nCurrentScore > nDisplayedScore) {
                var nTicks = Math.floor(msLeftover / MS_PER_TICK);
                msLeftover %= MS_PER_TICK;
                if (!sfx) {
                    sfx = PlayUISoundScript('XP.Count');
                }
                if (nTicks > 0) {
                    // speed up if we are slow, then update the score
                    const diff = nCurrentScore - nDisplayedScore;
                    nDisplayedScorePerTick = Math.max(nDisplayedScorePerTick, Math.ceil(diff / SCORE_TICKS));
                    nDisplayedScore = Math.min(nCurrentScore, nDisplayedScore + nDisplayedScorePerTick * nTicks);
                    panel.SetDialogVariableInt("victory_score", nDisplayedScore);
                }
            }
            else {
                nDisplayedScorePerTick = 0;
                msLeftover = 0;
                if (sfx) {
                    StopUISoundScript(sfx);
                    sfx = null;
                }
            }
        }
        if (sfx) {
            StopUISoundScript(sfx);
            sfx = null;
        }
        panel.SetDialogVariableInt("victory_score", nCurrentScore);
    }
    Async.RunSequence(ScoreAnim, abortSignal);
    // Wait for boss to explode
    yield Async.Delay(1.5);
    // Enable victory screen at low opacity to let all the animations and transitions reset.
    panel.AddClass("Victory_Active");
    // Fade out
    panel.AddClass("ShowGameOverFade");
    yield Async.Delay(2);
    // Show Victory screen
    panel.AddClass("Victory_Show");
    // Animate
    yield Async.Delay(1);
    panel.AddClass("Victory_Title");
    yield Async.Delay(2);
    panel.AddClass("Victory_PerformanceSummary");
    yield Async.Delay(1);
    panel.AddClass("Victory_ComboTitle");
    yield Async.Delay(0.3);
    panel.AddClass("Victory_ComboValue");
    yield Async.Delay(0.3);
    panel.AddClass("Victory_ScoreTitle");
    yield Async.Delay(0.3);
    panel.AddClass("Victory_ScoreValue");
    yield Async.Delay(0.1);
    const scoreCategories = panel.FindChildInLayoutFile("VictoryCategories");
    if (scoreCategories) {
        scoreCategories.RemoveAndDeleteChildren();
        for (const scoreItem of victoryInfo.scores) {
            var scoreItemPanel = $.CreatePanel('Panel', scoreCategories, undefined);
            scoreItemPanel.BLoadLayoutSnippet('VictoryScoreItem');
            scoreItemPanel.SetDialogVariableLocString('item_name', scoreItem.token);
            scoreItemPanel.SetDialogVariableInt('item_score', scoreItem.score);
            yield Async.NextFrame();
            scoreItemPanel.AddClass('ShowScoreItem');
            yield Async.Delay(0.6);
            nCurrentScore += scoreItem.score;
            yield Async.Delay(0.1);
        }
    }
    // done with categories, set total
    nCurrentScore = victoryInfo.total_score;
    $.Msg('Current score: ' + nCurrentScore);
    bScoreUpdateInProgress = false; // kill the parallel anim for the score when it catches up
    yield Async.Delay(0.3);
    yield Async.Delay(1);
    panel.AddClass("Victory_RatingTitle");
    yield Async.Delay(2);
    panel.AddClass("Victory_RatingValue");
    yield Async.Delay(0.8);
    panel.TriggerClass("CameraShake");
    $.DispatchEvent('PlaySoundEffect', 'HeroBadgeLevelUpReward.ShowReward'); // "stamp" sfx
    yield Async.Delay(2);
    panel.AddClass("Victory_ShowButtons");
    // Victory screen complete, submit scores to leaderboard
    panel.NotifyVictoryScreenComplete();
    // Leave classes active -- we'll reset them when you leave the victory screen
}
/* Called from C++ Code */
function UIStateChange(eState) {
    if (gVersion != $.GetContextPanel().GetAttributeInt('scriptversion', 0)) {
        return;
    }
    $.Msg('SHMUP: changing to game_state ' + eState);
    if (eState == kState.GameOver) {
        _RunStateAnimation(_GameOverAnimation);
    }
    else if (eState == kState.Victory) {
        _RunStateAnimation(_VictoryAnimation);
    }
    else {
        _CancelStateAnimations();
        _CancelUIAnimations();
    }
}
function* _BossWarningAnimation(panel) {
    // Wake up the panel.  It will still be basically transparent (opacity 0.0001)
    // Then wait a frame to make sure all animation and transition state is properly initialized before we start messing with things.
    panel.AddClass("BossWarning_Active");
    yield Async.NextFrame();
    //$.DispatchEvent( 'PlaySoundEffect', 'PlayerDraft.VersusSting' );
    // Start showing the panel (transition opacity)
    panel.AddClass("BossWarning_Show");
    yield Async.Delay(0.6);
    // Sound fx
    $.DispatchEvent('PlaySoundEffect', 'crownfall.shmup.boss.warning');
    // Burn in the text
    panel.AddClass("BossWarning_PlayAnimation");
    yield Async.Delay(0.3);
    panel.AddClass("BossWarning_PlaySubtitleAnimation");
    // Wait for the player to read everything
    yield Async.Delay(6);
    // Hide the panel (transition opacity)
    panel.RemoveClass("BossWarning_Show");
    yield Async.Delay(1);
    // Now that the panel is hidden, tear down the animation state
    panel.RemoveClass("BossWarning_PlayAnimation");
    panel.RemoveClass("BossWarning_PlaySubtitleAnimation");
    yield Async.NextFrame();
    // Finally, put the panel back to sleep
    panel.RemoveClass("BossWarning_Active");
}
/* Called from C++ code */
function BossWarning() {
    $.Msg('SHMUP: boss warning');
    _RunStateAnimation(_BossWarningAnimation);
}
/* Called from C++ */
function PopulateVictoryScreen(info) {
    gVictoryInfo = info;
}
/* Called on every panel load */
function OnScriptLoad() {
    //$.Msg( 'script loaded' );
    _CancelUIAnimations();
    const panel = $.GetContextPanel();
    if (panel) {
        gVersion = panel.GetAttributeInt('scriptversion', 0) + 1;
        panel.SetAttributeInt('scriptversion', gVersion);
        $.Schedule(0.1, () => UIStateChange(panel.game_state));
    }
}
OnScriptLoad();
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiYnBfcG9wdXBfY3Jvd25mYWxsX2VuY291bnRlcl9zaG11cC5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbIi4uLy4uLy4uLy4uLy4uLy4uL2NvbnRlbnQvZG90YS9wYW5vcmFtYS9zY3JpcHRzL2JhdHRsZV9wYXNzL2Nyb3duZmFsbC9icF9wb3B1cF9jcm93bmZhbGxfZW5jb3VudGVyX3NobXVwLnRzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiI7QUFBQSx3Q0FBd0M7QUFDeEMsOENBQThDO0FBRTlDLElBQUksb0JBQW9CLEdBQWlDLElBQUksQ0FBQztBQUM5RCxJQUFJLGtCQUFrQixHQUFpQyxJQUFJLENBQUM7QUFDNUQsSUFBSSxRQUFRLEdBQVcsQ0FBQyxDQUFDO0FBTXhCLENBQUM7QUFRRCxDQUFDO0FBTUQsQ0FBQztBQUVGLElBQUksWUFBWSxHQUFvQyxJQUFJLENBQUM7QUFFekQsTUFBTSxNQUFNLEdBQUc7SUFDWCxPQUFPLEVBQUUsQ0FBQztJQUNWLE9BQU8sRUFBRSxDQUFDO0lBQ1YsTUFBTSxFQUFFLENBQUM7SUFDVCxRQUFRLEVBQUUsQ0FBQztJQUNYLE9BQU8sRUFBRSxDQUFDO0NBQ2IsQ0FBQztBQUdGLFNBQVMsbUJBQW1CO0lBRXhCLElBQUssa0JBQWtCLEtBQUssSUFBSSxFQUNoQztRQUNJLGtCQUFrQixDQUFDLEtBQUssRUFBRSxDQUFDO1FBQzNCLGtCQUFrQixHQUFHLElBQUksQ0FBQztLQUM3QjtJQUVELE1BQU0sS0FBSyxHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQztJQUNsQyxJQUFLLENBQUMsS0FBSztRQUNQLE9BQU87SUFFWCxvREFBb0Q7SUFDcEQsS0FBSyxDQUFDLFdBQVcsQ0FBRSxvQkFBb0IsQ0FBRSxDQUFDO0lBQzFDLEtBQUssQ0FBQyxXQUFXLENBQUUsa0JBQWtCLENBQUUsQ0FBQztJQUN4QyxLQUFLLENBQUMsV0FBVyxDQUFFLDJCQUEyQixDQUFFLENBQUM7SUFDakQsS0FBSyxDQUFDLFdBQVcsQ0FBRSxt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