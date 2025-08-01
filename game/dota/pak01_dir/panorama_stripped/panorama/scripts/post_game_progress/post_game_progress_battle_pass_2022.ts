/// <reference path="../dota.d.ts" />
/// <reference path="../util.ts" />
/// <reference path="../sequence_actions.ts" />
/// <reference path="post_game_progress_utils.ts" />
/// <reference path="post_game_progress_sequence.ts" />

interface DOTAWeeklyQuestPipBar_International2022_t extends Panel_t
{
    SetSeasonInfo( nEvent: number, nSeasonID: number ): void;
    overridecurrentstars: number;
}

interface BP2022PostGame_t
{
    hero_id: number;
    battle_pass_2022_progress: BP2022Progress_t;
}

interface BP2022WeeklyBonus_t
{
    start_points: number;
    max_points: number;
    points_earned: number;
    outcome: string;
}

interface BP2022CandyPoints_t
{
    start_points: number;
    max_points: number;
    points_earned: number;
    points_per_bag: number;
    start_bags: number;
    end_bags: number;
    max_bags: number;
    outcome: string;
    sacked_candy: number;
    gained_reroll: boolean;
}


interface BP2022Progress_t
{
    active_season_id: number;
    battle_points_event_id: number;
    battle_points_start: number;
    battle_points_per_level: number;
    weekly_quest_initial_stars: number;
    actions_granted: BP2022WeeklyQuest_ActionGranted_t[];
    cavern_crawl: BP2022CavernCrawlProgress_t;
    weekly_bonus: BP2022WeeklyBonus_t;
    candy_points: BP2022CandyPoints_t;
    owned: boolean;
}

interface BP2022WeeklyQuest_ActionGranted_t
{
    progress_start_value: number;
    progress: number;
    level_thresholds: BP2022WeeklyQuest_LevelThreshold_t[];
}

interface BP2022WeeklyQuest_LevelThreshold_t
{
    threshold: number;
    name: string;
    description: string;
}

interface BP2022CavernCrawlProgress_t
{
    hero_id: number;
    bp_amount: number;
}

class AnimateBattlePass2022WeeklyQuestEntryAction extends RunSequentialActions
{
    questList: Panel_t;
    pipBar: DOTAWeeklyQuestPipBar_International2022_t;
    actionGranted: BP2022WeeklyQuest_ActionGranted_t;

    entryPanel: Panel_t;

    constructor( questList: Panel_t, pipBar: DOTAWeeklyQuestPipBar_International2022_t, actionGranted: BP2022WeeklyQuest_ActionGranted_t )
    {
        super();

        this.questList = questList;
        this.pipBar = pipBar;
        this.actionGranted = actionGranted;

        this.entryPanel = $.CreatePanel( 'Panel', this.questList, '' );
        this.entryPanel.BLoadLayoutSnippet( 'BattlePass2022WeeklyQuestEntry' );
        this.entryPanel.SetDialogVariableInt( 'progress_start_value', this.actionGranted.progress_start_value );
        this.entryPanel.SetDialogVariable( 'progress', '' + this.actionGranted.progress );

        const questStars = this.entryPanel.FindChildInLayoutFile( 'BattlePass2022WeeklyQuestStars' );
        const progressBar = this.entryPanel.FindChildInLayoutFile( 'BattlePass2022WeeklyProgressBar' ) as ProgressBarWithMiddle_t;

        let activeThreshold = null;
        for ( let i = 0; i < actionGranted.level_thresholds.length; ++i )
        {
            const levelThreshold = actionGranted.level_thresholds[i];
            if ( activeThreshold == null && this.actionGranted.progress_start_value < levelThreshold.threshold )
            {
                activeThreshold = levelThreshold;
            }

            const tierStar = $.CreatePanel( 'Panel', questStars, 'TierStar' + i );
            tierStar.AddClass( 'BattlePass2022TierStar' );
            if ( activeThreshold == null )
            {
                tierStar.AddClass( 'StarAchieved' );
            }
        }
        if ( activeThreshold == null )
        {
            activeThreshold = actionGranted.level_thresholds[actionGranted.level_thresholds.length - 1];
        }

        this.entryPanel.SetDialogVariableInt( 'progress_max_value', activeThreshold.threshold );
        this.entryPanel.SetDialogVariableLocString( 'progress_name', activeThreshold.name );
        this.entryPanel.SetDialogVariable( 'progress_description', activeThreshold.description );

        progressBar.lowervalue = this.actionGranted.progress_start_value;
        progressBar.max = activeThreshold.threshold;
    }

    start(): void
    {
        const questStars = this.entryPanel.FindChildInLayoutFile( 'BattlePass2022WeeklyQuestStars' );
        const progressBar = this.entryPanel.FindChildInLayoutFile( 'BattlePass2022WeeklyProgressBar' ) as ProgressBarWithMiddle_t;
        progressBar.lowervalue = this.actionGranted.progress_start_value;

        this.actions.push( new AddClassAction( this.entryPanel, 'ShowEntry' ) );
        this.actions.push( new WaitAction( 0.2 ) );

        let startValue = this.actionGranted.progress_start_value;
        const finalValue = startValue + this.actionGranted.progress;
        for ( let i = 0; i < this.actionGranted.level_thresholds.length; ++i )
        {
            const levelThreshold = this.actionGranted.level_thresholds[i];
            if ( this.actionGranted.progress_start_value >= levelThreshold.threshold )
                continue;

                              
            this.actions.push( new RunFunctionAction( function ( panel, lowerValue, nextThreshold )
            {
                return function ()
                {
                    progressBar.max = nextThreshold.threshold;
                    panel.SetDialogVariableInt( 'progress_max_value', nextThreshold.threshold );
                    panel.SetDialogVariableLocString( 'progress_name', nextThreshold.name );
                    panel.SetDialogVariable( 'progress_description', nextThreshold.description );
                };
            }( this.entryPanel, startValue, levelThreshold ) ) );

                                                                                    
            const nextAnimateValue = Math.min( levelThreshold.threshold, finalValue );

            const par = new RunParallelActions();

            const duration = GetBPIncreaseAnimationDuration( nextAnimateValue - startValue ) * 3.0;

            par.actions.push( new AnimateDialogVariableIntAction( this.entryPanel, 'progress_start_value', startValue, nextAnimateValue, duration ) );
            par.actions.push( new AnimateProgressBarWithMiddleAction( progressBar, startValue, nextAnimateValue, duration ) );
            par.actions.push( new PlaySoundForDurationAction( "XP.Count", duration ) );

            this.actions.push( par );

                                          
            if ( nextAnimateValue == levelThreshold.threshold )
            {
                const tierStar = questStars.GetChild( i );
                this.actions.push( new AddClassAction( tierStar, 'StarAchieved' ) );
                this.actions.push( new PlaySoundAction( 'WeeklyQuest.StarGranted' ) );
                this.actions.push( new RunFunctionAction( function ( pipBar )
                {
                    return function ()
                    {
                        pipBar.overridecurrentstars += 1;
                    };
                }( this.pipBar ) ) );
                this.actions.push( new WaitAction( 0.4 ) );
            }

                               
            if ( nextAnimateValue == finalValue )
                break;

            startValue = nextAnimateValue;
        }

        super.start();
    }
}

                                                                               

class AnimateBattlePass2022WeeklyQuestsAction extends RunSequentialActions
{
    sectionPanel: Panel_t;
    nEventID: number;
    nSeasonID: number;
    actionsGranted: BP2022WeeklyQuest_ActionGranted_t[];
    nInitialStars: number;

    constructor( sectionPanel: Panel_t, nEventID: number, nSeasonID: number, actionsGranted: BP2022WeeklyQuest_ActionGranted_t[], nInitialStars: number )
    {
        super();

        this.sectionPanel = sectionPanel;
        this.nEventID = nEventID;
        this.nSeasonID = nSeasonID;
        this.actionsGranted = actionsGranted;
        this.nInitialStars = nInitialStars;

        const pipBar = this.sectionPanel.FindChildInLayoutFile( 'BattlePass2022WeeklyQuestsPipBar' ) as DOTAWeeklyQuestPipBar_International2022_t;
        pipBar.SetSeasonInfo( this.nEventID, this.nSeasonID );
        pipBar.overridecurrentstars = this.nInitialStars;
    }

    start(): void
    {
        const questList = this.sectionPanel.FindChildInLayoutFile( 'BattlePass2022WeeklyQuestsList' );
        const pipBar = this.sectionPanel.FindChildInLayoutFile( 'BattlePass2022WeeklyQuestsPipBar' ) as DOTAWeeklyQuestPipBar_International2022_t;

        this.sectionPanel.AddClass( 'ShowSection' );

        if ( this.actionsGranted != null )
        {
            for ( let i = 0; i < this.actionsGranted.length; ++i )
            {
                this.actions.push( new AnimateBattlePass2022WeeklyQuestEntryAction( questList, pipBar, this.actionsGranted[i] ) );
            }
        }

        super.start();
    }
}

                                                                               
               
                                                                               

class AnimateBattlePass2022CavernCrawlAction extends RunSequentialActions
{
    sectionPanel: Panel_t;
    cavernCrawlData: BP2022CavernCrawlProgress_t;

    constructor( sectionPanel: Panel_t, cavernCrawlData: BP2022CavernCrawlProgress_t )
    {
        super();
        this.sectionPanel = sectionPanel;
        this.cavernCrawlData = cavernCrawlData;
    }

    start(): void
    {
        ( this.sectionPanel.FindChildInLayoutFile( 'BattlePass2022CavernCrawlHeroMovie' ) as DOTAHeroMovie_t ).heroid = this.cavernCrawlData.hero_id;
        this.sectionPanel.SetDialogVariableInt( 'cavern_crawl_points_earned', this.cavernCrawlData.bp_amount );

        this.sectionPanel.AddClass( 'ShowSection' );

        this.actions.push( new WaitAction( 0.2 ) );

        const par = new RunParallelActions();
        const duration = GetBPIncreaseAnimationDuration( this.cavernCrawlData.bp_amount );
        par.actions.push( new AnimateDialogVariableIntAction( this.sectionPanel, 'cavern_crawl_points_earned', 0, this.cavernCrawlData.bp_amount, duration ) );
        par.actions.push( new PlaySoundForDurationAction( "XP.Count", duration ) );
        this.actions.push( par );

        super.start();
    }
}


                                                                               
               
                                                                               

class AnimateBattlePass2022WeeklyBonusAction extends RunSequentialActions
{
    sectionPanel: Panel_t;
    weeklyBonusData: BP2022WeeklyBonus_t;

    constructor( sectionPanel: Panel_t, weeklyBonusData: BP2022WeeklyBonus_t )
    {
        super();
        this.sectionPanel = sectionPanel;
        this.weeklyBonusData = weeklyBonusData;
    }

    start(): void
    {

        this.sectionPanel.SetDialogVariableInt( 'weekly_bonus_points_earned', 0 );
        this.sectionPanel.SetDialogVariableInt( 'weekly_bonus_points_current', this.weeklyBonusData.start_points );
        this.sectionPanel.SetDialogVariableInt( 'weekly_bonus_points_max', this.weeklyBonusData.max_points );
        this.sectionPanel.SetDialogVariableLocString( 'weekly_bonus_outcome', this.weeklyBonusData.outcome );

        let progressBar = this.sectionPanel.FindChildInLayoutFile( "BattlePass2022WeeklyBonusProgressBar" ) as ProgressBarWithMiddle_t;
        progressBar.min = 0;
        progressBar.max = this.weeklyBonusData.max_points;
        progressBar.lowervalue = this.weeklyBonusData.start_points;
        progressBar.uppervalue = this.weeklyBonusData.start_points;

        this.sectionPanel.AddClass( 'ShowSection' );
        this.actions.push( new WaitAction( 0.2 ) );
       
        const par = new RunParallelActions();
        const duration = GetBPIncreaseAnimationDuration( this.weeklyBonusData.points_earned );
        par.actions.push( new AnimateDialogVariableIntAction( this.sectionPanel, 'weekly_bonus_points_earned', 0, this.weeklyBonusData.points_earned, duration ) );
        par.actions.push( new AnimateDialogVariableIntAction( this.sectionPanel, 'weekly_bonus_points_current', this.weeklyBonusData.start_points, this.weeklyBonusData.start_points + this.weeklyBonusData.points_earned, duration ) );
        par.actions.push( new AnimateProgressBarWithMiddleAction( progressBar, this.weeklyBonusData.start_points, this.weeklyBonusData.start_points + this.weeklyBonusData.points_earned, duration ) );
        par.actions.push( new PlaySoundForDurationAction( "XP.Count", duration ) );
        this.actions.push( par );

        super.start();
    }
}

                                                                               
               
                                                                               

class AnimateBattlePass2022CandyPointsAction extends RunSequentialActions {
    sectionPanel: Panel_t;
    candyPointData: BP2022CandyPoints_t;

    constructor(sectionPanel: Panel_t, candyPointData: BP2022CandyPoints_t) {
        super();
        this.sectionPanel = sectionPanel;
        this.candyPointData = candyPointData;
    }

    start(): void {

        let pointsRemaining = this.candyPointData.points_earned as number;
        let initialPoints = this.candyPointData.start_points as number;                
        let initialBags = this.candyPointData.start_bags as number;


        if ( initialPoints != this.candyPointData.max_points ) {
            initialPoints %= this.candyPointData.points_per_bag;
        }
        else
        {
            initialPoints = this.candyPointData.points_per_bag;
        }

        let initialPercent = initialPoints / this.candyPointData.points_per_bag * 100 as number;

        this.sectionPanel.SetDialogVariableInt('progress_percent', initialPercent);
        this.sectionPanel.SetDialogVariableInt('bags_current', this.candyPointData.start_bags);
        this.sectionPanel.SetDialogVariableInt('bags_max', this.candyPointData.max_bags);
        this.sectionPanel.SetDialogVariableLocString('candy_points_outcome', this.candyPointData.outcome);
        this.sectionPanel.SetDialogVariableInt('sacked_candy', this.candyPointData.sacked_candy);
                                                                           

        let progressBar = this.sectionPanel.FindChildInLayoutFile("BattlePass2022CandyPointsProgressBar") as ProgressBarWithMiddle_t;
        progressBar.min = 0;
        progressBar.max = this.candyPointData.points_per_bag;
        progressBar.lowervalue = initialPoints;
        progressBar.uppervalue = initialPoints;

        this.sectionPanel.AddClass('ShowSection');
        this.actions.push(new WaitAction(0.2));

        const duration = GetBPIncreaseAnimationDuration(this.candyPointData.points_earned);

        let currentBags = this.candyPointData.start_bags;
        while (pointsRemaining > 0)
        {
            const par = new RunParallelActions();
            let targetValue = Math.min(initialPoints + pointsRemaining, this.candyPointData.points_per_bag) as number;
            let targetBags = targetValue == this.candyPointData.points_per_bag ? currentBags + 1 : currentBags as number;
            let targetPercent = targetValue / this.candyPointData.points_per_bag * 100 as number;
            par.actions.push(new AnimateDialogVariableIntAction(this.sectionPanel, 'progress_percent', initialPercent, targetPercent, duration));
            par.actions.push(new AnimateProgressBarWithMiddleAction(progressBar, initialPoints, targetValue, duration));
            par.actions.push(new AnimateDialogVariableIntAction(this.sectionPanel, 'bags_current', currentBags, targetBags, duration));
            par.actions.push(new PlaySoundForDurationAction("XP.Count", duration));
            this.actions.push(par);
            pointsRemaining -= (targetValue - initialPoints);
            if (pointsRemaining > 0)
            {
                this.actions.push(new WaitAction(0.4));
                this.actions.push(new SetProgressBarWithMiddleValueAction(progressBar, 0, 0))
                initialPoints = 0;
                initialPercent = 0;
                currentBags = targetBags;
            }
        }
        this.sectionPanel.SetHasClass('GainedReroll', this.candyPointData.gained_reroll );

        super.start();
    }
}



                                                                               
                  
                                                                               

class AnimateBattlePass2022ScreenAction extends RunSequentialActions
{
    data: BP2022PostGame_t;
    
    constructor( data: BP2022PostGame_t )
    {
        super();
        this.data = data;
    }

    start()
    {
                                                            
        const panel = StartNewScreen( 'BattlePass2022ProgressScreen' );
        panel.BLoadLayoutSnippet( "BattlePass2022Progress" );
        panel.SetDialogVariableInt( 'active_week', this.data.battle_pass_2022_progress.active_season_id );

        const levelShield = panel.FindChildInLayoutFile( 'BattlePass2022LevelShield' ) as DOTAEventLevelShield_t;
                                                                                                                                                          

        panel.SetHasClass( "Unowned", !this.data.battle_pass_2022_progress.owned );

                                                              
        this.actions.push( new AddClassAction( panel, 'ShowScreen' ) );
        this.actions.push( new SkippableAction( new WaitAction( 0.5 ) ) );
        this.actions.push( new AddScreenLinkAction( panel, 'BattlePass2022Progress', '#DOTA_BattlePassPostGame_Progress' ) );

        if (this.data.battle_pass_2022_progress.owned)
        {
            this.actions.push( new SkippableAction( new AnimateBattlePass2022WeeklyQuestsAction(
                panel.FindChildInLayoutFile( 'BattlePass2022WeeklyQuests' ),
                this.data.battle_pass_2022_progress.battle_points_event_id,
                this.data.battle_pass_2022_progress.active_season_id,
                this.data.battle_pass_2022_progress.actions_granted,
                this.data.battle_pass_2022_progress.weekly_quest_initial_stars ) ) );
            this.actions.push(new SkippableAction(new WaitAction(0.5)));
        }

        if ( this.data.battle_pass_2022_progress.cavern_crawl != null )
        {
            const section = panel.FindChildInLayoutFile( 'BattlePass2022CavernCrawlProgress' );
            section.AddClass( 'SectionHasData' );
            this.actions.push( new SkippableAction( new AnimateBattlePass2022CavernCrawlAction( section, this.data.battle_pass_2022_progress.cavern_crawl ) ) );
            this.actions.push( new SkippableAction( new WaitAction( 0.5 ) ) );
        }

        if ( this.data.battle_pass_2022_progress.weekly_bonus != null && this.data.battle_pass_2022_progress.weekly_bonus.points_earned > 0 )
        {
            const section = panel.FindChildInLayoutFile( 'BattlePass2022WeeklyBonusProgress' );
            section.AddClass( 'SectionHasData' );
            this.actions.push( new SkippableAction( new AnimateBattlePass2022WeeklyBonusAction( section, this.data.battle_pass_2022_progress.weekly_bonus ) ) );
            this.actions.push( new SkippableAction( new WaitAction( 0.5 ) ) );
        }

        if ( this.data.battle_pass_2022_progress.candy_points != null ) {
            const section = panel.FindChildInLayoutFile('BattlePass2022CandyPointsProgress');
            section.AddClass('SectionHasData');
            this.actions.push(new SkippableAction(new AnimateBattlePass2022CandyPointsAction(section, this.data.battle_pass_2022_progress.candy_points)));
            this.actions.push(new SkippableAction(new WaitAction(0.5)));
        }

        this.actions.push( new WaitAction( 0.2 ) );
        this.actions.push( new StopSkippingAheadAction() );
        this.actions.push( new SkippableAction( new WaitAction( 0.5 ) ) );
        this.actions.push( new SwitchClassAction( panel, 'current_screen', '' ) );
        this.actions.push( new SkippableAction( new WaitAction( 0.5 ) ) );

        super.start();
    }
}

                                    

function TestAnimateBattlePass2022()
{
    const data: BP2022PostGame_t =
    {
        hero_id: 87,

        battle_pass_2022_progress:
        {
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

            cavern_crawl:
            {
                hero_id: 87,
                bp_amount: 375,
            },

            weekly_bonus:
            {
                start_points: 300,
                max_points: 2000,
                points_earned: 100,
                outcome: "#DOTA_HeroStat_WonMatch"
            },

            candy_points:
            {
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

    TestProgressAnimation( data );
}
