/// <reference path="../dota.d.ts" />
/// <reference path="../common/async.ts" />

interface DOTAMapUpdate2023Page_t extends Panel_t
{
	GetMapStatValue( featureName: string ): number;
}

async function Init()
{
	await Async.NextFrame();                                             

	let globalStatsLabel = $( "#GlobalStat" ) as Label_t;
	let personalStatsText = $( "#PersonalStat" ) as Label_t;
	let globalStatsNumber = $( "#GlobalStatNumber" ) as Label_t;
	let personalStatsNumber = $( "#PersonalStatNumber" ) as Label_t;

	let strFeatureName = $.GetContextPanel().GetAttributeString( "feature", "not-found" );
	let headerText = "#DOTA_MapUpdate2023Tooltip_Header_" + strFeatureName;
	let descriptionText = "#DOTA_MapUpdate2023Tooltip_Description_" + strFeatureName;
	let globalStatText = "#DOTA_MapUpdate2023Tooltip_GlobalStat_" + strFeatureName;
	let personalStatText = "#DOTA_MapUpdate2023Tooltip_PersonalStat_" + strFeatureName;
	let globalStatNumberText = "#DOTA_MapUpdate2023Tooltip_GlobalStatNumber_" + strFeatureName;
	let personalStatNumberText = "#DOTA_MapUpdate2023Tooltip_PersonalStatNumber_" + strFeatureName;
	let movieSrc = "file://{resources}/videos/events/map_update_2023/map_update_2023_" + strFeatureName.toLowerCase() + ".webm";

	$.GetContextPanel().SetDialogVariableLocString( 'header_text', headerText );
	$.GetContextPanel().SetDialogVariableLocString( 'description_text', descriptionText );

	globalStatsLabel.text = globalStatText;
	personalStatsText.text = personalStatText;
	globalStatsNumber.text = globalStatNumberText;
	personalStatsNumber.text = personalStatNumberText;

	let moviePanel = $( '#Movie' ) as Movie_t;
	moviePanel.SetRepeat( false );
	moviePanel.SetMovie( movieSrc );
	moviePanel.SetRepeat( true );
	moviePanel.Play();

	const abortController = new Async.AbortController();
	UpdateLoop( abortController.signal );

	await Async.UnhandledEvent( "UIHideCustomLayoutTooltip" );                                                        
	abortController.abort();
}

async function UpdateLoop( signal: Async.AbortSignal_t )
{
	const mapUpdatePanel = $.GetContextPanel().FindAncestor( "DashboardCenter" ).FindChildrenWithClassTraverse( "MapUpdateBackground" )[0] as DOTAMapUpdate2023Page_t;
	const strFeatureName = $.GetContextPanel().GetAttributeString( "feature", "not-found" );
	$.GetContextPanel().SetHasClass( "HideStats", true );
	const strDialogVarName = getDialogVariableForFeatureName( strFeatureName.toLowerCase() );

	let prevValue = -1;
	while ( !signal.aborted )
	{
		const curValue = mapUpdatePanel.GetMapStatValue( strFeatureName );
		if ( prevValue != curValue )
		{
			                                                             
			$.GetContextPanel().SetDialogVariableInt( strDialogVarName, curValue );
			prevValue = curValue;
			$.GetContextPanel().SetHasClass( "HideStats", curValue == -1 );
		}
		await Async.Delay( 1.0 );
	}
}

function getDialogVariableForFeatureName( featureName: string ): string
{
	if ( featureName == "watcher" ) return "global_lanterns_lit";
	if ( featureName == "sentinel" ) return "global_miniboss_kills";
	if ( featureName == "roshan" ) return "global_roshan_kills";
	if ( featureName == "tree" ) return "global_famangos_gained";
	if ( featureName == "wisdomrune" ) return "global_wisdom_runes_gained";
	if ( featureName == "portal" ) return "global_portals_used";
	if ( featureName == "outpost" ) return "global_outposts_captured";
	if ( featureName == "shieldrune" ) return "global_shield_runes_gained";
	return "";
}