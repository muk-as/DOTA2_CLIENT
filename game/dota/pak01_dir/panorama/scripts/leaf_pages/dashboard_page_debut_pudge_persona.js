
var g_seq;
var g_Stinger_SoundId;
var g_SFX_SoundId;

                                                                       
                                                                          
                                                  
                      
                      
                      
                      
                      
                      
                      
                      
                       
                       
                       
                       

var showcaseCameraMovement = function (cameraPos)
{
    $.Msg("Camera position = " + cameraPos);
    if (cameraPos === 1) {
        $('#ModelBackground').FireEntityInput('camera_driver', 'SetAnimation', 'pudge_cute_camera_anim_intro');
		                                                                                       

    }
    if (cameraPos === 2) {
        $('#DebutInformation').RemoveClass('Initialize');
        
    }
	    if (cameraPos === 3) {
        $('#ModelBackground').FireEntityInput('camera_driver', 'SetAnimation', 'pudge_cute_camera_anim');
        
    }
}

var RunPageAnimation = function ()
{
    g_seq = new RunSequentialActions();

	$( '#ModelContainer' ).RemoveAndDeleteChildren();
	$( '#ModelContainer' ).BLoadLayoutSnippet( 'ModelSnippet' );

	g_seq.actions.push( new WaitAction( 0.01 ) );
    g_seq.actions.push( new RunFunctionAction( function() { $.DispatchEvent( 'DOTASetCurrentDashboardPageFullscreen', true ); } ) )
    g_seq.actions.push( new WaitForClassAction( $( '#ModelBackground' ), 'SceneLoaded' ) );
    g_seq.actions.push(new RunFunctionAction( function () { g_Stinger_SoundId = PlayUISoundScript( 'pudge_persona_debut_stinger'); }))
    g_seq.actions.push(new RunFunctionAction( function () { g_SFX_SoundId = PlayUISoundScript( 'pudge_persona_debut_sfx'); } ) )
	g_seq.actions.push( new AddClassAction( $( '#MainContainer' ), 'Initialize' ) );
	g_seq.actions.push( new AddClassAction( $( '#ModelBackground' ), 'Initialize' ) );

    g_seq.actions.push( new LerpDepthOfFieldAction( $( '#ModelBackground' ), "herocamera", 275, 300, 310, 325, 150, 275, 325, 800, 4.0 ) );
    
    g_seq.actions.push(new WaitAction(4.00));
	g_seq.actions.push( new AddClassAction( $( '#DebutInformation' ), 'Initialize' ) );
	g_seq.actions.push( new AddClassAction( $( '#InformationBody' ), 'Initialize' ) );
                                                                                 
	                                                                                              
	                                                                             

                                               

                                                            
	   
	                                                            
	      

    g_seq.actions.push( new RunFunctionAction( function() 
	{
	    $('#ModelBackground').SetRotateParams( -1, 1, -1, 1 );
	}));


    RunSingleAction( g_seq );
}

function closePudgePersonaDebutPage() {
    g_seq.finish();

    if ( g_Stinger_SoundId !== undefined )
    {
        StopUISoundScript( g_Stinger_SoundId );
    }
    if ( g_SFX_SoundId !== undefined )
    {
        StopUISoundScript( g_SFX_SoundId );
    }

    $('#MainContainer').RemoveClass('Initialize');
    $('#ModelBackground').RemoveClass('Initialize');
    $('#DebutInformation').RemoveClass('Initialize');
    $('#InformationBody').RemoveClass('Initialize');
                                                   
	                                                                
	                                               

    $.DispatchEvent('DOTAShowHomePage');
}
