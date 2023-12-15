"use strict";
/// <reference path="dota.d.ts" />
/// <reference path="util.ts" />
/// <reference path="dota_sequence_actions.ts" />
/// <reference path="hud/versus/dota_hud_versus_scene_shared.ts" />
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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZGFzaGJvYXJkX2JhY2tncm91bmRfMTB0aF9hbm5pdmVyc2FyeS5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbImRhc2hib2FyZF9iYWNrZ3JvdW5kXzEwdGhfYW5uaXZlcnNhcnkudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IjtBQUFBLGtDQUFrQztBQUNsQyxnQ0FBZ0M7QUFDaEMsaURBQWlEO0FBQ2pELG1FQUFtRTtBQUVuRSxnQ0FBZ0M7QUFDaEMsU0FBUztBQUNULFVBQVU7QUFDVixjQUFjO0FBQ2Qsc0JBQXNCO0FBQ3RCLHVCQUF1QjtBQUN2QixnQkFBZ0I7QUFDaEIsd0JBQXdCO0FBQ3hCLDZCQUE2QjtBQUM3QixlQUFlO0FBRWYsb0JBQW9CO0FBR3BCLElBQUksU0FBUyxHQUFHLENBQUMsQ0FBQyxrQkFBa0IsQ0FBcUIsQ0FBQztBQUMxRCxJQUFJLGdCQUFnQixHQUFHO0lBR25CLElBQUksT0FBTyxHQUFHLElBQUksb0JBQW9CLEVBQUUsQ0FBQztJQUU1QyxPQUFPLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGlCQUFpQixDQUFFO1FBR3RDLGFBQWE7UUFDYixTQUFTLENBQUMsZUFBZSxDQUFFLFdBQVcsRUFBRSxTQUFTLEVBQUUsRUFBRSxDQUFFLENBQUM7UUFDeEQsU0FBUyxDQUFDLGVBQWUsQ0FBRSxRQUFRLEVBQUUsU0FBUyxFQUFFLEVBQUUsQ0FBRSxDQUFDO1FBQzVELG1JQUFtSTtRQUluSSxtR0FBbUc7UUFDNUYsU0FBUyxDQUFDLGVBQWUsQ0FBRSxrQkFBa0IsRUFBRSxxQkFBcUIsRUFBRSxrQkFBa0IsQ0FBRSxDQUFDO1FBQzNGLFNBQVMsQ0FBQyxlQUFlLENBQUUsa0JBQWtCLEVBQUUsaUNBQWlDLEVBQUUsQ0FBQyxDQUFFLENBQUM7UUFDdEYsU0FBUyxDQUFDLGVBQWUsQ0FBRSxrQkFBa0IsRUFBRSw0QkFBNEIsRUFBRSxHQUFHLENBQUUsQ0FBQztRQUVuRixDQUFDLENBQUMsUUFBUSxDQUFDLENBQUMsRUFBRTtZ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