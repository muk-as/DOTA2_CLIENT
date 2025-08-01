/// <reference path="../dota.d.ts" />
/// <reference path="../util.ts" />
/// <reference path="../dota_sequence_actions.ts" />

var RunPageAnimation = function ()
{
    const modelBackground = $( '#ModelBackground' ) as DOTAScenePanel_t;

    const seq = new RunSequentialActions();
    seq.actions.push( new WaitAction( 0.01 ) );
    seq.actions.push( new WaitForClassAction( modelBackground, 'SceneLoaded' ) );
    seq.actions.push( new LerpDepthOfFieldAction( modelBackground, "hero_camera", 0, 0, 0, 0, 200, 300, 400, 900, 2.0 ) );

    RunSingleAction( seq );
};

$.Schedule( 0.0, function ()
{
    const modelBackground = $( '#ModelBackground' ) as DOTAScenePanel_t;
    $.RegisterEventHandler( 'DOTAScenePanelSceneLoaded', modelBackground, function ()
    {
        modelBackground.FireEntityInput( 'loadout_background_witch_doctor', "Disable", '' );
        $.DispatchEvent( 'DOTASetCurrentDashboardPageFullscreen', true );
    } );
} );

var changeHero = function ( heroModel: number ): void
{
    const modelBackground = $( '#ModelBackground' ) as DOTAScenePanel_t;
    const modelBackgroundWK = $( '#ModelBackgroundWK' ) as DOTAScenePanel_t;

    modelBackground.FireEntityInput( 'hero_loadout_lion', "Disable", '' );
    modelBackground.FireEntityInput( 'hero_loadout_drow', "Disable", '' );
    modelBackground.FireEntityInput( 'hero_loadout_pudge', "Disable", '' );
    modelBackground.FireEntityInput( 'hero_loadout_crystal_maiden', "Disable", '' );
    modelBackground.FireEntityInput( 'hero_loadout_primal_beast', "Disable", '' );
    modelBackground.FireEntityInput( 'hero_loadout_witch_doctor', "Disable", '' );
    modelBackground.FireEntityInput( 'hero_loadout_muerta', "Disable", '' );
    modelBackground.FireEntityInput( 'loadout_background_witch_doctor', "Disable", '' );
    modelBackground.FireEntityInput( 'loadout_background', "Disable", '' );

    if ( heroModel === 1 )
    {
        modelBackground.FireEntityInput( 'hero_loadout_lion', "Enable", '' );
        modelBackground.FireEntityInput( 'loadout_background', "Enable", '' );
        modelBackgroundWK.RemoveClass( 'Initialize' );


    }
    if ( heroModel === 2 )
    {
        modelBackground.AddClass( 'Initialize' );
                                                                             
        modelBackground.FireEntityInput( 'hero_loadout_drow', "Enable", '' );
        modelBackground.FireEntityInput( 'loadout_background', "Enable", '' );
        modelBackgroundWK.RemoveClass( 'Initialize' );

    }
    if ( heroModel === 3 )
    {
        modelBackground.FireEntityInput( 'hero_loadout_pudge', "Enable", '' );
        modelBackground.FireEntityInput( 'loadout_background', "Enable", '' );
        modelBackgroundWK.RemoveClass( 'Initialize' );

    }
    if ( heroModel === 4 )
    {
        modelBackground.FireEntityInput( 'hero_loadout_crystal_maiden', "Enable", '' );
        modelBackground.FireEntityInput( 'loadout_background', "Enable", '' );
        modelBackgroundWK.RemoveClass( 'Initialize' );


    }
    if ( heroModel === 5 )
    {
        modelBackground.FireEntityInput( 'hero_loadout_primal_beast', "Enable", '' );
        modelBackground.FireEntityInput( 'loadout_background', "Enable", '' );
        modelBackgroundWK.RemoveClass( 'Initialize' );

    }

    if ( heroModel === 6 )
    {
        modelBackground.FireEntityInput( 'hero_loadout_witch_doctor', "Enable", '' );
        modelBackground.FireEntityInput( 'loadout_background_witch_doctor', "Enable", '' );
        modelBackgroundWK.RemoveClass( 'Initialize' );

    }

    if ( heroModel === 7 )
    {
        modelBackground.FireEntityInput( 'hero_loadout_muerta', "Enable", '' );
        modelBackground.FireEntityInput( 'loadout_background', "Enable", '' );
        modelBackgroundWK.RemoveClass( 'Initialize' );

    }

};


var l_Toggle = false;
var TestGlobalLight = function ()
{
                                             
                           
                                                                              

    var strFunction = l_Toggle ? "TurnOn" : "TurnOff";
    l_Toggle = !l_Toggle;

    ( $( '#ModelBackground' ) as DOTAScenePanel_t ).FireEntityInput( 'hero_light', strFunction, '' );
};

var rim_Toggle = false;
var TestRimLight = function ()
{


    var strFunction = rim_Toggle ? "TurnOn" : "TurnOff";
    rim_Toggle = !rim_Toggle;
    ( $( '#ModelBackground' ) as DOTAScenePanel_t ).FireEntityInput( 'rim_cool', strFunction, '' );
};


var fill_Toggle = false;
var TestFillLight = function ()
{


    var strFunction = fill_Toggle ? "TurnOn" : "TurnOff";
    fill_Toggle = !fill_Toggle;
    ( $( '#ModelBackground' ) as DOTAScenePanel_t ).FireEntityInput( 'fill_light', strFunction, '' );
};


var Camera = function ( cameraPosition: number )
{

    if ( cameraPosition === 0 )
    {
        const seq = new RunSequentialActions();
        ( $( '#ModelBackground' ) as DOTAScenePanel_t ).FireEntityInput( 'loadout_camera_model', 'SetAnimGraphParameter', 'camera_anim=fullbody' );

        ( $( '#ModelBackgroundWK' ) as DOTAScenePanel_t ).FireEntityInput( 'loadout_camera_model', 'SetAnimGraphParameter', 'camera_anim=fullbody' );
        seq.actions.push( new LerpDepthOfFieldAction( $( '#ModelBackground' ), "hero_camera", 200, 300, 400, 900, 400, 550, 700, 900, 0.3 ) );
        RunSingleAction( seq );
    }
    if ( cameraPosition === 1 )
    {
        const seq = new RunSequentialActions();

        ( $( '#ModelBackground' ) as DOTAScenePanel_t ).FireEntityInput( 'loadout_camera_model', 'SetAnimGraphParameter', 'camera_anim=cowboy' );

        ( $( '#ModelBackgroundWK' ) as DOTAScenePanel_t ).FireEntityInput( 'loadout_camera_model', 'SetAnimGraphParameter', 'camera_anim=cowboy' );

        seq.actions.push( new LerpDepthOfFieldAction( $( '#ModelBackground' ), "hero_camera", 400, 550, 700, 900, 200, 300, 400, 900, 0.3 ) );

        RunSingleAction( seq );
    }
};


var TestScene = function ()
{

    ( $( '#ModelBackgroundWK' ) as DOTAScenePanel_t ).AddClass( 'Initialize' );
};



function SlideThumbActivate()
{
    var slideThumb = $.GetContextPanel();
    var bMinimized = slideThumb.BHasClass( 'Minimized' );


    slideThumb.ToggleClass( 'Minimized' );

}
function SlideThumbActivateRight()
{
    $( '#DebutInformation' )!.ToggleClass( 'Minimized' );

}

