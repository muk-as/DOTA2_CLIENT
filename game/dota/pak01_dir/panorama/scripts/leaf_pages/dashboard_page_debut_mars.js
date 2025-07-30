
var cameraPos = 1;


$.Schedule(0.0, function () {
    $.RegisterEventHandler('DOTAScenePanelSceneLoaded', $('#Model'), function () { $.DispatchEvent('PlaySoundEffect', 'mars_takeover_stinger'); });
});

              
                               
                                                                                                 
   
  

              
                               
                                                            
                               
     

var showcaseCameraMovement = function (cameraPos)
{
                                              
    if (cameraPos === 5) {
        $('#Model').FireEntityInput('debut_camera', 'SetAnimation', 'debut_camera_shield_bash_introframe');
        
    }
    if (cameraPos === 6) {
        $('#DebutInformation').RemoveClass('Initialize');
        
    }
}

var g_Toggle = false;
var TestGlobalLight = function () {
                                             
                           
                                                                              

    var strFunction = g_Toggle ? "TurnOn" : "TurnOff";
    g_Toggle = !g_Toggle;
    $('#Model').FireEntityInput('light_hero', strFunction, '');
}


var OnPageSetupSuccess = function ()
{
	                                                 
	$.DispatchEvent('DOTASetCurrentDashboardPageFullscreen', true);
}

var RunPageAnimation = function ()
{
	var seq = new RunSequentialActions();

	$( '#ModelContainer' ).RemoveAndDeleteChildren();
	$( '#ModelContainer' ).BLoadLayoutSnippet( 'ModelSnippet' );
	                                              
	                                                        

	$( '#MainContainer' ).RemoveClass( 'Initialize' );
	$( '#Model' ).RemoveClass( 'Initialize' );
	$( '#DebutInformation' ).RemoveClass( 'Initialize' );
	$( '#InformationBody' ).RemoveClass( 'Initialize' );
	$( '#ItemName' ).RemoveClass( 'Initialize' );
	$( '#InformationBodyBackground' ).RemoveClass( 'Initialize' );
	$('#ItemLore').RemoveClass('Initialize');
	$('#FadeContainer').RemoveClass('Fade');

	seq.actions.push(new AddClassAction($('#BlackBackground'), 'Fade'));
	seq.actions.push(new WaitForClassAction($('#Model'), 'SceneLoaded'));
	seq.actions.push(new AddClassAction($('#FadeContainer'), 'Fade'));
    seq.actions.push( new WaitAction( 8.35 ) );
	seq.actions.push(new AddClassAction($('#Model'), 'Initialize'));
	seq.actions.push(new RunFunctionAction(function () {
	    $('#Model').FireEntityInput('light_hero', "TurnOn", '');
	}))
	seq.actions.push( new WaitAction( 2.5 ) );
	seq.actions.push( new AddClassAction( $( '#DebutInformation' ), 'Initialize' ) );
	seq.actions.push( new AddClassAction( $( '#InformationBody' ), 'Initialize' ) );
	seq.actions.push( new WaitAction( 0.0 ) );
	seq.actions.push( new AddClassAction( $( '#ItemName' ), 'Initialize' ) );
	seq.actions.push( new WaitAction( 0.0 ) );
	seq.actions.push( new AddClassAction( $( '#InformationBodyBackground' ), 'Initialize' ) );
	seq.actions.push( new AddClassAction($('#ItemLore'), 'Initialize'));




                               
    seq.actions.push( new LerpRotateAction( $('#Model'), 0, 0, 0, 0, -2, 2, -2, 2, 5.0 ) );
	                                                      
	   
	                                                  
	        

	RunSingleAction( seq );
}
