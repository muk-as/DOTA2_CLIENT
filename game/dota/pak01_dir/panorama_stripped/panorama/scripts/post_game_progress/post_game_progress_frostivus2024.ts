/// <reference path="../dota.d.ts" />
/// <reference path="../util.ts" />
/// <reference path="../sequence_actions.ts" />
/// <reference path="post_game_progress_utils.ts" />
/// <reference path="post_game_progress_screens.ts" />

interface Frostivus2024PostGame_t
{
    frostivus2024_progress: Frostivus2024Progress_t;
} 

interface Frostivus2024InventoryComponent_t {
    component_id: number;
    component_name: string;
    component_image: string;
    initial_count: number;
    quest_progress: Frostivus2024QuestProgress_t[];                                                                                        
}
interface Frostivus2024QuestProgress_t {
    quest_id: number;
    quest_name: string;
    quest_progress_string: string;
    stat_value: number;
    reward_quantity: number;
}

interface Frostivus2024Progress_t
{
    claimable: boolean;
    inventory: Frostivus2024InventoryComponent_t[];
    is_turbo: boolean;                     
}

function AnimateFrostivus2024Quest(questPanel: Panel_t, actions: ISequenceAction[], quest_data: Frostivus2024QuestProgress_t) {

}

function AnimateFrostivus2024QuestProgress(panel: Panel_t, actions: ISequenceAction[], inventory_data: Frostivus2024InventoryComponent_t[]) {
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
        let componentImagePanel = componentPanel.FindChildTraverse("ComponentImage") as Image_t;
        componentImagePanel.SetImage(inventoryComponent.component_image);
        componentPanel.SetDialogVariableInt("component_count", inventoryComponent.initial_count);

        let currentComponentCount = inventoryComponent.initial_count;

        let bHasQuestProgress = quests.length > 0;
        if (bHasQuestProgress) {
                                                             
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
                                                                                        
                questPanel.SetDialogVariableLocStringNested("quest_progress", quest.quest_progress_string);

                                     
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
 
                         
class AnimateFrostivus2024ScreenAction extends RunSequentialActions
{
    data: Frostivus2024PostGame_t;

    constructor( data: Frostivus2024PostGame_t )
    {
        super();
        this.data = data;
    }

    start()
    {
        $.Msg('Frostivus 2024 post game: processing...\n');

                                                            
        let panel = StartNewScreen( 'Frostivus2024ProgressScreen' );
        panel.BLoadLayoutSnippet("Frostivus2024Progress");

                                                              
        let actions = this.actions;

        actions.push(new AddClassAction(panel, 'ShowScreen'));
        actions.push(new SkippableAction(new WaitAction(0.5)));

        actions.push(new AddScreenLinkAction(panel, 'Frostivus2024Progress', '#DOTA_PlusPostGame_Frostivus2024Progress', function () {
            panel.SwitchClass('current_screen', 'ShowFrostivus2024Progress');
        }));

                                         


        actions.push(new SwitchClassAction(panel, 'current_screen', 'ShowFrostivus2024Progress'));
        actions.push(new SkippableAction(new WaitAction(0.5)));

        let bAnyProgress: boolean = AnimateFrostivus2024QuestProgress(panel, this.actions, this.data.frostivus2024_progress.inventory );

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
    let data: Frostivus2024PostGame_t =
    {
        frostivus2024_progress:
        {
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
                        },]
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