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
    var crownfallProgressTitle = panel.FindChildInLayoutFile('CrownfallProgressTitle');
    actions.push(new AddClassAction(crownfallProgressTitle, "ShowLogo"));
    var crownfallProgressRewards = panel.FindChildInLayoutFile('CrownfallProgressRewards');
    crownfallProgressRewards.SetHasClass("IsTurboGame", data.is_turbo);
    actions.push(new AddClassAction(crownfallProgressRewards, "ShowRewards"));
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
    actions.push(new WaitAction(0.6));
    actions.push(new PlaySoundAction("HeroBadgeLevelUpReward.ShowReward"));
    actions.push(new AddClassAction(claimableBadge, "ShowProgressAvailable"));
    panel.SwitchClass("num_tokens", "NumTokens" + nNumTokens);
    actions.push(new WaitAction(0.8));
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
    if (data.has_half || data.did_gain_roll) {
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
    var end_with_half = (data.has_half && data.did_gain_roll) || (!data.has_half && !data.did_gain_roll);
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
            victory: false,
            overworld_id: 1,
            overworld_name: "Act 1",
            claimable: true,
            tokens_granted: [
                {
                    token_id: 1,
                    token_count: 0,
                    token_name: "#DOTA_Crownfall_Token_Crawling"
                },
                {
                    token_id: 2,
                    token_count: 2,
                    token_name: "#DOTA_Crownfall_Token_Running"
                },
                {
                    token_id: 18,
                    token_count: 0,
                    token_name: "#DOTA_Crownfall_Token_Healer"
                }
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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoicG9zdF9nYW1lX3Byb2dyZXNzX2Nyb3duZmFsbC5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbIi4uLy4uLy4uLy4uLy4uL2NvbnRlbnQvZG90YS9wYW5vcmFtYS9zY3JpcHRzL3Bvc3RfZ2FtZV9wcm9ncmVzcy9wb3N0X2dhbWVfcHJvZ3Jlc3NfY3Jvd25mYWxsLnRzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiI7QUFBQSxxQ0FBcUM7QUFDckMsbUNBQW1DO0FBQ25DLCtDQUErQztBQUMvQyxvREFBb0Q7QUFDcEQsc0RBQXNEO0FBMkN0RCxxQkFBcUI7QUFDckIsU0FBUyxvQkFBb0IsQ0FBQyxLQUFjLEVBQUUsT0FBMEIsRUFBRSxJQUF5QixFQUFFLE9BQWU7SUFFaEgsMEJBQTBCO0lBQzFCLElBQUksY0FBYyxHQUFHLEtBQUssQ0FBQyxpQkFBaUIsQ0FBQyxXQUFXLENBQUMsQ0FBQztJQUMxRCxLQUFLLENBQUMsMEJBQTBCLENBQUMsVUFBVSxFQUFFLElBQUksQ0FBQyxjQUFjLENBQUMsQ0FBQztJQUNsRSxLQUFLLENBQUMsb0JBQW9CLENBQUMsU0FBUyxFQUFFLE9BQU8sQ0FBQyxDQUFDO0lBRS9DLElBQUksY0FBYyxHQUFHLEtBQUssQ0FBQyxxQkFBcUIsQ0FBQyxvQkFBb0IsQ0FBQyxDQUFDO0lBQ3ZFLGNBQWMsQ0FBQyxXQUFXLENBQUMsV0FBVyxFQUFFLElBQUksQ0FBQyxTQUFTLENBQUMsQ0FBQztJQUN4RCxLQUFLLENBQUMsV0FBVyxDQUFDLFFBQVEsRUFBRSxJQUFJLENBQUMsT0FBTyxDQUFDLENBQUM7SUFFMUMsSUFBSSxzQkFBc0IsR0FBRyxLQUFLLENBQUMscUJBQXFCLENBQUMsd0JBQXdCLENBQUMsQ0FBQztJQUNuRixPQUFPLENBQUMsSUFBSSxDQUFDLElBQUksY0FBYyxDQUFDLHNCQUFzQixFQUFFLFVBQVUsQ0FBQyxDQUFDLENBQUM7SUFFckUsSUFBSSx3QkFBd0IsR0FBRyxLQUFLLENBQUMscUJBQXFCLENBQUUsMEJBQTBCLENB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