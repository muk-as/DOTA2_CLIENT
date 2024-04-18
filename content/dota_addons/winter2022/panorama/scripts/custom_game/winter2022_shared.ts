/// <reference path="../winter2022.d.ts" />
/// <reference path="util.ts" />

interface Winter2022GlobalValues_t
{
    GameState: number; // self.m_GameState,
    State: number; // self.m_nState,
    TimeStateStarted: number; // self.m_flTimeStateStarted,
    TimeStateEnds: number; // self.m_flTimeStateEnds,
    RoundNumber: number; // self:GetRoundNumber(),
    TimeRoundStarted: number; // self.m_flTimeRoundStarted,
    TimeRoundEnds: number; // self.m_flTimeRoundEnds,
    TimeGameStarted: number; // self.m_flTimeGameStarted or GameRules:GetDOTATime( false, true ),
    DireScore: number; // self.m_nTeamScore[ _G.DOTA_TEAM_BADGUYS ],
    RadiantScore: number; // self.m_nTeamScore[ _G.DOTA_TEAM_GOODGUYS ],
    TrickOrTreatHeroID: number; // nTrickOrTreatHeroID,
    TrickOrTreatTeam: number; // nTrickOrTreatTeam,
    TrickOrTreatMode: number; // nTrickOrTreatMode,
    RoshanNearPlayer: boolean; // bRoshanNearPlayer,
    TrickOrTreatTargetEntIndex: number; // nTrickOrTreatTargetEntIndex,
    CandyLeaderBuilding: string; // sCandyLeaderBuilding,
    RoshanCandy: number; // nRoshanCandy,
    RadiantBucketHurt: number; // nRadiantLosingCandy,
    DireBucketHurt: number; // nDireLosingCandy,
    GreevilHatchTime: number; // fGreevilHatchTime,
    GreevilDespawnTime: number; // fGreevilDespawnTime,
}

const Globals = {
    constants: CustomNetTables.GetTableValue( "globals", "constants" ),
    values: CustomNetTables.GetTableValue( "globals", "values" ) as Winter2022GlobalValues_t
};
CustomNetTables.SubscribeNetTableListener( "globals", ( _, key, value ) => ( Globals as any )[key] = value );

function SubscribeAllTableValues<T>( tableName: string, onUpdate: () => void ): Dictionary<T>
{
    const table: Dictionary<T> = {};

    const all = CustomNetTables.GetAllTableValues<T>( tableName );
    all.forEach( v => table[v.key] = v.value );
    $.Schedule( 0, onUpdate );

    CustomNetTables.SubscribeNetTableListener<T>( tableName, ( _, key, value ) =>
    {
        table[key] = value;
        onUpdate();
    } );

    return table;
}

function GetValidPlayerIDs(): number[]
{
    const ids: number[] = [];
    for ( let i = 0; i <= Players.GetMaxPlayers(); i++ )
    {
        if ( Players.IsValidPlayerID( i ) && !Players.IsSpectator( i ) )
        {
            ids.push( i );
        }
    }
    return ids;
}

function IsLocalPlayerPlaying(): boolean
{
    const nTeam = Players.GetTeam( Players.GetLocalPlayer() );
    return nTeam === DOTATeam_t.DOTA_TEAM_GOODGUYS || nTeam === DOTATeam_t.DOTA_TEAM_BADGUYS;
}

function TrackAltPressed( panel: Panel_t ): void
{
    panel.SetHasClass( "AltPressed", IsDotaAltPressed() );
    $.Schedule( 0.0, () => TrackAltPressed( panel ) );
}

interface PanelRect
{
    x: number;
    y: number;
    width: number;
    height: number;
}

function GetPanelRect( panel: Panel_t ): PanelRect
{
    const x = panel.GetPositionWithinWindow().x / panel.actualuiscale_x;
    const y = panel.GetPositionWithinWindow().y / panel.actualuiscale_y;
    const width = panel.actuallayoutwidth / panel.actualuiscale_x;
    const height = panel.actuallayoutheight / panel.actualuiscale_y;
    return { x, y, width, height };
}

function ObjectToMap<V>( obj: any ): Map<string, V>
{
    return new Map( Object.keys( obj ).map( k => [k, obj[k] as V] ) );
}

// Calls fnApply every frame with interpolated values of all keys in start and number.
// Calls fnDone at the end if provided.
// fnApply( start ) is called synchronously.
// fnApply( end ) is called synchronously if nSeconds <= 0.
function InterpolateEveryFrame( nSeconds: number, start: Map<string, number>, end: Map<string, number>, fnApply: ( current: Map<string, number> ) => void, fnDone?: () => void ): () => void
{
    let bCancelled = false;

    const rgKeys = [...new Set( [...start.keys(), ...end.keys()] )];
    const innerStart = new Map( rgKeys.map( k => [k, start.get( k ) || 0] ) );
    const innerEnd = new Map( rgKeys.map( k => [k, end.get( k ) || 0] ) );

    fnApply( innerStart );
    if ( nSeconds < 0 )
    {
        fnApply( innerEnd );
        if ( fnDone )
            fnDone();
    }
    else
    {
        const nStartTime = Game.Time();
        const nEndTime = nStartTime + nSeconds;
        function InnerApply()
        {
            if ( bCancelled )
                return;
            const nTime = Game.Time();
            const nPercent = RemapVal( nTime, nStartTime, nEndTime, 0, 1 );
            if ( nPercent >= 1 )
            {
                fnApply( innerEnd );
                if ( fnDone )
                    fnDone();
            }
            else
            {
                const current = new Map( rgKeys.map( k => [k, Lerp( nPercent, innerStart.get( k )!, innerEnd.get( k )! )] ) );
                fnApply( current );
                $.Schedule( 0, InnerApply );
            }
        }
        $.Schedule( 0, InnerApply );
    }

    return () => bCancelled = true;
}
