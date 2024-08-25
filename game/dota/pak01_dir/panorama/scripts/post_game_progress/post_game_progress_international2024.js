"use strict";
/// <reference path="../dota.d.ts" />
/// <reference path="../util.ts" />
/// <reference path="../sequence_actions.ts" />
/// <reference path="post_game_progress_utils.ts" />
/// <reference path="post_game_progress_sequence.ts" />
const EVENT_ID_INTERNATIONAL_2024 = 49;
class AnimateInternational2024ScreenAction extends RunSequentialActions {
    data;
    constructor(data) {
        super();
        this.data = data.international2024_progress;
    }
    start() {
        // Create the screen and do a bunch of initial setup
        let panel = StartNewScreen('International2024ProgressScreen');
        panel.BLoadLayoutSnippet("International2024Progress");
        let levelShield = panel.FindChildInLayoutFile('LevelShield');
        let weeklyProgressBar = panel.FindChildInLayoutFile('WeeklyProgressBar');
        let compendiumLevelProgressBar = panel.FindChildInLayoutFile('CompendiumLevelProgressBar');
        panel.SetDialogVariableInt("current_week", this.data.current_week);
        panel.SetDialogVariableInt("weekly_points_max", this.data.weekly_progress_limit);
        weeklyProgressBar.min = 0;
        weeklyProgressBar.max = this.data.weekly_progress_limit;
        weeklyProgressBar.lowervalue = this.data.weekly_progress_initial;
        weeklyProgressBar.uppervalue = this.data.weekly_progress_initial;
        panel.SetDialogVariableInt("weekly_points_current", this.data.weekly_progress_initial);
        panel.SetDialogVariable("match_points_reason", $.Localize(this.data.match_points_received_reason));
        panel.SetDialogVariableInt("match_points", this.data.match_points_received);
        panel.SetDialogVariableInt("daily_win_points", this.data.daily_win_points_received);
        let nCurrentLevelPoints = this.data.compendium_points % this.data.compendium_points_per_level;
        panel.SetDialogVariableInt("current_level_progress", nCurrentLevelPoints);
        panel.SetDialogVariableInt("max_level_progress", this.data.compendium_points_per_level);
        compendiumLevelProgressBar.min = 0;
        compendiumLevelProgressBar.max = this.data.compendium_points_per_level;
        compendiumLevelProgressBar.lowervalue = nCurrentLevelPoints;
        compendiumLevelProgressBar.uppervalue = nCurrentLevelPoints;
        levelShield.SetEventLevel(EVENT_ID_INTERNATIONAL_2024, this.data.compendium_level);
        this.actions.push(new AddScreenLinkAction(panel, 'International2024Progress', '#DOTA_EventName_International2024'));
        this.actions.push(new WaitAction(0.5));
        this.actions.push(new AddClassAction(panel, 'ShowMatchProgress'));
        this.actions.push(new WaitAction(0.5));
        let nTotalPointsEarned = 0;
        let matchPointsRow = panel.FindChildInLayoutFile('MatchPointsRow');
        this.actions.push(new AddClassAction(matchPointsRow, 'ShowRow'));
        this.actions.push(new WaitAction(0.5));
        nTotalPointsEarned += this.data.match_points_received;
        if (this.data.daily_win_points_received > 0) {
            let dailyWinRow = panel.FindChildInLayoutFile('DailyWinRow');
            this.actions.push(new AddClassAction(dailyWinRow, 'ShowRow'));
            this.actions.push(new WaitAction(0.5));
            nTotalPointsEarned += this.data.daily_win_points_received;
        }
        // Now animate the points earned.
        let nTotalPointsToAnimate = nTotalPointsEarned;
        let nWeeklyProgressPoints = this.data.weekly_progress_initial;
        let nCurrentCompendiumLevel = this.data.compendium_level;
        while (nTotalPointsToAnimate > 0) {
            let nPointsToNextLevel = this.data.compendium_points_per_level - nCurrentLevelPoints;
            let nPointsToWeeklyCap = this.data.weekly_progress_limit - nWeeklyProgressPoints;
            let nPointsToAnimate = Math.min(nPointsToNextLevel, nPointsToWeeklyCap, nTotalPointsToAnimate);
            let fAnimateSeconds = 1.0;
            let par = new RunParallelActions();
            par.actions.push(new AnimateDialogVariableIntAction(panel, 'weekly_points_current', nWeeklyProgressPoints, nWeeklyProgressPoints + nPointsToAnimate, fAnimateSeconds));
            par.actions.push(new AnimateProgressBarWithMiddleAction(weeklyProgressBar, nWeeklyProgressPoints, nWeeklyProgressPoints + nPointsToAnimate, fAnimateSeconds));
            par.actions.push(new AnimateDialogVariableIntAction(panel, 'current_level_progress', nCurrentLevelPoints, nCurrentLevelPoints + nPointsToAnimate, fAnimateSeconds));
            par.actions.push(new AnimateProgressBarWithMiddleAction(compendiumLevelProgressBar, nCurrentLevelPoints, nCurrentLevelPoints + nPointsToAnimate, fAnimateSeconds));
            par.actions.push(new PlaySoundForDurationAction("XP.Count", fAnimateSeconds));
            this.actions.push(par);
            if (nPointsToNextLevel == nPointsToAnimate) {
                nCurrentCompendiumLevel++;
                nCurrentLevelPoints = 0;
                this.actions.push(new RunFunctionAction(function () {
                    levelShield.SetEventLevel(EVENT_ID_INTERNATIONAL_2024, nCurrentCompendiumLevel);
                    compendiumLevelProgressBar.lowervalue = 0;
                }));
                this.actions.push(new TriggerClassAction(levelShield, 'LevelUp'));
            }
            else {
                nCurrentLevelPoints += nPointsToAnimate;
            }
            // If we hit the weekly cap, flash that, then we're done.
            if (nPointsToWeeklyCap == nPointsToAnimate) {
                // todo(ericl): flash the weekly cap
                break;
            }
            nWeeklyProgressPoints += nPointsToAnimate;
            nTotalPointsToAnimate -= nPointsToAnimate;
        }
        this.actions.push(new WaitAction(2.0));
        this.actions.push(new StopSkippingAheadAction());
        this.actions.push(new SkippableAction(new WaitAction(1.0)));
        super.start();
    }
}
function TestAnimateInternational2024() {
    const data = {
        international2024_progress: {
            compendium_level: 23,
            compendium_points: 23250,
            compendium_points_per_level: 1000,
            current_week: 1,
            weekly_progress_initial: 1250,
            weekly_progress_limit: 10000,
            match_points_received: 250,
            match_points_received_reason: "#DOTA_Compendium2024_WeeklyChallenge_WonMatch",
            daily_win_points_received: 1000,
        }
    };
    TestProgressAnimation(data);
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoicG9zdF9nYW1lX3Byb2dyZXNzX2ludGVybmF0aW9uYWwyMDI0LmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsiLi4vLi4vLi4vLi4vLi4vY29udGVudC9kb3RhL3Bhbm9yYW1hL3NjcmlwdHMvcG9zdF9nYW1lX3Byb2dyZXNzL3Bvc3RfZ2FtZV9wcm9ncmVzc19pbnRlcm5hdGlvbmFsMjAyNC50cyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiO0FBQUEscUNBQXFDO0FBQ3JDLG1DQUFtQztBQUNuQywrQ0FBK0M7QUFDL0Msb0RBQW9EO0FBQ3BELHVEQUF1RDtBQUV2RCxNQUFNLDJCQUEyQixHQUFHLEVBQUUsQ0FBQztBQW9CdkMsTUFBTSxvQ0FBcUMsU0FBUSxvQkFBb0I7SUFFdEUsSUFBSSxDQUE4QjtJQUVsQyxZQUFhLElBQWlDO1FBRTdDLEtBQUssRUFBRSxDQUFDO1FBQ1IsSUFBSSxDQUFDLElBQUksR0FBRyxJQUFJLENBQUMsMEJBQTBCLENBQUM7SUFDN0MsQ0FBQztJQUVELEtBQUs7UUFFSixvREFBb0Q7UUFDcEQsSUFBSSxLQUFLLEdBQUcsY0FBYyxDQUFFLGlDQUFpQyxDQUFFLENBQUM7UUFDaEUsS0FBSyxDQUFDLGtCQUFrQixDQUFFLDJCQUEyQixDQUFFLENBQUM7UUFFeEQsSUFBSSxXQUFXLEdBQTJCLEtBQUssQ0FBQyxxQkFBcUIsQ0FBRSxhQUFhLENBQTRCLENBQUM7UUFDakgsSUFBSSxpQkFBaUIsR0FBNEIsS0FBSyxDQUFDLHFCQUFxQixDQUFFLG1CQUFtQixDQUE2QixDQUFDO1FBQy9ILElBQUksMEJBQTBCLEdBQTRCLEtBQUssQ0FBQyxxQkFBcUIsQ0FBRSw0QkFBNEIsQ0FBNkIsQ0FBQztRQUVqSixLQUFLLENBQUMsb0JBQW9CLENBQUUsY0FBYyxFQUFFLElBQUksQ0FBQyxJQUFJLENBQUMsWUFBWSxDQUFFLENBQUM7UUFDckUsS0FBSyxDQUFDLG9CQUFvQixDQUFFLG1CQUFtQixFQUFFLElBQUksQ0FBQyxJQUFJLENBQUMscUJBQXFCLENBQUUsQ0FBQztRQUNuRixpQkFBaUIsQ0FBQyxHQUFHLEdBQUcsQ0FBQyxDQUFDO1FBQzFCLGlCQUFpQixDQUFDLEdBQUcsR0FBRyxJQUFJLENBQUMsSUFBSSxDQUFDLHFCQUFxQixDQUFDO1FBQ3hELGlCQUFpQixDQUFDLFVBQVUsR0FBRyxJQUFJLENBQUMsSUFBSSxDQUFDLHVCQUF1QixDQUFDO1FBQ2pFLGlCQUFpQixDQUFDLFVBQVUsR0FBRyxJQUFJLENBQUMsSUFBSSxDQUFDLHVCQUF1QixDQUFDO1FBRWpFLEtBQUssQ0FBQyxvQkFBb0IsQ0FBRSx1QkFBdUIsRUFBRSxJQUFJLENBQUMsSUFBSSxDQUFDLHVCQUF1QixDQUFFLENBQUM7UUFDekYsS0FBSyxDQUFDLGlCQUFpQixDQUFFLHFCQUFxQixFQUFFLENBQUMsQ0FBQyxRQUFRLENBQUUsSUFBSSxDQUFDLElBQUksQ0FBQyw0QkFBNEIsQ0FBRSxDQUFFLENBQUM7UUFDdkcsS0FBSyxDQUFDLG9CQUFvQixDQUFFLGNBQWMsRUFBRSxJQUFJLENBQUMsSUFBSSxDQUFDLHFCQUFxQixDQUFFLENBQUM7UUFDOUUsS0FBSyxDQUFDLG9CQUFvQixDQUFFLGtCQUFrQixFQUFFLElBQUksQ0FBQyxJQUFJLENBQUMseUJBQXlCLENBQUUsQ0FBQztRQUV0RixJQUFJLG1CQUFtQixHQUFHLElBQUksQ0FBQyxJQUFJLENBQUMsaUJBQWlCLEdBQUcsSUFBSSxDQUFDLElBQUksQ0FBQywyQkFBMkIsQ0FBQztRQUM5RixLQUFLLENBQUMsb0JBQW9CLENBQUUsd0JBQXdCLEVBQUUsbUJBQW1CLENBQUUsQ0FBQztRQUM1RSxLQUFLLENBQUMsb0JBQW9CLENBQUUsb0JBQW9CLEVBQUUsSUFBSSxDQUFDLElBQUksQ0FBQywyQkFBMkIsQ0FBRSxDQUFDO1FBQzFGLDBCQUEwQixDQUFDLEdBQUcsR0FBRyxDQUFDLENBQUM7UUFDbkMsMEJBQTBCLENBQUMsR0FBRyxHQUFHLElBQUksQ0FBQyxJQUFJLENBQUMsMkJBQTJCLENBQUM7UUFDdkUsMEJBQTBCLENBQUMsVUFBVSxHQUFHLG1CQUFtQixDQUFDO1FBQzVELDBCQUEwQixDQUFDLFVBQVUsR0FBRyxtQkFBbUIsQ0FBQztRQUU1RCxXQUFXLENBQUMsYUFBYSxDQUFFLDJCQUEyQixFQUFFLElBQUksQ0FBQyxJQUFJLENBQUMsZ0JBQWdCLENBQUUsQ0FBQztRQUVyRixJQUFJLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLG1CQUFtQixDQUFFLEtBQUssRUFBRSwyQkFBMkIsRUFBRSxtQ0FBbUMsQ0FBRSxDQUFFLENBQUM7UUFFeEgsSUFBSSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxVQUFVLENBQUUsR0FBRyxDQUFFLENBQUUsQ0FBQztRQUMzQyxJQUFJLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGNBQWMsQ0FBRSxLQUFLLEVBQUUsbUJBQW1CLENBQUUsQ0FBRSxDQUFDO1FBQ3RFLElBQUksQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksVUFBVSxDQUFFLEdBQUcsQ0FBRSxDQUFFLENBQUM7UUFFM0MsSUFBSSxrQkFBa0IsR0FBWSxDQUFDLENBQUM7UUFFcEMsSUFBSSxjQUFjLEdBQVksS0FBSyxDQUFDLHFCQUFxQixDQUFFLGdCQUFnQixDQUFFLENBQUM7UUFDOUUsSUFBSSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxjQUFjLENBQUUsY0FBYyxFQUFFLFNBQVMsQ0FBRSxDQUFFLENBQUM7UUFDckUsSUFBSSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxVQUFVLENBQUUsR0FBRyxDQUFFLENBQUUsQ0FBQztRQUMzQyxrQkFBa0IsSUFBSSxJQUFJLENBQUMsSUFBSSxDQUFDLHFCQUFxQixDQUFDO1FBRXRELElBQUssSUFBSSxDQUFDLElBQUksQ0FBQyx5QkFBeUIsR0FBRyxDQUFDLEVBQzVDO1lBQ0MsSUFBSSxXQUFXLEdBQVksS0FBSyxDQUFDLHFCQUFxQixDQUFFLGFBQWEsQ0FBRSxDQUFDO1lBQ3hFLElBQUksQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksY0FBYyxDQUFFLFdBQVcsRUFBRSxTQUFTLENBQUUsQ0FBRSxDQUFDO1lBQ2xFLElBQUksQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksVUFBVSxDQUFFLEdBQUcsQ0FBRSxDQUFFLENBQUM7WUFDM0Msa0JBQWtCLElBQUksSUFBSSxDQUFDLElBQUksQ0FBQyx5QkFBeUIsQ0FBQztTQUMxRDtRQUVELGlDQUFpQztRQUNqQyxJQUFJLHFCQUFxQixHQUFXLGtCQUFrQixDQUFDO1FBQ3ZELElBQUkscUJBQXFCLEdBQVcsSUFBSSxDQUFDLElBQUksQ0FBQyx1QkFBdUIsQ0FBQztRQUN0RSxJQUFJLHVCQUF1QixHQUFXLElBQUksQ0FBQyxJQUFJLENBQUMsZ0JBQWdCLENBQUM7UUFDakUsT0FBUSxxQkFBcUIsR0FBRyxDQUFDLEVBQ2pDO1lBQ0MsSUFBSSxrQkFBa0IsR0FBVyxJQUFJLENBQUMsSUFBSSxDQUFDLDJCQUEyQixHQUFHLG1CQUFtQixDQUFDO1lBQzdGLElBQUksa0JBQWtCLEdBQVcsSUFBSSxDQUFDLElBQUksQ0FBQyxxQkFBcUIsR0FBRyxxQkFBcUIsQ0FBQztZQUV6RixJQUFJLGdCQUFnQixHQUFXLElBQUksQ0FBQyxHQUFHLENBQUUsa0JBQWtCLEVBQUUsa0JBQWtCLEVBQUUscUJBQXFCLENBQUUsQ0FBQztZQUV6RyxJQUFJLGVBQWUsR0FBVyxHQUFHLENBQUM7WUFDbEMsSUFBSSxHQUFHLEdBQXVCLElBQUksa0JBQWtCLEVBQUUsQ0FBQztZQUN2RCxHQUFHLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLDhCQUE4QixDQUFFLEtBQUssRUFBRSx1QkFBdUIsRUFBRSxxQkFBcUIsRUFBRSxxQkFBcUIsR0FBRyxnQkFBZ0IsRUFBRSxlQUFlLENBQUUsQ0FBRSxDQUFDO1lBQzNLLEdBQUcsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksa0NBQWtDLENBQUUsaUJBQWlCLEVBQUUscUJBQXFCLEVBQUUscUJBQXFCLEdBQUcsZ0JBQWdCLEVBQUUsZUFBZSxDQUFFLENBQUUsQ0FBQztZQUNsSyxHQUFHLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLDhCQUE4QixDQUFFLEtBQUssRUFBRSx3QkFBd0IsRUFBRSxtQkFBbUIsRUFBRSxtQkFBbUIsR0FBRyxnQkFBZ0IsRUFBRSxlQUFlLENBQUUsQ0FBRSxDQUFDO1lBQ3hLLEdBQUcsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksa0NBQWtDLENBQUUsMEJBQTBCLEVBQUUsbUJBQW1CLEVBQUUsbUJBQW1CLEdBQUcsZ0JBQWdCLEVBQUUsZUFBZSxDQUFFLENBQUUsQ0FBQztZQUN2SyxHQUFHLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLDBCQUEwQixDQUFFLFVBQVUsRUFBRSxlQUFlLENBQUUsQ0FBRSxDQUFDO1lBQ2xGLElBQUksQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLEdBQUcsQ0FBRSxDQUFDO1lBRXpCLElBQUssa0JBQWtCLElBQUksZ0JBQWdCLEVBQzNDO2dCQUNDLHVCQUF1QixFQUFFLENBQUM7Z0JBQzFCLG1CQUFtQixHQUFHLENBQUMsQ0FBQztnQkFDeEIsSUFBSSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxpQkFBaUIsQ0FBRTtvQkFFekMsV0FBVyxDQUFDLGFBQWEsQ0FBRSwyQkFBMkIsRUFBRSx1QkFBdUIsQ0FBRSxDQUFDO29CQUNsRiwwQkFBMEIsQ0FBQyxVQUFVLEdBQUcsQ0FBQyxDQUFDO2dCQUMzQyxDQUFDLENBQUUsQ0FBRSxDQUFDO2dCQUNOLElBQUksQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksa0JBQWtCLENBQUUsV0FBVyxFQUFFLFNBQVMsQ0FBRSxDQUFFLENBQUM7YUFDdEU7aUJBRUQ7Z0JBQ0MsbUJBQW1CLElBQUksZ0JBQWdCLENBQUM7YUFDeEM7WUFFRCx5REFBeUQ7WUFDekQsSUFBSyxrQkFBa0IsSUFBSSxnQkFBZ0IsRUFDM0M7Z0JBQ0Msb0NBQW9DO2dCQUNwQyxNQUFNO2FBQ047WUFDRCxxQkFBcUIsSUFBSSxnQkFBZ0IsQ0FBQztZQUUxQyxxQkFBcUIsSUFBSSxnQkFBZ0IsQ0FBQztTQUMxQztRQUVELElBQUksQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksVUFBVSxDQUFFLEdBQUcsQ0FBRSxDQUFFLENBQUM7UUFFM0MsSUFBSSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSx1QkFBdUIsRUFBRSxDQUFFLENBQUM7UUFDbkQsSUFBSSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxlQUFlLENBQUUsSUFBSSxVQUFVLENBQUUsR0FBRyxDQUFFLENBQUUsQ0FBRSxDQUFDO1FBRWxFLEtBQUssQ0FBQyxLQUFLLEVBQUUsQ0FBQztJQUNmLENBQUM7Q0FDRDtBQUVELFNBQVMsNEJBQTRCO0lBRXBDLE1BQU0sSUFBSSxHQUNWO1FBQ0MsMEJBQTBCLEVBQzFCO1lBQ0MsZ0JBQWdCLEVBQUUsRUFBRTtZQUNwQixpQkFBaUIsRUFBRSxLQUFLO1lBQ3hCLDJCQUEyQixFQUFFLElBQUk7WUFDakMsWUFBWSxFQUFFLENBQUM7WUFDZix1QkFBdUIsRUFBRSxJQUFJO1lBQzdCLHFCQUFxQixFQUFFLEtBQUs7WUFDNUIscUJBQXFCLEVBQUUsR0FBRztZQUMxQiw0QkFBNEIsRUFBRSwrQ0FBK0M7WUFDN0UseUJBQXlCLEVBQUUsSUFBSTtTQUMvQjtLQUNELENBQUM7SUFFRixxQkFBcUIsQ0FBRSxJQUFJLENBQUUsQ0FBQztBQUMvQixDQUFDIn0=