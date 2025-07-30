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
    seq.actions.push( new FireEntityInputAction( scenePanel, 'dawnbreaker', 'TurnOn', '' ) );
    seq.actions.push( new FireEntityInputAction( scenePanel, 'dawnbreaker_hammer_ambient_fx', 'start', '') );

    RunSingleAction( seq ); 
}

var RunIdleAnimation = function ()
{
                                   

    var scenePanel = $( '#BackgroundScene' );

    var seq = new RunSequentialActions();

    seq.actions.push( new WaitForClassAction( scenePanel, 'SceneLoaded' ) );
    seq.actions.push( new FireEntityInputAction( scenePanel, 'dawnbreaker', 'TurnOn', '' ) );
    seq.actions.push( new FireEntityInputAction( scenePanel, 'dawnbreaker_hammer_ambient_fx', 'start', '') );

    RunSingleAction( seq );
}

var RunOutroAnimation = function ()
{
                                    

    var scenePanel = $( '#BackgroundScene' );

    var seq = new RunSequentialActions();

    seq.actions.push( new WaitForClassAction( scenePanel, 'SceneLoaded' ) );
    seq.actions.push( new FireEntityInputAction( scenePanel, 'dawnbreaker', 'TurnOff', '') );
    seq.actions.push( new FireEntityInputAction( scenePanel, 'dawnbreaker_hammer_ambient_fx', 'stop', '') );

    RunSingleAction( seq );
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

