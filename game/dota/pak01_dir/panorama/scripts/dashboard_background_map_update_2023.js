"use strict";
/// <reference path="dota.d.ts" />
/// <reference path="sequence_actions.ts" />
/// <reference path="dota_sequence_actions.ts" />
let SetMatchingChildrenHighlight = function (pParent, featureName) {
    for (let i = 0; i < pParent.GetChildCount(); ++i) {
        let pChild = pParent.GetChild(i);
        pChild.SetHasClass('Highlighted', pChild.GetAttributeString('mapfeature', '') == featureName);
    }
};
let SetMapFeatureHighlight = function (featureName) {
    SetMatchingChildrenHighlight($('#MapFeatures'), featureName);
    SetMatchingChildrenHighlight($('#MapFeatureNotes'), featureName);
};
let HighlightFeature = function (panelID) {
    let mapFeatures = $('#MapFeatures');
    if (panelID != '') {
        let hoverTarget = $('#' + panelID);
        if (hoverTarget != null) {
            let featureName = hoverTarget.GetAttributeString('mapfeature', '');
            $.DispatchEvent('UIShowCustomLayoutParametersTooltip', hoverTarget, 'MapUpdate2023Tooltip', 'file://{resources}/layout/tooltips/tooltip_map_update_2023.xml', 'feature=' + featureName);
            SetMapFeatureHighlight(featureName);
        }
    }
    else {
        $.DispatchEvent('UIHideCustomLayoutTooltip', $.GetContextPanel(), 'MapUpdate2023Tooltip');
        SetMapFeatureHighlight('');
    }
};
let ClearHighlight = function () {
    HighlightFeature("");
};
let g_ActiveAnimationFunction = null;
var RunAnimationIfNotRunning = function (animationFunction) {
    if (g_ActiveAnimationFunction != animationFunction) {
        g_ActiveAnimationFunction = animationFunction;
        animationFunction();
    }
};
var RunIntroAnimation = function () {
    let mainPanel = $.GetContextPanel();
    let moviePanel = $('#IntroMovie');
    let mapFeaturesPanel = $('#MapFeatures');
    var seq = new RunSequentialActions();
    seq.actions.push(new AddClassAction(mainPanel, 'ShowMovie'));
    {
        let par = new RunParallelActions();
        par.actions.push(new PlayMovieAction(moviePanel));
        par.actions.push(new PlaySoundAction("ui.map_reveal.movie"));
        seq.actions.push(par);
    }
    seq.actions.push(new RemoveClassAction(mainPanel, 'ShowMovie'));
    seq.actions.push(new AddClassAction(mainPanel, 'ShowMapImage'));
    let stagger = new RunStaggeredActions(0.1);
    for (let i = 0; i < mapFeaturesPanel.GetChildCount(); ++i) {
        let mapFeature = mapFeaturesPanel.GetChild(i);
        let par = new RunParallelActions();
        par.actions.push(new AddClassAction(mapFeature, 'ShowFeature'));
        par.actions.push(new PlaySoundAction("ui.map_reveal.feature"));
        stagger.actions.push(par);
    }
    seq.actions.push(stagger);
    seq.actions.push(new WaitAction(2.0));
    seq.actions.push(new AddClassAction(mainPanel, 'ShowCenterContents'));
    seq.actions.push(new PlaySoundAction("ui.map_reveal.title"));
    seq.actions.push(new WaitAction(2.0));
    seq.actions.push(new AddClassAction(mainPanel, 'ShowRightContents'));
    seq.actions.push(new PlaySoundAction("ui.map_reveal.details"));
    RunSingleAction(seq);
};
var RunIdleAnimation = function () {
    let mainPanel = $.GetContextPanel();
    let mapFeaturesPanel = $('#MapFeatures');
    mainPanel.RemoveClass('ShowMovie');
    mainPanel.AddClass('ShowMapImage');
    for (let i = 0; i < mapFeaturesPanel.GetChildCount(); ++i) {
        let mapFeature = mapFeaturesPanel.GetChild(i);
        mapFeature.AddClass('ShowFeature');
    }
    mainPanel.AddClass('ShowCenterContents');
    mainPanel.AddClass('ShowRightContents');
};
var RunOutroAnimation = function () {
    let mainPanel = $.GetContextPanel();
    let mapFeaturesPanel = $('#MapFeatures');
    mainPanel.RemoveClass('ShowMovie');
    mainPanel.AddClass('ShowMapImage');
    for (let i = 0; i < mapFeaturesPanel.GetChildCount(); ++i) {
        let mapFeature = mapFeaturesPanel.GetChild(i);
        mapFeature.RemoveClass('ShowFeature');
    }
    mainPanel.RemoveClass('ShowCenterContents');
    mainPanel.RemoveClass('ShowRightContents');
};
var GetActivePageType = function () {
    // todo(ericl): This is a kinda terrible way to do this.
    var dashboard = $.GetContextPanel().FindAncestor("Dashboard");
    var pageManager = dashboard.FindChildInLayoutFile("DashboardPages");
    for (var i = 0; i < pageManager.GetChildCount(); ++i) {
        var page = pageManager.GetChild(i);
        if (page.BHasClass('PageVisible'))
            return page.paneltype;
    }
    return null;
};
var g_bFirstRun = true;
var UpdateAnimation = function () {
    // $.Msg( "page type = " + GetActivePageType() );
    var bHomePage = (GetActivePageType() == "DOTAHomePage");
    $.GetContextPanel().SetHasClass("OnHomePage", bHomePage);
    //if ( !$( '#BackgroundScene' ).BHasClass( "SceneLoaded" ) )
    //    return;
    if (bHomePage) {
        if (g_bFirstRun) {
            RunAnimationIfNotRunning(RunIntroAnimation);
            g_bFirstRun = false;
        }
        else {
            RunAnimationIfNotRunning(RunIdleAnimation);
        }
    }
    else {
        RunAnimationIfNotRunning(RunOutroAnimation);
    }
};
$.RegisterForUnhandledEvent('PageManagerActivatedPage', function (pageManager, oldPage, newPage) {
    // $.Msg( "Page Activated" );
    $.Schedule(0.0, function () { UpdateAnimation(); });
});
//$.RegisterEventHandler( 'DOTAScenePanelSceneLoaded', $( '#BackgroundScene' ), function ( scenePanel )
//{
//    // $.Msg( "Scene Loaded" );
//    $.Schedule( 0.0, function () { UpdateAnimation(); } );
//} );
//$.RegisterEventHandler( 'DOTAScenePanelSceneUnloaded', $( '#BackgroundScene' ), function ( scenePanel )
//{
//    //$.Msg( "Scene Unloaded" );
//    g_ActiveAnimationFunction = null;
//} );
UpdateAnimation();
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZGFzaGJvYXJkX2JhY2tncm91bmRfbWFwX3VwZGF0ZV8yMDIzLmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsiZGFzaGJvYXJkX2JhY2tncm91bmRfbWFwX3VwZGF0ZV8yMDIzLnRzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiI7QUFBQSxrQ0FBa0M7QUFDbEMsNENBQTRDO0FBQzVDLGlEQUFpRDtBQUVqRCxJQUFJLDRCQUE0QixHQUFHLFVBQVUsT0FBZ0IsRUFBRSxXQUFvQjtJQUVsRixLQUFNLElBQUksQ0FBQyxHQUFHLENBQUMsRUFBRSxDQUFDLEdBQUcsT0FBTyxDQUFDLGFBQWEsRUFBRSxFQUFFLEVBQUUsQ0FBQyxFQUNqRDtRQUNDLElBQUksTUFBTSxHQUFhLE9BQU8sQ0FBQyxRQUFRLENBQUUsQ0FBQyxDQUFFLENBQUM7UUFDN0MsTUFBTSxDQUFDLFdBQVcsQ0FBRSxhQUFhLEVBQUUsTUFBTSxDQUFDLGtCQUFrQixDQUFFLFlBQVksRUFBRSxFQUFFLENBQUUsSUFBSSxXQUFXLENBQUUsQ0FBQztLQUNsRztBQUNGLENBQUMsQ0FBQTtBQUVELElBQUksc0JBQXNCLEdBQUcsVUFBVSxXQUFvQjtJQUUxRCw0QkFBNEIsQ0FBRSxDQUFDLENBQUUsY0FBYyxDQUFFLEVBQUUsV0FBVyxDQUFFLENBQUM7SUFDakUsNEJBQTRCLENBQUUsQ0FBQyxDQUFFLGtCQUFrQixDQUFFLEVBQUUsV0FBVyxDQUFFLENBQUM7QUFDdEUsQ0FBQyxDQUFBO0FBRUQsSUFBSSxnQkFBZ0IsR0FBRyxVQUFXLE9BQWdCO0lBRWpELElBQUksV0FBVyxHQUFHLENBQUMsQ0FBRSxjQUFjLENBQUUsQ0FBQztJQUN0QyxJQUFLLE9BQU8sSUFBSSxFQUFFLEVBQ2xCO1FBQ0MsSUFBSSxXQUFXLEdBQUcsQ0FBQyxDQUFFLEdBQUcsR0FBRyxPQUFPLENBQUUsQ0FBQztRQUNyQyxJQUFLLFdBQVcsSUFBSSxJQUFJLEVBQ3hCO1lBQ0MsSUFBSSxXQUFXLEdBQUcsV0FBVyxDQUFDLGtCQUFr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