function AdvanceTimeline()
{
	if ( !g_bPlaying )
		return false;

	$( '#DetailsHeatmapsTimelineSlider' ).value += 0.0001;
	if ( $( '#DetailsHeatmapsTimelineSlider' ).value >= 1.0 )
	{
		g_bPlaying = false;
		return true;
	}

	$.Schedule( 0.01, AdvanceTimeline );
	return true;
};

var g_bPlaying = false;
function TogglePlayPause()
{
	g_bPlaying = !g_bPlaying;
	if ( g_bPlaying )
	{
		if ( $( '#DetailsHeatmapsTimelineSlider' ).value >= 1.0 )
		{
			$( '#DetailsHeatmapsTimelineSlider' ).value = 0.0;
		}
		AdvanceTimeline();
	}
};

$("#CustomGameOverviewTeamScores").text = "<font class='FontTeam2'>16</font> - <font class='FontTeam3'>16</font> - <font class='FontTeam6'>16</font>";