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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZGFzaGJvYXJkX2JhY2tncm91bmRfbWFwX3VwZGF0ZV8yMDIzLmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsiZGFzaGJvYXJkX2JhY2tncm91bmRfbWFwX3VwZGF0ZV8yMDIzLnRzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiJBQUFBLGtDQUFrQztBQUNsQyw0Q0FBNEM7QUFDNUMsaURBQWlEO0FBRWpELElBQUksNEJBQTRCLEdBQUcsVUFBVSxPQUFnQixFQUFFLFdBQW9CO0lBRWxGLEtBQU0sSUFBSSxDQUFDLEdBQUcsQ0FBQyxFQUFFLENBQUMsR0FBRyxPQUFPLENBQUMsYUFBYSxFQUFFLEVBQUUsRUFBRSxDQUFDLEVBQ2pEO1FBQ0MsSUFBSSxNQUFNLEdBQWEsT0FBTyxDQUFDLFFBQVEsQ0FBRSxDQUFDLENBQUUsQ0FBQztRQUM3QyxNQUFNLENBQUMsV0FBVyxDQUFFLGFBQWEsRUFBRSxNQUFNLENBQUMsa0JBQWtCLENBQUUsWUFBWSxFQUFFLEVBQUUsQ0FBRSxJQUFJLFdBQVcsQ0FBRSxDQUFDO0tBQ2xHO0FBQ0YsQ0FBQyxDQUFBO0FBRUQsSUFBSSxzQkFBc0IsR0FBRyxVQUFVLFdBQW9CO0lBRTFELDRCQUE0QixDQUFFLENBQUMsQ0FBRSxjQUFjLENBQUUsRUFBRSxXQUFXLENBQUUsQ0FBQztJQUNqRSw0QkFBNEIsQ0FBRSxDQUFDLENBQUUsa0JBQWtCLENBQUUsRUFBRSxXQUFXLENBQUUsQ0FBQztBQUN0RSxDQUFDLENBQUE7QUFFRCxJQUFJLGdCQUFnQixHQUFHLFVBQVcsT0FBZ0I7SUFFakQsSUFBSSxXQUFXLEdBQUcsQ0FBQyxDQUFFLGNBQWMsQ0FBRSxDQUFDO0lBQ3RDLElBQUssT0FBTyxJQUFJLEVBQUUsRUFDbEI7UUFDQyxJQUFJLFdBQVcsR0FBRyxDQUFDLENBQUUsR0FBRyxHQUFHLE9BQU8sQ0FBRSxDQUFDO1FBQ3JDLElBQUssV0FBVyxJQUFJLElBQUksRUFDeEI7WUFDQyxJQUFJLFdBQVcsR0FBRyxXQUFXLENBQUMsa0JBQWtC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