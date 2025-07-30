   
                                   
                                                         
  
   
var seq;
var debug_animation = false;


   
                                                                                 
                        
   
                                                                       
   
                                                
   
var get_dof_value = function (
    start_dof, end_dof, i_val, num_samples, a = 2, dof_property = 'SetDOFFarBlurry',
    msg_prefix = 'TEST', camera_name = 'intro_camera', model_id = '#Model') 
    {
    var delta = end_dof - start_dof;
    var x = i_val / num_samples;
    var x_a = Math.pow(x, a);
    var diff_a = Math.pow(1 - x, a);
    var y = x_a / (x_a + diff_a);

    var sampled = start_dof + y * delta;

    return function () {
        $('#ModelBackground').FireEntityInput('hero_camera', dof_property, sampled);
                                                                          
                                                                                                                                             
    }
}


   
                                               
   
var RunPageAnimation = function () {
    seq = new RunSequentialActions();

    $('#ModelContainer').RemoveAndDeleteChildren();
    $('#ModelContainer').BLoadLayoutSnippet('ModelSnippet');

    $( '#DefaultStyle' ).RemoveClass( 'Initialize' );
    $( '#SecondStyle' ).RemoveClass( 'Initialize' );
    seq.actions.push(new WaitAction(0.01));
    seq.actions.push(new RunFunctionAction(function () { $.DispatchEvent('DOTASetCurrentDashboardPageFullscreen', true); }))
                                                                                           
    seq.actions.push(new WaitForClassAction($('#ModelForeground'), 'SceneLoaded'));
    seq.actions.push(new WaitForClassAction($('#ModelForeground_FG'), 'SceneLoaded'));

    seq.actions.push(new PlayAndTrackSoundAction('mirana_persona_debut_stinger'));

    seq.actions.push(new AddClassAction($('#MainContainer'), 'Initialize'));
                                                                                
    seq.actions.push(new AddClassAction($('#ModelForeground'), 'Initialize'));
    seq.actions.push(new AddClassAction($('#ModelForeground_FG'), 'Initialize'));
    seq.actions.push(new AddClassAction($('#ModelForeground_alt'), 'Initialize'));
    seq.actions.push(new AddClassAction($('#ModelForeground_FG_alt'), 'Initialize'));


    seq.actions.push(new WaitAction(6.0));

    seq.actions.push(new AddClassAction($('#DebutInformation'), 'Initialize'));
    seq.actions.push(new AddClassAction($('#InformationBody'), 'Initialize'));

    seq.actions.push(new WaitAction(4.0));

    seq.actions.push( new AddClassAction( $( '#SecondStyle' ), 'Initialize' ) );
    seq.actions.push( new AddClassAction( $( '#DefaultStyle' ), 'Initialize' ) );

    seq.actions.push(new RunFunctionAction(function () { $('#ModelForeground').FireEntityInput("hero_camera_driver", "SetAnimation", "debut_camera_last_frame"); }));

                                                                               
       
                                                                                                                                                                 
                                                                                                                                                  
                                                                                                        

                                                                                                                                                                 
                                                                                                                                                  
                                                                                                        
      

                          
    RunSingleAction(seq);
}


   
                                                
   
var EndPageAnimation = function () {
    if (seq != undefined) {
        seq.finish();
    }
    
    PlayAndTrackSoundAction.StopAllTrackedSounds();

    $('#MainContainer').RemoveClass('Initialize');
                                                      
    $('#ModelForeground').RemoveClass('Initialize');
    $('#ModelForeground_FG').RemoveClass('Initialize');
    $('#ModelForeground_alt').RemoveClass('Initialize');
    $('#ModelForeground_FG_alt').RemoveClass('Initialize');

    $('#DebutInformation').RemoveClass('Initialize');
    $('#InformationBody').RemoveClass('Initialize');

                                          
}



function alternateStyle()
{
    $.GetContextPanel().AddClass('ShowingAlternateStyle');
}

function originalStyle()
{
    $.GetContextPanel().RemoveClass('ShowingAlternateStyle');
}