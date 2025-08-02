"use strict";
/// <reference path="../dota.d.ts" />
/// <reference path="../util.ts" />
/// <reference path="../sequence_actions.ts" />
/// <reference path="post_game_progress_utils.ts" />
/// <reference path="post_game_progress_screens.ts" />
// Crownfall Progress
function AnimateTokenProgress(panel, actions, data, hero_id) {
    // Set up panel base state
    var tokenListPanel = panel.FindChildTraverse("TokenList");
    panel.SetDialogVariableLocString("act_name", data.overworld_name);
    panel.SetDialogVariableInt("hero_id", hero_id);
    var claimableBadge = panel.FindChildInLayoutFile('OverworldClaimable');
    claimableBadge.SetHasClass("claimable", data.claimable);
    panel.SetHasClass("DidWin", data.victory);
    panel.SetHasClass("DidLose", !data.victory);
    var crownfallProgressTitle = panel.FindChildInLayoutFile('CrownfallProgressTitle');
    actions.push(new AddClassAction(crownfallProgressTitle, "ShowLogo"));
    var crownfallProgressRewards = panel.FindChildInLayoutFile('CrownfallProgressRewards');
    crownfallProgressRewards.SetHasClass("IsTurboGame", data.is_turbo);
    actions.push(new AddClassAction(crownfallProgressRewards, "ShowRewards"));
    var scrapListPanel = panel.FindChildTraverse("ScrapList");
    // Build animation
    var nNumTokens = data.tokens_granted.length;
    let bVictory = data.victory;
    let bNonTurboLoss = !data.victory && !data.is_turbo;
    let nChosenTokenIndex = 0;
    let bAnyTokens = false;
    for (var nTokenIndex = 0; nTokenIndex < nNumTokens; ++nTokenIndex) {
        var token = data.tokens_granted[nTokenIndex];
        var panelProperties = {
            overworld_id: data.overworld_id,
            token_id: token.token_id
        };
        var tokenPanel = $.CreatePanel("Panel", tokenListPanel, "Token" + nTokenIndex, panelProperties);
        var bSnippetLoaded = tokenPanel.BLoadLayoutSnippet("CrownfallRewardTokenContainer");
        actions.push(new WaitAction(0.1));
        actions.push(new AddClassAction(tokenPanel, "ShowToken"));
        if (!bSnippetLoaded)
            continue;
        if (token.token_count == 0 || bNonTurboLoss) {
            tokenPanel.SetHasClass("Empty", true);
        }
        if (token.token_count > 0) {
            nChosenTokenIndex = nTokenIndex;
            bAnyTokens = true;
        }
        var flHalvedTokenCount = token.token_count / 2.0;
        var strTokenCountString = '' + flHalvedTokenCount;
        tokenPanel.SetDialogVariable("token_count_string", strTokenCountString);
        tokenPanel.SetDialogVariableLocString("token_name", token.token_name);
        var uiToken = tokenPanel.FindChildInLayoutFile("CrownfallToken");
        uiToken.overworld_id = data.overworld_id;
        uiToken.token_id = token.token_id;
    }
    if (bNonTurboLoss) {
        // For losses, we do an animation.
        let nIteration = 0;
        let nNumIterations = 21 + nChosenTokenIndex;
        for (var i = 0; i < nNumIterations; ++i) {
            let nTokenIndex = i % nNumTokens;
            let tokenPanel = tokenListPanel.FindChildInLayoutFile("Token" + nTokenIndex);
            let flProgress = i / nNumIterations;
            let flDelay = 0.02 + flProgress * flProgress * 0.3;
            if (tokenPanel) {
                actions.push(new RemoveClassAction(tokenPanel, "Empty"));
                actions.push(new PlaySoundAction('random_wheel_rotate_click'));
                actions.push(new WaitAction(flDelay));
                actions.push(new AddClassAction(tokenPanel, "Empty"));
            }
        }
        for (var nTokenIndex = 0; nTokenIndex < nNumTokens; ++nTokenIndex) {
            var token = data.tokens_granted[nTokenIndex];
            if (token.token_count > 0) {
                let tokenPanel = tokenListPanel.FindChildInLayoutFile("Token" + nTokenIndex);
                actions.push(new RemoveClassAction(tokenPanel, "Empty"));
            }
        }
    }
    if (bAnyTokens) {
        actions.push(new PlaySoundAction('ui.badge_levelup'));
    }
    actions.push(new WaitAction(0.1));
    actions.push(new AddClassAction(tokenListPanel, "HighlightTokenReceived"));
    actions.push(new SkippableAction(new WaitAction(0.6)));
    actions.push(new PlaySoundAction("HeroBadgeLevelUpReward.ShowReward"));
    actions.push(new AddClassAction(claimableBadge, "ShowProgressAvailable"));
    panel.SwitchClass("num_tokens", "NumTokens" + nNumTokens);
    var numScrap = data.scrap_granted.length;
    for (var nTokenIndex = 0; nTokenIndex < numScrap; ++nTokenIndex) {
        var token = data.scrap_granted[nTokenIndex];
        var panelProperties = {
            overworld_id: data.overworld_id,
            token_id: token.token_id
        };
        var tokenPanel = $.CreatePanel("Panel", scrapListPanel, "Scrap" + nTokenIndex, panelProperties);
        var bSnippetLoaded = tokenPanel.BLoadLayoutSnippet("CrownfallRewardTokenContainer");
        if (!bSnippetLoaded)
            continue;
        var uiToken = tokenPanel.FindChildInLayoutFile("CrownfallToken");
        uiToken.overworld_id = data.overworld_id;
        uiToken.token_id = token.token_id;
    }
    var bHasScrap = numScrap > 0;
    panel.SetHasClass("HasScrap", bHasScrap);
    if (bHasScrap) {
        actions.push(new SkippableAction(new WaitAction(0.3)));
        actions.push(new AddClassAction(panel, "ShowScrap"));
    }
    actions.push(new SkippableAction(new WaitAction(bHasScrap ? 0.3 : 0.8)));
}
function AnimateCandyworksProgress(panel, actions, data) {
    if (!data.has_found_candyworks) {
        panel.AddClass('CandyworksLocked');
    }
    var earned_rolls_with_half = data.weekly_rolls_earned;
    if (data.has_half) {
        // add existing half roll from turbo
        earned_rolls_with_half = Math.min(earned_rolls_with_half + 0.5, data.weekly_rolls_max);
    }
    panel.SetDialogVariable('weekly_earned_s', earned_rolls_with_half.toString());
    panel.SetDialogVariableInt('weekly_earned', data.weekly_rolls_earned);
    panel.SetDialogVariableInt('weekly_max', data.weekly_rolls_max);
    // Set up countdown timer for when you get access to new resources
    var nextWeekStartPanel = panel.FindChildInLayoutFile('CrownfallRerollCountdown');
    nextWeekStartPanel.startTime = data.weekly_rollover_time;
    // Initialize the reroll section
    var rerollsPanel = panel.FindChildInLayoutFile("CrownfallRerollProgress");
    var maxEarned = Math.max(0, Math.min(data.weekly_rolls_max, 20)); // cap to reasonable values
    var iconPanels = [];
    if (rerollsPanel) {
        for (var i = 0; i < maxEarned; ++i) {
            var iconPanel = $.CreatePanel('Panel', rerollsPanel, '');
            iconPanel.BLoadLayoutSnippet('CrownfallRerollIcon');
            iconPanels.push(iconPanel);
        }
    }
    // Show Candyworks section
    actions.push(new SkippableAction(new WaitAction(0.5)));
    actions.push(new AddClassAction(panel, 'ShowCandyworks'));
    actions.push(new SkippableAction(new WaitAction(0.5)));
    // Animate existing rerolls
    var xpSoundAction = null;
    if (data.weekly_rolls_earned > 0 || data.has_half) {
        xpSoundAction = new PlaySoundAction('XP.Count');
        actions.push(new SkippableAction(xpSoundAction));
    }
    const tickDuration = 0.07;
    for (var i = 0; i < data.weekly_rolls_earned; ++i) {
        if (i >= iconPanels.length)
            break;
        actions.push(new AddClassAction(iconPanels[i], 'RerollActive'));
        actions.push(new SkippableAction(new WaitAction(tickDuration)));
    }
    // Show their half-existing roll
    var nextPanel = null;
    if (!data.was_capped) {
        // HACK: Don't show half roll if they have the maximum -- it can appear and disappear as they win turbo games.
        if (data.weekly_rolls_earned < iconPanels.length) {
            nextPanel = iconPanels[data.weekly_rolls_earned];
        }
        // If they had a half reroll, show that
        if (data.has_half && nextPanel) {
            actions.push(new AddClassAction(nextPanel, 'RerollHalfActive'));
            actions.push(new SkippableAction(new WaitAction(tickDuration)));
        }
    }
    // end the sound fx
    if (xpSoundAction) {
        actions.push(new StopSoundAction(xpSoundAction));
    }
    if (data.was_capped && data.weekly_rolls_earned < data.weekly_rolls_max) {
        // Just let them know that they are capped; we are done otherwise
        if (data.weekly_rolls_earned < data.weekly_rolls_max) {
            actions.push(new AddClassAction(panel, 'WeeklyResourceRemaining'));
        }
        actions.push(new AddClassAction(panel, 'RerollsCapped'));
        return;
    }
    // Now that we've shown what they already have, show what they are gaining:
    actions.push(new SkippableAction(new WaitAction(0.7)));
    // Now show what they gained
    if (data.did_gain_roll) {
        earned_rolls_with_half = Math.min(data.weekly_rolls_max, earned_rolls_with_half + 1);
    }
    else if (data.did_gain_half) {
        earned_rolls_with_half = Math.min(data.weekly_rolls_max, earned_rolls_with_half + 0.5);
    }
    actions.push(new SetDialogVariableStringAction(panel, 'weekly_earned_s', earned_rolls_with_half.toString()));
    if (data.did_gain_half || data.did_gain_roll) {
        actions.push(new PlaySoundAction('ui.badge_levelup'));
    }
    // If they gained a new roll, show that
    var earned_rolls = data.weekly_rolls_earned;
    if ((data.has_half && data.did_gain_half) || data.did_gain_roll) {
        if (earned_rolls < data.weekly_rolls_max) {
            earned_rolls += 1;
            actions.push(new SetDialogVariableIntAction(panel, 'weekly_earned', earned_rolls));
        }
        if (nextPanel) {
            actions.push(new AddClassAction(nextPanel, 'TransitionsEnabled'));
            actions.push(new AddClassAction(nextPanel, 'RerollActive'));
            actions.push(new RemoveClassAction(nextPanel, 'RerollHalfActive'));
            actions.push(new AddClassAction(nextPanel, 'RerollHighlightNew'));
            actions.push(new SkippableAction(new WaitAction(0.4)));
        }
    }
    // If they gained a half roll, show that too
    var end_with_half = (data.has_half && data.did_gain_roll) || (!data.has_half && data.did_gain_half);
    if (end_with_half && earned_rolls < iconPanels.length) {
        var nextHalfPanel = iconPanels[earned_rolls];
        actions.push(new AddClassAction(nextHalfPanel, 'TransitionsEnabled'));
        actions.push(new AddClassAction(nextHalfPanel, 'RerollHalfActive'));
        actions.push(new AddClassAction(nextHalfPanel, 'RerollHighlightNew'));
        //actions.push(new PlaySoundAction('PlayerDraft.ShowPlayer'));
        actions.push(new SkippableAction(new WaitAction(0.4)));
    }
    // Display their current state
    if (earned_rolls < data.weekly_rolls_max) {
        actions.push(new AddClassAction(panel, 'WeeklyResourceRemaining'));
    }
    else {
        actions.push(new AddClassAction(panel, 'WeeklyResourceExhausted'));
    }
}
class AnimateCrownfallScreenAction extends RunSequentialActions {
    data;
    constructor(data) {
        super();
        this.data = data;
    }
    start() {
        $.Msg('crownfall post game: processing...\n');
        // Create the screen and do a bunch of initial setup
        var panel = StartNewScreen('CrownfallProgressScreen');
        panel.BLoadLayoutSnippet("CrownfallProgress");
        // Setup the sequence of actions to animate the screen
        var actions = this.actions;
        // TODO: Post-game music/stinger
        //actions.push( new PlaySoundAction( "Crownfall.ui_postgame_start" ) );
        actions.push(new AddClassAction(panel, 'ShowScreen'));
        actions.push(new SkippableAction(new WaitAction(0.5)));
        actions.push(new AddScreenLinkAction(panel, 'CrownfallProgress', '#DOTA_PlusPostGame_CrownfallProgress', function () {
            panel.SwitchClass('current_screen', 'ShowCrownfallProgress');
        }));
        actions.push(new SwitchClassAction(panel, 'current_screen', 'ShowCrownfallProgress'));
        actions.push(new SkippableAction(new WaitAction(0.2)));
        AnimateTokenProgress(panel, this.actions, this.data.crownfall_progress, this.data.hero_id);
        this.actions.push(new StopSkippingAheadAction());
        if (this.data.crownfall_candyworks) {
            AnimateCandyworksProgress(panel, this.actions, this.data.crownfall_candyworks);
            this.actions.push(new StopSkippingAheadAction());
        }
        this.actions.push(new SkippableAction(new WaitAction(2.0)));
        this.actions.push(new SwitchClassAction(panel, 'current_screen', ''));
        this.actions.push(new SkippableAction(new WaitAction(1.5)));
        super.start();
    }
}
//----------------------------------
function TestAnimateCrownfall() {
    //var data: CrownfallPostGame_t =
    //{
    //    hero_id: 87,
    //    crownfall_progress:
    //    {
    //        victory: true,
    //        overworld_id: 1,
    //        overworld_name: "Act 1",
    //        claimable: true,
    //        tokens_granted: [
    //            {
    //                token_id: 1, 
    //                token_count: 2,
    //                token_name: "Walking"
    //            },
    //            {
    //                token_id: 2,
    //                token_count: 2,
    //                token_name: "Running"
    //            },
    //            {
    //                token_id: 18,
    //                token_count: 2,
    //                token_name: "Healing"
    //            }
    //        ],
    //        is_turbo: false
    //    }
    //};
    var data = {
        hero_id: 87,
        crownfall_progress: {
            victory: true,
            overworld_id: 2,
            overworld_name: "Act 2",
            claimable: true,
            tokens_granted: [
                {
                    token_id: 1,
                    token_count: 0,
                    token_name: "#DOTA_Crownfall_Token_Strength"
                },
                {
                    token_id: 2,
                    token_count: 2,
                    token_name: "#DOTA_Crownfall_Token_Agility"
                },
                {
                    token_id: 18,
                    token_count: 2,
                    token_name: "#DOTA_Crownfall_Token_Wand"
                }
            ],
            scrap_granted: [
                {
                    token_id: 21,
                    token_count: 2,
                    token_name: "#DOTA_Crownfall_Token_Scrap"
                },
                {
                    token_id: 21,
                    token_count: 2,
                    token_name: "#DOTA_Crownfall_Token_Scrap"
                },
                {
                    token_id: 21,
                    token_count: 2,
                    token_name: "#DOTA_Crownfall_Token_Scrap"
                },
                {
                    token_id: 21,
                    token_count: 2,
                    token_name: "#DOTA_Crownfall_Token_Scrap"
                },
                {
                    token_id: 21,
                    token_count: 2,
                    token_name: "#DOTA_Crownfall_Token_Scrap"
                },
                {
                    token_id: 21,
                    token_count: 2,
                    token_name: "#DOTA_Crownfall_Token_Scrap"
                },
                {
                    token_id: 21,
                    token_count: 2,
                    token_name: "#DOTA_Crownfall_Token_Scrap"
                },
                {
                    token_id: 21,
                    token_count: 2,
                    token_name: "#DOTA_Crownfall_Token_Scrap"
                },
            ],
            is_turbo: false
        },
        crownfall_candyworks: {
            weekly_rolls_earned: 9,
            weekly_rolls_max: 10,
            weekly_rollover_time: Math.floor(Date.now() / 1000) + 7200,
            has_half: true,
            did_gain_half: false,
            did_gain_roll: true,
            was_capped: false,
            has_found_candyworks: false,
        }
    };
    TestProgressAnimation(data);
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoicG9zdF9nYW1lX3Byb2dyZXNzX2Nyb3duZmFsbC5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbIi4uLy4uLy4uLy4uLy4uL2NvbnRlbnQvZG90YS9wYW5vcmFtYS9zY3JpcHRzL3Bvc3RfZ2FtZV9wcm9ncmVzcy9wb3N0X2dhbWVfcHJvZ3Jlc3NfY3Jvd25mYWxsLnRzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiI7QUFBQSxxQ0FBcUM7QUFDckMsbUNBQW1DO0FBQ25DLCtDQUErQztBQUMvQyxvREFBb0Q7QUFDcEQsc0RBQXNEO0FBNEN0RCxxQkFBcUI7QUFDckIsU0FBUyxvQkFBb0IsQ0FBQyxLQUFjLEVBQUUsT0FBMEIsRUFBRSxJQUF5QixFQUFFLE9BQWU7SUFFaEgsMEJBQTBCO0lBQzFCLElBQUksY0FBYyxHQUFHLEtBQUssQ0FBQyxpQkFBaUIsQ0FBQyxXQUFXLENBQUMsQ0FBQztJQUMxRCxLQUFLLENBQUMsMEJBQTBCLENBQUMsVUFBVSxFQUFFLElBQUksQ0FBQyxjQUFjLENBQUMsQ0FBQztJQUNsRSxLQUFLLENBQUMsb0JBQW9CLENBQUMsU0FBUyxFQUFFLE9BQU8sQ0FBQyxDQUFDO0lBRS9DLElBQUksY0FBYyxHQUFHLEtBQUssQ0FBQyxxQkFBcUIsQ0FBQyxvQkFBb0IsQ0FBQyxDQUFDO0lBQ3ZFLGNBQWMsQ0FBQyxXQUFXLENBQUMsV0FBVyxFQUFFLElBQUksQ0FBQyxTQUFTLENBQUMsQ0FBQztJQUN4RCxLQUFLLENBQUMsV0FBVyxDQUFDLFFBQVEsRUFBRSxJQUFJLENBQUMsT0FBTyxDQUFDLENBQUM7SUFDMUMsS0FBSyxDQUFDLFdBQVcsQ0FBQyxTQUFTLEVBQUUsQ0FBQyxJQUFJLENBQUMsT0FBTyxDQUFDLENBQUM7SUFFNUMsSUFBSSxzQkFBc0IsR0FBRyxLQUFLLENBQUMscUJBQXFCLENBQUMsd0JBQXdCLENBQUMsQ0FBQztJQUNuRixPQUFPLENBQUMsSUFBSSxDQUFDLElBQUksY0FBYyxDQUFDLHNCQUFzQixFQUFFLFVBQVUsQ0FB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