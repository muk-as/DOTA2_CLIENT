/// <reference path="dota.d.ts" />
/// <reference path="util.ts" />

interface CDOTAFeaturedGamemodeDefinition
{
    eGameMode: DOTA_GameMode;
    sCustomGame: string | null;
    nShardsPerWin: number;
    nShardsPerLoss: number;
    sLocName: string;
    sLocDescription: string;
    sLocalizedEndsIn: string;
}

interface CDOTA_DB_Play_ObjectTemplate extends Panel_t
{
    GetActiveFeaturedGamemode(): CDOTAFeaturedGamemodeDefinition | null;
    GetFeaturedGamemodeProgress(): number;
    GetFeaturedGamemodeMax(): number;
    GetSelectedGameModes(): number;
    UpdateCasualGameModeCheckboxes(): void;
}

interface GameMode
{
    nMode: DOTA_GameMode;
    sName: string;
}

const k_GameModes: GameMode[] = [
    { nMode: DOTA_GameMode.DOTA_GAMEMODE_AP, sName: "AllPick" },
    { nMode: DOTA_GameMode.DOTA_GAMEMODE_TURBO, sName: "Turbo" },
    { nMode: DOTA_GameMode.DOTA_GAMEMODE_SD, sName: "SingleDraft" },
    { nMode: DOTA_GameMode.DOTA_GAMEMODE_RD, sName: "RandomDraft" },
    { nMode: DOTA_GameMode.DOTA_GAMEMODE_ABILITY_DRAFT, sName: "AbilityDraft" },
    { nMode: DOTA_GameMode.DOTA_GAMEMODE_EVENT, sName: "Event" },
];
const k_GameModesMap = ToMap( k_GameModes, mode => mode.nMode );
const k_StandardModes = [DOTA_GameMode.DOTA_GAMEMODE_AP, DOTA_GameMode.DOTA_GAMEMODE_TURBO];
const k_OtherModes = [DOTA_GameMode.DOTA_GAMEMODE_SD, DOTA_GameMode.DOTA_GAMEMODE_RD, DOTA_GameMode.DOTA_GAMEMODE_ABILITY_DRAFT];

let gFeaturedGamemodeDef: CDOTAFeaturedGamemodeDefinition | null = null;

function InitUnrankedGameModes()
{
    const pContext = $.GetContextPanel<CDOTA_DB_Play_ObjectTemplate>();
    gFeaturedGamemodeDef = pContext.GetActiveFeaturedGamemode();

    const pModes = $( "#UnrankedGameModes" );
    if ( pModes )
    {
        pModes.RemoveAndDeleteChildren();
        let bFeaturedModeFound = false;
        k_StandardModes.forEach( nMode =>
        {
            if ( gFeaturedGamemodeDef && nMode == gFeaturedGamemodeDef.eGameMode )
            {
                BuildUnrankedGameModePanel( pModes, nMode, gFeaturedGamemodeDef );
                bFeaturedModeFound = true;
            }
            else
            {
                BuildUnrankedGameModePanel( pModes, nMode );
            }
        } );

        if ( gFeaturedGamemodeDef && !bFeaturedModeFound )
        {
            BuildUnrankedGameModePanel( pModes, gFeaturedGamemodeDef.eGameMode, gFeaturedGamemodeDef );
        }
    }


    const pOtherModes = $( "#UnrankedGameModesOther" );
    if ( pOtherModes )
    {
        pOtherModes.RemoveAndDeleteChildren();
        k_OtherModes.forEach( nMode =>
        {
            const mode = k_GameModesMap[nMode];
            if ( mode && ( gFeaturedGamemodeDef == null || nMode != gFeaturedGamemodeDef.eGameMode ) )
            {
                BuildGameModeToggle( pOtherModes, mode.sName, mode.nMode );
            }
        } );
    }

    if ( gFeaturedGamemodeDef )
    {
        pContext.SetDialogVariableInt( "fgm_loss_shards", gFeaturedGamemodeDef.nShardsPerLoss );
        pContext.SetDialogVariableInt( "fgm_win_bonus_shards", gFeaturedGamemodeDef.nShardsPerWin - gFeaturedGamemodeDef.nShardsPerLoss );
    }
    UpdateUnrankedValues();

    pContext.UpdateCasualGameModeCheckboxes();
}
$.Schedule( 0.0, InitUnrankedGameModes );

function UpdateUnrankedGameModes()
{
    const pContext = $.GetContextPanel<CDOTA_DB_Play_ObjectTemplate>();
    const pFeaturedGamemodeDef = pContext.GetActiveFeaturedGamemode();
    if ( !BShallowEqual( pFeaturedGamemodeDef, gFeaturedGamemodeDef, "sLocalizedEndsIn" ) )
    {
        InitUnrankedGameModes();
    }
    else
    {
        if ( gFeaturedGamemodeDef )
            gFeaturedGamemodeDef.sLocalizedEndsIn = pFeaturedGamemodeDef!.sLocalizedEndsIn;
        UpdateUnrankedValues();
    }
}

function UpdateUnrankedValues()
{
    const pContext = $.GetContextPanel<CDOTA_DB_Play_ObjectTemplate>();
    pContext.SetDialogVariableInt( "fgm_shards_earned", pContext.GetFeaturedGamemodeProgress() );
    pContext.SetDialogVariableInt( "fgm_shards_max", pContext.GetFeaturedGamemodeMax() );

    const pSection = $( "#GameModeSection" );
    const pModesPanel = $( "#UnrankedGameModes" );
    const pModesOtherPanel = $( "#UnrankedGameModesOther" );
    if ( pSection && pModesPanel && pModesOtherPanel )
    {
        if ( pContext.BHasClass( "SectionVisible_Normal" ) )
        {
            if ( pSection.BHasClass( "ShowAll" ) )
            {
                pSection.SwitchClass( "GameModeHeight", `GameModeHeight_${pModesPanel.GetChildCount()}_${pModesOtherPanel.GetChildCount()}` );
            }
            else
            {
                pSection.SwitchClass( "GameModeHeight", `GameModeHeight_${pModesPanel.GetChildCount()}` );

            }
        }
        else
        {
            pSection.SwitchClass( "GameModeHeight", "" );
            pSection.style.height = null;
        }
    }

    if ( gFeaturedGamemodeDef )
    {
        pContext.SetDialogVariable( "ends_in_time", gFeaturedGamemodeDef.sLocalizedEndsIn );
    }

    const pShowAllCount = pContext.FindChildInLayoutFile( "GameMode_ShowAll_Count" );
    if ( pShowAllCount )
    {
        const nSelectedGameModes = pContext.GetSelectedGameModes();
        let nSelectedOtherGameModeCount = 0;
        k_OtherModes.forEach( mode => 
        {
            const bSelected = ( 1 << mode ) & nSelectedGameModes;
            if ( bSelected && ( gFeaturedGamemodeDef == null || gFeaturedGamemodeDef.eGameMode != mode ) )
                nSelectedOtherGameModeCount++;
        } );
        pShowAllCount.SetDialogVariableInt( "unranked_other_selected_count", nSelectedOtherGameModeCount );
        pShowAllCount.SetHasClass( "NoneSelected", nSelectedOtherGameModeCount == 0 );
    }
}

function BShallowEqual<T>( pObj1: T | null, pObj2: T | null, ...ignoreKeys: Array<string & keyof NonNullable<T>> ): boolean
{
    if ( pObj1 == null && pObj2 == null ) return true;
    if ( pObj1 == null || pObj2 == null ) return false;
    for ( const prop in pObj1 )
    {
        if ( !ignoreKeys.includes( prop ) && pObj1[prop] !== pObj2[prop] )
            return false;
    }
    return true;
}

function BuildGameModeToggle( pParent: Panel_t, sName: string, nMode: number, sLocText?: string, sLocTooltip?: string ): ToggleButton_t
{
    if ( !sLocText )
        sLocText = `#game_mode_${nMode}`;
    if ( !sLocTooltip )
        sLocTooltip = `#game_mode_${nMode}_desc`;

    const pToggleButton = $.CreatePanel( "ToggleButton", pParent, `GameMode_${sName}`, { class: "GameModeCheckBox", text: sLocText } );
    pToggleButton.SetPanelEvent( "onmouseover", () => $.DispatchEvent( "UIShowTextTooltipStyled", pToggleButton, sLocTooltip!, "GameModeTooltip" ) );
    pToggleButton.SetPanelEvent( "onmouseout", () => $.DispatchEvent( "UIHideTextTooltip", pToggleButton ) );
    pToggleButton.SetPanelEvent( "onactivate", () => $.DispatchEvent( "DOTAGameModeToggled", pToggleButton, false ) );
    return pToggleButton;
}

function BuildFeaturedGameModeDot( pParent: Panel_t, bFilled: boolean ): Panel_t
{
    let className = "FeaturedGameModeDot";
    if ( bFilled )
        className += " Filled";
    return $.CreatePanel( "Panel", pParent, undefined, { class: className } );
}

function BuildUnrankedGameModePanel( pParent: Panel_t, nMode: DOTA_GameMode, pFeaturedGamemodeDef?: CDOTAFeaturedGamemodeDefinition ): Panel_t | null
{
    const mode = k_GameModesMap[nMode];
    if ( !mode )
        return null;

    const pGameModeContainer = $.CreatePanel( "Panel", pParent, `GameModeContainer_${mode.sName}` );
    pGameModeContainer.BLoadLayoutSnippet( "UnrankedGameModeContainer" );
    if ( pFeaturedGamemodeDef )
    {
        pGameModeContainer.AddClass( "FeaturedGameMode" );
        if ( pFeaturedGamemodeDef.sCustomGame )
        {
            pGameModeContainer.AddClass( pFeaturedGamemodeDef.sCustomGame );
        }
    }

    const pFeaturedGameModeHeader = pGameModeContainer.FindChildInLayoutFile( "FeaturedGameModeHeader" );
    if ( pFeaturedGameModeHeader )
    {
        let pGameModeToggle;
        if ( pFeaturedGamemodeDef )
            pGameModeToggle = BuildGameModeToggle( pGameModeContainer, mode.sName, mode.nMode, pFeaturedGamemodeDef.sLocName, pFeaturedGamemodeDef.sLocDescription );
        else
            pGameModeToggle = BuildGameModeToggle( pGameModeContainer, mode.sName, mode.nMode );
        pGameModeContainer.MoveChildAfter( pGameModeToggle, pFeaturedGameModeHeader );
    }

    return pGameModeContainer;
}