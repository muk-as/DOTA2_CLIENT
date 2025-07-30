"use strict";
/// <reference path="../dota.d.ts" />
/// <reference path="../util.ts" />
/// <reference path="../sequence_actions.ts" />
/// <reference path="post_game_progress_utils.ts" />
/// <reference path="post_game_progress_screens.ts" />
function AnimateTokenProgress(panel, actions, data, hero_id) {
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
        earned_rolls_with_half = Math.min(earned_rolls_with_half + 0.5, data.weekly_rolls_max);
    }
    panel.SetDialogVariable('weekly_earned_s', earned_rolls_with_half.toString());
    panel.SetDialogVariableInt('weekly_earned', data.weekly_rolls_earned);
    panel.SetDialogVariableInt('weekly_max', data.weekly_rolls_max);
    var nextWeekStartPanel = panel.FindChildInLayoutFile('CrownfallRerollCountdown');
    nextWeekStartPanel.startTime = data.weekly_rollover_time;
    var rerollsPanel = panel.FindChildInLayoutFile("CrownfallRerollProgress");
    var maxEarned = Math.max(0, Math.min(data.weekly_rolls_max, 20));
    var iconPanels = [];
    if (rerollsPanel) {
        for (var i = 0; i < maxEarned; ++i) {
            var iconPanel = $.CreatePanel('Panel', rerollsPanel, '');
            iconPanel.BLoadLayoutSnippet('CrownfallRerollIcon');
            iconPanels.push(iconPanel);
        }
    }
    actions.push(new SkippableAction(new WaitAction(0.5)));
    actions.push(new AddClassAction(panel, 'ShowCandyworks'));
    actions.push(new SkippableAction(new WaitAction(0.5)));
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
    var nextPanel = null;
    if (!data.was_capped) {
        if (data.weekly_rolls_earned < iconPanels.length) {
            nextPanel = iconPanels[data.weekly_rolls_earned];
        }
        if (data.has_half && nextPanel) {
            actions.push(new AddClassAction(nextPanel, 'RerollHalfActive'));
            actions.push(new SkippableAction(new WaitAction(tickDuration)));
        }
    }
    if (xpSoundAction) {
        actions.push(new StopSoundAction(xpSoundAction));
    }
    if (data.was_capped && data.weekly_rolls_earned < data.weekly_rolls_max) {
        if (data.weekly_rolls_earned < data.weekly_rolls_max) {
            actions.push(new AddClassAction(panel, 'WeeklyResourceRemaining'));
        }
        actions.push(new AddClassAction(panel, 'RerollsCapped'));
        return;
    }
    actions.push(new SkippableAction(new WaitAction(0.7)));
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
    var end_with_half = (data.has_half && data.did_gain_roll) || (!data.has_half && data.did_gain_half);
    if (end_with_half && earned_rolls < iconPanels.length) {
        var nextHalfPanel = iconPanels[earned_rolls];
        actions.push(new AddClassAction(nextHalfPanel, 'TransitionsEnabled'));
        actions.push(new AddClassAction(nextHalfPanel, 'RerollHalfActive'));
        actions.push(new AddClassAction(nextHalfPanel, 'RerollHighlightNew'));
        actions.push(new SkippableAction(new WaitAction(0.4)));
    }
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
        var panel = StartNewScreen('CrownfallProgressScreen');
        panel.BLoadLayoutSnippet("CrownfallProgress");
        var actions = this.actions;
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
function TestAnimateCrownfall() {
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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoicG9zdF9nYW1lX3Byb2dyZXNzX2Nyb3duZmFsbC5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbIi4uLy4uLy4uLy4uLy4uL2NvbnRlbnQvZG90YS9wYW5vcmFtYS9zY3JpcHRzL3Bvc3RfZ2FtZV9wcm9ncmVzcy9wb3N0X2dhbWVfcHJvZ3Jlc3NfY3Jvd25mYWxsLnRzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiI7QUFBQSxxQ0FBcUM7QUFDckMsbUNBQW1DO0FBQ25DLCtDQUErQztBQUMvQyxvREFBb0Q7QUFDcEQsc0RBQXNEO0FBNkN0RCxTQUFTLG9CQUFvQixDQUFDLEtBQWMsRUFBRSxPQUEwQixFQUFFLElBQXlCLEVBQUUsT0FBZTtJQUdoSCxJQUFJLGNBQWMsR0FBRyxLQUFLLENBQUMsaUJBQWlCLENBQUMsV0FBVyxDQUFDLENBQUM7SUFDMUQsS0FBSyxDQUFDLDBCQUEwQixDQUFDLFVBQVUsRUFBRSxJQUFJLENBQUMsY0FBYyxDQUFDLENBQUM7SUFDbEUsS0FBSyxDQUFDLG9CQUFvQixDQUFDLFNBQVMsRUFBRSxPQUFPLENBQUMsQ0FBQztJQUUvQyxJQUFJLGNBQWMsR0FBRyxLQUFLLENBQUMscUJBQXFCLENBQUMsb0JBQW9CLENBQUMsQ0FBQztJQUN2RSxjQUFjLENBQUMsV0FBVyxDQUFDLFdBQVcsRUFBRSxJQUFJLENBQUMsU0FBUyxDQUFDLENBQUM7SUFDeEQsS0FBSyxDQUFDLFdBQVcsQ0FBQyxRQUFRLEVBQUUsSUFBSSxDQUFDLE9BQU8sQ0FBQyxDQUFDO0lBQzFDLEtBQUssQ0FBQyxXQUFXLENBQUMsU0FBUyxFQUFFLENBQUMsSUFBSSxDQUFDLE9BQU8sQ0FBQyxDQUFDO0lBRTVDLElBQUksc0JBQXNCLEdBQUcsS0FBSyxDQUFDLHFCQUFxQixDQUFDLHdCQUF3QixDQUFDLENBQUM7SUFDbkYsT0FBTyxDQUFDLElBQUksQ0FBQyxJQUFJLGNBQWMsQ0FBQyxzQkFBc0IsRUFBRSxVQUFVLENBQUMsQ0FBQyxDQUFDO0lBRXJFLElBQUksd0JB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