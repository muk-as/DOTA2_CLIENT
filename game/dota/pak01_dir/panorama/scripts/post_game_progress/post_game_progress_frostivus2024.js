"use strict";
/// <reference path="../dota.d.ts" />
/// <reference path="../util.ts" />
/// <reference path="../sequence_actions.ts" />
/// <reference path="post_game_progress_utils.ts" />
/// <reference path="post_game_progress_screens.ts" />
function AnimateFrostivus2024Quest(questPanel, actions, quest_data) {
}
function AnimateFrostivus2024QuestProgress(panel, actions, inventory_data) {
    let bAnyProgress = false;
    let inventoryListPanel = panel.FindChildTraverse("InventoryList");
    for (let i = 0; i < inventory_data.length; ++i) {
        let inventoryComponent = inventory_data[i];
        let quests = inventoryComponent.quest_progress;
        let panelProperties = {
            component_id: inventoryComponent.component_id
        };
        let componentPanel = $.CreatePanel("Panel", inventoryListPanel, "Component" + i, panelProperties);
        let bSnippetLoaded = componentPanel.BLoadLayoutSnippet("Frostivus2024Component");
        componentPanel.SetDialogVariableLocString("component_name", inventoryComponent.component_name);
        let componentImagePanel = componentPanel.FindChildTraverse("ComponentImage");
        componentImagePanel.SetImage(inventoryComponent.component_image);
        componentPanel.SetDialogVariableInt("component_count", inventoryComponent.initial_count);
        let currentComponentCount = inventoryComponent.initial_count;
        let bHasQuestProgress = quests.length > 0;
        if (bHasQuestProgress) {
            // Hacky, but just play sound depending on raw ID
            if (inventoryComponent.component_id == 1) {
                actions.push(new PlaySoundAction("Frostivus.UI.CrystallizedJoy"));
            }
            else if (inventoryComponent.component_id == 2) {
                actions.push(new PlaySoundAction("Frostivus.UI.EssenceOfFriendship"));
            }
            else if (inventoryComponent.component_id == 3) {
                actions.push(new PlaySoundAction("Frostivus.UI.ConcentratedWhimsy"));
            }
            else if (inventoryComponent.component_id == 4) {
                actions.push(new PlaySoundAction("Frostivus.UI.FestiveSpirit"));
            }
            actions.push(new AddClassAction(componentPanel, 'HighlightComponent'));
            actions.push(new WaitAction(0.25));
            let questListPanel = componentPanel.FindChildTraverse("QuestList");
            for (let questIndex = 0; questIndex < quests.length; ++questIndex) {
                let quest = quests[questIndex];
                let panelProperties = {
                    quest_id: quest.quest_id
                };
                let questPanel = $.CreatePanel("Panel", questListPanel, "Quest" + questIndex, panelProperties);
                let bSnippetLoaded = questPanel.BLoadLayoutSnippet("Frostivus2024QuestProgressContainer");
                actions.push(new WaitAction(0.1));
                actions.push(new PlaySoundAction("Frostvis.UI.PostGame.ShowQuest"));
                actions.push(new AddClassAction(questPanel, "ShowQuest"));
                if (!bSnippetLoaded)
                    continue;
                bAnyProgress = true;
                questPanel.SetDialogVariableInt("quest_id", quest.quest_id);
                questPanel.SetDialogVariableInt("stat_value", quest.stat_value);
                //questPanel.SetDialogVariableLocString("quest_name", quest.quest_name);
                questPanel.SetDialogVariableLocStringNested("quest_progress", quest.quest_progress_string);
                // Animate the points
                let fAnimateTime = 0.2 + quest.reward_quantity * 0.005;
                actions.push(new SkippableAction(new WaitAction(0.1)));
                actions.push(new AddClassAction(componentPanel, 'AnimatingCount'));
                actions.push(new AddClassAction(questPanel, 'Animating'));
                actions.push(new SkippableAction(new AnimateDialogVariableIntAction(componentPanel, 'component_count', currentComponentCount, currentComponentCount + quest.reward_quantity, fAnimateTime)));
                actions.push(new RemoveClassAction(questPanel, 'Animating'));
                actions.push(new AddClassAction(questPanel, 'ShowCheckMark'));
                actions.push(new RemoveClassAction(componentPanel, 'AnimatingCount'));
                currentComponentCount += quest.reward_quantity;
                actions.push(new SkippableAction(new WaitAction(0.2)));
            }
            actions.push(new SkippableAction(new WaitAction(0.5)));
        }
    }
    return bAnyProgress;
}
// Frostivus2024 Progress
class AnimateFrostivus2024ScreenAction extends RunSequentialActions {
    data;
    constructor(data) {
        super();
        this.data = data;
    }
    start() {
        $.Msg('Frostivus 2024 post game: processing...\n');
        // Create the screen and do a bunch of initial setup
        let panel = StartNewScreen('Frostivus2024ProgressScreen');
        panel.BLoadLayoutSnippet("Frostivus2024Progress");
        // Setup the sequence of actions to animate the screen
        let actions = this.actions;
        actions.push(new AddClassAction(panel, 'ShowScreen'));
        actions.push(new SkippableAction(new WaitAction(0.5)));
        actions.push(new AddScreenLinkAction(panel, 'Frostivus2024Progress', '#DOTA_PlusPostGame_Frostivus2024Progress', function () {
            panel.SwitchClass('current_screen', 'ShowFrostivus2024Progress');
        }));
        // TODO: Progress Available Badge
        actions.push(new SwitchClassAction(panel, 'current_screen', 'ShowFrostivus2024Progress'));
        actions.push(new SkippableAction(new WaitAction(0.5)));
        let bAnyProgress = AnimateFrostivus2024QuestProgress(panel, this.actions, this.data.frostivus2024_progress.inventory);
        if (this.data.frostivus2024_progress.claimable) {
            actions.push(new AddClassAction(panel, "HasRewardClaimable"));
        }
        actions.push(new SkippableAction(new WaitAction(1)));
        this.actions.push(new StopSkippingAheadAction());
        this.actions.push(new SkippableAction(new WaitAction(2.0)));
        this.actions.push(new SwitchClassAction(panel, 'current_screen', ''));
        this.actions.push(new SkippableAction(new WaitAction(1.5)));
        super.start();
    }
}
function TestAnimateFrostivus2024() {
    let data = {
        frostivus2024_progress: {
            claimable: true,
            inventory: [
                {
                    component_id: 1,
                    component_name: "#DOTA_Frostivus2024_Craftworks_Component_1",
                    component_image: "file://{images}/events/frostivus/2024/frostivus_2024_crystallized_joy.psd",
                    initial_count: 20,
                    quest_progress: [
                        {
                            quest_id: 1,
                            quest_name: "#DOTA_Craftworks_Quest_Event_ThrowSnowballsBeforeKill",
                            quest_progress_string: "#DOTA_Craftworks_Quest_Event_ThrowSnowballsBeforeKill_Progress",
                            stat_value: 3,
                            reward_quantity: 15
                        },
                        {
                            quest_id: 1,
                            quest_name: "#DOTA_Craftworks_Quest_Event_StealHat",
                            quest_progress_string: "#DOTA_Craftworks_Quest_Event_StealHat_Progress",
                            stat_value: 6,
                            reward_quantity: 12
                        }
                    ]
                },
                {
                    component_id: 2,
                    component_name: "#DOTA_Frostivus2024_Craftworks_Component_2",
                    component_image: "file://{images}/events/frostivus/2024/frostivus_2024_essence_of_friendship.psd",
                    initial_count: 16,
                    quest_progress: [
                        {
                            quest_id: 1,
                            quest_name: "#DOTA_Craftworks_Quest_PlayParty",
                            quest_progress_string: "#DOTA_Craftworks_Quest_PlayParty_Progress",
                            stat_value: 3,
                            reward_quantity: 10
                        },
                        {
                            quest_id: 1,
                            quest_name: "#DOTA_Craftworks_Quest_HighFiveAfterKill",
                            quest_progress_string: "#DOTA_Craftworks_Quest_HighFiveAfterKill_Progress",
                            stat_value: 6,
                            reward_quantity: 12
                        }
                    ]
                },
                {
                    component_id: 3,
                    component_name: "#DOTA_Frostivus2024_Craftworks_Component_3",
                    component_image: "file://{images}/events/frostivus/2024/frostivus_2024_concentrated_whimsy.psd",
                    initial_count: 122,
                    quest_progress: [
                        {
                            quest_id: 1,
                            quest_name: "#DOTA_Craftworks_Quest_Event_BumpPenguins",
                            quest_progress_string: "#DOTA_Craftworks_Quest_Event_BumpPenguins_Progress",
                            stat_value: 24,
                            reward_quantity: 3
                        },
                    ]
                },
                {
                    component_id: 4,
                    component_name: "#DOTA_Frostivus2024_Craftworks_Component_4",
                    component_image: "file://{images}/events/frostivus/2024/frostivus_2024_festive_spirit.psd",
                    initial_count: 0,
                    quest_progress: [
                        {
                            quest_id: 1,
                            quest_name: "#DOTA_Craftworks_Quest_HeroDamage",
                            quest_progress_string: "#DOTA_Craftworks_Quest_HeroDamage_Progress",
                            stat_value: 53942,
                            reward_quantity: 20
                        },
                        {
                            quest_id: 1,
                            quest_name: "#DOTA_Craftworks_Quest_ReceiveTip",
                            quest_progress_string: "#DOTA_Craftworks_Quest_ReceiveTip_Progress",
                            stat_value: 6,
                            reward_quantity: 9
                        }
                    ]
                },
            ],
            is_turbo: false
        }
    };
    TestProgressAnimation(data);
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoicG9zdF9nYW1lX3Byb2dyZXNzX2Zyb3N0aXZ1czIwMjQuanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyIuLi8uLi8uLi8uLi8uLi9jb250ZW50L2RvdGEvcGFub3JhbWEvc2NyaXB0cy9wb3N0X2dhbWVfcHJvZ3Jlc3MvcG9zdF9nYW1lX3Byb2dyZXNzX2Zyb3N0aXZ1czIwMjQudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IjtBQUFBLHFDQUFxQztBQUNyQyxtQ0FBbUM7QUFDbkMsK0NBQStDO0FBQy9DLG9EQUFvRDtBQUNwRCxzREFBc0Q7QUE2QnRELFNBQVMseUJBQXlCLENBQUMsVUFBbUIsRUFBRSxPQUEwQixFQUFFLFVBQXdDO0FBRTVILENBQUM7QUFFRCxTQUFTLGlDQUFpQyxDQUFDLEtBQWMsRUFBRSxPQUEwQixFQUFFLGNBQW1EO0lBQ3RJLElBQUksWUFBWSxHQUFHLEtBQUssQ0FBQztJQUN6QixJQUFJLGtCQUFrQixHQUFHLEtBQUssQ0FBQyxpQkFBaUIsQ0FBQyxlQUFlLENBQUMsQ0FBQztJQUNsRSxLQUFLLElBQUksQ0FBQyxHQUFHLENBQUMsRUFBRSxDQUFDLEdBQUcsY0FBYyxDQUFDLE1BQU0sRUFBRSxFQUFFLENBQUMsRUFBRTtRQUU1QyxJQUFJLGtCQUFrQixHQUFHLGNBQWMsQ0FBQyxDQUFDLENBQUMsQ0FBQztRQUMzQyxJQUFJLE1BQU0sR0FBRyxrQkFBa0IsQ0FBQyxjQUFjLENBQUM7UUFDL0MsSUFBSSxlQUFlLEdBQUc7WUFDbEIsWUFBWSxFQUFFLGtCQUFrQixDQUFDLFlBQVk7U0FDaEQsQ0FBQztRQUNGLElBQUksY0FBYyxHQUFHLENBQUMsQ0FBQyxXQUFXLENBQUMsT0FBTyxFQUFFLGtCQUFrQixFQUFFLFdBQVcsR0FBRyxDQUFDLEVBQUUsZUFBZSxDQUFDLENBQUM7UUFDbEcsSUFBSSxjQUFjLEdBQUcsY0FBYyxDQUFDLGtCQUFrQixDQUFDLHdCQUF3QixDQUFDLENBQUM7UUFFakYsY0FBYyxDQUFDLDBCQUEwQixDQUFD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