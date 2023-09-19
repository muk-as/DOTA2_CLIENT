"use strict";
/// <reference path="../dota_sequence_actions.ts" />
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
    const screen = $.GetContextPanel();
    screen.SetDialogVariableInt('screen_shards_earned', 0);
    const table = $('#' + tableID);
    const seq = new RunSequentialActions();
    seq.actions.push(new DispatchEventAction('DOTABattleReportSetNavEnabled', false));
    seq.actions.push(new WaitAction(0.4));
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
            seq.actions.push(new WaitAction(0.1));
            const nShardsEarned = GetShardsForHighlightTier(nTier);
            if (nShardsEarned > 0) {
                seq.actions.push(new AddClassAction(highlight, 'ShowMedal'));
                seq.actions.push(new SetDialogVariableIntAction(highlight, 'highlight_shards_earned', nShardsEarned));
                seq.actions.push(new AddClassAction(highlight, 'ShowShardsEarned'));
                seq.actions.push(new WaitAction(0.5));
                const duration = RemapValClamped(nShardsEarned, 0, 300, 0.3, 1.0);
                const par = new RunParallelActions();
                par.actions.push(new AnimateDialogVariableIntAction(screen, 'screen_shards_earned', nShards, nShards + nShardsEarned, duration));
                par.actions.push(new AnimateDialogVariableIntAction(highlight, 'highlight_shards_earned', nShardsEarned, 0, duration));
                par.actions.push(new PlaySoundForDurationAction("Shards.Count", duration));
                seq.actions.push(new AddClassAction(screen, 'ShardsCounting'));
                seq.actions.push(par);
                seq.actions.push(new PlaySoundAction("Shards.Stop"));
                seq.actions.push(new RemoveClassAction(highlight, 'ShowShardsEarned'));
                nShards += nShardsEarned;
            }
            seq.actions.push(new WaitAction(0.1));
            seq.actions.push(new RemoveClassAction(screen, 'ShardsCounting'));
        }
    }
    seq.actions.push(new DispatchEventAction('DOTABattleReportSetNavEnabled', true));
    RunSingleAction(seq);
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiYmF0dGxlX3JlcG9ydF9zaGFyZWQuanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyJiYXR0bGVfcmVwb3J0X3NoYXJlZC50cyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiO0FBQUEsb0RBQW9EO0FBT3BELFNBQVMseUJBQXlCLENBQUUsS0FBYTtJQUVoRCxRQUFTLEtBQUssRUFDZDtRQUNDLEtBQUssQ0FBQyxDQUFDLENBQUMsT0FBTyxHQUFHLENBQUM7UUFDbkIsS0FBSyxDQUFDLENBQUMsQ0FBQyxPQUFPLEdBQUcsQ0FBQztRQUNuQixLQUFLLENBQUMsQ0FBQyxDQUFDLE9BQU8sR0FBRyxDQUFDO1FBQ25CLE9BQU8sQ0FBQyxDQUFDLE9BQU8sQ0FBQyxDQUFDO0tBQ2xCO0FBQ0YsQ0FBQztBQUVELFNBQVMsNEJBQTRCLENBQUUsT0FBZTtJQUVyRCxNQUFNLE1BQU0sR0FBRyxDQUFDLENBQUMsZUFBZSxFQUFFLENBQUM7SUFDbkMsTUFBTSxLQUFLLEdBQUcsQ0FBQyxDQUFFLEdBQUcsR0FBRyxPQUFPLENBQUcsQ0FBQztJQUVsQyxJQUFJLE9BQU8sR0FBRyxDQUFDLENBQUM7SUFDaEIsTUFBTSxLQUFLLEdBQUcsS0FBSyxDQUFDLGFBQWEsRUFBRSxDQUFDO0lBQ3BDLEtBQU0sSUFBSSxJQUFJLEdBQUcsQ0FBQyxFQUFFLElBQUksR0FBRyxLQUFLLEVBQUUsRUFBRSxJQUFJLEVBQ3hDO1FBQ0MsTUFBTSxHQUFHLEdBQUcsS0FBSyxDQUFDLFFBQVEsQ0FBRSxJQUFJLENBQUUsQ0FBQztRQUNuQyxNQUFNLEtBQUssR0FBRyxHQUFHLENBQUMsYUFBYSxFQUFFLENBQUM7UUFFbEMsS0FBTSxJQUFJLElBQUksR0FBRyxDQUFDLEVBQUUsSUFBSSxHQUFHLEtBQUssRUFBRSxFQUFFLElBQUksRUFDeEM7WUFDQyxNQUFNLFNBQVMsR0FBRyxHQUFHLENBQUMsUUFBUSxDQUFFLElBQUksQ0FBaUMsQ0FBQztZQUN0RSxNQUFNLEtBQUssR0FBRyxTQUFTLENBQUMsT0FB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