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
    var scrapListPanel = panel.FindChildTraverse("ScrapList");
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
            scrap_granted: [],
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