"use strict";
/// <reference path="../dota.d.ts" />
/// <reference path="../util.ts" />
/// <reference path="../sequence_actions.ts" />
/// <reference path="post_game_progress_utils.ts" />
/// <reference path="post_game_progress_sequence.ts" />
class AnimateBattlePass2022WeeklyQuestEntryAction extends RunSequentialActions {
    questList;
    pipBar;
    actionGranted;
    entryPanel;
    constructor(questList, pipBar, actionGranted) {
        super();
        this.questList = questList;
        this.pipBar = pipBar;
        this.actionGranted = actionGranted;
        this.entryPanel = $.CreatePanel('Panel', this.questList, '');
        this.entryPanel.BLoadLayoutSnippet('BattlePass2022WeeklyQuestEntry');
        this.entryPanel.SetDialogVariableInt('progress_start_value', this.actionGranted.progress_start_value);
        this.entryPanel.SetDialogVariable('progress', '' + this.actionGranted.progress);
        const questStars = this.entryPanel.FindChildInLayoutFile('BattlePass2022WeeklyQuestStars');
        const progressBar = this.entryPanel.FindChildInLayoutFile('BattlePass2022WeeklyProgressBar');
        let activeThreshold = null;
        for (let i = 0; i < actionGranted.level_thresholds.length; ++i) {
            const levelThreshold = actionGranted.level_thresholds[i];
            if (activeThreshold == null && this.actionGranted.progress_start_value < levelThreshold.threshold) {
                activeThreshold = levelThreshold;
            }
            const tierStar = $.CreatePanel('Panel', questStars, 'TierStar' + i);
            tierStar.AddClass('BattlePass2022TierStar');
            if (activeThreshold == null) {
                tierStar.AddClass('StarAchieved');
            }
        }
        if (activeThreshold == null) {
            activeThreshold = actionGranted.level_thresholds[actionGranted.level_thresholds.length - 1];
        }
        this.entryPanel.SetDialogVariableInt('progress_max_value', activeThreshold.threshold);
        this.entryPanel.SetDialogVariableLocString('progress_name', activeThreshold.name);
        this.entryPanel.SetDialogVariable('progress_description', activeThreshold.description);
        progressBar.lowervalue = this.actionGranted.progress_start_value;
        progressBar.max = activeThreshold.threshold;
    }
    start() {
        const questStars = this.entryPanel.FindChildInLayoutFile('BattlePass2022WeeklyQuestStars');
        const progressBar = this.entryPanel.FindChildInLayoutFile('BattlePass2022WeeklyProgressBar');
        progressBar.lowervalue = this.actionGranted.progress_start_value;
        this.actions.push(new AddClassAction(this.entryPanel, 'ShowEntry'));
        this.actions.push(new WaitAction(0.2));
        let startValue = this.actionGranted.progress_start_value;
        const finalValue = startValue + this.actionGranted.progress;
        for (let i = 0; i < this.actionGranted.level_thresholds.length; ++i) {
            const levelThreshold = this.actionGranted.level_thresholds[i];
            if (this.actionGranted.progress_start_value >= levelThreshold.threshold)
                continue;
            // Setup threshold
            this.actions.push(new RunFunctionAction(function (panel, lowerValue, nextThreshold) {
                return function () {
                    progressBar.max = nextThreshold.threshold;
                    panel.SetDialogVariableInt('progress_max_value', nextThreshold.threshold);
                    panel.SetDialogVariableLocString('progress_name', nextThreshold.name);
                    panel.SetDialogVariable('progress_description', nextThreshold.description);
                };
            }(this.entryPanel, startValue, levelThreshold)));
            // Now animate up to either the end of the threshold, or the final value
            const nextAnimateValue = Math.min(levelThreshold.threshold, finalValue);
            const par = new RunParallelActions();
            const duration = GetBPIncreaseAnimationDuration(nextAnimateValue - startValue) * 3.0;
            par.actions.push(new AnimateDialogVariableIntAction(this.entryPanel, 'progress_start_value', startValue, nextAnimateValue, duration));
            par.actions.push(new AnimateProgressBarWithMiddleAction(progressBar, startValue, nextAnimateValue, duration));
            par.actions.push(new PlaySoundForDurationAction("XP.Count", duration));
            this.actions.push(par);
            // Animate the star increasing
            if (nextAnimateValue == levelThreshold.threshold) {
                const tierStar = questStars.GetChild(i);
                this.actions.push(new AddClassAction(tierStar, 'StarAchieved'));
                this.actions.push(new PlaySoundAction('WeeklyQuest.StarGranted'));
                this.actions.push(new RunFunctionAction(function (pipBar) {
                    return function () {
                        pipBar.overridecurrentstars += 1;
                    };
                }(this.pipBar)));
                this.actions.push(new WaitAction(0.4));
            }
            // Are we all done?
            if (nextAnimateValue == finalValue)
                break;
            startValue = nextAnimateValue;
        }
        super.start();
    }
}
// ----------------------------------------------------------------------------
class AnimateBattlePass2022WeeklyQuestsAction extends RunSequentialActions {
    sectionPanel;
    nEventID;
    nSeasonID;
    actionsGranted;
    nInitialStars;
    constructor(sectionPanel, nEventID, nSeasonID, actionsGranted, nInitialStars) {
        super();
        this.sectionPanel = sectionPanel;
        this.nEventID = nEventID;
        this.nSeasonID = nSeasonID;
        this.actionsGranted = actionsGranted;
        this.nInitialStars = nInitialStars;
        const pipBar = this.sectionPanel.FindChildInLayoutFile('BattlePass2022WeeklyQuestsPipBar');
        pipBar.SetSeasonInfo(this.nEventID, this.nSeasonID);
        pipBar.overridecurrentstars = this.nInitialStars;
    }
    start() {
        const questList = this.sectionPanel.FindChildInLayoutFile('BattlePass2022WeeklyQuestsList');
        const pipBar = this.sectionPanel.FindChildInLayoutFile('BattlePass2022WeeklyQuestsPipBar');
        this.sectionPanel.AddClass('ShowSection');
        if (this.actionsGranted != null) {
            for (let i = 0; i < this.actionsGranted.length; ++i) {
                this.actions.push(new AnimateBattlePass2022WeeklyQuestEntryAction(questList, pipBar, this.actionsGranted[i]));
            }
        }
        super.start();
    }
}
// ----------------------------------------------------------------------------
// Cavern Crawl
// ----------------------------------------------------------------------------
class AnimateBattlePass2022CavernCrawlAction extends RunSequentialActions {
    sectionPanel;
    cavernCrawlData;
    constructor(sectionPanel, cavernCrawlData) {
        super();
        this.sectionPanel = sectionPanel;
        this.cavernCrawlData = cavernCrawlData;
    }
    start() {
        this.sectionPanel.FindChildInLayoutFile('BattlePass2022CavernCrawlHeroMovie').heroid = this.cavernCrawlData.hero_id;
        this.sectionPanel.SetDialogVariableInt('cavern_crawl_points_earned', this.cavernCrawlData.bp_amount);
        this.sectionPanel.AddClass('ShowSection');
        this.actions.push(new WaitAction(0.2));
        const par = new RunParallelActions();
        const duration = GetBPIncreaseAnimationDuration(this.cavernCrawlData.bp_amount);
        par.actions.push(new AnimateDialogVariableIntAction(this.sectionPanel, 'cavern_crawl_points_earned', 0, this.cavernCrawlData.bp_amount, duration));
        par.actions.push(new PlaySoundForDurationAction("XP.Count", duration));
        this.actions.push(par);
        super.start();
    }
}
// ----------------------------------------------------------------------------
// Weekly Bonus
// ----------------------------------------------------------------------------
class AnimateBattlePass2022WeeklyBonusAction extends RunSequentialActions {
    sectionPanel;
    weeklyBonusData;
    constructor(sectionPanel, weeklyBonusData) {
        super();
        this.sectionPanel = sectionPanel;
        this.weeklyBonusData = weeklyBonusData;
    }
    start() {
        this.sectionPanel.SetDialogVariableInt('weekly_bonus_points_earned', 0);
        this.sectionPanel.SetDialogVariableInt('weekly_bonus_points_current', this.weeklyBonusData.start_points);
        this.sectionPanel.SetDialogVariableInt('weekly_bonus_points_max', this.weeklyBonusData.max_points);
        this.sectionPanel.SetDialogVariableLocString('weekly_bonus_outcome', this.weeklyBonusData.outcome);
        let progressBar = this.sectionPanel.FindChildInLayoutFile("BattlePass2022WeeklyBonusProgressBar");
        progressBar.min = 0;
        progressBar.max = this.weeklyBonusData.max_points;
        progressBar.lowervalue = this.weeklyBonusData.start_points;
        progressBar.uppervalue = this.weeklyBonusData.start_points;
        this.sectionPanel.AddClass('ShowSection');
        this.actions.push(new WaitAction(0.2));
        const par = new RunParallelActions();
        const duration = GetBPIncreaseAnimationDuration(this.weeklyBonusData.points_earned);
        par.actions.push(new AnimateDialogVariableIntAction(this.sectionPanel, 'weekly_bonus_points_earned', 0, this.weeklyBonusData.points_earned, duration));
        par.actions.push(new AnimateDialogVariableIntAction(this.sectionPanel, 'weekly_bonus_points_current', this.weeklyBonusData.start_points, this.weeklyBonusData.start_points + this.weeklyBonusData.points_earned, duration));
        par.actions.push(new AnimateProgressBarWithMiddleAction(progressBar, this.weeklyBonusData.start_points, this.weeklyBonusData.start_points + this.weeklyBonusData.points_earned, duration));
        par.actions.push(new PlaySoundForDurationAction("XP.Count", duration));
        this.actions.push(par);
        super.start();
    }
}
// ----------------------------------------------------------------------------
// Candy Points
// ----------------------------------------------------------------------------
class AnimateBattlePass2022CandyPointsAction extends RunSequentialActions {
    sectionPanel;
    candyPointData;
    constructor(sectionPanel, candyPointData) {
        super();
        this.sectionPanel = sectionPanel;
        this.candyPointData = candyPointData;
    }
    start() {
        let pointsRemaining = this.candyPointData.points_earned;
        let initialPoints = this.candyPointData.start_points;
        let initialBags = this.candyPointData.start_bags;
        if (initialPoints != this.candyPointData.max_points) {
            initialPoints %= this.candyPointData.points_per_bag;
        }
        else {
            initialPoints = this.candyPointData.points_per_bag;
        }
        let initialPercent = initialPoints / this.candyPointData.points_per_bag * 100;
        this.sectionPanel.SetDialogVariableInt('progress_percent', initialPercent);
        this.sectionPanel.SetDialogVariableInt('bags_current', this.candyPointData.start_bags);
        this.sectionPanel.SetDialogVariableInt('bags_max', this.candyPointData.max_bags);
        this.sectionPanel.SetDialogVariableLocString('candy_points_outcome', this.candyPointData.outcome);
        this.sectionPanel.SetDialogVariableInt('sacked_candy', this.candyPointData.sacked_candy);
        // OMTODO: Maybe list outcome and perhaps cool point increase stuff
        let progressBar = this.sectionPanel.FindChildInLayoutFile("BattlePass2022CandyPointsProgressBar");
        progressBar.min = 0;
        progressBar.max = this.candyPointData.points_per_bag;
        progressBar.lowervalue = initialPoints;
        progressBar.uppervalue = initialPoints;
        this.sectionPanel.AddClass('ShowSection');
        this.actions.push(new WaitAction(0.2));
        const duration = GetBPIncreaseAnimationDuration(this.candyPointData.points_earned);
        let currentBags = this.candyPointData.start_bags;
        while (pointsRemaining > 0) {
            const par = new RunParallelActions();
            let targetValue = Math.min(initialPoints + pointsRemaining, this.candyPointData.points_per_bag);
            let targetBags = targetValue == this.candyPointData.points_per_bag ? currentBags + 1 : currentBags;
            let targetPercent = targetValue / this.candyPointData.points_per_bag * 100;
            par.actions.push(new AnimateDialogVariableIntAction(this.sectionPanel, 'progress_percent', initialPercent, targetPercent, duration));
            par.actions.push(new AnimateProgressBarWithMiddleAction(progressBar, initialPoints, targetValue, duration));
            par.actions.push(new AnimateDialogVariableIntAction(this.sectionPanel, 'bags_current', currentBags, targetBags, duration));
            par.actions.push(new PlaySoundForDurationAction("XP.Count", duration));
            this.actions.push(par);
            pointsRemaining -= (targetValue - initialPoints);
            if (pointsRemaining > 0) {
                this.actions.push(new WaitAction(0.4));
                this.actions.push(new SetProgressBarWithMiddleValueAction(progressBar, 0, 0));
                initialPoints = 0;
                initialPercent = 0;
                currentBags = targetBags;
            }
        }
        this.sectionPanel.SetHasClass('GainedReroll', this.candyPointData.gained_reroll);
        super.start();
    }
}
// ----------------------------------------------------------------------------
// Progress Screen
// ----------------------------------------------------------------------------
class AnimateBattlePass2022ScreenAction extends RunSequentialActions {
    data;
    constructor(data) {
        super();
        this.data = data;
    }
    start() {
        // Create the screen and do a bunch of initial setup
        const panel = StartNewScreen('BattlePass2022ProgressScreen');
        panel.BLoadLayoutSnippet("BattlePass2022Progress");
        panel.SetDialogVariableInt('active_week', this.data.battle_pass_2022_progress.active_season_id);
        const levelShield = panel.FindChildInLayoutFile('BattlePass2022LevelShield');
        levelShield.SetEventPoints(this.data.battle_pass_2022_progress.battle_points_event_id, this.data.battle_pass_2022_progress.battle_points_start);
        panel.SetHasClass("Unowned", !this.data.battle_pass_2022_progress.owned);
        // Setup the sequence of actions to animate the screen
        this.actions.push(new AddClassAction(panel, 'ShowScreen'));
        this.actions.push(new SkippableAction(new WaitAction(0.5)));
        this.actions.push(new AddScreenLinkAction(panel, 'BattlePass2022Progress', '#DOTA_BattlePassPostGame_Progress'));
        if (this.data.battle_pass_2022_progress.owned) {
            this.actions.push(new SkippableAction(new AnimateBattlePass2022WeeklyQuestsAction(panel.FindChildInLayoutFile('BattlePass2022WeeklyQuests'), this.data.battle_pass_2022_progress.battle_points_event_id, this.data.battle_pass_2022_progress.active_season_id, this.data.battle_pass_2022_progress.actions_granted, this.data.battle_pass_2022_progress.weekly_quest_initial_stars)));
            this.actions.push(new SkippableAction(new WaitAction(0.5)));
        }
        if (this.data.battle_pass_2022_progress.cavern_crawl != null) {
            const section = panel.FindChildInLayoutFile('BattlePass2022CavernCrawlProgress');
            section.AddClass('SectionHasData');
            this.actions.push(new SkippableAction(new AnimateBattlePass2022CavernCrawlAction(section, this.data.battle_pass_2022_progress.cavern_crawl)));
            this.actions.push(new SkippableAction(new WaitAction(0.5)));
        }
        if (this.data.battle_pass_2022_progress.weekly_bonus != null && this.data.battle_pass_2022_progress.weekly_bonus.points_earned > 0) {
            const section = panel.FindChildInLayoutFile('BattlePass2022WeeklyBonusProgress');
            section.AddClass('SectionHasData');
            this.actions.push(new SkippableAction(new AnimateBattlePass2022WeeklyBonusAction(section, this.data.battle_pass_2022_progress.weekly_bonus)));
            this.actions.push(new SkippableAction(new WaitAction(0.5)));
        }
        if (this.data.battle_pass_2022_progress.candy_points != null) {
            const section = panel.FindChildInLayoutFile('BattlePass2022CandyPointsProgress');
            section.AddClass('SectionHasData');
            this.actions.push(new SkippableAction(new AnimateBattlePass2022CandyPointsAction(section, this.data.battle_pass_2022_progress.candy_points)));
            this.actions.push(new SkippableAction(new WaitAction(0.5)));
        }
        this.actions.push(new WaitAction(0.2));
        this.actions.push(new StopSkippingAheadAction());
        this.actions.push(new SkippableAction(new WaitAction(0.5)));
        this.actions.push(new SwitchClassAction(panel, 'current_screen', ''));
        this.actions.push(new SkippableAction(new WaitAction(0.5)));
        super.start();
    }
}
//----------------------------------
function TestAnimateBattlePass2022() {
    const data = {
        hero_id: 87,
        battle_pass_2022_progress: {
            active_season_id: 2,
            battle_points_event_id: 33,
            battle_points_start: 74850,
            battle_points_per_level: 1000,
            owned: true,
            weekly_quest_initial_stars: 2,
            actions_granted: [
                {
                    // Cross a tier
                    progress_start_value: 1,
                    progress: 40,
                    level_thresholds: [
                        {
                            name: "#DOTA_BattlePass2022_Quest_Plays_Name",
                            description: 'Win <span class="ScoreTierCurrent">3</span> Matches',
                            threshold: 3
                        },
                        {
                            name: "#DOTA_BattlePass2022_Quest_Plays_Name",
                            description: 'Win <span class="ScoreTierCurrent">10</span> Matches',
                            threshold: 10
                        },
                        {
                            name: "#DOTA_BattlePass2022_Quest_Plays_Name",
                            description: 'Win <span class="ScoreTierCurrent">30</span> Matches',
                            threshold: 30
                        },
                    ]
                },
                {
                    // Cross past max tier
                    progress_start_value: 141,
                    progress: 10,
                    level_thresholds: [
                        {
                            name: "#DOTA_BattlePass2022_Quest_Wins_Name",
                            description: 'Win <span class="ScoreTierCurrent">10</span> Matches',
                            threshold: 10
                        },
                        {
                            name: "#DOTA_BattlePass2022_Quest_Wins_Name",
                            description: 'Win <span class="ScoreTierCurrent">50</span> Matches',
                            threshold: 50
                        },
                        {
                            name: "#DOTA_BattlePass2022_Quest_Wins_Name",
                            description: 'Win <span class="ScoreTierCurrent">150</span> Matches',
                            threshold: 150
                        },
                    ]
                },
                {
                    // Minor increment
                    progress_start_value: 0,
                    progress: 4,
                    level_thresholds: [
                        {
                            name: "Beat Aghanim Bosses",
                            description: 'Beat <span class="ScoreTierCurrent">1</span> Boss',
                            threshold: 1
                        },
                        {
                            name: "Beat Aghanim Bosses",
                            description: 'Beat <span class="ScoreTierCurrent">2</span> Bosses',
                            threshold: 2
                        },
                        {
                            name: "Beat Aghanim Bosses",
                            description: 'Beat <span class="ScoreTierCurrent">3</span> Bosses',
                            threshold: 3
                        },
                        {
                            name: "Beat Aghanim Bosses",
                            description: 'Beat <span class="ScoreTierCurrent">4</span> Bosses',
                            threshold: 4
                        },
                        {
                            name: "Beat Aghanim Bosses",
                            description: 'Beat <span class="ScoreTierCurrent">5</span> Bosses',
                            threshold: 5
                        },
                        {
                            name: "Beat Aghanim Bosses",
                            description: 'Beat <span class="ScoreTierCurrent">6</span> Bosses',
                            threshold: 6
                        },
                        {
                            name: "Beat Aghanim Bosses",
                            description: 'Beat <span class="ScoreTierCurrent">7</span> Bosses',
                            threshold: 7
                        },
                    ]
                },
            ],
            cavern_crawl: {
                hero_id: 87,
                bp_amount: 375,
            },
            weekly_bonus: {
                start_points: 300,
                max_points: 2000,
                points_earned: 100,
                outcome: "#DOTA_HeroStat_WonMatch"
            },
            candy_points: {
                start_points: 980,
                max_points: 2500,
                points_earned: 120,
                points_per_bag: 500,
                start_bags: 1,
                end_bags: 2,
                max_bags: 5,
                outcome: "#DOTA_HeroStat_WonMatch",
                sacked_candy: 120,
                gained_reroll: true
            }
        }
    };
    TestProgressAnimation(data);
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoicG9zdF9nYW1lX3Byb2dyZXNzX2JhdHRsZV9wYXNzXzIwMjIuanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyJwb3N0X2dhbWVfcHJvZ3Jlc3NfYmF0dGxlX3Bhc3NfMjAyMi50cyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiO0FBQUEscUNBQXFDO0FBQ3JDLG1DQUFtQztBQUNuQywrQ0FBK0M7QUFDL0Msb0RBQW9EO0FBQ3BELHVEQUF1RDtBQXVFdkQsTUFBTSwyQ0FBNEMsU0FBUSxvQkFBb0I7SUFFMUUsU0FBUyxDQUFVO0lBQ25CLE1BQU0sQ0FBNEM7SUFDbEQsYUFBYSxDQUFvQztJQUVqRCxVQUFVLENBQVU7SUFFcEIsWUFBYSxTQUFrQixFQUFFLE1BQWlELEVBQUUsYUFBZ0Q7UUFFaEksS0FBSyxFQUFFLENBQUM7UUFFUixJQUFJLENBQUMsU0FBUyxHQUFHLFNBQVMsQ0FBQztRQUMzQixJQUFJLENBQUMsTUFBTSxHQUFHLE1BQU0sQ0FBQztRQUNyQixJQUFJLENBQUMsYUFBYSxHQUFHLGFBQWEsQ0FBQztRQUVuQyxJQUFJLENBQUMsVUFBVSxHQUFHLENBQUMsQ0FBQyxXQUFXLENBQUUsT0FBTyxFQUFFLElBQUksQ0FBQyxTQUFTLEVBQUUsRUFBRSxDQUFFLENBQUM7UUFDL0QsSUFBSSxDQUFDLFVBQVUsQ0FBQyxrQkFBa0IsQ0FBRSxnQ0FBZ0MsQ0FBRSxDQUFDO1FBQ3ZFLElBQUksQ0FBQyxVQUFVLENBQUMsb0JBQW9CLENBQUUsc0JBQXNCLEVBQUUsSUFBSSxDQUFDLGFBQWEsQ0FBQyxvQkFBb0IsQ0FBRSxDQUFDO1FBQ3hHLElBQUksQ0FBQyxVQUFVLENBQUMsaUJBQWlCLENBQUUsVUFBVSxFQUFFLEVBQUUsR0FBRyxJQUFJLENBQUMsYUFBYSxDQUFDLFFBQVEsQ0FBRSxDQUFDO1FBRWxGLE1BQU0sVUFBVSxHQUFHLElBQUksQ0FBQyxVQUFVLENBQUMscUJBQXFCLENBQUUsZ0NBQWdDLENBQUUsQ0FBQztRQUM3RixNQUFNLFdBQVcsR0FBRyxJ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