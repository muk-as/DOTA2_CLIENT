/// <reference path="../dota.d.ts" />
/// <reference path="../util.ts" />
/// <reference path="../sequence_actions.ts" />
/// <reference path="post_game_progress_utils.ts" />
/// <reference path="post_game_progress_sequence.ts" />
class AnimateBattlePass2022WeeklyQuestEntryAction extends RunSequentialActions {
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
    constructor(sectionPanel, candyPointData) {
        super();
        this.sectionPanel = sectionPanel;
        this.candyPointData = candyPointData;
    }
    start() {
        let pointsRemaining = this.candyPointData.points_earned;
        let initialPoints = this.candyPointData.start_points % this.candyPointData.points_per_bag;
        let initialBags = this.candyPointData.start_bags;
        let initialPercent = initialPoints / this.candyPointData.points_per_bag * 100;
        this.sectionPanel.SetDialogVariableInt('progress_percent', initialPoints);
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
        super.start();
    }
}
// ----------------------------------------------------------------------------
// Progress Screen
// ----------------------------------------------------------------------------
class AnimateBattlePass2022ScreenAction extends RunSequentialActions {
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
        // Setup the sequence of actions to animate the screen
        this.actions.push(new AddClassAction(panel, 'ShowScreen'));
        this.actions.push(new SkippableAction(new WaitAction(0.5)));
        this.actions.push(new AddScreenLinkAction(panel, 'BattlePass2022Progress', '#DOTA_BattlePassPostGame_Progress'));
        this.actions.push(new SkippableAction(new AnimateBattlePass2022WeeklyQuestsAction(panel.FindChildInLayoutFile('BattlePass2022WeeklyQuests'), this.data.battle_pass_2022_progress.battle_points_event_id, this.data.battle_pass_2022_progress.active_season_id, this.data.battle_pass_2022_progress.actions_granted, this.data.battle_pass_2022_progress.weekly_quest_initial_stars)));
        this.actions.push(new SkippableAction(new WaitAction(0.5)));
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
        if (this.data.battle_pass_2022_progress.candy_points != null && this.data.battle_pass_2022_progress.candy_points.points_earned > 0) {
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
                sacked_candy: 120
            }
        }
    };
    TestProgressAnimation(data);
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoicG9zdF9nYW1lX3Byb2dyZXNzX2JhdHRsZV9wYXNzXzIwMjIuanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyJwb3N0X2dhbWVfcHJvZ3Jlc3NfYmF0dGxlX3Bhc3NfMjAyMi50cyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiQUFBQSxxQ0FBcUM7QUFDckMsbUNBQW1DO0FBQ25DLCtDQUErQztBQUMvQyxvREFBb0Q7QUFDcEQsdURBQXVEO0FBcUV2RCxNQUFNLDJDQUE0QyxTQUFRLG9CQUFvQjtJQVExRSxZQUFhLFNBQWtCLEVBQUUsTUFBaUQsRUFBRSxhQUFnRDtRQUVoSSxLQUFLLEVBQUUsQ0FBQztRQUVSLElBQUksQ0FBQyxTQUFTLEdBQUcsU0FBUyxDQUFDO1FBQzNCLElBQUksQ0FBQyxNQUFNLEdBQUcsTUFBTSxDQUFDO1FBQ3JCLElBQUksQ0FBQyxhQUFhLEdBQUcsYUFBYSxDQUFDO1FBRW5DLElBQUksQ0FBQyxVQUFVLEdBQUcsQ0FBQyxDQUFDLFdBQVcsQ0FBRSxPQUFPLEVBQUUsSUFBSSxDQUFDLFNBQVMsRUFBRSxFQUFFLENBQUUsQ0FBQztRQUMvRCxJQUFJLENBQUMsVUFBVSxDQUFDLGtCQUFrQixDQUFFLGdDQUFnQyxDQUFFLENBQUM7UUFDdkUsSUFBSSxDQUFDLFVBQVUsQ0FBQyxvQkFBb0IsQ0FBRSxzQkFBc0IsRUFBRSxJQUFJLENBQUMsYUFBYSxDQUFDLG9CQUFvQixDQUFFLENBQUM7UUFDeEcsSUFBSSxDQUFDLFVBQVUsQ0FBQyxpQkFBaUIsQ0FBRSxVQUFVLEVBQUUsRUFBRSxHQUFHLElBQUksQ0FBQyxhQUFhLENBQUMsUUFBUSxDQUFFLENBQUM7UUFFbEYsTUFBTSxVQUFVLEdBQUcsSUFBSSxDQUFDLFVBQVUsQ0FBQyxxQkFBcUIsQ0FBRSxnQ0FBZ0MsQ0FBRSxDQUFDO1FBQzdGLE1BQU0sV0FBVyxHQUFHLElBQUksQ0FBQyxVQUFVLENBQUMscUJBQXFCLENBQUUsaUNBQWlDLENBQTZCLENBQUM7UUFFMUgsSUFBSSxlQUFlLEdB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