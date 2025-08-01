/// <reference path="../dota.d.ts" />
/// <reference path="../util.ts" />
/// <reference path="../sequence_actions.ts" />
/// <reference path="post_game_progress_utils.ts" />
/// <reference path="post_game_progress_screens.ts" />

                                 


interface CrownfallPostGame_t
{
    hero_id: number;
    crownfall_progress: CrownfallProgress_t;
    crownfall_candyworks: CrownfallCandyworks_t | undefined;
} 

interface CrownfallToken_t
{
    token_id: number;
    token_count: number;
    token_name: string;
}

interface CrownfallProgress_t
{
    overworld_id: number;
    overworld_name: string;
    claimable: boolean;
    tokens_granted: CrownfallToken_t[];
    scrap_granted: CrownfallToken_t[];
    victory: boolean;
    is_turbo: boolean;                     
}

interface CrownfallCandyworks_t
{
    weekly_rolls_earned: number;
    weekly_rolls_max: number;
    weekly_rollover_time: number;

    has_half: boolean;
    did_gain_half: boolean;
    did_gain_roll: boolean;

    was_capped: boolean;
    has_found_candyworks: boolean;
}

                     
function AnimateTokenProgress(panel: Panel_t, actions: ISequenceAction[], data: CrownfallProgress_t, hero_id: number )
{
                              
    var tokenListPanel = panel.FindChildTraverse("TokenList");
    panel.SetDialogVariableLocString("act_name", data.overworld_name);
    panel.SetDialogVariableInt("hero_id", hero_id);

    var claimableBadge = panel.FindChildInLayoutFile('OverworldClaimable');
    claimableBadge.SetHasClass("claimable", data.claimable);
    panel.SetHasClass("DidWin", data.victory);
    panel.SetHasClass("DidLose", !data.victory);

    var crownfallProgressTitle = panel.FindChildInLayoutFile('CrownfallProgressTitle');
    actions.push(new AddClassAction(crownfallProgressTitle, "ShowLogo"));

    var crownfallProgressRewards = panel.FindChildInLayoutFile( 'CrownfallProgressRewards' );
    crownfallProgressRewards.SetHasClass( "IsTurboGame", data.is_turbo );
    actions.push(new AddClassAction(crownfallProgressRewards, "ShowRewards"));

    var scrapListPanel = panel.FindChildTraverse("ScrapList")

                      

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
        var uiToken = tokenPanel.FindChildInLayoutFile("CrownfallToken") as DOTACrownfallToken_t;
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
            continue
        var uiToken = tokenPanel.FindChildInLayoutFile("CrownfallToken") as DOTACrownfallToken_t;
        uiToken.overworld_id = data.overworld_id;
        uiToken.token_id = token.token_id;
    }

    var bHasScrap = numScrap > 0;
    panel.SetHasClass( "HasScrap", bHasScrap)
    if (bHasScrap) {
        
        actions.push(new SkippableAction(new WaitAction(0.3)));
        actions.push(new AddClassAction(panel, "ShowScrap"));
    }
 
    actions.push(new SkippableAction(new WaitAction( bHasScrap ? 0.3 : 0.8)));
}

function AnimateCandyworksProgress(panel: Panel_t, actions: ISequenceAction[], data: CrownfallCandyworks_t) {
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

                                                                      
    var nextWeekStartPanel = panel.FindChildInLayoutFile('CrownfallRerollCountdown') as Countdown_t;
    nextWeekStartPanel.startTime = data.weekly_rollover_time;

                                    
    var rerollsPanel = panel.FindChildInLayoutFile("CrownfallRerollProgress");
    var maxEarned = Math.max(0, Math.min(data.weekly_rolls_max, 20));                            
    var iconPanels : Panel_t[] = [];

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
        actions.push(new StopSoundAction(xpSoundAction))
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

class AnimateCrownfallScreenAction extends RunSequentialActions
{
    data: CrownfallPostGame_t;

    constructor( data: CrownfallPostGame_t )
    {
        super();
        this.data = data;
    }

    start()
    {
        $.Msg('crownfall post game: processing...\n');

                                                            
        var panel = StartNewScreen( 'CrownfallProgressScreen' );
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

                                    

function TestAnimateCrownfall()
{
                                     
       
                      
                             
           
                            
                              
                                      
                              
                               
                   
                                   
                                     
                                           
                    
                   
                                  
                                     
                                           
                    
                   
                                   
                                     
                                           
                   
                
                             
           
        

    var data: CrownfallPostGame_t =
    {
        hero_id: 87,
        crownfall_progress:
        {
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
        crownfall_candyworks:
        {
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

    TestProgressAnimation( data );
}