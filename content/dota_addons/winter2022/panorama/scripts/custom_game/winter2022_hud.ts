/// <reference path="../../../../../dota/panorama/scripts/dota.d.ts" />
/// <reference path="../../../../../dota/panorama/scripts/util.ts" />
/// <reference path="winter2022_shared.ts" />

let strCurrentInstanceMessageClass = "";
let nCurrentInstanceMessagePriority = 0;
let flCurrentInstanceMessageDieTime = -1;
let flRoundStartClearTime = -1;

// Show per-player candy carrying
// Call out "in the lead"

function OnRoshanHudLoaded(): void
{
    $.Msg( "OnRoshanHudLoaded" );

    const contextPanel = $.GetContextPanel();
    const parent = contextPanel.GetParent()!;
    const customRoot = parent.GetParent()!;
    // Need to reparent this, to get layering correct.
    const hudRoot = customRoot.GetParent()!.FindChild( 'HUDElements' )!;
    const topBar = hudRoot.FindChild( 'topbar' )!;
    customRoot.SetParent( hudRoot );
    hudRoot.MoveChildAfter( customRoot, topBar );
    customRoot.GetParent()!.AddClass( "Winter2022" );

    // It is important to set all dialog variables here to reasonable defaults,
    // otherwise the first update of the UI will have a bunch of "missing variable" slugs in it.
    contextPanel.SetDialogVariableInt( "radiant_total_candy", 0 );
    contextPanel.SetDialogVariableInt( "radiant_extra_candy", 0 );
    contextPanel.SetDialogVariableInt( "dire_total_candy", 0 );
    contextPanel.SetDialogVariableInt( "dire_extra_candy", 0 );

    contextPanel.SetDialogVariableInt( "roshan_candy", 0 );
    contextPanel.SwitchClass( "GameState", "WINTER2022_GAMESTATE_PREGAME" );
    contextPanel.SetDialogVariable( "timevalue", "" );
}

let g_bDoneCameraSetup = false;
function DoInitialCameraSetup(): void
{
    if ( g_bDoneCameraSetup )
        return;

    const nLocalPlayer = Players.GetLocalPlayer();
    const nLocalTeam = Players.GetTeam( nLocalPlayer );

    let vLocalPlayerStarts: number[] = [];
    if ( nLocalTeam == 2 )
    {
        vLocalPlayerStarts = Entities.GetAllEntitiesByClassname( 'info_player_start_goodguys' );
    }
    else
    {
        vLocalPlayerStarts = Entities.GetAllEntitiesByClassname( 'info_player_start_badguys' );
    }
    if ( vLocalPlayerStarts.length > 0 )
    {
        GameUI.MoveCameraToEntity( vLocalPlayerStarts[0] );
        g_bDoneCameraSetup = true;
    }
}

function OnThink(): void
{
    const contextPanel = $.GetContextPanel();
    const time = Game.GetDOTATime( false, true );

    const bAltPressed = IsDotaAltPressed();
    contextPanel.SetHasClass( "AltPressed", bAltPressed == true );
    const bPaused = Game.IsGamePaused();
    contextPanel.SetHasClass( "IsPaused", bPaused == true );

    if ( flRoundStartClearTime != -1 && time >= flRoundStartClearTime )
    {
        flRoundStartClearTime = -1;
        ClearRoundStartPopup();
    }

    if ( Globals.values !== undefined )
    {
        if ( Globals.values.GameState == Globals.constants.WINTER2022_GAMESTATE_PREGAME )
        {
            contextPanel.SwitchClass( "GameState", "WINTER2022_GAMESTATE_PREGAME" );
            contextPanel.SetDialogVariable( "round_end_timer_prefix", "Spawning Heroes" );

            DoInitialCameraSetup();
        }
        else if ( Globals.values.GameState == Globals.constants.WINTER2022_GAMESTATE_GAMEOVER )
        {
            ClearInstanceMessage();
            contextPanel.SwitchClass( "GameState", "WINTER2022_GAMESTATE_GAMEOVER" );
            contextPanel.SetDialogVariable( "round_end_timer_prefix", "Game Over" );
        }
        else if ( Globals.values.GameState == Globals.constants.WINTER2022_GAMESTATE_INTERSTITIAL_ROUND_PHASE || Globals.values.GameState == Globals.constants.WINTER2022_GAMESTATE_PREP_TIME )
        {
            ClearInstanceMessage();
            contextPanel.SwitchClass( "GameState", "WINTER2022_GAMESTATE_INTERSTITIAL_ROUND_PHASE" );
            contextPanel.SetDialogVariable( "round_end_timer_prefix", "Round Interstitial Time" );
            const nSecondsRemaining = Globals.values.TimeRoundEnds - time;
            SetTimeValue( nSecondsRemaining );
            if ( nSecondsRemaining < ( Globals.constants.WINTER2022_INTERSTITIAL_TIME - 5 ) )
            {
                contextPanel.RemoveClass( "ShowRoundEnd" );
            }
        }
        else if ( Globals.values.GameState == Globals.constants.WINTER2022_GAMESTATE_GAME_IN_PROGRESS || Globals.values.GameState == Globals.constants.WINTER2022_GAMESTATE_GAME_IN_PROGRESS_BETWEEN_ROUNDS )
        {
            TryExpireInstanceMessage();
            contextPanel.SwitchClass( "GameState", "WINTER2022_GAMESTATE_GAME_IN_PROGRESS" );
            contextPanel.SetDialogVariable( "round_end_timer_prefix", "Game Time" );
            const nSecondsElapsed = time - Globals.values.TimeGameStarted;
            SetTimeValue( nSecondsElapsed );
        }
        else if ( Globals.values.GameState == Globals.constants.WINTER2022_GAMESTATE_DISPLAY_FINAL_ROUND_RESULTS )
        {
            ClearInstanceMessage();
            contextPanel.SwitchClass( "GameState", "WINTER2022_GAMESTATE_DISPLAY_FINAL_ROUND_RESULTS" );
        }
        else if ( Globals.values.GameState == Globals.constants.WINTER2022_GAMESTATE_ENDING_CINEMATIC )
        {
            contextPanel.SwitchClass( "GameState", "WINTER2022_GAMESTATE_ENDING_CINEMATIC" );
        }

        contextPanel.SetDialogVariableInt( "dire_score", Globals.values.DireScore );
        contextPanel.SetDialogVariableInt( "radiant_score", Globals.values.RadiantScore );
        contextPanel.SwitchClass( "scoreDire", "ScoreDire" + Math.min( 3, Globals.values.DireScore ).toString() );
        contextPanel.SwitchClass( "scoreRadiant", "ScoreRadiant" + Math.min( 3, Globals.values.RadiantScore ).toString() );
    }

    $.Schedule( 0.1, OnThink );
}
$.Schedule( 0.0, OnThink );

function OnCameraThink(): void
{
    if ( g_bInEndGameCamera )
    {
        g_flCurrentPitch = g_flCurrentPitch + g_flCameraPitchSpeed;
        if ( g_flCurrentPitch < g_flFinalPitch )
        {
            g_flCurrentPitch = g_flFinalPitch;
        }
        GameUI.SetCameraPitchMin( g_flCurrentPitch );
        GameUI.SetCameraPitchMax( g_flCurrentPitch );
        //const vCameraLookAtPos = GameUI.GetCameraLookAtPosition();
        //GameUI.SetCameraPositionFromLateralLookAtPosition( vCameraLookAtPos[0], vCameraLookAtPos[1] );
    }

    $.Schedule( 0.003, OnCameraThink );
}
$.Schedule( 0.0, OnCameraThink );

function SetTimeValue( nSecondsRemaining: number ): void
{
    if ( nSecondsRemaining < 0 )
    {
        nSecondsRemaining = 0;
    }
    const nMinutesRemaining = Math.floor( nSecondsRemaining / 60 );
    nSecondsRemaining = Math.floor( nSecondsRemaining - nMinutesRemaining * 60 );
    let resultString = nMinutesRemaining.toString() + ":";
    if ( nSecondsRemaining < 10 )
    {
        resultString = resultString + "0";
    }
    resultString = resultString + nSecondsRemaining.toString();
    const contextPanel = $.GetContextPanel();
    contextPanel.SetDialogVariable( "timevalue", resultString );
    contextPanel.SetHasClass( "Last30Seconds", ( nMinutesRemaining == 0 ) && ( nSecondsRemaining <= 30 ) );
    contextPanel.SetHasClass( "Last10Seconds", ( nMinutesRemaining == 0 ) && ( nSecondsRemaining <= 10 ) );
}

GameEvents.Subscribe<{ round_number: number, round_name: string; }>( "round_start", function ( e )
{
    const contextPanel = $.GetContextPanel();
    contextPanel.AddClass( "RoundNameTitleAnimation" );

    contextPanel.SwitchClass( "roundNumber", "Round" + e.round_number.toString() );
    contextPanel.SetDialogVariableInt( "round_number", e.round_number );
    contextPanel.SetDialogVariable( "round_name", $.Localize( e.round_name ) );
    contextPanel.AddClass( "ShowRoundStart" );
    flRoundStartClearTime = Game.GetDOTATime( false, true ) + 4.0;
} );

function ClearRoundStartPopup()
{
    $.GetContextPanel().RemoveClass( "ShowRoundStart" );
    $.GetContextPanel().RemoveClass( "RoundNameTitleAnimation" );
}

GameEvents.Subscribe<{ fade_down: number; }>( "fade_to_black", function ( e )
{
    if ( e.fade_down == 1 )
    {
        $.GetContextPanel().AddClass( "FadeToBlack" );
    }
    else
    {
        $.GetContextPanel().RemoveClass( "FadeToBlack" );
    }
} );

function TryUpdateInstanceMessage( flDuration: number, nPriority: number, strNewClass: string ): void
{
    if ( nPriority < nCurrentInstanceMessagePriority )
        return;

    if ( strCurrentInstanceMessageClass != "" )
    {
        $.GetContextPanel().RemoveClass( strCurrentInstanceMessageClass );
    }

    strCurrentInstanceMessageClass = strNewClass;
    if ( strNewClass == "" )
    {
        nCurrentInstanceMessagePriority = 0;
        flCurrentInstanceMessageDieTime = -1.0;
    }
    else
    {
        nCurrentInstanceMessagePriority = nPriority;
        $.GetContextPanel().AddClass( strNewClass );

        if ( flDuration > 0 )
        {
            flCurrentInstanceMessageDieTime = flDuration + Game.GetDOTATime( false, true );
        }
        else
        {
            flCurrentInstanceMessageDieTime = -1.0;
        }
    }
}

function TryExpireInstanceMessage()
{
    if ( flCurrentInstanceMessageDieTime > 0 && flCurrentInstanceMessageDieTime <= Game.GetDOTATime( false, true ) )
    {
        ClearInstanceMessage();
    }
}

function ClearInstanceMessage()
{
    if ( flCurrentInstanceMessageDieTime > 0 )
    {
        TryUpdateInstanceMessage( -1.0, 99999, "" );
    }
}

GameEvents.Subscribe<{ cursed_team: number; }>( "team_cursed", function ( e )
{
    const nLocalTeam = Players.GetTeam( Players.GetLocalPlayer() );

    if ( ( nLocalTeam != DOTATeam_t.DOTA_TEAM_GOODGUYS && nLocalTeam != DOTATeam_t.DOTA_TEAM_BADGUYS ) || e.cursed_team < 0 )
    {
        if ( Math.abs( e.cursed_team ) == DOTATeam_t.DOTA_TEAM_GOODGUYS )
        {
            $.GetContextPanel().SwitchClass( "cursedTeam", "cursedTeamRadiant" );
        }
        else
        {
            $.GetContextPanel().SwitchClass( "cursedTeam", "cursedTeamDire" );
        }
    }
    else
    {
        if ( e.cursed_team == nLocalTeam )
        {
            $.GetContextPanel().SwitchClass( "cursedTeam", "cursedTeamYou" );
        }
        else
        {
            $.GetContextPanel().SwitchClass( "cursedTeam", "cursedTeamThem" );
        }
    }
    TryUpdateInstanceMessage( 6.0, 10, "ShowCursePopup" );
} );

GameEvents.Subscribe<{ time_left: number; }>( "time_left", function ( e )
{
    $.GetContextPanel().SwitchClass( "timeLeft", "timeLeft" + e.time_left );
    let flDuration = 1.0;
    if ( e.time_left > 5 )
    {
        flDuration = 2.0;
    }
    TryUpdateInstanceMessage( flDuration, 1, "ShowTimeLeftPopup" );
} );

GameEvents.Subscribe<{ team: number; ent_index: number, force_you: number; }>( "roshan_target_switch", function ( e )
{
    const nLocalTeam = Players.GetTeam( Players.GetLocalPlayer() );
    const nLocalHero = Players.GetPlayerHeroEntityIndex( Players.GetLocalPlayer() );
    let nPriority = 30;

    if ( ( nLocalTeam != DOTATeam_t.DOTA_TEAM_GOODGUYS && nLocalTeam != DOTATeam_t.DOTA_TEAM_BADGUYS ) || e.team < 0 )
    {
        if ( Math.abs( e.team ) == DOTATeam_t.DOTA_TEAM_GOODGUYS )
        {
            $.GetContextPanel().SwitchClass( "roshanTargeting", "roshanTargetingRadiant" );
        }
        else
        {
            $.GetContextPanel().SwitchClass( "roshanTargeting", "roshanTargetingDire" );
        }
    }
    else
    {
        if ( nLocalTeam == e.team || e.force_you == 1 )
        {
            if ( nLocalHero == e.ent_index || e.force_you == 1 )
            {
                nPriority = 50;
                $.GetContextPanel().SwitchClass( "roshanTargeting", "roshanTargetingYou" );
            }
            else
            {
                //$.GetContextPanel().SwitchClass( "roshanTargeting", "roshanTargetingAlly" );
                return;
            }
        }
        else
        {
            //$.GetContextPanel().SwitchClass( "roshanTargeting", "roshanTargetingEnemy" );
            return;
        }
    }
    TryUpdateInstanceMessage( 2.0, nPriority, "ShowRoshanTargetPopup" );
} );

GameEvents.Subscribe<{ team: number; }>( "candy_bucket_attacked", function ( e )
{
    const nLocalTeam = Players.GetTeam( Players.GetLocalPlayer() );

    if ( nLocalTeam == e.team )
    {
        TryUpdateInstanceMessage( 2.0, 40, "ShowCandyBucketAttackedPopup" );
    }
} );

GameEvents.Subscribe( "stash_respawn", function ( e )
{
    TryUpdateInstanceMessage( 2.0, 20, "ShowStashRespawnPopup" );
} );

GameEvents.Subscribe( "greevil_spawn", function ( e )
{
    Game.EmitSound( "Greevil.Spawn.Announcement" );
    Game.EmitSound( "Greevil.Spawn.Laugh" );
    TryUpdateInstanceMessage( 2.0, 20, "ShowGreevilSpawnPopup" );
} );

GameEvents.Subscribe( "roshan_released", function ( e )
{
    TryUpdateInstanceMessage( 2.0, 20, "ShowRoshanReleasedPopup" );
} );

GameEvents.Subscribe<{ team: number; }>( "well_targeted", function ( e )
{
    const nLocalTeam = Players.GetTeam( Players.GetLocalPlayer() );
    let nPriority = 30;

    if ( ( nLocalTeam != DOTATeam_t.DOTA_TEAM_GOODGUYS && nLocalTeam != DOTATeam_t.DOTA_TEAM_BADGUYS ) || e.team < 0 )
    {
        if ( Math.abs( e.team ) == DOTATeam_t.DOTA_TEAM_GOODGUYS )
        {
            $.GetContextPanel().SwitchClass( "WellTargeted", "WellTargetedRadiant" );
        }
        else
        {
            $.GetContextPanel().SwitchClass( "WellTargeted", "WellTargetedRadiantDire" );
        }
    }
	else
	{
		if ( Math.abs( e.team ) == nLocalTeam )
		{
			$.GetContextPanel().SwitchClass( "WellTargeted", "WellTargetedAlly" );
		}
		else
		{
			$.GetContextPanel().SwitchClass( "WellTargeted", "WellTargetedEnemy" );
		}
	}

    TryUpdateInstanceMessage( 2.0, 20, "ShowWellTargetedPopup" );
} );

let g_bInEndGameCamera = false;
let g_flCurrentPitch = 0;
const g_flInitialPitch = 40;
const g_flFinalPitch = 30;
const g_flCameraPitchSpeed = -0.015;

GameEvents.Subscribe<{ ent_index: number; }>( "begin_end_game_cinematic", function BeginEndGameCinematic( data )
{
    GameUI.MoveCameraToEntity( data.ent_index );

    g_flCurrentPitch = g_flInitialPitch;
    GameUI.SetCameraPitchMin( g_flCurrentPitch );
    GameUI.SetCameraPitchMax( g_flCurrentPitch );
    GameUI.SetCameraDistance( 650 );
    GameUI.SetCameraLookAtPositionHeightOffset( 250 );
    GameUI.SetCameraTarget( data.ent_index );
    GameUI.SetCameraYaw( 0 );

    g_bInEndGameCamera = true;

    //const vAghanimAngles = Entities.GetAbsAngles( data[ "ent_index" ] );
    //GameUI.SetCameraYaw( vAghanimAngles[ 1 ] - 10 + 90 );                                
    //g_flCameraYawSpeed = 0.025;
} );
