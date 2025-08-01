
var g_seq;
var g_Stinger_SoundId;
var g_SFX_SoundId;

                                                                       
                                                                          
                                                  
                      
                      
                      
                      
                      
                      
                      
                      
                       
                       
                       
                       

var RunPageAnimation = function ()
{
    g_seq = new RunSequentialActions();

	$( '#ModelContainer' ).RemoveAndDeleteChildren();
	$( '#ModelContainer' ).BLoadLayoutSnippet( 'ModelSnippet' );

	g_seq.actions.push( new WaitAction( 0.01 ) );
    g_seq.actions.push( new RunFunctionAction( function() { $.DispatchEvent( 'DOTASetCurrentDashboardPageFullscreen', true ); } ) )
	g_seq.actions.push( new WaitForClassAction( $( '#AMModelBackground' ), 'SceneLoaded' ) );
    g_seq.actions.push(new RunFunctionAction( function () { g_Stinger_SoundId = PlayUISoundScript( 'antimage_persona_debut_stinger'); }))
    g_seq.actions.push(new RunFunctionAction( function () { g_SFX_SoundId = PlayUISoundScript( 'antimage_persona_debut_sfx'); } ) )
    g_seq.actions.push(new RunFunctionAction( function () { $('#AMModelBackground').FireEntityInput('antimage_persona', 'SetAnimation', 'antimage_persona_debut_spawn'); } ) )
	g_seq.actions.push( new AddClassAction( $( '#MainContainer' ), 'Initialize' ) );
	g_seq.actions.push( new AddClassAction( $( '#AMModelBackground' ), 'Initialize' ) );
    
    g_seq.actions.push(new WaitAction(4.00));
	g_seq.actions.push( new AddClassAction( $( '#DebutInformation' ), 'Initialize' ) );
	g_seq.actions.push( new AddClassAction( $( '#InformationBody' ), 'Initialize' ) );
                                                                                 
	                                                                                              
	                                                                             

    g_seq.actions.push(new WaitAction(3.33));

    g_seq.actions.push( new RunFunctionAction( function() 
	{
	    $('#AMModelBackground').SetRotateParams( -1, 1, -1, 1 );
	}));



                                               

    g_seq.actions.push(new RunFunctionAction(function () { $('#AMModelBackground').FireEntityInput('antimage_persona', 'SetAnimation', 'antimage_persona_debut_anim_5s_loop'); }))
    g_seq.actions.push(new WaitAction(15.0));
    g_seq.actions.push(new RunFunctionAction(function () { $('#AMModelBackground').FireEntityInput('antimage_persona', 'SetAnimation', 'meditation_04'); }))
    g_seq.actions.push(new WaitAction(5.0));
    g_seq.actions.push(new RunFunctionAction(function () { $('#AMModelBackground').FireEntityInput('antimage_persona', 'SetAnimation', 'antimage_persona_debut_anim_5s'); }))
    g_seq.actions.push(new WaitAction(5.0));
    g_seq.actions.push(new RunFunctionAction(function () { $('#AMModelBackground').FireEntityInput('antimage_persona', 'SetAnimation', 'meditation_03'); }))
    g_seq.actions.push(new WaitAction(8.33));
    g_seq.actions.push(new RunFunctionAction(function () { $('#AMModelBackground').FireEntityInput('antimage_persona', 'SetAnimation', 'antimage_persona_debut_anim_5s'); }))
    g_seq.actions.push(new WaitAction(5.0));
    g_seq.actions.push(new RunFunctionAction(function () { $('#AMModelBackground').FireEntityInput('antimage_persona', 'SetAnimation', 'meditation_02'); }))
    g_seq.actions.push(new WaitAction(12.33));
    g_seq.actions.push(new RunFunctionAction(function () { $('#AMModelBackground').FireEntityInput('antimage_persona', 'SetAnimation', 'antimage_persona_debut_anim_5s'); }))
    g_seq.actions.push(new WaitAction(5.0));
    g_seq.actions.push(new RunFunctionAction(function () { $('#AMModelBackground').FireEntityInput('antimage_persona', 'SetAnimation', 'meditation_05'); }))
    g_seq.actions.push(new WaitAction(14.66));
    g_seq.actions.push(new RunFunctionAction(function () { $('#AMModelBackground').FireEntityInput('antimage_persona', 'SetAnimation', 'antimage_persona_debut_anim_5s_loop'); }))
    g_seq.actions.push(new WaitAction(15.0));
    g_seq.actions.push(new RunFunctionAction(function () { $('#AMModelBackground').FireEntityInput('antimage_persona', 'SetAnimation', 'meditation_013'); }))
    g_seq.actions.push(new WaitAction(4.16));
    g_seq.actions.push(new RunFunctionAction(function () { $('#AMModelBackground').FireEntityInput('antimage_persona', 'SetAnimation', 'antimage_persona_debut_anim_5s_loop'); }))
                                                                                                                                                              
                                                
                                                                                                                                                                               
                                              
                                                                                                                                                              
                                               
                                                                                                                                                                               
                                              
                                                                                                                                                              
                                              
                                                                                                                                                                               
                                              
                                                                                                                                                              
                                               
                                                                                                                                                                               
                                              
                                                                                                                                                               
                                               
                                                                                                                                                                               
                                              
                                                                                                                                                               
                                              
                                                                                                                                                                               
                                              
                                                                                                                                                               
                                              
                                                                                                                                                                               
                                              

    RunSingleAction( g_seq );
}

function closeFemaleAntimageDebutPage() {
    g_seq.finish();
    StopUISoundScript( g_Stinger_SoundId );
    StopUISoundScript( g_SFX_SoundId );

    $('#MainContainer').RemoveClass('Initialize');
    $('#AMModelBackground').RemoveClass('Initialize');
    $('#DebutInformation').RemoveClass('Initialize');
    $('#InformationBody').RemoveClass('Initialize');
                                                   
	                                                                
	                                               

    $.DispatchEvent('DOTAShowHomePage');
}
