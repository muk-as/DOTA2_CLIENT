                                                                               
                   
                                                                               
var ToggleInfo = function ()
{
	$( '#DebutInformation' ).ToggleClass( 'Initialize' );
}

var g_bCameraToggle = false;
                                
   
  	                                                                                                  
  	                                   
  	                                                                                       
  	                                                                                          
   


                                                                               
                           
                                                                               
var RunPageAnimation = function ()
{
	var seq = new RunSequentialActions();
	$.GetContextPanel().RemoveClass('ShowingAlternateStyle');

	$( '#ModelContainer' ).RemoveAndDeleteChildren();
	$( '#ModelContainer' ).BLoadLayoutSnippet( 'ModelSnippet' );
	                                              
	                                                        

	$( '#MainContainer' ).RemoveClass( 'Initialize' );
	$( '#ModelBackground' ).RemoveClass( 'Initialize' );
	$( '#ModelBackgroundAlt' ).RemoveClass( 'Initialize' );
	$( '#DebutInformation' ).RemoveClass( 'Initialize' );
	$( '#InformationBody' ).RemoveClass( 'Initialize' );
	$( '#ItemName' ).RemoveClass( 'Initialize' );
	$( '#InformationBodyBackground' ).RemoveClass( 'Initialize' );
	$( '#ItemLore' ).RemoveClass( 'Initialize' );
	$( '#SecondStyle' ).RemoveClass( 'Initialize' );
	$( '#DefaultStyle' ).RemoveClass( 'Initialize' );

	                                                 
	$.DispatchEvent( 'DOTASetCurrentDashboardPageFullscreen', true );

	seq.actions.push( new WaitForClassAction( $( '#ModelBackground' ), 'SceneLoaded' ) );
	seq.actions.push( new PlayAndTrackSoundAction( 'wr_arcana_debut_stinger' ) );
	seq.actions.push( new PlayAndTrackSoundAction( 'wr_arcana_debut_sfx' ) );
	seq.actions.push( new WaitAction( 0.1 ) );
	seq.actions.push( new AddClassAction( $( '#MainContainer' ), 'Initialize' ) );
	seq.actions.push( new WaitAction( 0.1 ) );
	seq.actions.push( new AddClassAction( $( '#ModelBackground' ), 'Initialize' ) );
	seq.actions.push( new AddClassAction( $( '#ModelBackgroundAlt' ), 'Initialize' ) );
	seq.actions.push( new WaitAction( 3.5 ) );
	seq.actions.push( new AddClassAction( $( '#DebutInformation' ), 'Initialize' ) );
	seq.actions.push( new AddClassAction( $( '#InformationBody' ), 'Initialize' ) );
	seq.actions.push( new WaitAction( 1.3 ) );
	seq.actions.push( new AddClassAction( $( '#ItemName' ), 'Initialize' ) );
	seq.actions.push( new WaitAction( 0.5 ) );
	seq.actions.push( new AddClassAction( $( '#InformationBodyBackground' ), 'Initialize' ) );
	seq.actions.push( new AddClassAction( $( '#ItemLore' ), 'Initialize' ) );
	seq.actions.push( new WaitAction( 3.5 ) );
	seq.actions.push( new AddClassAction( $( '#SecondStyle' ), 'Initialize' ) );
	seq.actions.push( new AddClassAction( $( '#DefaultStyle' ), 'Initialize' ) );

                               
    seq.actions.push( new LerpRotateAction( $( '#ModelBackground' ), 0, 0, 0, 0, -.5, .5, -.5, .5, 5.0 ) );
    seq.actions.push( new LerpRotateAction( $( '#ModelBackgroundAlt' ), 0, 0, 0, 0, -.5, .5, -.5, .5, 5.0 ) );

	RunSingleAction( seq );
}

function alternateStyle()
{
    $.GetContextPanel().AddClass('ShowingAlternateStyle');
  	                                                                   
  	                                                                    
  	                                                                      
  	                                                                       
}

function originalStyle()
{
    $.GetContextPanel().RemoveClass('ShowingAlternateStyle');
  	                                                                   
  	                                                                    
  	                                                                      
  	                                                                       
}

var EndPageAnimation = function()
{
    PlayAndTrackSoundAction.StopAllTrackedSounds();
}