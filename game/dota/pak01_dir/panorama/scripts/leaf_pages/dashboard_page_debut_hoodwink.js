                                                                               
                            
  
                                                                            
                                                     
                                                                               
var seq;

  
  
  
var OnPageSetupSuccess = function ()
{
	                                                 
	$.DispatchEvent('DOTASetCurrentDashboardPageFullscreen', true);
}


   
                                                                                 
                        
   
                                                                       
   
                                                
   
var get_dof_value = function( start_dof, end_dof, i_val, num_samples, a=2, dof_property='SetDOFFarBlurry', msg_prefix='TEST' )
{
    var delta = end_dof - start_dof;
    var x = i_val / num_samples;
    var x_a = Math.pow(x, a);
    var diff_a = Math.pow(1 - x, a);
    var y = x_a / (x_a + diff_a);

    var sampled = start_dof + y * delta;

    return function()
    {
        $('#Model').FireEntityInput('intro_camera', dof_property, sampled);
                                                                                                                                             
    }
}


   
                                               
   
var RunPageAnimation = function ()
{
	seq = new RunSequentialActions();

	$('#ModelContainer').RemoveAndDeleteChildren();
	$('#ModelContainer').BLoadLayoutSnippet('ModelSnippet');
	$('#DebutInformation').RemoveClass('Initialize');

	seq.actions.push( new WaitAction( 0.01 ) );
    seq.actions.push( new RunFunctionAction( function() { $.DispatchEvent( 'DOTASetCurrentDashboardPageFullscreen', true ); } ) )
	seq.actions.push( new WaitForClassAction( $( '#Model' ), 'SceneLoaded' ) );
	seq.actions.push( new PlayAndTrackSoundAction( 'hoodwink_debut_stinger' ) );
	seq.actions.push( new PlayAndTrackSoundAction( 'hoodwink_debut_sfx' ) );

    seq.actions.push(new RunFunctionAction(function () { $('#Model').FireEntityInput('hoodwink', 'SetAnimation', 'hoodwink_debut_spawn'); }))
    seq.actions.push(new RunFunctionAction(function () { $('#Model').FireEntityInput('creep1', 'SetAnimation', 'hoodwink_debut_crp1'); }))
    seq.actions.push(new RunFunctionAction(function () { $('#Model').FireEntityInput('creep2', 'SetAnimation', 'hoodwink_debut_crp2'); }))

      
                                                                            
                                                                  
      
    var s_near_blurry, s_near_crisp, s_far_crisp, s_far_blurry;
    var e_near_blurry, e_near_crisp, e_far_crisp, e_far_blurry;
    var dt;
    var num_samples = 25;

    var ANIMATE_STARTING_RACK_FOCUS = true;
    if( ANIMATE_STARTING_RACK_FOCUS )
    {
        seq.actions.push(new WaitAction(0.45));

          
                                                                          
          
        num_samples = 8;
        s_near_crisp = 300;
        s_far_crisp = 400;
        s_far_blurry = 500;
        e_near_crisp = 150;
        e_far_crisp = 700;
        e_far_blurry = 1000;

        var duration;
        var accum = 0.0;

        duration = 1.50;
        dt = duration / num_samples;

        for( var i = 0; i < num_samples; i++ )
        {
            seq.actions.push(new WaitAction(dt));

            fn = get_dof_value( s_near_crisp, e_near_crisp, i, num_samples, a=1, dof_property="SetDOFNearCrisp" );
            seq.actions.push( new RunFunctionAction( fn ) );

            fn = get_dof_value( s_far_crisp, e_far_crisp, i, num_samples, a=1, dof_property="SetDOFFarCrisp" );
            seq.actions.push( new RunFunctionAction( fn ) );

            fn = get_dof_value( s_far_blurry, e_far_blurry, i, num_samples, a=1, dof_property="SetDOFFarBlurry" );
            seq.actions.push( new RunFunctionAction( fn ) );
        }


    }
    else
    {
                                                                                                                 
        seq.actions.push( new RunFunctionAction( function() { $('#Model').FireEntityInput('intro_camera', "SetDOFNearCrisp", 140); }));
        seq.actions.push( new RunFunctionAction( function() { $('#Model').FireEntityInput('intro_camera', "SetDOFFarCrisp", 500); }));
        seq.actions.push( new RunFunctionAction( function() { $('#Model').FireEntityInput('intro_camera', "SetDOFFarBlurry", 1000); }));
        $('#Model').FireEntityInput('intro_camera', "SetDOFFarBlurry", 1000);

        seq.actions.push(new WaitAction(0.45));
        seq.actions.push(new WaitAction(1.50));
    }

      
                                                                                                   
      
    seq.actions.push(new RunFunctionAction(function () { $('#Model').FireEntityInput('creep3', 'SetAnimation', 'hoodwink_debut_crp3'); }))

      
                                                                          
      
    num_samples = 25;
    s_near_crisp = 150;
    s_far_crisp = 700;
    s_far_blurry = 1000;
    e_near_crisp = 400;
    e_far_crisp = 1500;
    e_far_blurry = 6000;

    dt = 2.0 / num_samples;
    for( var i = 0; i <= num_samples; i++ )
    {
        seq.actions.push(new WaitAction(dt));

        fn = get_dof_value( s_near_crisp, e_near_crisp, i, num_samples, a=1, dof_property="SetDOFNearCrisp" );
        seq.actions.push( new RunFunctionAction( fn ) );

        fn = get_dof_value( s_far_crisp, e_far_crisp, i, num_samples, a=1, dof_property="SetDOFFarCrisp" );
        seq.actions.push( new RunFunctionAction( fn ) );

        fn = get_dof_value( s_far_blurry, e_far_blurry, i, num_samples, a=1, dof_property="SetDOFFarBlurry" );
        seq.actions.push( new RunFunctionAction( fn ) );
    }


    seq.actions.push(new WaitAction(0.05));

      
                                                                    
      
    s_near_crisp = 400;
    s_far_crisp = 2000;
    s_far_blurry = 6000;
    e_near_crisp = 200;
    e_far_crisp = 430;
    e_far_blurry = 2000;

    dt = 2.0 / num_samples;
    for( var i = 0; i <= num_samples; i++ )
    {
        seq.actions.push(new WaitAction(dt));

        fn = get_dof_value( s_near_crisp, e_near_crisp, i, num_samples, a=2, dof_property="SetDOFNearCrisp" );
        seq.actions.push( new RunFunctionAction( fn ) );

        fn = get_dof_value( s_far_crisp, e_far_crisp, i, num_samples, a=2, dof_property="SetDOFFarCrisp" );
        seq.actions.push( new RunFunctionAction( fn ) );

        fn = get_dof_value( s_far_blurry, e_far_blurry, i, num_samples, a=2, dof_property="SetDOFFarBlurry" );
        seq.actions.push( new RunFunctionAction( fn ) );
    }

      
                         
      
    seq.actions.push( new WaitAction( 0.8 ) );
	seq.actions.push( new AddClassAction( $( '#DebutInformation' ), 'Initialize' ) );
	seq.actions.push( new RunFunctionAction( function() 
	{
	    $('#Model').SetRotateParams( -1, 0, -1, 0 );
	}));

    seq.actions.push(new WaitAction(7.93));
    seq.actions.push(new RunFunctionAction(function () { $('#Model').FireEntityInput('hoodwink', 'SetAnimation', 'hoodwink_debut_idle'); }))

	RunSingleAction(seq);
}


   
                                                
   
var EndPageAnimation = function()
{
    seq.finish();
	
    PlayAndTrackSoundAction.StopAllTrackedSounds();

                                                   
	                                                                
	                                               

	$( '#Model' ).RemoveClass( 'Initialize' );
	$( '#DebutInformation' ).RemoveClass( 'Initialize' );
}
