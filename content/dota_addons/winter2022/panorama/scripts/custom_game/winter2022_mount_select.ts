/// <reference path="../../../../../dota/panorama/scripts/dota.d.ts" />
/// <reference path="winter2022_shared.ts" />

type MountChoices_t = { [index: string]: string; };
const mountChoices = SubscribeAllTableValues<MountChoices_t>( "mount_choices", UpdateMountChoice );

function ChooseMount( sChoice: string ): void
{
    GameEvents.SendCustomGameEventToServer( "mount_choice", { Choice: sChoice } );
    FloatIcon( sChoice );
}

let g_bMountSelectIsOpen = false;
function UpdateMountChoice(): void
{
    const nPlayerId = Players.GetLocalPlayer();
    const loadoutChoices = Object.values( mountChoices[nPlayerId] || {} );
    if ( loadoutChoices.length === 0 )
    {
        if ( g_bMountSelectIsOpen )
        {
            g_bMountSelectIsOpen = false;
            Game.EmitSound( "PenguinLoadout.Claim" );
            $( "#PenguinLoadoutContainer" )!.RemoveClass( "Visible" );
            $( "#PenguinLoadoutBackground" )!.RemoveClass( "Visible" );
        }
        return;
    }

    const pList = $( "#PenguinLoadoutList" )!;
    pList.RemoveAndDeleteChildren();
    for ( const sChoice of loadoutChoices )
    {
        const pItem = $.CreatePanel( "Panel", pList, `PenguinLoadoutItem_${sChoice}` );
        pItem.BLoadLayoutSnippet( "PenguinLoadoutItem" );
        pItem.SwitchClass( "Choice", sChoice );
        pItem.SetDialogVariableLocString( "loadout_item_name", `#DOTA_HUD_mount_${sChoice}` );
        pItem.SetDialogVariableLocString( "loadout_item_description", `#DOTA_HUD_mount_${sChoice}_description` );
        pItem.SetPanelEvent( 'onactivate', () => ChooseMount( sChoice ) );
    }

    if ( !g_bMountSelectIsOpen )
    {
        g_bMountSelectIsOpen = true;
        $.Schedule( 1.0, () =>
        {
            Game.EmitSound( "PenguinLoadout.Claim" );
            $( "#PenguinLoadoutContainer" )!.AddClass( "Visible" );
            $( "#PenguinLoadoutBackground" )!.AddClass( "Visible" );
        } );
    }
}
$.Schedule( 0.5, UpdateMountChoice );

function FloatIcon( sChoice: string ): void
{
    const pLoadoutItem = $( `#PenguinLoadoutItem_${sChoice}` )!;
    const pLoadoutIcon = pLoadoutItem.FindChildInLayoutFile( "PenguinLoadoutIcon" );
    const startRect = ObjectToMap<number>( GetPanelRect( pLoadoutIcon ) );

    const pHud = $.GetContextPanel().FindAncestor( "HUDElements" )!;
    const pLowerHud = pHud.FindChild( "lower_hud" )!;
    const pSecondaryAbilities = pLowerHud.FindChildTraverse( "SecondaryAbilityContainer" );
    const pTartiaryAbilities = pSecondaryAbilities.FindChildTraverse( "TertiaryAbilitiesBar" );
    const pMountAbility = pTartiaryAbilities.FindChildTraverse( "ConsumableAbility0" );
    const endRect = ObjectToMap<number>( GetPanelRect( pMountAbility ) );

    const pFloatingIcon = $( "#PenguinLoadoutFloatingIcon" )!;
    pFloatingIcon.SwitchClass( "choice", sChoice );
    pFloatingIcon.RemoveClass( "Hidden" );

    function MoveIcon( curRect: Map<string, number> ): void
    {
        pFloatingIcon.SetPositionInPixels( curRect.get( "x" )!, curRect.get( "y" )!, 0 );
        pFloatingIcon.style.height = curRect.get( "height" )! + "px";
        pFloatingIcon.style.width = curRect.get( "width" )! + "px";
    }

    InterpolateEveryFrame( 0.6, startRect, endRect, MoveIcon, () => pFloatingIcon.AddClass( "Hidden" ) );
}

function DebugFloatIcon(): void
{
    const nPlayerId = Players.GetLocalPlayer();
    const loadoutChoices = Object.values( mountChoices[nPlayerId] || {} );
    if ( loadoutChoices.length > 0 )
    {
        const sChoice = loadoutChoices[Math.floor( loadoutChoices.length * Math.random() )];
        $.Msg( `DebugFloatIcon ${sChoice}` );
        FloatIcon( sChoice );
    }
    $.Schedule( 3, DebugFloatIcon );
}
// $.Schedule( 3, DebugFloatIcon );
