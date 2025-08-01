var ToggleInfo = function ()
{
	$('#InformationBody').ToggleClass('Initialize');
	$('#InformationBodyBackground').ToggleClass('Initialize');
}

function crackMountain()
{
	$('#ModelBackground').FireEntityInput('mountain_crack', 'Start', '0');
}

function crackMountainReset()
{
	$('#ModelBackground').FireEntityInput('mountain_crack', 'Stop', '0');
}

function alternateStyle()
{
	$.GetContextPanel().AddClass('ShowingAlternateStyle');
	$('#ModelBackground').FireEntityInput('hero_shaker', 'Disable', '0');
	$('#ModelBackground').FireEntityInput('hero_shaker_alt', 'Enable', '0');
	$('#ModelBackground').FireEntityInput('shaker_style_0', 'Stop', '0');
	$('#ModelBackground').FireEntityInput('shaker_style_1', 'Start', '0');
	$('#ModelBackground').FireEntityInput('fake_light', "Stop", '0');
	$('#ModelBackground').FireEntityInput('fake_light_alt', "Start", '0');

}

function originalStyle()
{
	$.GetContextPanel().RemoveClass('ShowingAlternateStyle');
	$('#ModelBackground').FireEntityInput('hero_shaker', 'Enable', '0');
	$('#ModelBackground').FireEntityInput('hero_shaker_alt', 'Disable', '0');
	$('#ModelBackground').FireEntityInput('shaker_style_0', 'Start', '0');
	$('#ModelBackground').FireEntityInput('shaker_style_1', 'Stop', '0');
	$('#ModelBackground').FireEntityInput('fake_light', "Start", '0');
	$('#ModelBackground').FireEntityInput('fake_light_alt', "Stop", '0');

}

function panelHide()
{
	$('#ControlButtonsContainer').AddClass('Hide')
}

var OnPageSetupSuccess = function () {
                                                     
    $.DispatchEvent('DOTASetCurrentDashboardPageFullscreen', true);
}


var RunPageAnimation = function ()
{
	var seq = new RunSequentialActions();

	$( '#ModelContainer' ).RemoveAndDeleteChildren();
	$( '#ModelContainer' ).BLoadLayoutSnippet( 'ModelSnippet' );
	                                              
	$( '#ModelBackground' ).SetRotateParams( 0, 0, 0, 0 );

	$( '#MainContainer' ).RemoveClass( 'Initialize' );
	$( '#ModelBackground' ).RemoveClass( 'Initialize' );
	$( '#DebutInformation' ).RemoveClass( 'Initialize' );
	$( '#InformationBody' ).RemoveClass( 'Initialize' );
	$( '#ItemName' ).RemoveClass( 'Initialize' );
	$( '#InformationBodyBackground' ).RemoveClass( 'Initialize' );
	$( '#ItemLore' ).RemoveClass('Initialize');
	$( '#CloseButton' ).RemoveClass('Initialize');
	$( '#AlternateStyleButton' ).RemoveClass('Initialize');
	$( '#DefaultStyleButton' ).RemoveClass('Initialize');

	                                                 
	                                                                   

	seq.actions.push( new WaitForClassAction( $( '#ModelBackground' ), 'SceneLoaded') );
	seq.actions.push( new RunFunctionAction( function () { $.DispatchEvent('PlaySoundEffect', 'earthshaker_takeover_stinger'); }));
	seq.actions.push( new RunFunctionAction( function () {
	    $('#ModelBackground').FireEntityInput('ground_alt_a', "TurnOff", '0');
	    $('#ModelBackground').FireEntityInput('ground_alt_b', "TurnOff", '0');
	    $('#ModelBackground').FireEntityInput('ground_alt_c', "TurnOff", '0');
	    $('#ModelBackground').FireEntityInput('ground_alt_d', "TurnOff", '0');
	    $('#ModelBackground').FireEntityInput('ground_alt_e', "TurnOff", '0');
	}));
	seq.actions.push( new AddClassAction( $( '#MainContainer' ), 'Initialize' ) );
	seq.actions.push( new AddClassAction( $( '#ModelBackground' ), 'Initialize' ) );
	                                         
	seq.actions.push( new WaitAction( 3.05 ) );
	seq.actions.push( new RunFunctionAction( function () {
	    $('#ModelBackground').FireEntityInput('light_hero', "LightScale", '3');
	    $('#ModelBackground').FireEntityInput('light_crater', "Intensity", '3');
	    $('#ModelBackground').FireEntityInput('fake_light', "Start", '0');
	}))

	seq.actions.push( new WaitAction( 1.1 ) );
	seq.actions.push( new RunFunctionAction( function () {
	    $('#ModelBackground').FireEntityInput('mountain_crack', "Start", '0');
	}))
	seq.actions.push( new WaitAction( 1.5 ) );

	seq.actions.push(new AddClassAction($('#DebutInformation'), 'Initialize'));
	seq.actions.push(new AddClassAction($('#InformationBodyBackground'), 'Initialize'));
	seq.actions.push(new WaitAction(0.4));
	seq.actions.push(new AddClassAction($('#InformationBody'), 'Initialize'));
	seq.actions.push(new WaitAction(0.1));
	seq.actions.push(new AddClassAction($('#ItemName'), 'Initialize'));
	seq.actions.push(new AddClassAction($('#TitleFX'), 'Initialize'));
	seq.actions.push(new AddClassAction($('#AlternateStyleButton'), 'Initialize'));
	seq.actions.push(new AddClassAction($('#DefaultStyleButton'), 'Initialize'));
    seq.actions.push(new AddClassAction($('#CloseButton'), 'Initialize'));
	seq.actions.push(new WaitAction(0.3));
	seq.actions.push(new AddClassAction($('#ItemLore'), 'Initialize'));

                               
	seq.actions.push(new LerpRotateAction($('#ModelBackground'), 0, 0, 0, 0, -2, 2, -2, 2, 5.0));

	RunSingleAction(seq);
}
