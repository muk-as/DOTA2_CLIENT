"use strict";
/// <reference path="../dota.d.ts" />
/// <reference path="../util.ts" />
/// <reference path="../sequence_actions.ts" />
/// <reference path="post_game_progress_utils.ts" />
/// <reference path="post_game_progress_sequence.ts" />
const HERO_PROGRESS_INCOMPLETE = 0;
const HERO_PROGRESS_HALF = 1;
const HERO_PROGRESS_COMPLETE = 2;
class AnimateInternational2023ScreenAction extends RunSequentialActions {
    data;
    constructor(data) {
        super();
        this.data = data.international2023_progress;
    }
    start() {
        // Create the screen and do a bunch of initial setup
        var panel = StartNewScreen('International2023ProgressScreen');
        panel.BLoadLayoutSnippet("International2023Progress");
        this.actions.push(new AddScreenLinkAction(panel, 'International2023Progress', '#DOTA_International2023PostGame_Progress'));
        panel.SetDialogVariableInt("quest_difficulty", this.data.quest_difficulty);
        panel.SetDialogVariableInt("quest_progress", this.data.quest_progress);
        panel.SetDialogVariableInt("quest_reward", this.data.quest_reward);
        var tiShield = panel.FindChildInLayoutFile("TILogoShield");
        this.actions.push(new AddClassAction(tiShield, "Display"));
        this.actions.push(new SkippableAction(new WaitAction(0.1)));
        var headerPanel = panel.FindChildInLayoutFile("Header");
        this.actions.push(new AddClassAction(headerPanel, "Display"));
        this.actions.push(new SkippableAction(new WaitAction(0.4)));
        // Animate heroes
        var heroListPanel = panel.FindChildInLayoutFile('HeroList');
        var progressHeroPanel = null;
        for (var i = 0; i < this.data.heroes.length; ++i) {
            var heroPanel = $.CreatePanel("Panel", heroListPanel, "QuestHero" + i);
            heroPanel.BLoadLayoutSnippet("International2023Hero");
            var heroMovie = heroPanel.FindChildInLayoutFile('QuestHeroMovie');
            heroMovie.heroid = this.data.heroes[i].hero_id;
            var progressClass = "Incomplete";
            if (this.data.heroes[i].past_progress == HERO_PROGRESS_HALF) {
                progressClass = "HalfProgress";
            }
            else if (this.data.heroes[i].past_progress == HERO_PROGRESS_COMPLETE) {
                progressClass = "Completed";
            }
            heroPanel.AddClass(progressClass);
            this.actions.push(new SkippableAction(new WaitAction(0.2)));
            this.actions.push(new AddClassAction(heroPanel, "Display"));
            if (i == this.data.progress_hero_index) {
                progressHeroPanel = heroPanel;
            }
        }
        this.actions.push(new SkippableAction(new WaitAction(0.5)));
        // Animate progress
        if (progressHeroPanel != null) {
            var progressClass = "NewFullProgress";
            if (this.data.progress_is_half) {
                if (this.data.heroes[this.data.progress_hero_index].past_progress == HERO_PROGRESS_INCOMPLETE) {
                    progressClass = "NewHalfProgress";
                }
            }
            this.actions.push(new AddClassAction(progressHeroPanel, progressClass));
        }
        this.actions.push(new SkippableAction(new WaitAction(0.8)));
        var questProgressLabel = panel.FindChildInLayoutFile("QuestProgress");
        this.actions.push(new AddClassAction(questProgressLabel, "Display"));
        if (this.data.quest_progress == this.data.quest_difficulty) {
            this.actions.push(new SkippableAction(new WaitAction(1)));
            this.actions.push(new RemoveClassAction(questProgressLabel, "Display"));
            this.actions.push(new SkippableAction(new WaitAction(0.2)));
            var completeLabel = panel.FindChildInLayoutFile("QuestComplete");
            this.actions.push(new AddClassAction(completeLabel, "Display"));
            this.actions.push(new SkippableAction(new WaitAction(0.5)));
            var rewardsLabel = panel.FindChildInLayoutFile("QuestReward");
            this.actions.push(new AddClassAction(rewardsLabel, "Display"));
        }
        this.actions.push(new StopSkippingAheadAction());
        this.actions.push(new SkippableAction(new WaitAction(1.0)));
        super.start();
    }
}
function TestAnimateInternational2023() {
    const data = {
        international2023_progress: {
            progress_hero_index: 3,
            progress_is_half: false,
            quest_difficulty: 3,
            quest_progress: 3,
            quest_reward: 1000,
            heroes: [
                {
                    hero_id: 11,
                    past_progress: HERO_PROGRESS_COMPLETE,
                },
                {
                    hero_id: 2,
                    past_progress: HERO_PROGRESS_COMPLETE,
                },
                {
                    hero_id: 41,
                    past_progress: HERO_PROGRESS_INCOMPLETE,
                },
                {
                    hero_id: 18,
                    past_progress: HERO_PROGRESS_INCOMPLETE,
                },
                {
                    hero_id: 32,
                    past_progress: HERO_PROGRESS_HALF,
                }
            ]
        }
    };
    TestProgressAnimation(data);
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoicG9zdF9nYW1lX3Byb2dyZXNzX2ludGVybmF0aW9uYWwyMDIzLmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsicG9zdF9nYW1lX3Byb2dyZXNzX2ludGVybmF0aW9uYWwyMDIzLnRzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiI7QUFBQSxxQ0FBcUM7QUFDckMsbUNBQW1DO0FBQ25DLCtDQUErQztBQUMvQyxvREFBb0Q7QUFDcEQsdURBQXVEO0FBRXZELE1BQU0sd0JBQXdCLEdBQUcsQ0FBQyxDQUFDO0FBQ25DLE1BQU0sa0JBQWtCLEdBQUcsQ0FBQyxDQUFDO0FBQzdCLE1BQU0sc0JBQXNCLEdBQUcsQ0FBQyxDQUFDO0FBd0JqQyxNQUFNLG9DQUFxQyxTQUFRLG9CQUFvQjtJQUV0RSxJQUFJLENBQThCO0lBRWxDLFlBQWEsSUFBaUM7UUFFN0MsS0FBSyxFQUFFLENBQUM7UUFDUixJQUFJLENBQUMsSUFBSSxHQUFHLElBQUksQ0FBQywwQkFBMEIsQ0FBQztJQUM3QyxDQUFDO0lBRUQsS0FBSztRQUVKLG9EQUFvRDtRQUNwRCxJQUFJLEtBQUssR0FBRyxjQUFjLENBQUUsaUNBQWlDLENBQUUsQ0FBQztRQUNoRSxLQUFLLENBQUMsa0JBQWtCLENBQUUsMkJBQTJCLENBQUUsQ0FBQztRQUN4RCxJQUFJLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLG1CQUFtQixDQUFFLEtBQUssRUFBRSwyQkFBMkIsRUFBRSwwQ0FBMEMsQ0FBRSxDQUFFLENBQUM7UUFFL0gsS0FBSyxDQUFDLG9CQUFvQixDQUFFLGtCQUFrQixFQUFFLElBQUksQ0FBQyxJQUFJLENBQUMsZ0JBQWdCLENBQUUsQ0FBQztRQUM3RSxLQUFLLENBQUMsb0JBQW9CLENBQUUsZ0JBQWdCLEVBQUUsSUFBSSxDQUFDLElBQUksQ0FBQyxjQUFjLENBQUUsQ0FBQztRQUN6RSxLQUFLLENBQUMsb0JBQW9CLENBQUUsY0FBYyxFQUFFLElBQUksQ0FBQyxJQUFJLENBQUMsWUFBWSxDQUFFLENBQUM7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