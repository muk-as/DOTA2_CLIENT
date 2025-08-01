/// <reference path="../dota.d.ts" />
/// <reference path="../util.ts" />
/// <reference path="../sequence_actions.ts" />
/// <reference path="post_game_progress_utils.ts" />
/// <reference path="post_game_progress_screens.ts" />

                                 

interface Frostivus2023PostGame_t
{
    hero_id: number;
    frostivus2023_progress: Frostivus2023Progress_t;
}

interface Frostivus2023Action_t
{
    action_name: string;
    progress: number;
    points_granted: number;
}

interface Frostivus2023Progress_t
{
    battle_points_event_id: number;
    battle_points_start: number;
    battle_points_per_level: number;
    actions_granted: Frostivus2023Action_t[];
    battle_points_daily_bonus_points: number;
    event_levels: number[];
}


function GetNextLevel( nCurrentLevel: number, event_levels: number[] )
{
    if( event_levels.length < 2 )
        return nCurrentLevel;
    var nNextLevel = nCurrentLevel;
    var repeating_reward_levels = event_levels[event_levels.length-1] - event_levels[event_levels.length-2];
    var levelIndex = 0;
    for( var levelIndex = 0; (nNextLevel <= nCurrentLevel) && (levelIndex < 200); ++levelIndex )
    {
        if ( levelIndex < event_levels.length )
        {
            nNextLevel = event_levels[levelIndex];
        }
        else
        {
            nNextLevel += repeating_reward_levels;
        }
    }

    $.Msg( 'GetNextLevel('+nCurrentLevel+') returning '+nNextLevel );
    return nNextLevel;
}


function GetStartingLevelForPoints( nPoints: number, bpPointsPerLevel: number, event_levels: number[] )
{
    var nReturnLevel = 0;
    for( var nLevel = 0; (nPoints > nLevel*bpPointsPerLevel) && nLevel < 100; nLevel = GetNextLevel(nLevel,event_levels) )
    {
        nReturnLevel = nLevel;
    }
    $.Msg( 'GetStartingLevelForPoints('+nPoints+') returning '+nReturnLevel );
    return nReturnLevel;
}

class AnimateFrostivus2023LevelsAction extends RunSequentialActions
{
    panel: Panel_t;
    eventId: number;
    bpPointsStart: number;
    bpPointsPerLevel: number;
    bpPointsAdd: number;
    event_levels: number[];

    constructor( panel: Panel_t, eventId: number, bpPointsStart: number, bpPointsPerLevel: number, event_levels: number[], bpPointsAdd: number )
    {
        super();

        this.panel = panel;
        this.eventId = eventId;
        this.bpPointsStart = bpPointsStart;
        this.bpPointsPerLevel = bpPointsPerLevel;
        this.bpPointsAdd = bpPointsAdd;
        this.event_levels = event_levels;
        

        var battlePointsStart = this.bpPointsStart;
        var battleLevelStart = GetStartingLevelForPoints(battlePointsStart, bpPointsPerLevel, event_levels);
        var battlePointsAtLevelStart = battleLevelStart * this.bpPointsPerLevel;
        var bpLevelStart = battlePointsStart - battlePointsAtLevelStart;
        var bpLevelNext = GetNextLevel( battleLevelStart, event_levels )*bpPointsPerLevel - battlePointsAtLevelStart;

        $.Msg( 'start animating '+battleLevelStart+' '+bpLevelStart+' '+bpLevelNext );

        if( bpLevelStart >= bpLevelNext )
        {
            $.Msg("nothing to do...");
            return;
        }

        panel.SetDialogVariableInt( 'current_level_bp', bpLevelStart );
        panel.SetDialogVariableInt( 'bp_to_next_level', bpLevelNext );
                                                                                                                                               

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
                        new AnimateBattlePointsIncreaseAction( panel, bpToAnimate, bpEarnedOnRow, bpEarned, bpLevel, "Frostivus.ui_point_increment" )
                    )
                );

                bpEarned += bpToAnimate;
                bpLevel += bpToAnimate;
                bpEarnedOnRow += bpToAnimate;
                bpRemaining -= bpToAnimate;
            }
            
            bpToNextLevel = bpLevelNext - bpLevel;
            $.Msg("bp to next level: "+bpToNextLevel);

            if ( bpToNextLevel != 0 )
                continue;

            battleLevel = GetNextLevel( battleLevel, event_levels );
            bpLevelNext = GetNextLevel( battleLevel, event_levels )*bpPointsPerLevel - battleLevel*bpPointsPerLevel
            bpLevel = 0;
                                                                       

            this.actions.push( new AddClassAction( panel, 'LeveledUpStart' ) );

            ( function ( me, battleLevelInternal )
            {
                me.actions.push( new RunFunctionAction( function ()
                {
                    var treasureRewardIcon = panel.FindChildInLayoutFile( 'TreasureRewardIcon' );
                    treasureRewardIcon.AddClass( 'LeveledUp' );
                } ) );
            } )( this, battleLevel );

            this.actions.push( new RemoveClassAction( panel, 'LeveledUpStart' ) );
            this.actions.push( new AddClassAction( panel, 'LeveledUpEnd' ) );
            this.actions.push( new SkippableAction( new WaitAction( 1.0 ) ) );

            ( function ( me, battleLevelInternal )
            {
                me.actions.push( new RunFunctionAction( function ()
                {
                    var treasureRewardIcon = panel.FindChildInLayoutFile( 'TreasureRewardIcon' );
                    treasureRewardIcon.RemoveClass( 'LeveledUp' );
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


                                                                               
                                   
                                                                               
class AnimateFrostivus2023SubpanelAction extends RunSequentialActions
{
    ownerPanel: Panel_t;
    data: Frostivus2023Action_t;
    progress: Frostivus2023Progress_t;
    startingPoints: number;
    total_points: number;

    constructor( ownerPanel: Panel_t, data: Frostivus2023Action_t, progress: Frostivus2023Progress_t, startingPoints: number )
    {
        super();
        this.data = data;
        this.progress = progress;
        this.ownerPanel = ownerPanel;
        this.startingPoints = startingPoints;
        this.total_points = this.data.points_granted;
                                           
    }

    start()
    {
        $.Msg( 'processing action '+this.data.action_name+'\n' );

        var corePanel = this.ownerPanel.FindChildInLayoutFile("Frostivus2023ProgressCore");
        function MakeCorePanel(panelName:string)
        {
            var panel = $.CreatePanel( 'Panel', corePanel, panelName );
            panel.BLoadLayoutSnippet( panelName );
            return panel;
        }

        var panel:Panel_t;
        if( this.data.action_name.includes("daily_bonus") )
        {
            panel = MakeCorePanel( "Frostivus2023MatchDailyBonusProgress" );
        }
        else if( this.data.action_name.includes("win_") )
        {
            panel = MakeCorePanel( "Frostivus2023MatchGameResultProgress" );
            this.actions.push( new AddClassAction( this.ownerPanel, 'WonGame' ) );
        }
        else if( this.data.action_name.includes("lose_") )
        {
            panel = MakeCorePanel( "Frostivus2023MatchGameResultProgress" );
            this.actions.push( new AddClassAction( this.ownerPanel, 'LostGame' ) );
        }   
        else if( this.data.action_name == "tips_received" )
        {
            panel = MakeCorePanel( "Frostivus2023MatchTipsProgress" );
            panel.SetDialogVariableInt( 'tips_received', this.data.progress );
        }
        else
        {
            return;
        } 

        panel.SetDialogVariableInt( 'points_granted', this.data.points_granted );

        if( this.data.action_name.includes("turbo") )
        {
            this.actions.push( new AddClassAction( this.ownerPanel, 'TurboGame' ) );
        }

        this.actions.push( new AddClassAction( panel, 'BecomeVisible' ) );
        this.actions.push( new SkippableAction( new WaitAction( 2*g_DelayAfterStart ) ) );
 
        this.actions.push( new AddClassAction( panel, 'ShowCompleted' ) );
        this.actions.push( new SkippableAction( new WaitAction( 0.5 ) ) );

        var ownerPanel = this.ownerPanel;
        var total_points = this.total_points;
        var startingPoints = this.startingPoints;
        this.actions.push( new RunFunctionAction( function ()
        {
            UpdateSubpanelTotalPoints( panel, ownerPanel, total_points, startingPoints, false );
        } ) );

        this.actions.push( new AnimateFrostivus2023LevelsAction( ownerPanel,
            this.progress.battle_points_event_id,
            this.progress.battle_points_start+startingPoints,
            this.progress.battle_points_per_level,
            this.progress.event_levels,
            total_points ) );

        super.start();
    };
}


                            
class AnimateFrostivus2023ScreenAction extends RunSequentialActions
{
    data: Frostivus2023PostGame_t;

    constructor( data: Frostivus2023PostGame_t )
    {
        super();
        this.data = data;
    }

    start()
    {
                                                            
        var panel = StartNewScreen( 'Frostivus2023ProgressScreen' );
        panel.BLoadLayoutSnippet( "Frostivus2023Progress" );

        panel.SetDialogVariableInt( 'total_points_gained', 0 );

        var flSeed = Math.random()

        if( flSeed >= 0.666 )
        {
            panel.SwitchClass('variant', "Variant1");
        }
        else if( flSeed >= 0.333 )
        {
            panel.SwitchClass('variant', "Variant2");
        }
        else
        {
            panel.SwitchClass('variant', "Variant3");
        }

                                                              

                                                              

        this.actions.push( new PlaySoundAction( "Frostivus.ui_postgame_start" ) );
        this.actions.push( new AddClassAction( panel, 'ShowScreen' ) );
        this.actions.push( new SkippableAction( new WaitAction( 0.5 ) ) );

        this.actions.push( new AddScreenLinkAction( panel, 'Frostivus2023Progress', '#DOTA_PlusPostGame_Frostivus2023Progress', function ()
        {
            panel.SwitchClass( 'current_screen', 'ShowFrostivus2023Progress' );
        } ) );
        this.actions.push( new SwitchClassAction( panel, 'current_screen', 'ShowFrostivus2023Progress' ) );
        this.actions.push( new SkippableAction( new WaitAction( 0.5 ) ) );

        var startingPointsToAdd = 0;

        this.actions.push( new AnimateFrostivus2023LevelsAction( panel,
            this.data.frostivus2023_progress.battle_points_event_id,
            this.data.frostivus2023_progress.battle_points_start,
            this.data.frostivus2023_progress.battle_points_per_level,
            this.data.frostivus2023_progress.event_levels,
            0 ) );

                                                             

        var nNumRewards = 0;
         
        for ( var ii = 0; ii < this.data.frostivus2023_progress.actions_granted.length; ++ii )
        { 
            
            const subPanelAction = new AnimateFrostivus2023SubpanelAction(
                panel,
                this.data.frostivus2023_progress.actions_granted[ii],
                this.data.frostivus2023_progress,
                startingPointsToAdd
            );

                                                                                                                                                      

            if( subPanelAction.total_points )
            {
                startingPointsToAdd += subPanelAction.total_points;
                this.actions.push( subPanelAction );
                ++nNumRewards;
                this.actions.push( new SkippableAction( new WaitAction( 0.5 ) ) );
            }
        }

        if( this.data.frostivus2023_progress.battle_points_daily_bonus_points > 0 )
        {
            const subPanelAction = new AnimateFrostivus2023SubpanelAction(
                panel,
                { 
                    action_name: "daily_bonus",
                    progress: 1,
                    points_granted: this.data.frostivus2023_progress.battle_points_daily_bonus_points
                },
                this.data.frostivus2023_progress,
                startingPointsToAdd
            );
            startingPointsToAdd += subPanelAction.total_points;
            this.actions.push( subPanelAction );
            ++nNumRewards;
        }

        panel.SwitchClass("num_rewards", "NumRewards"+nNumRewards);

        this.actions.push( new WaitAction( 0.2 ) );

        this.actions.push( new StopSkippingAheadAction() );
        this.actions.push( new SkippableAction( new WaitAction( 0.5 ) ) );
        this.actions.push( new SwitchClassAction( panel, 'current_screen', '' ) );
        this.actions.push( new SkippableAction( new WaitAction( 1.5 ) ) );

        super.start();
    }
}

                                    

function TestAnimateFrostivus2023()
{
    var data: Frostivus2023PostGame_t =
    {
        hero_id: 87,

        frostivus2023_progress:
        {
            battle_points_event_id: 48,
            battle_points_start: 4875,
            battle_points_per_level: 1000,
            battle_points_daily_bonus_points: 2000,
            event_levels: [1,3,6,10,15,20],
            actions_granted: [
                {
                    action_name:"win_turbo_matches",
                    progress: 1,
                    points_granted: 250,
                },
                {
                    action_name:"tips_received",
                    progress: 4,
                    points_granted: 100,
                },

            ] 
        }
    };

    TestProgressAnimation( data );
}