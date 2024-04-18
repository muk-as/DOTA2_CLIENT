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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiYmF0dGxlX3JlcG9ydF9zaGFyZWQuanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyIuLi8uLi8uLi8uLi8uLi9jb250ZW50L2RvdGEvcGFub3JhbWEvc2NyaXB0cy9iYXR0bGVfcmVwb3J0L2JhdHRsZV9yZXBvcnRfc2hhcmVkLnRzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiI7QUFBQSxvREFBb0Q7QUFPcEQsU0FBUyx5QkFBeUIsQ0FBRSxLQUFhO0lBRWhELFFBQVMsS0FBSyxFQUNkO1FBQ0MsS0FBSyxDQUFDLENBQUMsQ0FBQyxPQUFPLEdBQUcsQ0FBQztRQUNuQixLQUFLLENBQUMsQ0FBQyxDQUFDLE9BQU8sR0FBRyxDQUFDO1FBQ25CLEtBQUssQ0FBQyxDQUFDLENBQUMsT0FBTyxHQUFHLENBQUM7UUFDbkIsT0FBTyxDQUFDLENBQUMsT0FBTyxDQUFDLENBQUM7S0FDbEI7QUFDRixDQUFDO0FBRUQsU0FBUyw0QkFBNEIsQ0FBRSxPQUFlO0lBRXJELE1BQU0sTUFBTSxHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQztJQUNuQyxNQUFNLEtBQUssR0FBRyxDQUFDLENBQUUsR0FBRyxHQUFHLE9BQU8sQ0FBRyxDQUFDO0lBRWxDLElBQUksT0FBTyxHQUFHLENBQUMsQ0FBQztJQUNoQixNQUFNLEtBQUssR0FBRyxLQUFLLENBQUMsYUFBYSxFQUFFLENBQUM7SUFDcEMsS0FBTSxJQUFJLElBQUksR0FBRyxDQUFDLEVBQUUsSUFBSSxHQUFHLEtBQUssRUFBRSxFQUFFLElBQUksRUFDeEM7UUFDQyxNQUFNLEdBQUcsR0FBRyxLQUFLLENBQUMsUUFBUSxDQUFFLElBQUksQ0FBRSxDQUFDO1FBQ25DLE1BQU0sS0FBSyxHQUFHLEdBQUcsQ0FBQyxhQUFhLEVBQUUsQ0FBQztRQUVsQyxLQUFNLElBQUksSUFBSSxHQUFHLENBQUMsRUFBRSxJQUFJLEdBQUcsS0FBSyxFQUFFLEVBQUUsSUFBSSxFQUN4QztZQUNDLE1BQU0sU0FBUyxHQUFHLEdBQUcsQ0FBQyxR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