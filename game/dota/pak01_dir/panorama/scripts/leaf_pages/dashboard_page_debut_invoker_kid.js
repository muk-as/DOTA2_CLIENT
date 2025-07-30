var OnPageSetupSuccess = function ()
{
	                                                 
	$.DispatchEvent('DOTASetCurrentDashboardPageFullscreen', true);
}

var RunPageAnimation = function ()
{
	var seq = new RunSequentialActions();

	$('#ModelContainer').RemoveAndDeleteChildren();
	$('#ModelContainer').BLoadLayoutSnippet('ModelSnippet');
	$('#DebutInformation').RemoveClass('Initialize');
	$('#CloseButton').RemoveClass('Initialize');

	                                                 
	$.DispatchEvent( 'DOTASetCurrentDashboardPageFullscreen', true );

	seq.actions.push( new WaitForClassAction( $( '#Model' ), 'SceneLoaded' ) );
	seq.actions.push( new RunFunctionAction( function () { $.DispatchEvent('PlaySoundEffect', 'kidvoker_takeover_stinger'); }));
    seq.actions.push( new RunFunctionAction( function () { $.DispatchEvent('PlaySoundEffect', 'kidvoker_takeover_sfx'); }));
	seq.actions.push( new WaitAction( 5.4 ) );
	seq.actions.push( new AddClassAction( $( '#DebutInformation' ), 'Initialize' ) );

	RunSingleAction(seq);
}
