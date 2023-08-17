/// <reference path="../../dota.d.ts" />
/// <reference path="../../util.ts" />
/// <reference path="../../dota_sequence_actions.ts" />
/// <reference path="dota_hud_versus_scene_shared.ts" />
//ANIMATION FireEntityInput LIST
// Enable
// Disable
// SetActivity
// SetActivityModifier
// StartGestureOverride
// RemoveGesture
// FadeAndDestroyGesture
// DisableAutoFadeAndAutoKill
// ForceLooping
//$.Msg( "loaded" );
var mainPanel = $('#BackgroundScene');
var RunPageAnimation = function () {
    var mainSeq = new RunSequentialActions();
    mainSeq.actions.push(new RunFunctionAction(function () {
        //RESET SCENE
        mainPanel.FireEntityInput('hero_ursa', 'Disable', '');
        mainPanel.FireEntityInput('roshan', 'Disable', '');
        //       mainPanel.FireEntityInput( 'hero_camera_driver', 'SetAnimation', 'camera_dashboard_loadout_treasure_spin_subtle_static' );
        //       mainPanel.FireEntityInput( 'hero_earthshaker', 'StartGestureOverride', 'ACT_DOTA_SPAWN' );
        mainPanel.FireEntityInput('hero_earthshaker', 'SetActivityModifier', 'collectors_cache');
        mainPanel.FireEntityInput('hero_earthshaker', 'DisableDefaultActivityModifiers', 1);
        mainPanel.FireEntityInput('hero_earthshaker', 'SetPlaybackRateOnAllLayers', 0.9);
        $.Schedule(2, function () {
            //       mainPanel.FireEntityInput( 'hero_camera_driver', 'SetAnimation', 'camera_dashboard_loadout_treasure_spin_subtle' );
        });
        $.Schedule(1.2, function () {
            mainPanel.FireEntityInput('hero_ursa', 'Enable', '');
            // mainPanel.FireEntityInput( 'hero_ursa', 'DisableDefaultActivityModifiers', 1 );
            // mainPanel.FireEntityInput( 'hero_ursa', 'StartGestureOverride', 'ACT_DOTA_SPAWN' );
            // mainPanel.FireEntityInput( 'hero_ursa', 'SetActivityModifier', 'loadout' );
            mainPanel.FireEntityInput('hero_ursa', 'SetPlaybackRateOnAllLayers', 0.6);
        });
        $.Schedule(2.0, function () {
            mainPanel.FireEntityInput('roshan', 'Enable', '');
            // mainPanel.FireEntityInput( 'roshan', 'RemoveGesture', 'ACT_DOTA_LOADOUT' );
            mainPanel.FireEntityInput('roshan', 'DisableDefaultActivityModifiers', 1);
            // mainPanel.FireEntityInput( 'roshan', 'SetAnimation', 'marci_loadout_spawn_nofx' );
            mainPanel.FireEntityInput('roshan', 'SetActivityModifier', 'nofx');
            // mainPanel.FireEntityInput( 'roshan', 'SetActivity', 'ACT_DOTA_LOADOUT' );
            mainPanel.FireEntityInput('roshan', 'StartGestureOverride', 'ACT_DOTA_SPAWN');
            mainPanel.FireEntityInput('roshan', 'SetPlaybackRateOnAllLayers', 0.6);
        });
    }));
    //$.Msg( "WORKED" );
    RunSingleAction(mainSeq);
};
// var g_ActiveAnimationFunction = null;
// var RunAnimationIfNotRunning = function ( animationFunction )
// {
//     if( g_ActiveAnimationFunction != animationFunction )
//     {
//         g_ActiveAnimationFunction = animationFunction;
//         animationFunction();
//     }
// }
// var RunIntroAnimation = function ()
// {
//     // $.Msg( "RunIntroAnimation" );
//     var scenePanel = $( '#BackgroundScene' );
//     var seq = new RunSequentialActions();
//     seq.actions.push( new WaitForClassAction( scenePanel, 'SceneLoaded' ) );
//     seq.actions.push( new FireEntityInputAction( scenePanel, 'hero_earthshaker', 'Enable', '' ) );
//     RunSingleAction( seq ); 
// }
// var RunIdleAnimation = function ()
// {
//     // $.Msg( "RunIdleAnimation" );
//     var scenePanel = $( '#BackgroundScene' );
//     var seq = new RunSequentialActions();
//     seq.actions.push( new WaitForClassAction( scenePanel, 'SceneLoaded' ) );
//     seq.actions.push( new FireEntityInputAction( scenePanel, 'hero_earthshaker', 'Enable', '' ) );
//     RunSingleAction( seq );
// }
// var RunOutroAnimation = function ()
// {
//     // $.Msg( "RunOutroAnimation" );
//     var scenePanel = $( '#BackgroundScene' );
//     var seq = new RunSequentialActions();
//     seq.actions.push( new WaitForClassAction( scenePanel, 'SceneLoaded' ) );
//     seq.actions.push( new FireEntityInputAction( scenePanel, 'hero_earthshaker', 'Disable', '') );
//     RunSingleAction( seq );
// }
// var GetActivePageType = function ()
// {
//     // todo(ericl): This is a kinda terrible way to do this.
//     var dashboard = $.GetContextPanel().FindAncestor( "Dashboard" );
//     var pageManager = dashboard.FindChildInLayoutFile( "DashboardPages" );
//     for ( var i = 0; i < pageManager.GetChildCount(); ++i )
//     {
//         var page = pageManager.GetChild( i );
//         if ( page.BHasClass( 'PageVisible' ) )
//             return page.paneltype;
//     }
//     return null;
// }
// var g_bFirstRun = true;
// var UpdateAnimation = function()
// {
//     // $.Msg( "page type = " + GetActivePageType() );
//     var bHomePage = ( GetActivePageType() == "DOTAHomePage" );
//     $.GetContextPanel().SetHasClass( "OnHomePage", bHomePage );
//     if ( !$( '#BackgroundScene' ).BHasClass( "SceneLoaded" ) )
//         return;
//     if ( bHomePage )
//     {
//         if ( g_bFirstRun )
//         {
//             RunAnimationIfNotRunning( RunIntroAnimation );
//             g_bFirstRun = false;
//         }
//         else
//         {
//             RunAnimationIfNotRunning( RunIdleAnimation );
//         }
//     }
//     else
//     {
//         RunAnimationIfNotRunning( RunOutroAnimation );
//     }
// }
// $.RegisterForUnhandledEvent( 'PageManagerActivatedPage', function ( pageManager, oldPage, newPage )
// {
//     // $.Msg( "Page Activated" );
//     $.Schedule( 0.0, function () { UpdateAnimation(); } );
// } );
// $.RegisterEventHandler( 'DOTAScenePanelSceneLoaded', $( '#BackgroundScene' ), function ( scenePanel )
// {
//     // $.Msg( "Scene Loaded" );
//     $.Schedule( 0.0, function () { UpdateAnimation(); } );
// } );
// $.RegisterEventHandler( 'DOTAScenePanelSceneUnloaded', $( '#BackgroundScene' ), function ( scenePanel )
// {
//     //$.Msg( "Scene Unloaded" );
//     g_ActiveAnimationFunction = null;
// } );
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZGFzaGJvYXJkX2JhY2tncm91bmRfMTB0aF9hbm5pdmVyc2FyeS5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbImRhc2hib2FyZF9iYWNrZ3JvdW5kXzEwdGhfYW5uaXZlcnNhcnkudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IkFBQUEsd0NBQXdDO0FBQ3hDLHNDQUFzQztBQUN0Qyx1REFBdUQ7QUFDdkQsd0RBQXdEO0FBRXhELGdDQUFnQztBQUNoQyxTQUFTO0FBQ1QsVUFBVTtBQUNWLGNBQWM7QUFDZCxzQkFBc0I7QUFDdEIsdUJBQXVCO0FBQ3ZCLGdCQUFnQjtBQUNoQix3QkFBd0I7QUFDeEIsNkJBQTZCO0FBQzdCLGVBQWU7QUFFZixvQkFBb0I7QUFHcEIsSUFBSSxTQUFTLEdBQUcsQ0FBQyxDQUFDLGtCQUFrQixDQUFxQixDQUFDO0FBQzFELElBQUksZ0JBQWdCLEdBQUc7SUFHbkIsSUFBSSxPQUFPLEdBQUcsSUFBSSxvQkFBb0IsRUFBRSxDQUFDO0lBRTVDLE9BQU8sQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksaUJBQWlCLENBQUU7UUFHdEMsYUFBYTtRQUNiLFNBQVMsQ0FBQyxlQUFlLENBQUUsV0FBVyxFQUFFLFNBQVMsRUFBRSxFQUFFLENBQUUsQ0FBQztRQUN4RCxTQUFTLENBQUMsZUFBZSxDQUFFLFFBQVEsRUFBRSxTQUFTLEVBQUUsRUFBRSxDQUFFLENBQUM7UUFDNUQsbUlBQW1JO1FBSW5JLG1HQUFtRztRQUM1RixTQUFTLENBQUMsZUFBZSxDQUFFLGtCQUFrQixFQUFFLHFCQUFxQixFQUFFLGtCQUFrQixDQUFFLENBQUM7UUFDM0YsU0FBUyxDQUFDLGVBQWUsQ0FBRSxrQkFBa0IsRUFBRSxpQ0FBaUMsRUFBRSxDQUFDLENBQUUsQ0FBQztRQUN0RixTQUFTLENBQUMsZUFBZSxDQUFFLGtCQUFrQixFQUFFLDRCQUE0QixFQUFFLEdBQUcsQ0FBRSxDQUFDO1FBRW5GLENBQUMsQ0FBQyxRQUFRLENBQUMsQ0FBQyxFQUFFO1lB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