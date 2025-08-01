/// <reference path="dota.d.ts" />
/// <reference path="util.ts" />
/// <reference path="dota_sequence_actions.ts" />
/// <reference path="hud/versus/dota_hud_versus_scene_shared.ts" />

                                
         
          
              
                      
                       
                
                        
                             
               

                    


declare interface DOTABackgroundCCSummer2023_t extends Panel_t
{
    SetLookAtBlendTime( flBlendTime: number ): void;
    SetLookAtTargetBlendTime( flBlendItem: number ): void;
    SetLookAtMaxWeight( flMax: number ): void;
    SetLookAtMaxEyesWeight( flMax: number ): void;
    SetLookAtEnabled( bEnabled: boolean ): void;
    IsLookAtEnabled(): boolean;
    SetLookAtPlaneDistance( flDistance: number ): void;
    ScheduleLookAtTrigger( flDelay: number ): void;
    CancelScheduledLookAtTrigger(): void;
}

$( '#TitleContainer' )!.RemoveClass( 'LogoTrigger' );
($('#FxScene') as DOTAScenePanel_t).FireEntityInput( 'logo_fx', 'Stop', 0 );

var LogoTrigger = function ()
{
    ($('#FxScene') as DOTAScenePanel_t).FireEntityInput( 'logo_fx', 'Start', 0 );
    $.Schedule( 2.5, function ()
    {
        $( '#TitleContainer' )!.AddClass( 'LogoTrigger' );
    } );
};

var RunPageLookat = function ()
{
    const page = $.GetContextPanel<DOTABackgroundCCSummer2023_t>();

    mainPanel.FireEntityInput( 'hero_antimage', 'StartGestureOverride', 'ACT_DOTA_AMBUSH' );

    $.Schedule( 0.0, function ()
    {
        page.SetLookAtEnabled( true );
    } );

    $.Schedule( 6.5, function ()
    {
        page.SetLookAtEnabled( false );
    } );

                                                                  
};

var LookTriggerActivated = function ()
{
    const page = $.GetContextPanel<DOTABackgroundCCSummer2023_t>();
    if ( page.IsLookAtEnabled() )
        return;

    page.CancelScheduledLookAtTrigger();
    RunPageLookat();
};

var mainPanel = $( '#BackgroundScene' ) as DOTAScenePanel_t;
var RunPageAnimation = function ()
{
    const page = $.GetContextPanel<DOTABackgroundCCSummer2023_t>();

    page.CancelScheduledLookAtTrigger();

    page.SetLookAtBlendTime( 1.0 );
    page.SetLookAtMaxWeight( 0.6 );
    page.SetLookAtMaxEyesWeight( 4.5 );
    page.SetLookAtTargetBlendTime( 0.5 );
    page.SetLookAtEnabled( false );
    page.SetLookAtPlaneDistance( 80 );
                                       



    var mainSeq = new RunSequentialActions();

    mainSeq.actions.push( new RunFunctionAction( function ()
    {

                     
        mainPanel.FireEntityInput( 'hero_hoodwink', 'Disable', '' );
        mainPanel.FireEntityInput( 'hero_dazzle', 'Disable', '' );
        mainPanel.FireEntityInput( 'hero_camera_driver', 'SetAnimation', 'camera_dashboard_loadout_treasure_spin_subtle_static' );




        mainPanel.FireEntityInput( 'hero_antimage', 'DisableDefaultActivityModifiers', 1 );
        mainPanel.FireEntityInput( 'hero_antimage', 'StartGestureOverride', 'ACT_DOTA_SPAWN' );
        mainPanel.FireEntityInput( 'hero_antimage', 'SetActivityModifier', 'collectors_cache' );

        mainPanel.FireEntityInput( 'hero_antimage', 'SetPlaybackRateOnAllLayers', 0.9 );

        $.Schedule( 2, function ()
        {
            mainPanel.FireEntityInput( 'hero_camera_driver', 'SetAnimation', 'camera_dashboard_loadout_treasure_spin_subtle' );
        } );

        $.Schedule( 1.2, function ()
        {
            mainPanel.FireEntityInput( 'hero_hoodwink', 'Enable', '' );
            mainPanel.FireEntityInput( 'hero_hoodwink', 'SetPlaybackRateOnAllLayers', 0.6 );
        } );
        $.Schedule( 2.0, function ()
        {
            mainPanel.FireEntityInput( 'hero_dazzle', 'Enable', '' );
            mainPanel.FireEntityInput( 'hero_dazzle', 'DisableDefaultActivityModifiers', 1 );
            mainPanel.FireEntityInput( 'hero_dazzle', 'SetActivityModifier', 'nofx' );
            mainPanel.FireEntityInput( 'hero_dazzle', 'StartGestureOverride', 'ACT_DOTA_SPAWN' );
            mainPanel.FireEntityInput( 'hero_dazzle', 'SetPlaybackRateOnAllLayers', 0.6 );
        } );


    } ) );

                        


    RunSingleAction( mainSeq );
};



