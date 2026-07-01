"use strict";
/// <reference path="../dota.d.ts" />
/// <reference path="../util.ts" />
/// <reference path="../sequence_actions.ts" />
/// <reference path="post_game_progress_utils.ts" />
/// <reference path="post_game_progress_screens.ts" />
// Dark Carnival Progress
function AnimateDarkCarnivalTokenProgress(panel, actions, data, hero_id) {
    // Set up panel base state
    var tokenListPanel = panel.FindChildTraverse("TokenList");
    panel.SetDialogVariableLocString("act_name", data.overworld_name);
    panel.SetDialogVariableInt("hero_id", hero_id);
    var claimableBadge = panel.FindChildInLayoutFile('OverworldClaimable');
    claimableBadge.SetHasClass("claimable", data.claimable);
    panel.SetHasClass("DidWin", data.victory);
    panel.SetHasClass("DidLose", !data.victory);
    var darkCarnivalProgressTitle = panel.FindChildInLayoutFile('DarkCarnivalProgressTitle');
    actions.push(new AddClassAction(darkCarnivalProgressTitle, "ShowLogo"));
    actions.push(new WaitAction(0.3));
    var darkCarnivalProgressRewards = panel.FindChildInLayoutFile('DarkCarnivalProgressRewards');
    darkCarnivalProgressRewards.SetHasClass("IsTurboGame", data.is_turbo);
    actions.push(new AddClassAction(darkCarnivalProgressRewards, "ShowRewards"));
    // Build animation
    actions.push(new WaitAction(0.2));
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
        var bSnippetLoaded = tokenPanel.BLoadLayoutSnippet("DarkCarnivalRewardTokenContainer");
        actions.push(new WaitAction(0.15));
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
        var uiToken = tokenPanel.FindChildInLayoutFile("OverworldToken");
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
    panel.SwitchClass("num_tokens", "NumTokens" + nNumTokens);
    var scrapListPanel = panel.FindChildTraverse("ScrapList");
    var numScrap = data.scrap_granted.length;
    var bHasScrap = numScrap > 0;
    panel.SetHasClass("HasScrap", bHasScrap);
    if (bHasScrap) {
        actions.push(new SkippableAction(new WaitAction(0.3)));
        actions.push(new AddClassAction(panel, "ShowScrap"));
    }
    if (numScrap == 2) {
        actions.push(new AddClassAction(scrapListPanel, "TiltTickets"));
    }
    for (var nTokenIndex = 0; nTokenIndex < numScrap; ++nTokenIndex) {
        var token = data.scrap_granted[nTokenIndex];
        var panelProperties = {
            overworld_id: data.overworld_id,
            token_id: token.token_id
        };
        var tokenPanel = $.CreatePanel("Panel", scrapListPanel, "Scrap" + nTokenIndex, panelProperties);
        var bSnippetLoaded = tokenPanel.BLoadLayoutSnippet("DarkCarnivalRewardTokenContainer");
        if (!bSnippetLoaded)
            continue;
        var uiToken = tokenPanel.FindChildInLayoutFile("OverworldToken");
        uiToken.overworld_id = data.overworld_id;
        uiToken.token_id = token.token_id;
        actions.push(new SkippableAction(new WaitAction(0.3)));
        actions.push(new AddClassAction(tokenPanel, "ShowToken"));
    }
    actions.push(new SkippableAction(new WaitAction(bHasScrap ? 0.3 : 0.8)));
}
function AnimateDarkCarnivalClaimableBadge(panel, actions, data, hero_id) {
    var claimableBadge = panel.FindChildInLayoutFile('OverworldClaimable');
    claimableBadge.SetHasClass("claimable", data.claimable);
    // Progress available
    actions.push(new AddClassAction(claimableBadge, "ShowProgressAvailable"));
}
function AnimateDarkCarnivalCandyworksProgress(panel, actions, data) {
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
    var nextWeekStartPanel = panel.FindChildInLayoutFile('DarkCarnivalRerollCountdown');
    nextWeekStartPanel.startTime = data.weekly_rollover_time;
    // Initialize the reroll section
    var rerollsPanel = panel.FindChildInLayoutFile("DarkCarnivalRerollProgress");
    var maxEarned = Math.max(0, Math.min(data.weekly_rolls_max, 20)); // cap to reasonable values
    var iconPanels = [];
    if (rerollsPanel) {
        for (var i = 0; i < maxEarned; ++i) {
            var iconPanel = $.CreatePanel('Panel', rerollsPanel, '');
            iconPanel.BLoadLayoutSnippet('DarkCarnivalRerollIcon');
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
function AnimateDarkCarnivalFortuneTellerProgress(panel, actions, data) {
    var fortuneTellerProgress = panel.FindChildTraverse("DarkCarnivalFortuneTellerProgress");
    if (!data.earned_daily_coin) {
        fortuneTellerProgress.AddClass("EarnedDailyCoin");
    }
    var fortuneTellerCoinContainer = panel.FindChildTraverse("DarkCarnivalFortuneTellerCoinContainer");
    for (let i = 1; i <= data.daily_coins_max; i++) {
        var coinPanel = $.CreatePanel("Panel", fortuneTellerCoinContainer, "Coin" + i);
        coinPanel.BLoadLayoutSnippet("DarkCarnivalFortuneTellerCoin");
        if (i <= data.daily_coins_previously_earned) {
            coinPanel.AddClass("PreviouslyEarned");
        }
        else if (data.earned_daily_coin && i == data.daily_coins_previously_earned + 1) {
            coinPanel.AddClass("Earned");
        }
        var fortuneTellerProgressMessage = panel.FindChildTraverse("DarkCarnivalFortunteTellerEarnedMessageContainer");
        actions.push(new AddClassAction(fortuneTellerProgressMessage, "ShowMessage"));
        actions.push(new WaitAction(0.15));
        actions.push(new AddClassAction(coinPanel, "ShowCoin"));
    }
    let progressLabel = $('#DarkCarnivalFortunteTellerDailyProgress');
    let progressToken = data.daily_coins_previously_earned !== data.daily_coins_previously_earned ?
        "#DOTA_Dark_Carnival_PostGame_FortuneTellerProgress" :
        "#DOTA_Dark_Carnival_PostGame_FortuneTellerMaxProgress";
    progressLabel?.SetDialogVariableInt("earned_coins", data.daily_coins_previously_earned + Number(data.earned_daily_coin));
    progressLabel?.SetDialogVariableInt("max_coins", data.daily_coins_max);
    // progressLabel?.SetDialogVariable("countdown_time", data.daily_rollover_time );
    var nextWeekStartPanel = panel.FindChildInLayoutFile('DarkCarnivalFortunteTellerDailyProgress');
    nextWeekStartPanel.startTime = data.daily_rollover_time;
    actions.push(new WaitAction(0.15));
    actions.push(new AddClassAction($('#DarkCarnivalFortunteTellerDailyProgress'), "ShowFortuneTellerDescription"));
}
class AnimateDarkCarnivalScreenAction extends RunSequentialActions {
    data;
    constructor(data) {
        super();
        this.data = data;
    }
    start() {
        $.Msg('dark carnival post game: processing...\n');
        // Create the screen and do a bunch of initial setup
        var panel = StartNewScreen('DarkCarnivalProgressScreen');
        panel.BLoadLayoutSnippet("DarkCarnivalProgress");
        // Setup the sequence of actions to animate the screen
        var actions = this.actions;
        // TODO: Post-game music/stinger
        //actions.push( new PlaySoundAction( "Crownfall.ui_postgame_start" ) );
        actions.push(new AddClassAction(panel, 'ShowScreen'));
        actions.push(new SkippableAction(new WaitAction(0.5)));
        actions.push(new AddScreenLinkAction(panel, 'DarkCarnivalProgress', '#DOTA_PlusPostGame_DarkCarnivalProgress', function () {
            panel.SwitchClass('current_screen', 'ShowDarkCarnivalProgress');
        }));
        actions.push(new SwitchClassAction(panel, 'current_screen', 'ShowDarkCarnivalProgress'));
        actions.push(new SkippableAction(new WaitAction(0.2)));
        AnimateDarkCarnivalTokenProgress(panel, this.actions, this.data.dark_carnival_progress, this.data.hero_id);
        this.actions.push(new StopSkippingAheadAction());
        if (this.data.dark_carnival_fortune_teller) {
            AnimateDarkCarnivalFortuneTellerProgress(panel, this.actions, this.data.dark_carnival_fortune_teller);
            this.actions.push(new StopSkippingAheadAction());
        }
        actions.push(new SkippableAction(new WaitAction(0.5)));
        AnimateDarkCarnivalClaimableBadge(panel, this.actions, this.data.dark_carnival_progress, this.data.hero_id);
        if (this.data.dark_carnival_candyworks) {
            AnimateDarkCarnivalCandyworksProgress(panel, this.actions, this.data.dark_carnival_candyworks);
            this.actions.push(new StopSkippingAheadAction());
        }
        this.actions.push(new SkippableAction(new WaitAction(2.0)));
        this.actions.push(new SwitchClassAction(panel, 'current_screen', ''));
        this.actions.push(new SkippableAction(new WaitAction(1.5)));
        super.start();
    }
}
//----------------------------------
function TestAnimateDarkCarnival() {
    var data = {
        hero_id: 87,
        dark_carnival_progress: {
            victory: true,
            overworld_id: 11,
            overworld_name: "Act 1",
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
                    token_id: 3,
                    token_count: 2,
                    token_name: "#DOTA_Crownfall_Token_Wand"
                }
            ],
            scrap_granted: [
                {
                    token_id: 18,
                    token_count: 2,
                    token_name: "#DOTA_DarkCarnival_Token_CarnivalScrap"
                },
                {
                    token_id: 18,
                    token_count: 2,
                    token_name: "#DOTA_DarkCarnival_Token_CarnivalScrap"
                },
            ],
            is_turbo: false
        },
        dark_carnival_candyworks: {
            weekly_rolls_earned: 7,
            weekly_rolls_max: 10,
            weekly_rollover_time: Math.floor(Date.now() / 1000) + 7200,
            has_half: true,
            did_gain_half: false,
            did_gain_roll: true,
            was_capped: false,
            has_found_candyworks: false,
        },
        dark_carnival_fortune_teller: {
            daily_coins_previously_earned: 1,
            daily_coins_max: 1,
            earned_daily_coin: true,
            daily_rollover_time: Math.floor(Date.now() / 1000) + 7200,
        }
    };
    TestProgressAnimation(data);
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoicG9zdF9nYW1lX3Byb2dyZXNzX2RhcmtfY2Fybml2YWwuanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyIuLi8uLi8uLi8uLi8uLi9jb250ZW50L2RvdGEvcGFub3JhbWEvc2NyaXB0cy9wb3N0X2dhbWVfcHJvZ3Jlc3MvcG9zdF9nYW1lX3Byb2dyZXNzX2RhcmtfY2Fybml2YWwudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IjtBQUFBLHFDQUFxQztBQUNyQyxtQ0FBbUM7QUFDbkMsK0NBQStDO0FBQy9DLG9EQUFvRDtBQUNwRCxzREFBc0Q7QUFrRHRELHlCQUF5QjtBQUN6QixTQUFTLGdDQUFnQyxDQUFDLEtBQWMsRUFBRSxPQUEwQixFQUFFLElBQTRCLEVBQUUsT0FBZTtJQUVsSSwwQkFBMEI7SUFDMUIsSUFBSSxjQUFjLEdBQUcsS0FBSyxDQUFDLGlCQUFpQixDQUFDLFdBQVcsQ0FBQyxDQUFDO0lBQzFELEtBQUssQ0FBQywwQkFBMEIsQ0FBQyxVQUFVLEVBQUUsSUFBSSxDQUFDLGNBQWMsQ0FBQyxDQUFDO0lBQ2xFLEtBQUssQ0FBQyxvQkFBb0IsQ0FBQyxTQUFTLEVBQUUsT0FBTyxDQUFDLENBQUM7SUFFL0MsSUFBSSxjQUFjLEdBQUcsS0FBSyxDQUFDLHFCQUFxQixDQUFDLG9CQUFvQixDQUFDLENBQUM7SUFDdkUsY0FBYyxDQUFDLFdBQVcsQ0FBQyxXQUFXLEVBQUUsSUFBSSxDQUFDLFNBQVMsQ0FBQyxDQUFDO0lBQ3hELEtBQUssQ0FBQyxXQUFXLENBQUMsUUFBUSxFQUFFLElBQUksQ0FBQyxPQUFPLENBQUMsQ0FBQztJQUMxQyxLQUFLLENBQUMsV0FBVyxDQUFDLFNBQVMsRUFBRSxDQUFDLElBQUksQ0FBQyxPQUFPLENBQUMsQ0FBQztJQUU1QyxJQUFJLHlCQUF5QixHQUFHLEtBQUssQ0FBQyxxQkFBcUIsQ0FBQywyQkFBMkIsQ0FBQyxDQUFDO0lBQ3pGLE9BQU8sQ0FBQyxJQUFJLENBQUMsSUFBSSxjQUFjLENBQUMseUJBQXlCLEVBQUUs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