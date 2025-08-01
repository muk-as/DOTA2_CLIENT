/// <reference path="../dota.d.ts" />

                          
function OnRelicProgressToast( primaryAttribute: number, bRare: boolean )
{
    var panel = $.GetContextPanel();
    panel.AddClass( "GemNotReady" );

    var relicFXPanel = panel.FindChildInLayoutFile( 'ToastRelicFXPanel' ) as DOTAScenePanel_t;
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
}
