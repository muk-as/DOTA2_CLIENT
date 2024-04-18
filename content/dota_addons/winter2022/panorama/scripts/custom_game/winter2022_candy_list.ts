/// <reference path="../winter2022.d.ts" />
/// <reference path="util.ts" />
/// <reference path="winter2022_shared.ts" />

type CandyState_t = { entity_index: number; candy_count: number; update_time: number; };
const g_CandyState = SubscribeAllTableValues<CandyState_t>( "candy_list", UpdateCandyList );
CustomNetTables.SubscribeNetTableListener( "globals", UpdateCandyList );

let g_CandyPanels: Dictionary<Panel_t> = {};
function Init()
{
    $.GetContextPanel().RemoveAndDeleteChildren();
    g_CandyPanels = {}

    TrackAltPressed( $.GetContextPanel() );

    const nLocalTeam = Players.GetTeam( Players.GetLocalPlayer() );
    $.GetContextPanel().SetHasClass( "Spectating", nLocalTeam !== DOTATeam_t.DOTA_TEAM_BADGUYS && nLocalTeam !== DOTATeam_t.DOTA_TEAM_GOODGUYS );

    UpdateCandyList();
}
$.Schedule( 1.0, Init );

function UpdateCandyList(): void
{
    const nLocalTeam = Players.GetTeam( Players.GetLocalPlayer() );
    const bLocalIsInGame = nLocalTeam === DOTATeam_t.DOTA_TEAM_BADGUYS || nLocalTeam === DOTATeam_t.DOTA_TEAM_GOODGUYS;

    const candyValues: Dictionary<number> = {};
    Object.values( g_CandyState ).forEach( state =>
    {
        if ( !state )
            return;
        const nPlayerID = Entities.GetPlayerOwnerID( state.entity_index );
        if ( Players.IsValidPlayerID( nPlayerID ) )
            candyValues[nPlayerID] = ( candyValues[nPlayerID] || 0 ) + state.candy_count;
    } );
    GetValidPlayerIDs().forEach( nPlayerID =>
    {
        const nCandyCount = candyValues[nPlayerID] || 0;
        const bShowCandy = nCandyCount !== 0 && ( !bLocalIsInGame || nLocalTeam === Players.GetTeam( nPlayerID ) );

        if ( bShowCandy )
        {
            const candyPanel = g_CandyPanels[nPlayerID] || CreatePlayerCandyPanel( nPlayerID );
            if ( !candyPanel )
                return;

            candyPanel.SetDialogVariableInt( "candy_count", nCandyCount );
            candyPanel.SetHasClass( "Hidden", false );
        }
        else
        {
            const candyPanel = g_CandyPanels[nPlayerID];
            if ( candyPanel )
            {
                candyPanel.SetDialogVariableInt( "candy_count", 0 );
                candyPanel.SetHasClass( "Hidden", true );
            }
        }
    } );
}

function CreatePlayerCandyPanel( nPlayerID: number ): Panel_t | null
{
    if ( g_CandyPanels[nPlayerID] )
        return g_CandyPanels[nPlayerID]!;


    const bIsRadiant = Players.GetTeam( nPlayerID ) == DOTATeam_t.DOTA_TEAM_GOODGUYS;
    const panelId = `${bIsRadiant ? "Radiant" : "Dire"}Player${nPlayerID}`;
    
    const hud = $.GetContextPanel().FindAncestor( "HUDElements" )!;
    if ( !hud )
        return null;

    const playerPanel = hud.FindChildTraverse( panelId );
    if ( !playerPanel )
        return null;

    const playerContainer = playerPanel.FindChildTraverse( "SlantedContainerPanel" );
    if ( !playerContainer )
        return null;
    const playerRect = GetPanelRect( playerContainer );

    const candyPanel = $.CreatePanel( "Panel", $.GetContextPanel(), `Player${nPlayerID}Candy` );
    candyPanel.BLoadLayoutSnippet( "PlayerCandy" );
    candyPanel.SwitchClass( "team", bIsRadiant ? "PlayerCandyRadiant" : "PlayerCandyDire" );
    candyPanel.SetPositionInPixels( playerRect.x, playerRect.height, 0 );

    g_CandyPanels[nPlayerID] = candyPanel;
    return candyPanel;
}
