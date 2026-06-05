"use strict";

function PlayFinalLowSound() {
    PlayUISoundEvent("crownfall.fishing.score.final.low");
}
function PlayFinalHighSound() {
    PlayUISoundEvent("crownfall.fishing.score.final.high");
}
function PlayFinalSound(nScore) {
    PlayUISoundEvent("crownfall.fishing.score.final");
}
function QueueScoreRowEffects( rowPanelID, flDelay, bFinalSound, nScore ) {
    let panel = $("#" + rowPanelID);

    //$.Msg(flDelay + " DELAY -> " + rowPanelID);
    $.Schedule(flDelay, function () {
        if (bFinalSound) {
            PlayUISoundEvent("crownfall.fishing.score.prefinal");
            if (nScore < 1000) {
                $.Schedule(0.8, PlayFinalLowSound);
            }
            else if (nScore > 2000) {
                $.Schedule(0.8, PlayFinalHighSound);
            }
            else {
                $.Schedule(0.8, PlayFinalSound);
            }
        }
        else {
            PlayUISoundEvent("crownfall.fishing.score.row");
        }
        panel.AddClass("Animating");
    } )
}
