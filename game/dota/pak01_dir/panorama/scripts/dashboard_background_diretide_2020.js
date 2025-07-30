var g_ActiveAnimationFunction = null;
var RunAnimationIfNotRunning = function ( animationFunction )
{
	if( g_ActiveAnimationFunction != animationFunction )
    {
        g_ActiveAnimationFunction = animationFunction;
        animationFunction();
    }
}

var RunIntroAnimation = function ()
{
                                    

    var scenePanel = $( '#BackgroundScene' );

    var seq = new RunSequentialActions();

    seq.actions.push( new WaitForClassAction( scenePanel, 'SceneLoaded' ) );

                                             
    seq.actions.push( new FireEntityInputAction( scenePanel, 'light_hero', 'LightScale', '0.0' ) );
    seq.actions.push( new FireEntityInputAction( scenePanel, 'roshan_light', 'Intensity', '0.5' ) );
    seq.actions.push( new FireEntityInputAction( scenePanel, 'roshan_light_02', 'Intensity', '1' ) );
    seq.actions.push( new FireEntityInputAction( scenePanel, 'roshan_light_03', 'Intensity', '0.5' ) );
    seq.actions.push( new FireEntityInputAction( scenePanel, 'roshan', 'TurnOn', '' ) );

                                
    seq.actions.push( new FireEntityInputAction( scenePanel, 'roshan', 'SetAnimation', 'sr_transition_frontpage' ) );
    seq.actions.push( new FireEntityInputAction( scenePanel, 'debut_camera', 'SetAnimation', 'diretide_camera_anim' ) );
    seq.actions.push( new WaitAction( 4.55 ) );
    seq.actions.push( new FireEntityInputAction( scenePanel, 'light_hero', 'LightScale', '1.0') );
    seq.actions.push( new FireEntityInputAction( scenePanel, 'roshan_light', 'Intensity', '12') );
    seq.actions.push( new FireEntityInputAction( scenePanel, 'roshan_light_02', 'Intensity', '0') );
    seq.actions.push( new FireEntityInputAction( scenePanel, 'roshan_light_03', 'Intensity', '0') );
    seq.actions.push( new WaitAction( 1.65 ) );
    seq.actions.push( new FireEntityInputAction( scenePanel, 'roshan', 'SetAnimation', 'sr_roshan_idle_frontpage_2020'));
    seq.actions.push( new WaitAction( 0.5 ) );
    if ( EventData.IsFirstRunThisEvent() )
    {
        seq.actions.push( new RunFunctionAction( function() { $.DispatchEvent( 'UIShowCustomLayoutPopup', 'Diretide2020EventDetails', 'file://{resources}/layout/events/diretide_2020_event_details.xml' ); } ) );
    }
    seq.actions.push( new WaitAction( 4.5 ) );


    RunSingleAction( seq ); 
}

var RunIdleAnimation = function ()
{
                                   

    var scenePanel = $( '#BackgroundScene' );

    var seq = new RunSequentialActions();

    seq.actions.push( new WaitForClassAction( scenePanel, 'SceneLoaded' ) );
    seq.actions.push( new FireEntityInputAction( scenePanel, 'roshan', 'TurnOn', '' ) );
    seq.actions.push( new FireEntityInputAction( scenePanel, 'roshan', 'SetAnimation', 'sr_roshan_idle_frontpage_2020' ) );
    seq.actions.push( new FireEntityInputAction( scenePanel, 'light_hero', 'LightScale', '1.0' ) );
    seq.actions.push( new FireEntityInputAction( scenePanel, 'roshan_light', 'Intensity', '12' ) );
    seq.actions.push( new FireEntityInputAction( scenePanel, 'roshan_light_02', 'Intensity', '0' ) );
    seq.actions.push( new FireEntityInputAction( scenePanel, 'roshan_light_03', 'Intensity', '0' ) );
    seq.actions.push( new FireEntityInputAction( scenePanel, 'debut_camera', 'SetAnimation', 'diretide_camera_anim_lastframe' ) );

    RunSingleAction( seq );
}

var RunOutroAnimation = function ()
{
                                    

    var scenePanel = $( '#BackgroundScene' );

    var seq = new RunSequentialActions();

    seq.actions.push( new WaitForClassAction( scenePanel, 'SceneLoaded' ) );
    seq.actions.push( new FireEntityInputAction( scenePanel, 'roshan', 'TurnOff', '') );
    seq.actions.push( new FireEntityInputAction( scenePanel, 'light_hero', 'LightScale', '1.0' ) );
    seq.actions.push( new FireEntityInputAction( scenePanel, 'roshan_light', 'Intensity', '12' ) );
    seq.actions.push( new FireEntityInputAction( scenePanel, 'roshan_light_02', 'Intensity', '0' ) );
    seq.actions.push( new FireEntityInputAction( scenePanel, 'roshan_light_03', 'Intensity', '0' ) );
    seq.actions.push( new FireEntityInputAction( scenePanel, 'debut_camera', 'SetAnimation', 'diretide_camera_anim_lastframe' ) );

    RunSingleAction( seq );
}


var g_bIsPlayingCandyAnimation = false;
var g_nCandyAnimationClicked = 0;

var RunCandyAnimation = function () 
{
    if ( g_bIsPlayingCandyAnimation )
        return;

                                             
    g_nCandyAnimationClicked++;
    if ( g_nCandyAnimationClicked < 3 )
        return;
    g_nCandyAnimationClicked = 0;

    var scenePanel = $( '#BackgroundScene' );
    var seq = new RunSequentialActions();

    g_bIsPlayingCandyAnimation = true;

    seq.actions.push( new WaitForClassAction( scenePanel, 'SceneLoaded' ) );
    seq.actions.push( new FireEntityInputAction( scenePanel, 'roshan', 'SetAnimation', 'tot_roshan_askforcandy_frontpage' ) );
    seq.actions.push( new FireEntityInputAction( scenePanel, 'debut_camera', 'SetAnimation', 'diretide_frontpage_camera_askcandy_anim' ) );
    seq.actions.push( new WaitAction( 4 ) );
    seq.actions.push( new FireEntityInputAction(scenePanel, 'roshan', 'SetAnimation', 'sr_roshan_idle_frontpage_2020' ) );
    seq.actions.push( new RunFunctionAction( function () { g_bIsPlayingCandyAnimation = false; } ) );

    RunSingleAction( seq );
}

var RunEatAnimation = function ()
{
    var scenePanel = $( '#BackgroundScene' );

    var seq = new RunSequentialActions();

    seq.actions.push( new WaitForClassAction( scenePanel, 'SceneLoaded' ) );
    seq.actions.push( new FireEntityInputAction( scenePanel, 'roshan', 'SetAnimation', 'tot_roshan_eatcandy_frontpage' ) );
    seq.actions.push( new WaitAction( 7 ) );
    seq.actions.push( new FireEntityInputAction( scenePanel, 'roshan', 'SetAnimation', 'sr_roshan_idle_frontpage_2020' ) );
    seq.actions.push( new WaitAction( 5.0 ) );

    RunSingleAction(seq);
}

var GetActivePageType = function ()
{
                                                            
    var dashboard = $.GetContextPanel().FindAncestor( "Dashboard" );
    var pageManager = dashboard.FindChildInLayoutFile( "DashboardPages" );
    for ( var i = 0; i < pageManager.GetChildCount(); ++i )
    {
        var page = pageManager.GetChild( i );
        if ( page.BHasClass( 'PageVisible' ) )
            return page.paneltype;
    }

    return null;
}

var g_bFirstRun = true;

var UpdateAnimation = function()
{
                                                     

    var bHomePage = ( GetActivePageType() == "DOTAHomePage" );

    $.GetContextPanel().SetHasClass( "OnHomePage", bHomePage );

    if ( !$( '#BackgroundScene' ).BHasClass( "SceneLoaded" ) )
        return;

    if ( bHomePage )
    {
        if ( g_bFirstRun )
        {
            RunAnimationIfNotRunning( RunIntroAnimation );
            g_bFirstRun = false;
        }
        else
        {
            RunAnimationIfNotRunning( RunIdleAnimation );
        }
    }
    else
    {
		RunAnimationIfNotRunning( RunOutroAnimation );
    }
}


$.RegisterForUnhandledEvent( 'PageManagerActivatedPage', function ( pageManager, oldPage, newPage )
{
                                 
    $.Schedule( 0.0, function () { UpdateAnimation(); } );
} );

$.RegisterEventHandler( 'DOTAScenePanelSceneLoaded', $( '#BackgroundScene' ), function ( scenePanel )
{
                               
    $.Schedule( 0.0, function () { UpdateAnimation(); } );
} );

$.RegisterEventHandler( 'DOTAScenePanelSceneUnloaded', $( '#BackgroundScene' ), function ( scenePanel )
{
                                
    g_ActiveAnimationFunction = null;
} );

