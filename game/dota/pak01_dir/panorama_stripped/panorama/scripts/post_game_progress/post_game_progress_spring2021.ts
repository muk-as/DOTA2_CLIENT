/// <reference path="../dota.d.ts" />
/// <reference path="../util.ts" />
/// <reference path="../sequence_actions.ts" />
/// <reference path="post_game_progress_utils.ts" />
/// <reference path="post_game_progress_screens.ts" />

                                 

interface BPSpring2021PostGame_t
{
    hero_id: number;
    spring_2021_progress: BPSpring2021Progress_t;
}

interface BPSpring2021Progress_t
{
    active_season_id: number;
    battle_points_event_id: number;
    battle_points_start: number;
    battle_points_per_level: number;
    points_available: number;
    actions_granted: BPSpring2021WeeklyQuest_ActionGranted_t[];
    cavern_crawl: BPSpring2021CavernCrawlProgress_t;
    event_game_nemestice: BPSpring2021EventGameRewards_t;
}

interface BPSpring2021WeeklyQuest_ActionGranted_t
{
    progress_start_value: number;
    progress: number;
    level_thresholds: BPSpring2021WeeklyQuest_LevelThreshold_t[];
}

interface BPSpring2021WeeklyQuest_LevelThreshold_t
{
    threshold: number;
    name: string;
    description: string;
}

interface BPSpring2021EventGameRewards_t
{
    bp_amount: number;
    bp_start: number;
    bp_max: number;
}

interface BPSpring2021CavernCrawlProgress_t
{
    hero_id: number;
    bp_amount: number;
}

class AnimateSpring2021LevelsAction extends RunSequentialActions
{
    panel: Panel_t;
    eventId: number;
    bpPointsStart: number;
    bpPointsPerLevel: number;
    bpPointsAdd: number;

    constructor( panel: Panel_t, eventId: number, bpPointsStart: number, bpPointsPerLevel: number, bpPointsAdd: number )
    {
        super();

        this.panel = panel;
        this.eventId = eventId;
        this.bpPointsStart = bpPointsStart;
        this.bpPointsPerLevel = bpPointsPerLevel;
        this.bpPointsAdd = bpPointsAdd;

        var battlePointsStart = this.bpPointsStart;
        var battleLevelStart = Math.floor( battlePointsStart / this.bpPointsPerLevel );
        var battlePointsAtLevelStart = battleLevelStart * this.bpPointsPerLevel;
        var bpLevelStart = battlePointsStart - battlePointsAtLevelStart;
        var bpLevelNext = this.bpPointsPerLevel;

        panel.SetDialogVariableInt( 'current_level_bp', bpLevelStart );
        panel.SetDialogVariableInt( 'bp_to_next_level', bpLevelNext );
        ( panel.FindChildInLayoutFile( 'BattlePassLevelShield' ) as DOTAEventLevelShield_t ).SetEventLevel( this.eventId, battleLevelStart );

        var progressBar = panel.FindChildInLayoutFile( "BattleLevelProgress" ) as ProgressBarWithMiddle_t;
        progressBar.max = bpLevelNext;
        progressBar.lowervalue = bpLevelStart;
        progressBar.uppervalue = bpLevelStart;

        var bpEarned = 0;
        var bpLevel = bpLevelStart;
        var battleLevel = battleLevelStart;

        var bpRemaining = this.bpPointsAdd;
        var bpEarnedOnRow = 0;

        while ( bpRemaining > 0 )
        {
            var bpToAnimate = 0;
            var bpToNextLevel = 0;
            bpToNextLevel = bpLevelNext - bpLevel;
            bpToAnimate = Math.min( bpRemaining, bpToNextLevel );

            if ( bpToAnimate > 0 )
            {
                this.actions.push(
                    new SkippableAction(
                        new AnimateBattlePointsIncreaseAction( panel, bpToAnimate, bpEarnedOnRow, bpEarned, bpLevel )
                    )
                );

                bpEarned += bpToAnimate;
                bpLevel += bpToAnimate;
                bpEarnedOnRow += bpToAnimate;
                bpRemaining -= bpToAnimate;
            }

            bpToNextLevel = bpLevelNext - bpLevel;

            if ( bpToNextLevel != 0 )
                continue;

            battleLevel = battleLevel + 1;
            bpLevel = 0;

            this.actions.push( new AddClassAction( panel, 'LeveledUpStart' ) );

            ( function ( me, battleLevelInternal )
            {
                me.actions.push( new RunFunctionAction( function ()
                {
                    var levelShield = panel.FindChildInLayoutFile( 'BattlePassLevelShield' ) as DOTAEventLevelShield_t;
                    levelShield.AddClass( 'LeveledUp' );
                    levelShield.SetEventLevel( me.eventId, battleLevelInternal );
                } ) );
            } )( this, battleLevel );

            this.actions.push( new RemoveClassAction( panel, 'LeveledUpStart' ) );
            this.actions.push( new AddClassAction( panel, 'LeveledUpEnd' ) );
            this.actions.push( new SkippableAction( new WaitAction( 1.0 ) ) );

            ( function ( me, battleLevelInternal )
            {
                me.actions.push( new RunFunctionAction( function ()
                {
                    var levelShield = panel.FindChildInLayoutFile( 'BattlePassLevelShield' ) as DOTAEventLevelShield_t;
                    levelShield.RemoveClass( 'LeveledUp' );
                } ) );
            } )( this, battleLevel );
            this.actions.push( new RemoveClassAction( panel, 'LeveledUpEnd' ) );

            ( function ( me, bpLevelInternal, bpLevelNextInternal )
            {
                me.actions.push( new RunFunctionAction( function ()
                {
                    progressBar.lowervalue = 0;
                    progressBar.uppervalue = 0;
                    panel.SetDialogVariableInt( 'current_level_bp', bpLevelInternal );
                    panel.SetDialogVariableInt( 'bp_to_next_level', bpLevelNextInternal );
                    progressBar.max = bpLevelNextInternal;
                                                           
                } ) );
            } )( this, bpLevel, bpLevelNext );
        }
    }
}

                                                                               
                                
                                                                               
class AnimateSpring2021WeeklyProgressSubpanelAction extends RunSequentialActions
{
    panel: Panel_t;
    ownerPanel: Panel_t;
    data: BPSpring2021WeeklyQuest_ActionGranted_t[];
    startingPoints: number;
    total_points: number;

    constructor( panel: Panel_t, ownerPanel: Panel_t, data: BPSpring2021WeeklyQuest_ActionGranted_t[], startingPoints: number )
    {
        super();

        this.data = data;
        this.panel = panel;
        this.ownerPanel = ownerPanel;
        this.startingPoints = startingPoints;
        this.total_points = 0;

        panel.AddClass( 'Visible' );
    }


    start()
    {
        this.actions.push( new AddClassAction( this.panel, 'BecomeVisible' ) );
        this.actions.push( new SkippableAction( new WaitAction( g_DelayAfterStart ) ) );

        this.actions.push( new AddClassAction( this.panel, 'ShowMap' ) );
        this.actions.push( new SkippableAction( new WaitAction( g_SubElementDelay ) ) );

        this.actions.push( new AddClassAction( this.panel, 'ShowCompleted' ) );
        this.actions.push( new SkippableAction( new WaitAction( g_SubElementDelay ) ) );

        var panel = this.panel;

        var weeklyProgressPanelParent = panel.FindChildInLayoutFile( "Spring2021WeeklyProgressTypeDetails" );

        for ( var i = 0; i < this.data.length; ++i )
        {
            var data = this.data[i];
            AddNewWeeklyProgressPanelSpring2021( this, weeklyProgressPanelParent, i, data );
        }

        var panel = this.panel;
        var ownerPanel = this.ownerPanel;
        var total_points = this.total_points;
        var startingPoints = this.startingPoints;
        this.actions.push( new RunFunctionAction( function ()
        {
            UpdateSubpanelTotalPoints( panel, ownerPanel, total_points, startingPoints, false );
        } ) );

        super.start();
    };
}

interface WeeklyProgressPanel_t extends Panel_t
{
    nStarsGranted: number;
    nInitialAmount: number;
}

class AnimateSpring2021WeeklyProgressIncreaseAction extends RunParallelActions
{
    panel: WeeklyProgressPanel_t;
    name: string;
    description: string;
    nStarsGranted: number;
    nProgressAmount: number;
    nStartAmount: number;
    nMaxAmount: number;

    constructor( panel: WeeklyProgressPanel_t, name: string, description: string, nStarsGranted: number, nProgressAmount: number, nStartAmount: number, nMaxAmount: number )
    {
        super();

        this.panel = panel;
        this.name = name;
        this.description = description;
        this.nStarsGranted = nStarsGranted;
        this.nProgressAmount = nProgressAmount;
        this.nStartAmount = nStartAmount;
        this.nMaxAmount = nMaxAmount;
    }

    start(): void
    {
        var duration = GetBPIncreaseAnimationDuration( this.nProgressAmount ) * 3.0;
        var levelProgressBar = this.panel.FindChildInLayoutFile( 'ProgressBar' ) as ProgressBarWithMiddle_t;

        var minProgressValue = Math.min( this.nStartAmount, this.nMaxAmount );
        var maxProgressValue = Math.min( this.nStartAmount + this.nProgressAmount, this.nMaxAmount );

        var self = this;
        this.actions.push( new RunFunctionAction( function ()
        {
            levelProgressBar.lowervalue = self.panel.nInitialAmount;
            levelProgressBar.uppervalue = maxProgressValue;
            levelProgressBar.max = self.nMaxAmount;
                                                                                                                                     
            self.panel.SetDialogVariableInt( "progress_max_value", self.nMaxAmount );
            self.panel.SetDialogVariableLocString( "progress_name", self.name );
            self.panel.SetDialogVariable( "progress_description", self.description );

        } ) );
        this.actions.push( new AnimateDialogVariableIntAction( this.panel, 'progress_start_value', minProgressValue, maxProgressValue, duration ) );
        this.actions.push( new AnimateDialogVariableIntAction( this.panel, 'current_level_bp', minProgressValue, maxProgressValue, duration ) );
        this.actions.push( new AnimateProgressBarWithMiddleAction( levelProgressBar, minProgressValue, maxProgressValue, duration ) );
        this.actions.push( new PlaySoundForDurationAction( "XP.Count", duration ) );

        super.start();
    }

    finish(): void
    {
        var maxProgressValue = Math.min( this.nStartAmount + this.nProgressAmount, this.nMaxAmount );

        var nStarsGranted = this.nStarsGranted;
        if ( maxProgressValue == this.nMaxAmount )
        {
            ++nStarsGranted;
        }

        this.panel.SetHasClass( "StarsGranted1", nStarsGranted > 0 );
        this.panel.SetHasClass( "StarsGranted2", nStarsGranted > 1 );
        this.panel.SetHasClass( "StarsGranted3", nStarsGranted > 2 );

        if ( nStarsGranted > this.panel.nStarsGranted )
        {
            this.panel.AddClass( "StarsGrantedPulse" + nStarsGranted );
            $.DispatchEvent( 'PlaySoundEffect', "WeeklyQuest.StarGranted" );
        }

        this.panel.nStarsGranted = nStarsGranted;

        super.finish();
    }
}

class AnimateSpring2021WeeklyProgressLevels extends RunSequentialActions
{
    constructor( panel: WeeklyProgressPanel_t, nStartValue: number, nProgress: number, levelThresholds: BPSpring2021WeeklyQuest_LevelThreshold_t[] )
    {
        super();

        var nCurrentProgress = nStartValue;
        var nProgressRemaining = nProgress;

        var nNextThresholdIndex = 0;

        for ( let i = 0; i < levelThresholds.length; ++i )
        {
            if ( levelThresholds[i].threshold > nCurrentProgress )
            {
                nNextThresholdIndex = i;
                break;
            }
        }

        var bFirst = true;

        while ( nProgressRemaining > 0 )
        {
            var levelThreshold = levelThresholds[nNextThresholdIndex++];

            if ( levelThreshold != undefined )
            {
                var nNextProgressThreshold = levelThreshold.threshold;
                var nProgressToNextLevel = nNextProgressThreshold - nCurrentProgress;

                var nProgressToAnimateThisThreshold = Math.min( nProgressRemaining, nProgressToNextLevel );

                if ( nProgressToAnimateThisThreshold > 0 )
                {
                    var nStarsGranted = Math.max( 0, nNextThresholdIndex - 1 );
                    if ( bFirst )
                    {
                                                                                                              
                        panel.SetDialogVariable( "progress_description", levelThreshold.description );
                        panel.SetDialogVariableLocString( "progress_name", levelThreshold.name );

                        panel.nStarsGranted = nStarsGranted;
                        panel.nInitialAmount = nStartValue;

                        panel.SetHasClass( "StarsGranted1", nStarsGranted > 0 );
                        panel.SetHasClass( "StarsGranted2", nStarsGranted > 1 );
                        panel.SetHasClass( "StarsGranted3", nStarsGranted > 2 );
                        bFirst = false;
                    }

                                                                                  
                    this.actions.push(
                        new SkippableAction(
                            new AnimateSpring2021WeeklyProgressIncreaseAction(
                                panel,
                                levelThreshold.name,
                                levelThreshold.description,
                                nStarsGranted,
                                nProgressToAnimateThisThreshold,
                                nCurrentProgress,
                                nNextProgressThreshold
                            )
                        )
                    );

                    nCurrentProgress += nProgressToAnimateThisThreshold;
                    nProgressRemaining -= nProgressToAnimateThisThreshold;
                }

                nProgressToNextLevel = nNextProgressThreshold - nCurrentProgress;

                continue;
            }

                                               
            {
                if ( nNextThresholdIndex < levelThresholds.length )
                {
                    var nNextProgressThreshold = levelThresholds[Math.min( nNextThresholdIndex, levelThresholds.length - 1 )].threshold;
                    this.actions.push(
                        new SkippableAction(
                            new AnimateSpring2021WeeklyProgressIncreaseAction(
                                panel,
                                levelThresholds[nNextThresholdIndex].name,
                                levelThresholds[nNextThresholdIndex].description,
                                nNextThresholdIndex,
                                0,
                                nCurrentProgress,
                                nNextProgressThreshold
                            )
                        )
                    );
                }
            }
            break;
        }
    }
}

var AddNewWeeklyProgressPanelSpring2021 = function ( seq: RunSequentialActions, parentPanel: Panel_t, i: number, data: BPSpring2021WeeklyQuest_ActionGranted_t )
{
    var panel = $.CreatePanel( 'Panel', parentPanel, 'WeeklyProgress' + i );
    panel.BLoadLayoutSnippet( 'Spring2021WeeklyProgressEntry' );
    panel.SetDialogVariableInt( "progress_start_value", data.progress_start_value );
    panel.SetDialogVariableInt( "progress_max_value", data.progress_start_value );
    panel.SetDialogVariable( "progress", data.progress.toString() );

    seq.actions.push( new AnimateSpring2021WeeklyProgressLevels( panel as WeeklyProgressPanel_t,
        data.progress_start_value,
        data.progress,
        data.level_thresholds
    )
    );
};


                         
class AnimateSpring2021ScreenAction extends RunSequentialActions
{
    data: BPSpring2021PostGame_t;

    constructor( data: BPSpring2021PostGame_t )
    {
        super();
        this.data = data;
    }

    start()
    {
                                                            
        var panel = StartNewScreen( 'Spring2021ProgressScreen' );
        panel.BLoadLayoutSnippet( "Spring2021Progress" );

        panel.SetDialogVariableInt( 'points_available', this.data.spring_2021_progress.points_available );
        panel.SetDialogVariableInt( 'active_week', this.data.spring_2021_progress.active_season_id );

        ( panel.FindChildInLayoutFile( 'WeeklyQuestProgressPipBar' ) as DOTAWeeklyQuestPipBar_t ).SetLocalUserSeasonInfo(
            this.data.spring_2021_progress.battle_points_event_id,
            this.data.spring_2021_progress.active_season_id );

        panel.SetDialogVariableInt( 'total_points_gained', 0 );

                                                              
        this.actions.push( new AddClassAction( panel, 'ShowScreen' ) );
        this.actions.push( new SkippableAction( new WaitAction( 0.5 ) ) );

        this.actions.push( new AddScreenLinkAction( panel, 'Spring2021Progress', '#DOTA_PlusPostGame_Spring2021Progress', function ()
        {
            panel.SwitchClass( 'current_screen', 'ShowSpring2021Progress' );
        } ) );
        this.actions.push( new SwitchClassAction( panel, 'current_screen', 'ShowSpring2021Progress' ) );
        this.actions.push( new SkippableAction( new WaitAction( 0.5 ) ) );

        var subPanelActions = new RunSkippableStaggeredActions( .3 );

        var startingPointsToAdd = 0;
        var panelCount = 0;
        var kMaxPanels = 6;

        if ( this.data.spring_2021_progress.actions_granted != null )
        {
            var progressPanel = panel.FindChildInLayoutFile( "Spring2021WeeklyProgress" );
            const subpanelAction = new AnimateSpring2021WeeklyProgressSubpanelAction(
                progressPanel,
                panel,
                this.data.spring_2021_progress.actions_granted,
                startingPointsToAdd
            );
            startingPointsToAdd += subpanelAction.total_points;
            subPanelActions.actions.push( subpanelAction );
            if ( ++panelCount > kMaxPanels )
                progressPanel.RemoveClass( 'Visible' );
        }

        if ( this.data.spring_2021_progress.event_game_nemestice != null )
        {
            var progressPanel = panel.FindChildInLayoutFile( "Spring2021EventGameNemesticeProgress" );
            const subpanelAction = new AnimateEventGameNemesticeSubpanelAction(
                progressPanel,
                panel,
                this.data.spring_2021_progress.event_game_nemestice,
                startingPointsToAdd );
            startingPointsToAdd += subpanelAction.total_points;
            subPanelActions.actions.push( subpanelAction );
            if ( ++panelCount > kMaxPanels )
                progressPanel.RemoveClass( 'Visible' );
        }

        if ( this.data.spring_2021_progress.cavern_crawl != null )
        {
            var cavernPanel = panel.FindChildInLayoutFile( "Spring2021CavernCrawlProgress" );
            const subpanelAction = new AnimateCavernCrawlSubpanelAction( cavernPanel, panel, this.data.spring_2021_progress.cavern_crawl, startingPointsToAdd );
            startingPointsToAdd += subpanelAction.total_points;
            subPanelActions.actions.push( subpanelAction );
            if ( ++panelCount > kMaxPanels )
                cavernPanel.RemoveClass( 'Visible' );
        }

        this.actions.push( subPanelActions );

        this.actions.push( new AnimateSpring2021LevelsAction( panel,
            this.data.spring_2021_progress.battle_points_event_id,
            this.data.spring_2021_progress.battle_points_start,
            this.data.spring_2021_progress.battle_points_per_level,
            startingPointsToAdd ) );

        this.actions.push( new WaitAction( 0.2 ) );

        this.actions.push( new StopSkippingAheadAction() );
        this.actions.push( new SkippableAction( new WaitAction( 0.5 ) ) );
        this.actions.push( new SwitchClassAction( panel, 'current_screen', '' ) );
        this.actions.push( new SkippableAction( new WaitAction( 0.5 ) ) );

        super.start();
    }
}

                                    

function TestAnimateSpring2021()
{
    var data: BPSpring2021PostGame_t =
    {
        hero_id: 87,

        spring_2021_progress:
        {
            active_season_id: 1,
            battle_points_event_id: 32,
            battle_points_start: 74850,
            battle_points_per_level: 1000,
            points_available: 1000,

            actions_granted: [
                {
                                   
                    progress_start_value: 1,
                    progress: 40,
                    level_thresholds: [
                        {
                            name: "#DOTA_Spring2021_Quest_Plays_Name",
                            description: 'Win <span class="ScoreTierCurrent">3</span> Matches',
                            threshold: 3
                        },
                        {
                            name: "#DOTA_Spring2021_Quest_Plays_Name",
                            description: 'Win <span class="ScoreTierCurrent">10</span> Matches',
                            threshold: 10
                        },
                        {
                            name: "#DOTA_Spring2021_Quest_Plays_Name",
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
                            name: "#DOTA_Spring2021_Quest_Wins_Name",
                            description: 'Win <span class="ScoreTierCurrent">10</span> Matches',
                            threshold: 10
                        },
                        {
                            name: "#DOTA_Spring2021_Quest_Wins_Name",
                            description: 'Win <span class="ScoreTierCurrent">50</span> Matches',
                            threshold: 50
                        },
                        {
                            name: "#DOTA_Spring2021_Quest_Wins_Name",
                            description: 'Win <span class="ScoreTierCurrent">150</span> Matches',
                            threshold: 150
                        },
                    ]
                },
                {
                                      
                    progress_start_value: 0,
                    progress: 0.5,
                    level_thresholds: [
                        {
                            name: "#DOTA_Spring2021_Quest_Kills_Name",
                            description: 'Win <span class="ScoreTierCurrent">10</span> Matches',
                            threshold: 10
                        },
                        {
                            name: "#DOTA_Spring2021_Quest_Kills_Name",
                            description: 'Win <span class="ScoreTierCurrent">50</span> Matches',
                            threshold: 50
                        },
                        {
                            name: "#DOTA_Spring2021_Quest_Kills_Name",
                            description: 'Win <span class="ScoreTierCurrent">150</span> Matches',
                            threshold: 150
                        },
                    ]
                },
            ],

            cavern_crawl:
            {
                hero_id: 87,
                bp_amount: 375,
            },

            event_game_nemestice:
            {
                bp_amount: 225,
                bp_start: 50,
                bp_max: 2000,
            }
        }
    };

    TestProgressAnimation( data );
}