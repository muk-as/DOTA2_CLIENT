"use strict";

function PlayFinalLowSound() {
    PlayUISoundScript("crownfall.fishing.score.final.low");
}
function PlayFinalHighSound() {
    PlayUISoundScript("crownfall.fishing.score.final.high");
}
function PlayFinalSound(nScore) {
    PlayUISoundScript("crownfall.fishing.score.final");
}
function QueueScoreRowEffects( rowPanelID, flDelay, bFinalSound, nScore ) {
    let panel = $("#" + rowPanelID);

    //$.Msg(flDelay + " DELAY -> " + rowPanelID);
    $.Schedule(flDelay, function () {
        if (bFinalSound) {
            PlayUISoundScript("crownfall.fishing.score.prefinal");
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
            PlayUISoundScript("crownfall.fishing.score.row");
        }
        panel.AddClass("Animating");
    } )
}
