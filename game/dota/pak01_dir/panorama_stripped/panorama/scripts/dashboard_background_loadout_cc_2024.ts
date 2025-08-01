/// <reference path="dota.d.ts" />
/// <reference path="util.ts" />
/// <reference path="dota_sequence_actions.ts" />



$( '#FxScene' )!.RemoveClass( 'LogoTrigger' );
($('#FxScene') as DOTAScenePanel_t).FireEntityInput( 'logo_fx', 'Stop', 0 );

var LogoTrigger = function ()
{
    ($('#FxScene') as DOTAScenePanel_t).FireEntityInput( 'logo_fx', 'Start', 0 );
    $.Schedule( 2.5, function ()
    {
        $( '#FxScene' )!.AddClass( 'LogoTrigger' );
    } );
};