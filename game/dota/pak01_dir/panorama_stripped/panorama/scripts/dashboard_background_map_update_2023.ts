/// <reference path="dota.d.ts" />
/// <reference path="sequence_actions.ts" />
/// <reference path="dota_sequence_actions.ts" />

let SetMatchingChildrenHighlight = function( pParent: Panel_t, featureName : string )
{
	for ( let i = 0; i < pParent.GetChildCount(); ++i )
	{
		let pChild : Panel_t = pParent.GetChild( i );
		pChild.SetHasClass( 'Highlighted', pChild.GetAttributeString( 'mapfeature', '' ) == featureName );
	}
}

let SetMapFeatureHighlight = function( featureName : string )
{
	SetMatchingChildrenHighlight( $( '#MapFeatures' ), featureName );
	SetMatchingChildrenHighlight( $( '#MapFeatureNotes' ), featureName );
}

let HighlightFeature = function ( panelID : string )
{
	let mapFeatures = $( '#MapFeatures' );
	if ( panelID != '' )
	{
		let hoverTarget = $( '#' + panelID );
		if ( hoverTarget != null )
		{
			let featureName = hoverTarget.GetAttributeString( 'mapfeature', '' );
			$.DispatchEvent( 'UIShowCustomLayoutParametersTooltip', hoverTarget, 'MapUpdate2023Tooltip', 'file://{resources}/layout/tooltips/tooltip_map_update_2023.xml', 'feature=' + featureName );
			SetMapFeatureHighlight( featureName );
		}
	}
	else
	{
		$.DispatchEvent( 'UIHideCustomLayoutTooltip', $.GetContextPanel(), 'MapUpdate2023Tooltip' );
		SetMapFeatureHighlight( '' );
	}
}

let ClearHighlight = function ()
{
	HighlightFeature( "" );
}


let g_ActiveAnimationFunction : any = null;
var RunAnimationIfNotRunning = function ( animationFunction : any )
{
    if ( g_ActiveAnimationFunction != animationFunction )
    {
        g_ActiveAnimationFunction = animationFunction;
        animationFunction();
    }
}

var RunIntroAnimation = function ()
{
    let mainPanel : Panel_t = $.GetContextPanel();
    let moviePanel: Movie_t = $( '#IntroMovie' );
    let mapFeaturesPanel: Panel_t = $( '#MapFeatures' );

	var seq = new RunSequentialActions();

    seq.actions.push( new AddClassAction( mainPanel, 'ShowMovie' ) );

    {
        let par = new RunParallelActions();
        par.actions.push( new PlayMovieAction( moviePanel ) );
        par.actions.push( new PlaySoundAction( "ui.map_reveal.movie" ) );
        seq.actions.push( par );
    }

    seq.actions.push( new RemoveClassAction( mainPanel, 'ShowMovie' ) );
    seq.actions.push( new AddClassAction( mainPanel, 'ShowMapImage' ) );

    let stagger = new RunStaggeredActions( 0.1 );
    for ( let i = 0; i < mapFeaturesPanel.GetChildCount(); ++i )
    {
        let mapFeature: Panel_t = mapFeaturesPanel.GetChild( i );

        let par = new RunParallelActions();
        par.actions.push( new AddClassAction( mapFeature, 'ShowFeature' ) );
        par.actions.push( new PlaySoundAction( "ui.map_reveal.feature" ) ); 

        stagger.actions.push( par );
    }
    seq.actions.push( stagger );

    seq.actions.push( new WaitAction( 2.0 ) );

    seq.actions.push( new AddClassAction( mainPanel, 'ShowCenterContents' ) );
    seq.actions.push( new PlaySoundAction( "ui.map_reveal.title" ) );

    seq.actions.push( new WaitAction( 2.0 ) );
    seq.actions.push( new AddClassAction( mainPanel, 'ShowRightContents' ) );
    seq.actions.push( new PlaySoundAction( "ui.map_reveal.details" ) );

	RunSingleAction( seq );
}

var RunIdleAnimation = function ()
{
    let mainPanel: Panel_t = $.GetContextPanel();
    let mapFeaturesPanel: Panel_t = $( '#MapFeatures' );

    mainPanel.RemoveClass( 'ShowMovie' );
    mainPanel.AddClass( 'ShowMapImage' );

    for ( let i = 0; i < mapFeaturesPanel.GetChildCount(); ++i )
    {
        let mapFeature: Panel_t = mapFeaturesPanel.GetChild( i );
        mapFeature.AddClass( 'ShowFeature' );
    }

    mainPanel.AddClass( 'ShowCenterContents' );
    mainPanel.AddClass( 'ShowRightContents' );
}

var RunOutroAnimation = function ()
{
    let mainPanel: Panel_t = $.GetContextPanel();
    let mapFeaturesPanel: Panel_t = $( '#MapFeatures' );

    mainPanel.RemoveClass( 'ShowMovie' );
    mainPanel.AddClass( 'ShowMapImage' );

    for ( let i = 0; i < mapFeaturesPanel.GetChildCount(); ++i )
    {
        let mapFeature: Panel_t = mapFeaturesPanel.GetChild( i );
        mapFeature.RemoveClass( 'ShowFeature' );
    }

    mainPanel.RemoveClass( 'ShowCenterContents' );
    mainPanel.RemoveClass( 'ShowRightContents' );
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

var UpdateAnimation = function ()
{
                                                     

    var bHomePage = ( GetActivePageType() == "DOTAHomePage" );

    $.GetContextPanel().SetHasClass( "OnHomePage", bHomePage );

                                                                
                 

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

                                                                                                       
   
                                 
                                                            
      

                                                                                                         
   
                                  
                                       
      

UpdateAnimation();