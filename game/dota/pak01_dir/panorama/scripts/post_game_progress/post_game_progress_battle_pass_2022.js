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
            this.actions.push(new RunFunctionAction(function (panel, lowerValue, nextThreshold) {
                return function () {
                    progressBar.max = nextThreshold.threshold;
                    panel.SetDialogVariableInt('progress_max_value', nextThreshold.threshold);
                    panel.SetDialogVariableLocString('progress_name', nextThreshold.name);
                    panel.SetDialogVariable('progress_description', nextThreshold.description);
                };
            }(this.entryPanel, startValue, levelThreshold)));
            const nextAnimateValue = Math.min(levelThreshold.threshold, finalValue);
            const par = new RunParallelActions();
            const duration = GetBPIncreaseAnimationDuration(nextAnimateValue - startValue) * 3.0;
            par.actions.push(new AnimateDialogVariableIntAction(this.entryPanel, 'progress_start_value', startValue, nextAnimateValue, duration));
            par.actions.push(new AnimateProgressBarWithMiddleAction(progressBar, startValue, nextAnimateValue, duration));
            par.actions.push(new PlaySoundForDurationAction("XP.Count", duration));
            this.actions.push(par);
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
            if (nextAnimateValue == finalValue)
                break;
            startValue = nextAnimateValue;
        }
        super.start();
    }
}
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
class AnimateBattlePass2022ScreenAction extends RunSequentialActions {
    data;
    constructor(data) {
        super();
        this.data = data;
    }
    start() {
        const panel = StartNewScreen('BattlePass2022ProgressScreen');
        panel.BLoadLayoutSnippet("BattlePass2022Progress");
        panel.SetDialogVariableInt('active_week', this.data.battle_pass_2022_progress.active_season_id);
        const levelShield = panel.FindChildInLayoutFile('BattlePass2022LevelShield');
        panel.SetHasClass("Unowned", !this.data.battle_pass_2022_progress.owned);
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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoicG9zdF9nYW1lX3Byb2dyZXNzX2JhdHRsZV9wYXNzXzIwMjIuanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyIuLi8uLi8uLi8uLi8uLi9jb250ZW50L2RvdGEvcGFub3JhbWEvc2NyaXB0cy9wb3N0X2dhbWVfcHJvZ3Jlc3MvcG9zdF9nYW1lX3Byb2dyZXNzX2JhdHRsZV9wYXNzXzIwMjIudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IjtBQUFBLHFDQUFxQztBQUNyQyxtQ0FBbUM7QUFDbkMsK0NBQStDO0FBQy9DLG9EQUFvRDtBQUNwRCx1REFBdUQ7QUF1RXZELE1BQU0sMkNBQTRDLFNBQVEsb0JBQW9CO0lBRTFFLFNBQVMsQ0FBVTtJQUNuQixNQUFNLENBQTRDO0lBQ2xELGFBQWEsQ0FBb0M7SUFFakQsVUFBVSxDQUFVO0lBRXBCLFlBQWEsU0FBa0IsRUFBRSxNQUFpRCxFQUFFLGFBQWdEO1FBRWhJLEtBQUssRUFBRSxDQUFDO1FBRVIsSUFBSSxDQUFDLFNBQVMsR0FBRyxTQUFTLENBQUM7UUFDM0IsSUFBSSxDQUFDLE1BQU0sR0FBRyxNQUFNLENBQUM7UUFDckIsSUFBSSxDQUFDLGFBQWEsR0FBRyxhQUFhLENBQUM7UUFFbkMsSUFBSSxDQUFDLFVBQVUsR0FBRyxDQUFDLENBQUMsV0FBVyxDQUFFLE9BQU8sRUFBRSxJQUFJLENBQUMsU0FBUyxFQUFFLEVBQUUsQ0FBRSxDQUFDO1FBQy9ELElBQUksQ0FBQyxVQUFVLENBQUMsa0JBQWtCLENBQUUsZ0NBQWdDLENBQUUsQ0FBQztRQUN2RSxJQUFJLENBQUMsVUFBVSxDQUFDLG9CQUFvQixDQUFFLHNCQUFzQixFQUFFLElBQUksQ0FBQyxhQUFhLENBQUMsb0JBQW9CLENBQUUsQ0FBQztRQUN4RyxJQUFJLENBQUMsVUFBVSxDQUFDLGlCQUFpQixDQUFFLFVBQVUsRUFBRSxFQUFFLEdBQUcsSUFBSSxDQUFDLGFBQWEsQ0FBQyxRQUFRLENBQUUsQ0FBQztRQUVsRixNQUFNLFVBQVUsR0FBRyxJQUFJLENB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