/// <reference path="../dota.d.ts" />

                          
function OnRelicProgressShown( panelId: string, primaryAttribute: number, bRare: boolean )
{
    const panel = $.GetContextPanel().FindChildInLayoutFile( panelId );
    panel.AddClass( "GemNotReady" );

    const relicFXPanel = panel.FindChildInLayoutFile( 'RelicFXPanel' ) as DOTAScenePanel_t;
    $.RegisterEventHandler( 'DOTAScenePanelSceneLoaded', relicFXPanel, function ()
    {
        if ( bRare )
        {
            relicFXPanel.FireEntityInput( 'hero_relic_gem_gold_fx', 'Start', '' );
        }
        else if ( primaryAttribute == 0 )
        {
            relicFXPanel.FireEntityInput( 'hero_relic_gem_red_fx', 'Start', '' );
        }
        else if ( primaryAttribute == 1 )
        {
            relicFXPanel.FireEntityInput( 'hero_relic_gem_green_fx', 'Start', '' );
        }
        else if ( primaryAttribute == 2 )
        {
            relicFXPanel.FireEntityInput( 'hero_relic_gem_blue_fx', 'Start', '' );
        }
        panel.RemoveClass( "GemNotReady" );
    } );

    const relicFXFullPanel = panel.FindChildInLayoutFile( 'RelicFXFullPanel' ) as DOTAScenePanel_t;
    $.RegisterEventHandler( 'DOTAScenePanelSceneLoaded', relicFXFullPanel, function ()
    {
        if ( bRare )
        {
            relicFXFullPanel.FireEntityInput( 'hero_relic_separator_gold_fx', 'Start', '' );
            relicFXFullPanel.FireEntityInput( 'hero_relic_burst_rare_fx', 'Start', '' );
        }
        else
        {
            relicFXFullPanel.FireEntityInput( 'hero_relic_separator_fx', 'Start', '' );
            relicFXFullPanel.FireEntityInput( 'hero_relic_burst_fx', 'Start', '' );
        }
    } );
}
