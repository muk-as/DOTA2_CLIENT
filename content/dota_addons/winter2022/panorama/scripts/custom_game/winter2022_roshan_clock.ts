/// <reference path="../../../../../dota/panorama/scripts/dota.d.ts" />
/// <reference path="../../../../../dota/panorama/scripts/util.ts" />
/// <reference path="winter2022_shared.ts" />

CustomNetTables.SubscribeNetTableListener( "globals", UpdateRoshanTimer );

function RoshanClockThink()
{
    UpdateClockScroll();
    UpdateRoshanTimerCircle();
    UpdateTimerLabel();
    ClockFiguresThink();
    $.Schedule( 0, RoshanClockThink );
}
$.Schedule( 0, RoshanClockThink );

let g_bClockScrolledUp = true;
function UpdateClockScroll(): void
{
    if ( g_bClockScrolledUp )
    {
        const bPlaying = IsLocalPlayerPlaying();
        const choices = CustomNetTables.GetTableValue( "mount_choices", Players.GetLocalPlayer().toString() );
        const bMountChosen = choices && Object.keys( choices ).length === 0;
        if ( !bPlaying || bMountChosen ) // This is dependent on mount_choices[playerId] being null at the start.
        {
            $.GetContextPanel().RemoveClass( "ScrolledUp" );
            g_bClockScrolledUp = false;
        }
    }
}

function UpdateTimerLabel(): void
{
    const time = Game.GetDOTATime( false, true );

    const nMinutesRemaining = Math.floor( time / 60 );
    const nSecondsRemaining = Math.floor( time - nMinutesRemaining * 60 );
    let resultString = nMinutesRemaining.toString() + ":";
    if ( nSecondsRemaining < 10 )
    {
        resultString = resultString + "0";
    }
    resultString = resultString + nSecondsRemaining.toString();
    const contextPanel = $.GetContextPanel();
    contextPanel.SetDialogVariable( "timevalue", resultString );
}

const RoshanTimerClassMap = new Map<number, string>( [
    [Globals.constants.WINTER2022_STATE_GOHOME, "GameStateSleep"],
    [Globals.constants.WINTER2022_STATE_SLEEPING, "GameStateSleep"],
    [Globals.constants.WINTER2022_STATE_GREEVILS, "GameStateSleep"],
    [Globals.constants.WINTER2022_STATE_ROSHAN_KILL_GREEVILS, "GameStateKillGreevils"],
    [Globals.constants.WINTER2022_STATE_ROSHAN, "GameStateRoshan"]
] );

function UpdateRoshanTimer()
{
    let sStateName = RoshanTimerClassMap.get( Globals.values.State )!;
    if ( Entities.IsValidEntity( Globals.values.TrickOrTreatTargetEntIndex ) &&
        Entities.IsAlive( Globals.values.TrickOrTreatTargetEntIndex ) &&
        Entities.IsBuilding( Globals.values.TrickOrTreatTargetEntIndex ) )
    {
        sStateName = "GameStateScore";
    }

    $.GetContextPanel().SwitchClass( "state", sStateName );
    $.GetContextPanel().SetHasClass( "TeamDire", Players.GetTeam( Players.GetLocalPlayer() ) === DOTATeam_t.DOTA_TEAM_BADGUYS );
    $.GetContextPanel().SetDialogVariableLocString( "timer_state_name", `DOTA_HUD_phase_${sStateName}_Name` );
    $.GetContextPanel().SetDialogVariableLocString( "timer_state_description", `DOTA_HUD_phase_${sStateName}_Description` );
    UpdateRoshanTimerCircle();
}
$.Schedule( 0, UpdateRoshanTimer );

function UpdateRoshanTimerCircle()
{
    const pRing = $( "#RoshanTimerRing" );
    const pRingGlow = $( "#RoshanTimerRingGlow" );
    if ( !pRing || !pRingGlow )
        return;

    if ( Globals.values.State === Globals.constants.WINTER2022_STATE_ROSHAN )
    {
        pRing.style.transform = null;
        pRing.style.clip = null;
        pRingGlow.style.transform = null;
        pRingGlow.style.clip = null;
        return;
    }

    const time = Game.GetDOTATime( false, true );
    let timerPercent = 0;

    let fDuration = Globals.values.TimeStateEnds - Globals.values.TimeStateStarted;
    let fTimeInState = time - Globals.values.TimeStateStarted;

    switch ( Globals.values.State )
    {
        case Globals.constants.WINTER2022_STATE_GREEVILS:
            fDuration += Globals.constants.WINTER2022_STATE_TIMES[Globals.constants.WINTER2022_STATE_ROSHAN_KILL_GREEVILS];
            break;
        case Globals.constants.WINTER2022_STATE_ROSHAN_KILL_GREEVILS:
            fDuration += Globals.constants.WINTER2022_STATE_TIMES[Globals.constants.WINTER2022_STATE_GREEVILS];
            fTimeInState += Globals.constants.WINTER2022_STATE_TIMES[Globals.constants.WINTER2022_STATE_GREEVILS];
            break;
    }

    if ( fDuration > 0 )
    {
        timerPercent = Clamp( fTimeInState / fDuration, 0.0, 1.0 );
    }

    const DEG_THRESHOLD = 15;
    const deg = timerPercent * 360;
    const transform = `rotateZ( ${deg}deg )`;
    const clip = deg < DEG_THRESHOLD ? null : `radial( 50% 50%, ${-DEG_THRESHOLD}deg, ${360 - deg + DEG_THRESHOLD}deg )`;
    pRing.style.transform = transform;
    pRing.style.clip = clip;
    pRingGlow.style.transform = transform;
    pRingGlow.style.clip = clip;
}

const rgCandyBuckets =
    [
        { panelId: "CandyWellRadiant0", entityName: "radiant_candy_bucket_1" },
        { panelId: "CandyWellRadiant1", entityName: "radiant_candy_bucket_2" },
        { panelId: "CandyWellRadiant3", entityName: "radiant_candy_bucket_4" },
        { panelId: "CandyWellRadiant4", entityName: "radiant_candy_bucket_5" },

        { panelId: "CandyWellDire0", entityName: "dire_candy_bucket_1" },
        { panelId: "CandyWellDire1", entityName: "dire_candy_bucket_2" },
        { panelId: "CandyWellDire3", entityName: "dire_candy_bucket_4" },
        { panelId: "CandyWellDire4", entityName: "dire_candy_bucket_5" },
    ];

type CandyBucketsValue_t = { is_alive: boolean; is_invulnerable: boolean; total_candy: number; };
const candyBuckets = SubscribeAllTableValues<CandyBucketsValue_t>( "candy_buckets", UpdateCandyBuckets );
CustomNetTables.SubscribeNetTableListener( "globals", UpdateCandyBuckets );

function UpdateCandyBuckets(): void
{
    const contextPanel = $.GetContextPanel();
    for ( let i = 0; i < rgCandyBuckets.length; i++ )
    {
        const candyBucket = candyBuckets[rgCandyBuckets[i].entityName];
        const nTeam = rgCandyBuckets[i].entityName.startsWith( "radiant" ) ? DOTATeam_t.DOTA_TEAM_GOODGUYS : DOTATeam_t.DOTA_TEAM_BADGUYS;
        if ( !candyBucket || !candyBucket.is_alive )
        {
            SetCandyWellState( contextPanel.FindChildInLayoutFile( rgCandyBuckets[i].panelId ), nTeam, 0, false, false, false );
            continue;
        }
        const nCandyAmount = candyBucket.total_candy;
        const bRoshanTarget = rgCandyBuckets[i].entityName === Globals.values.CandyLeaderBuilding;
        const bLocked = candyBucket.is_invulnerable;
        SetCandyWellState( contextPanel.FindChildInLayoutFile( rgCandyBuckets[i].panelId ), nTeam, nCandyAmount, bRoshanTarget, true, bLocked );
    }

    const pTarget = $( "#CandyWellTarget" )!;
    pTarget.SetHasClass( "Visible", !!Globals.values.CandyLeaderBuilding );
    if ( Globals.values.CandyLeaderBuilding )
    {
        const candyBucket = rgCandyBuckets.find( b => b.entityName === Globals.values.CandyLeaderBuilding );
        pTarget.SwitchClass( "target", candyBucket ? candyBucket.panelId : "" );
    }
}
$.Schedule( 1.0, UpdateCandyBuckets );

function SetCandyWellState( pCandyWell: Panel_t, nTeam: number, nCandyCount: number, bRoshanTarget: boolean, bAlive: boolean, bLocked: boolean )
{
    if ( !bAlive && pCandyWell.BHasClass( "Vulnerable" ) )
    {
        ShowCandyWellExplosion( pCandyWell );
    }
    const sWellState = !bAlive ? "Destroyed" : bLocked ? "Locked" : "Vulnerable";
    pCandyWell.SwitchClass( "WellState", sWellState );

    if ( !bAlive )
    {
        pCandyWell.SetDialogVariableLocString( "candywell_state_name", "DOTA_HUD_candy_well_destroyed_Name" );
        pCandyWell.SetDialogVariableLocString( "candywell_state_description", "DOTA_HUD_candy_well_destroyed_Description" );
        return;
    }

    const nLocalTeam = Players.GetTeam( Players.GetLocalPlayer() ) === DOTATeam_t.DOTA_TEAM_BADGUYS ? DOTATeam_t.DOTA_TEAM_BADGUYS : DOTATeam_t.DOTA_TEAM_GOODGUYS;
    pCandyWell.SwitchClass( "team", nLocalTeam === nTeam ? "Ally" : "Enemy" );

    if ( bLocked )
    {
        pCandyWell.SetDialogVariableLocString( "candywell_state_name", "DOTA_HUD_candy_well_invulnerable_Name" );
        pCandyWell.SetDialogVariableLocString( "candywell_state_description", "DOTA_HUD_candy_well_invulnerable_Description" );
    }
    else if ( bRoshanTarget )
    {
        pCandyWell.SetDialogVariableLocString( "candywell_state_name", "DOTA_HUD_candy_well_targeted_Name" );
        pCandyWell.SetDialogVariableLocString( "candywell_state_description", "DOTA_HUD_candy_well_targeted_Description" );
    }
    else
    {
        pCandyWell.SetDialogVariableLocString( "candywell_state_name", "DOTA_HUD_candy_well_Name" );
        pCandyWell.SetDialogVariableLocString( "candywell_state_description", "DOTA_HUD_candy_well_Description" );
    }
    pCandyWell.SetDialogVariableInt( "candy_count", nCandyCount );
}

function ShowCandyWellExplosion( pCandyWell: Panel_t ): void
{
    const pFrame = $.GetContextPanel();
    const pExplosion = $( "#CandyWellExplosion" );
    if ( pExplosion && pCandyWell )
    {
        const frameRect = GetPanelRect( pFrame );
        const sourceRect = GetPanelRect( pExplosion );
        const targetRect = GetPanelRect( pCandyWell );
        targetRect.x = targetRect.x - frameRect.x;
        targetRect.y = targetRect.y - frameRect.y;
        const targetCenter = { x: targetRect.x + targetRect.width / 2, y: targetRect.y + targetRect.height / 2 };
        pExplosion.SetPositionInPixels( targetCenter.x - sourceRect.width / 2, targetCenter.y - sourceRect.height / 2, 0 );
        pExplosion.AddClass( "Visible" );
        $.Schedule( 2, () => pExplosion.RemoveClass( "Visible" ) );
    }
}

const g_nFigureLeftX = 156;
const g_nFigureRightX = 290;
const g_nFigureY = 104;
let g_nFigureTargetX = 0;
function ClockFiguresThink(): void
{
    if ( g_bDebuggingFigures )
        return;

    const bHidden = Globals.values.State !== Globals.constants.WINTER2022_STATE_ROSHAN;
    if ( bHidden )
    {
        UpdateClockFigures( bHidden );
        return;
    }
    const bFaceRight = Globals.values.CandyLeaderBuilding.startsWith( "dire" );

    const time = Game.GetDOTATime( false, true );
    const fDuration = Globals.constants.WINTER2022_STATE_ROSHAN_TIME - Globals.constants.WINTER2022_ANNOUNCER_TIMER_OFFSET;
    const fTimeInState = fDuration - Math.max( 0, Globals.values.TimeStateEnds - time - Globals.constants.WINTER2022_ANNOUNCER_TIMER_OFFSET );

    UpdateClockFigures( bHidden, bFaceRight, fTimeInState / fDuration );
}

const g_nSpringDuration = 0.8; // Time between clicks (moments when the target location for roshan changes)
const g_nSpringTension = 15; // How strongly roshan is pulled to his new location (pixels per second per second per pixel)
const g_nSpringFriction = 20; // How strongly roshan's oscillation is slowed (pixels per second per second)
const g_nSpringMaxDt = .005;
const g_nSpringMinDt = .0001;
const g_nRoshanMaxVelocity = 8;
let g_nSpringLocation = -1;
let g_nSpringTime = -g_nSpringDuration;
let g_nRoshanLocation = 156;
let g_nRoshanVelocity = 0;
let g_nFigureLastTime = 0;
function UpdateClockFigures( bHidden: boolean, bFaceRight?: boolean, fProgress?: number ): void
{
    const pRadiantWellFigure = $( "#RadiantWellFigure" )!;
    const pDireWellFigure = $( "#DireWellFigure" )!;
    const pRoshanFigure = $( "#RoshanFigure" )!;

    pRadiantWellFigure.SetHasClass( "Hidden", bHidden );
    pDireWellFigure.SetHasClass( "Hidden", bHidden );
    pRoshanFigure.SetHasClass( "Hidden", bHidden );
    pRoshanFigure.SwitchClass( "Facing", bHidden ? "" : !!bFaceRight ? "FaceRight" : "FaceLeft" );

    if ( bHidden )
        return;

    const time = Game.Time();

    if ( g_nSpringTime + g_nSpringDuration < time )
    {
        const nLeft = bFaceRight ? g_nFigureLeftX : g_nFigureRightX;
        const nRight = bFaceRight ? g_nFigureRightX : g_nFigureLeftX;
        const nLocation = Math.round( RemapValClamped( fProgress || 0, 0, 1, nLeft, nRight ) * 100 ) / 100;
        if ( Math.abs( nLocation - g_nSpringLocation ) > 1 )
        {
            Game.EmitSound( "RoshanClock.FigureClick" );
        }
        g_nSpringLocation = nLocation;
        g_nSpringTime = Game.Time();
    }

    const dt = time - g_nFigureLastTime;
    let nSimSteps = 0;
    for ( nSimSteps = 0; nSimSteps * g_nSpringMaxDt < dt; nSimSteps++ )
    {
        const { x, v } = SimulateSpring( g_nRoshanLocation, g_nSpringLocation - g_nRoshanLocation, g_nRoshanVelocity, g_nSpringMaxDt );
        g_nRoshanLocation = x;
        g_nRoshanVelocity = v;
    }
    const { x } = SimulateSpring( g_nRoshanLocation, g_nSpringLocation - g_nRoshanLocation, g_nRoshanVelocity, g_nSpringMaxDt - nSimSteps * g_nSpringMaxDt );

    pRoshanFigure.SetPositionInPixels( x, g_nFigureY, 0 );

    g_nFigureLastTime += nSimSteps * g_nSpringMaxDt;
}

function SimulateSpring( x: number, dx: number, v: number, dt: number ): { x: number, v: number; }
{
    if ( dt < g_nSpringMinDt )
        return { x, v };

    const f = dx * g_nSpringTension;
    v += f * dt;
    v -= v * g_nSpringFriction * dt;
    v = Clamp( v, -g_nRoshanMaxVelocity, g_nRoshanMaxVelocity );
    x += v;

    return { x, v };
}

let g_bDebuggingFigures = false;
let g_bDebugFacingRight = true;
let g_nDebugProgress = 0;
let g_nDebugMoveStart = 0;
const g_nDebugMoveSpeed = .1; // % / second
function FigureDebug()
{
    if ( !g_bDebuggingFigures )
    {
        g_bDebuggingFigures = true;
        g_nDebugProgress = 0;
        g_nDebugMoveStart = Game.Time();
    }

    g_nDebugProgress = ( Game.Time() - g_nDebugMoveStart ) * g_nDebugMoveSpeed;
    if ( g_nDebugProgress > 1 )
    {
        g_nDebugProgress = 0;
        g_nDebugMoveStart = Game.Time();
        // g_bDebugFacingRight = !g_bDebugFacingRight;
    }
    UpdateClockFigures( false, g_bDebugFacingRight, g_nDebugProgress );

    $.Schedule( 0, FigureDebug );
}
// $.Schedule( 3, FigureDebug );

function TargetDebug( n: number = 0 ): void
{
    const pTarget = $( "#CandyWellTarget" )!;
    pTarget.SetHasClass( "Visible", true );
    let sClass: string = "";
    switch ( n )
    {
        case 0: sClass = "CandyWellRadiant0"; break;
        case 1: sClass = "CandyWellRadiant1"; break;
        case 2: sClass = "CandyWellRadiant3"; break;
        case 3: sClass = "CandyWellRadiant4"; break;
        case 4: sClass = "CandyWellDire0"; break;
        case 5: sClass = "CandyWellDire1"; break;
        case 6: sClass = "CandyWellDire3"; break;
        case 7: sClass = "CandyWellDire4"; break;
    }
    pTarget.SwitchClass( "target", sClass );
    $.Schedule( 3, () => TargetDebug( Math.floor( Math.random() * 8 ) ) );
}
// $.Schedule( 0, TargetDebug );

const g_debugWellStates: Dictionary<CandyBucketsValue_t> = {};
function CandyWellDebug(): void
{
    const contextPanel = $.GetContextPanel();
    for ( let i = 0; i < rgCandyBuckets.length; i++ )
    {
        let candyWell = g_debugWellStates[rgCandyBuckets[i].entityName] || candyBuckets[rgCandyBuckets[i].entityName] || { is_alive: true, is_invulnerable: true, total_candy: 0 };
        g_debugWellStates[rgCandyBuckets[i].entityName] = candyWell = { ...candyWell };
        if ( !candyWell.is_alive )
        {
            candyWell.is_alive = true;
            candyWell.is_invulnerable = true;
        }
        else if ( candyWell.is_invulnerable )
        {
            candyWell.is_invulnerable = false;
        }
        else
        {
            candyWell.is_alive = false;
        }

        const nTeam = rgCandyBuckets[i].entityName.startsWith( "radiant" ) ? DOTATeam_t.DOTA_TEAM_GOODGUYS : DOTATeam_t.DOTA_TEAM_BADGUYS;
        if ( !candyWell || !candyWell.is_alive )
        {
            const candyWellPanel = contextPanel.FindChildInLayoutFile( rgCandyBuckets[i].panelId );
            SetCandyWellState( candyWellPanel, nTeam, 0, false, false, false );
            continue;
        }
        const nCandyAmount = candyWell.total_candy;
        const bRoshanTarget = rgCandyBuckets[i].entityName === Globals.values.CandyLeaderBuilding;
        const bLocked = candyWell.is_invulnerable;
        SetCandyWellState( contextPanel.FindChildInLayoutFile( rgCandyBuckets[i].panelId ), nTeam, nCandyAmount, bRoshanTarget, true, bLocked );
    }

    $.Schedule( 5, CandyWellDebug );
}
// $.Schedule( 3, CandyWellDebug );
