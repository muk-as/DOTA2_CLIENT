"use strict";
/// <reference path="../dota.d.ts" />
/// <reference path="../dota_sequence_actions.ts" />
// ----------------------------------------------------------------------------
//   Skip Ahead Functions
//	 Nearly identical to post game progress skip utility functions
// ----------------------------------------------------------------------------
// Piggy back skipping ahead class on panel
let g_skipReportActions = false;
function IsSkippingReportAhead() {
    return g_skipReportActions;
}
function SetSkippingReportAhead(bSkipAhead) {
    if (g_skipReportActions == bSkipAhead)
        return;
    g_skipReportActions = bSkipAhead;
    if (bSkipAhead) {
        PlayUISoundScript("ui_generic_button_click");
    }
}
function StopSkippingReportAhead() { SetSkippingReportAhead(false); }
function StartSkippingReportAhead() { SetSkippingReportAhead(true); }
// ----------------------------------------------------------------------------
//   StopSkippingAheadAction
// 
//   Define a point at which we stop skipping (usually the end of a screen)
// ----------------------------------------------------------------------------
// Use a StopSkippingAheadAction to define a stopping point
class StopSkippingReportAheadAction extends RunFunctionAction {
    constructor() {
        super(() => StopSkippingReportAhead());
    }
}
// ----------------------------------------------------------------------------
//   SkippableAction
// 
//   Wrap a SkippableAction around any other action to have it skip ahead
//   whenever we're supposed to skip ahead. SkippableAction guarantees that the
//   inner action will at least have start/update/finish called on it.
// ----------------------------------------------------------------------------
class SkippableReportAction extends BaseAction {
    innerAction;
    constructor(actionToMaybeSkip) {
        super();
        this.innerAction = actionToMaybeSkip;
    }
    start() {
        this.innerAction.start();
    }
    update() {
        return this.innerAction.update() && !IsSkippingReportAhead();
    }
    finish() {
        this.innerAction.finish();
    }
}
function GetShardsForHighlightTier(nTier) {
    switch (nTier) {
        case 1: return 200;
        case 2: return 300;
        case 3: return 400;
        default: return 0;
    }
}
function ShowHighlightsTableImmediate(tableID) {
    const screen = $.GetContextPanel();
    const table = $('#' + tableID);
    let nShards = 0;
    const nRows = table.GetChildCount();
    for (let iRow = 0; iRow < nRows; ++iRow) {
        const row = table.GetChild(iRow);
        const nCols = row.GetChildCount();
        for (let iCol = 0; iCol < nCols; ++iCol) {
            const highlight = row.GetChild(iCol);
            const nTier = highlight.GetTier();
            highlight.AddClass("ShowHighlight");
            highlight.AddClass("ShowMedal");
            nShards += GetShardsForHighlightTier(nTier);
        }
    }
    screen.SetDialogVariableInt('screen_shards_earned', nShards);
}
function AnimateHighlightsTable(tableID) {
    SetSkippingReportAhead(false);
    const screen = $.GetContextPanel();
    screen.SetDialogVariableInt('screen_shards_earned', 0);
    const table = $('#' + tableID);
    const seq = new RunSequentialActions();
    seq.actions.push(new DispatchEventAction('DOTABattleReportSetNavEnabled', false));
    seq.actions.push(new SkippableReportAction(new WaitAction(0.4)));
    let nShards = 0;
    const nRows = table.GetChildCount();
    for (let iRow = 0; iRow < nRows; ++iRow) {
        const row = table.GetChild(iRow);
        const nCols = row.GetChildCount();
        for (let iCol = 0; iCol < nCols; ++iCol) {
            const highlight = row.GetChild(iCol);
            const nTier = highlight.GetTier();
            seq.actions.push(new AddClassAction(highlight, "ShowHighlight"));
            let strSound = '';
            switch (nTier) {
                case 0:
                    strSound = 'BattleReport.HighlightReceived.NoTier';
                    break;
                case 1:
                    strSound = 'BattleReport.HighlightReceived.Bronze';
                    break;
                case 2:
                    strSound = 'BattleReport.HighlightReceived.Silver';
                    break;
                case 3:
                    strSound = 'BattleReport.HighlightReceived.Gold';
                    break;
            }
            if (strSound != '') {
                seq.actions.push(new PlaySoundAction(strSound));
            }
            seq.actions.push(new SkippableReportAction(new WaitAction(0.1)));
            const nShardsEarned = GetShardsForHighlightTier(nTier);
            if (nShardsEarned > 0) {
                seq.actions.push(new AddClassAction(highlight, 'ShowMedal'));
                seq.actions.push(new SetDialogVariableIntAction(highlight, 'highlight_shards_earned', nShardsEarned));
                seq.actions.push(new AddClassAction(highlight, 'ShowShardsEarned'));
                seq.actions.push(new SkippableReportAction(new WaitAction(0.5)));
                const soundAction = new PlaySoundAction("Shards.Count");
                seq.actions.push(soundAction);
                const duration = RemapValClamped(nShardsEarned, 0, 300, 0.3, 1.0);
                const par = new RunParallelActions();
                par.actions.push(new SkippableReportAction(new AnimateDialogVariableIntAction(screen, 'screen_shards_earned', nShards, nShards + nShardsEarned, duration)));
                par.actions.push(new SkippableReportAction(new AnimateDialogVariableIntAction(highlight, 'highlight_shards_earned', nShardsEarned, 0, duration)));
                seq.actions.push(new AddClassAction(screen, 'ShardsCounting'));
                seq.actions.push(par);
                seq.actions.push(new StopSoundAction(soundAction));
                seq.actions.push(new RemoveClassAction(highlight, 'ShowShardsEarned'));
                seq.actions.push(new StopSkippingReportAheadAction());
                nShards += nShardsEarned;
            }
            seq.actions.push(new SkippableReportAction(new WaitAction(0.1)));
            seq.actions.push(new RemoveClassAction(screen, 'ShardsCounting'));
        }
    }
    seq.actions.push(new DispatchEventAction('DOTABattleReportSetNavEnabled', true));
    RunSingleAction(seq);
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiYmF0dGxlX3JlcG9ydF9zaGFyZWQuanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyIuLi8uLi8uLi8uLi8uLi9jb250ZW50L2RvdGEvcGFub3JhbWEvc2NyaXB0cy9iYXR0bGVfcmVwb3J0L2JhdHRsZV9yZXBvcnRfc2hhcmVkLnRzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiI7QUFBQSxxQ0FBcUM7QUFDckMsb0RBQW9EO0FBRXBELCtFQUErRTtBQUMvRSx5QkFBeUI7QUFDekIsaUVBQWlFO0FBQ2pFLCtFQUErRTtBQUUvRSwyQ0FBMkM7QUFDM0MsSUFBSSxtQkFBbUIsR0FBWSxLQUFLLENBQUM7QUFDekMsU0FBUyxxQkFBcUI7SUFDN0IsT0FBTyxtQkFBbUIsQ0FBQztBQUM1QixDQUFDO0FBRUQsU0FBUyxzQkFBc0IsQ0FBQyxVQUFtQjtJQUNsRCxJQUFJLG1CQUFtQixJQUFJLFVBQVU7UUFDcEMsT0FBTztJQUNSLG1CQUFtQixHQUFHLFVBQVUsQ0FBQztJQUVqQyxJQUFJLFVBQVUsRUFBRTtRQUNmLGlCQUFpQixDQUFDLHlCQUF5QixDQUFDLENBQUM7S0FDN0M7QUFDRixDQUFDO0FBQ0QsU0FBUyx1QkFBdUIsS0FBVyxzQkFBc0IsQ0FBQyxLQUFLLENBQUMsQ0FBQyxDQUFDLENBQUM7QUFDM0UsU0FBUyx3QkFBd0IsS0FBVyxzQkFBc0IsQ0FBQyxJQUFJLENBQUMsQ0FBQyxDQUFDLENBQUM7QUFFM0UsK0VBQStFO0FBQy9FLDRCQUE0QjtBQUM1QixHQUFHO0FBQ0gsMkVBQTJFO0FBQzNFLCtFQUErRTtBQUUvRSwyREFBMkQ7QUFDM0QsTUFBTSw2QkFBOEIsU0FBUSxpQkFBaUI7SUFDNUQ7UUFDQyxLQUFLLENBQUMsR0FBRyxFQUFFLENBQUMsdUJBQXVCLEVBQUUsQ0FBQyxDQUFDO0lBQ3hDLENBQUM7Q0FDRDtBQUdELCtFQUErRTtBQUMvRSxvQkFBb0I7QUFDcEIsR0FBRztBQUNILHlFQUF5RTtBQUN6RSwrRUFBK0U7QUFDL0Usc0VBQXNFO0FBQ3RF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