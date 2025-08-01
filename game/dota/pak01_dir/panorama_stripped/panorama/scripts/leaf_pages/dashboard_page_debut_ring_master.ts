/// <reference path="../dota.d.ts" />
/// <reference path="../util.ts" />
/// <reference path="../common/async.ts" />
/// <reference path="../dota_sequence_actions.ts" />

   
             
   
var g_abort: Async.AbortController | undefined;
var g_soundGuids: number[] = [];


function LoadRingmasterLogo()
{
    const cp = $.GetContextPanel();
    const bIsChinese = cp.BAscendantHasClass( "Language_schinese" ) || cp.BAscendantHasClass( "Language_tchinese" );
                                                                                                                         
}

function StartRingmasterDebut()
{
    EndRingmasterDebut();

    g_abort = new Async.AbortController();
    Async.RunSequence( RingmasterSequence, g_abort.signal );
}

function EndRingmasterDebut()
{
    if ( g_abort )
    {
        g_abort.abort();
        g_abort = undefined;
    }

    $( '#MainContainer' )!.RemoveClass( 'Initialize' );
    $( '#ModelBackground' )?.RemoveClass( 'Initialize' );
                                                        

    $( '#DebutInformation' )!.RemoveClass( 'Initialize' );
    $( '#InformationBody' )!.RemoveClass( 'Initialize' );

    g_soundGuids.forEach( StopUISoundScript );
    g_soundGuids = [];
}

function* RingmasterSequence( abortSignal: Async.AbortSignal_t )
{
    $.RegisterForUnhandledEvent( "DynamicPropAnimEvent", function ( ...args ) {                                                                 } );

    const pContainer = $( '#ModelContainer' )!;
    pContainer.RemoveAndDeleteChildren();
    pContainer.BLoadLayoutSnippet( 'ModelSnippet' );

    const pMain = $( '#MainContainer' ) as Panel_t;
    const pScene = $( '#ModelBackground' ) as DOTAScenePanel_t;
                                                                        

    yield Async.Delay( 0.75 );

    $.DispatchEvent( 'DOTASetCurrentDashboardPageFullscreen', true );

    yield Async.Condition( () => pScene.BHasClass( "SceneLoaded" ), abortSignal );

    const sceneLoadedTime = new Async.TimeStamp();

    pMain.AddClass( 'Initialize' );
    pScene.AddClass('Initialize');

    g_soundGuids.push( PlayUISoundScript( 'ringmaster_debut_stinger' ) );
    g_soundGuids.push( PlayUISoundScript( 'ringmaster_debut_sfx' ) );

                                                                             

                                        
    yield Async.Delay( 8.3 );

    $( '#DebutInformation' )!.AddClass( 'Initialize' );
    $( '#InformationBody' )!.AddClass( 'Initialize' );
                                

    yield Async.Delay( 8.5 );

    $.DispatchEvent( 'DOTAGlobalSceneSetCameraEntity', 'ModelBackground', 'hero_camera_post', 0.0 );
    $.DispatchEvent( 'DOTAGlobalSceneSetRootEntity', 'ModelBackground', 'root_post' );
    pScene.SetRotateParams( -0.75, 0.75, -0.25, 0.25 );

}

