function EventDOTAWeekendTourneyMatchOutcomeSequenceBegin( nOldRound, nNewRound )
{
	$.DispatchEvent( "DOTAWeekendTourneyMatchOutcomeSequenceStateNotify", 2 );
	$.GetContextPanel().AddClass( "BracketAnimationInProgress" );
	$.Schedule( 1.0, Sequence_ShowEliminated );
}

function Sequence_ShowEliminated()
{
	$.GetContextPanel().AddClass( "FadeOthersInCurrentRound" );
	$( '#AutomatedTournamentWin3' ).AddClass( "ShowEliminatedMessage" );
	$( '#TeamEliminatedMessage' ).AddClass( "SlamText" );
	
	$.Schedule( 7.0, Sequence_ShowAdvanced );
}

function Sequence_ShowAdvanced()
{
	$.GetContextPanel().RemoveClass( "FadeOthersInCurrentRound" );
	$( '#AutomatedTournamentWin3' ).RemoveClass( "ShowEliminatedMessage" );
	$.DispatchEvent( "DOTAWeekendTourneyMatchOutcomeSequenceStateNotify", 60 );
	$.GetContextPanel().AddClass( "ShowAdvancedParticle" );
	$( '#AutomatedTournamentWin3' ).AddClass( "ShowAdvancedMessage" );

	var advancedMessageID = $.GetContextPanel().BHasClass( 'HasChampionTeamMessage' ) ? '#TeamChampionMessage' : '#TeamAdvancedMessage';
	$( advancedMessageID ).AddClass( "SlamTextAlt" );
	
	$.Schedule( 7.0, Sequence_Finished );
}

function Sequence_Finished()
{
	$.DispatchEvent( "DOTAWeekendTourneyMatchOutcomeSequenceStateNotify", -1 );
	
	$( '#TeamAdvancedMessage' ).RemoveClass( "SlamTextAlt" );
	$( '#TeamEliminatedMessage' ).RemoveClass( "SlamText" );
	$( '#TeamChampionMessage' ).RemoveClass( "SlamText" );
	
	$( '#AdvancedParticle' ).RemoveClass( "ShowAdvancedParticle" );

	$( '#AutomatedTournamentWin3' ).RemoveClass( "ShowAdvancedMessage" );

	$.GetContextPanel().RemoveClass( "BracketAnimationInProgress" );
}

(function()
{
	$.RegisterForUnhandledEvent( "DOTAWeekendTourneyMatchOutcomeSequenceBegin", EventDOTAWeekendTourneyMatchOutcomeSequenceBegin );
})();