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
            if (nPointsToWeeklyCap == nPointsToAnimate) {
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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoicG9zdF9nYW1lX3Byb2dyZXNzX2ludGVybmF0aW9uYWwyMDI0LmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsiLi4vLi4vLi4vLi4vLi4vY29udGVudC9kb3RhL3Bhbm9yYW1hL3NjcmlwdHMvcG9zdF9nYW1lX3Byb2dyZXNzL3Bvc3RfZ2FtZV9wcm9ncmVzc19pbnRlcm5hdGlvbmFsMjAyNC50cyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiO0FBQUEscUNBQXFDO0FBQ3JDLG1DQUFtQztBQUNuQywrQ0FBK0M7QUFDL0Msb0RBQW9EO0FBQ3BELHVEQUF1RDtBQUV2RCxNQUFNLDJCQUEyQixHQUFHLEVBQUUsQ0FBQztBQW9CdkMsTUFBTSxvQ0FBcUMsU0FBUSxvQkFBb0I7SUFFdEUsSUFBSSxDQUE4QjtJQUVsQyxZQUFhLElBQWlDO1FBRTdDLEtBQUssRUFBRSxDQUFDO1FBQ1IsSUFBSSxDQUFDLElBQUksR0FBRyxJQUFJLENBQUMsMEJBQTBCLENBQUM7SUFDN0MsQ0FBQztJQUVELEtBQUs7UUFHSixJQUFJLEtBQUssR0FBRyxjQUFjLENBQUUsaUNBQWlDLENBQUUsQ0FBQztRQUNoRSxLQUFLLENBQUMsa0JBQWtCLENBQUUsMkJBQTJCLENBQUUsQ0FBQztRQUV4RCxJQUFJLFdBQVcsR0FBMkIsS0FBSyxDQUFDLHFCQUFxQixDQUFFLGFBQWEsQ0FBNEIsQ0FBQztRQUNqSCxJQUFJLGlCQUFpQixHQUE0QixLQUFLLENBQUMscUJBQXFCLENBQUUsbUJBQW1CLENBQTZCLENBQUM7UUFDL0gsSUFBSSwwQkFBMEIsR0FBNEIsS0FBSyxDQUFDLHFCQUFxQixDQUFFLDRCQUE0QixDQUE2QixDQUFDO1FBRWpKLEtBQUssQ0FBQyxvQkFBb0IsQ0FBRSxjQUFjLEVBQUUsSUFBSSxDQUFDLElBQUksQ0FBQyxZQUFZLENBQUUsQ0FBQztRQUNyRSxLQUFLLENBQUMsb0JBQW9CLENBQUUsbUJBQW1CLEVBQUUsSUFBSSxDQUFDLElBQUksQ0FBQyxxQkFBcUIsQ0FBRSxDQUFD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