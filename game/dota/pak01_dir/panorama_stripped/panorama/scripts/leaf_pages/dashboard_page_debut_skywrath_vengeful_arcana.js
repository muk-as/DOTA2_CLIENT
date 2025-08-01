
var g_seq;
var g_Stinger_SoundId;

var RunPageAnimation = function ()
{
    g_seq = new RunSequentialActions();

    $( '#CrownfallLogo' ).SetMovie( "file://{resources}/videos/crownfall/crownfall_logo_%language%.webm" );

    $( '#ModelContainer' ).RemoveAndDeleteChildren();
    $( '#ModelContainer' ).BLoadLayoutSnippet( 'ModelSnippet' );
    $( '#CrownfallLogo' ).RemoveClass( 'Initialize' );
    $( '#ContinueButton' ).RemoveClass( 'Initialize' );

    g_seq.actions.push( new WaitAction( 0.01 ) );
    g_seq.actions.push( new RunFunctionAction( function() { $.DispatchEvent( 'DOTASetCurrentDashboardPageFullscreen', true ); } ) )
    g_seq.actions.push( new WaitForClassAction( $( '#ModelBackground' ), 'SceneLoaded' ) );

    g_seq.actions.push( new RunFunctionAction( function () { g_Stinger_SoundId = PlayUISoundScript( 'crownfall_1_debut_stinger' ); } ) )
    g_seq.actions.push( new AddClassAction( $( '#MainContainer' ), 'Initialize' ) );
    g_seq.actions.push( new AddClassAction( $( '#ModelBackground' ), 'Initialize' ) );

    g_seq.actions.push( new LerpDepthOfFieldAction( $( '#ModelBackground' ), "herocamera", 275, 300, 310, 325, 150, 275, 325, 800, 8.0 ) );

    g_seq.actions.push( new AddClassAction( $( '#CrownfallLogo' ), 'Initialize' ) );
    g_seq.actions.push( new WaitAction( 1.5 ) );
    g_seq.actions.push( new AddClassAction( $( '#ContinueButton' ), 'Initialize' ) );
    g_seq.actions.push( new RunFunctionAction( function() 
    {
        $('#ModelBackground').SetRotateParams( -0.75, 0.75, -0.75, 0.75 );
    }));

    RunSingleAction( g_seq );
}

function OnLeavePage()
{
    if( g_seq )
    {
        g_seq.finish();
    }
    if ( g_Stinger_SoundId !== undefined )
    {
        StopUISoundScript( g_Stinger_SoundId );
    }

    $('#MainContainer').RemoveClass('Initialize');
    $('#ModelBackground').RemoveClass('Initialize');
}
