/// <reference path="../dota.d.ts" />
/// <reference path="../sequence_actions.ts" />
/// <reference path="../dota_sequence_actions.ts" />

const MuertaReleaseEventConfig =
{
    InitialPopupDelay: 4.0,
    AnnouncementLingerDuration: 8.0,
    CenterAnnouncementLingerDuration: 4.0,
    ExpandedCounterLingerDuration: 9.0
};

const MuertaReleaseEventClasses =
{
    ShowTargetPanel: "ShowTargetPanel",
    HideDescription: "HideDescription",
    ShowTargetDeadPanel: "ShowTargetDeadPanel",
    ShowVersusPanel: "ShowVersusPanel",
    ShowCounterPanel: "ShowCounterPanel",
    Slashed: "Slashed",
    Increased: "Increased",
    Announcement: "Announcement",
    PositiveAnnouncement: "PositiveAnnouncement",
    NegativeAnnouncement: "NegativeAnnouncement",
    Expired: "Expired",
    Expanded: "Expanded",
    OpponentScored: "OpponentScored",
    LocalPlayerScored: "LocalPlayerScored",
    Kill: "Kill",
    Assist: "Assist",
    LocalPlayerLeads: "LocalPlayerLeads",
    OpponentLeads: "OpponentLeads",
    Visible: "Visible",
    VisibleFull: "VisibleFull",
    Winner: "Winner"
};

const g_nMuertaHeroID = 138;

function ShowAnnouncement( description: string, reward: string, bPositive: boolean, nPlayerId: number, nHeroIdOverride: number, bKill: boolean )
{
    const mainPanel = $.GetContextPanel<DOTAHUDMuertaReleaseEvent_t>();
    const announcementsPanel = mainPanel.GetAnnoucementsPanel();
    const announcementsContainer = announcementsPanel?.FindChild( "AnnouncementsContainer" );

    if ( announcementsContainer != null )
    {
        const announcement = $.CreatePanel( "DOTAHUDMuertaReleaseEventAnnouncement", announcementsContainer, undefined );

        announcement.AddClass( bKill ? MuertaReleaseEventClasses.Kill : MuertaReleaseEventClasses.Assist );

        announcement.AddClass( MuertaReleaseEventClasses.Announcement );
                                                                                                                                               

        const descriptionLabel = announcement.FindChildTraverse( "DescriptionLabel" ) as Label_t;
        const rewardLabel = announcement.FindChildTraverse( "RewardLabel" ) as Label_t;
        const heroImageFrame = announcement.FindChildTraverse( "HeroImageFrame" ) as Image_t;

        heroImageFrame.SetImage( bPositive ? "file://{images}/hud/muerta/muerta_target_frame_radiant.psd" : "file://{images}/hud/muerta/muerta_target_frame_dire.psd" );

        descriptionLabel.html = true;
        descriptionLabel.text = description;

        rewardLabel.html = true;
        rewardLabel.text = reward;

        const heroImage = announcement.FindChildTraverse( 'HeroImage' ) as DOTAHeroImage_t;
        heroImage.heroid = nHeroIdOverride >= 0 ? nHeroIdOverride : Players.GetSelectedHeroID( nPlayerId );

        const announcementSequence = new RunSequentialActions();
        announcementSequence.actions.push( new WaitAction( MuertaReleaseEventConfig.CenterAnnouncementLingerDuration ) );
        announcementSequence.actions.push( new AddClassAction( announcement, MuertaReleaseEventClasses.Expired ) );
        announcementSequence.actions.push( new RunFunctionAction( function () { announcement.DeleteAsync( 0.5 ); } ) );

        RunSingleAction( announcementSequence );
    }
}

function AnimateScoreCounter( sequence: RunSequentialActions, counterPanel: Panel_t, counterLabel: Label_t, nNewScore: number, strScoredClass: string, fxBurstPanel: DOTAParticleScenePanel_t )
{
    sequence.actions.push( new AddClassAction( counterPanel, MuertaReleaseEventClasses.Expanded ) );
    sequence.actions.push( new AddClassAction( counterPanel, strScoredClass ) );

    sequence.actions.push( new WaitAction( 0.3 ) );

    sequence.actions.push( new RunFunctionAction( function ()
    {
        fxBurstPanel.SetControlPoint( 15, 0x27, 0xcd, 0xae );
        fxBurstPanel.StopParticlesImmediately( true );
        fxBurstPanel.StartParticles();
    } ) );

    sequence.actions.push( new WaitAction( 0.15 ) );

    sequence.actions.push( new RunFunctionAction( function ()
    {
        counterLabel.text = nNewScore.toString( 10 );
        counterLabel.AddClass( MuertaReleaseEventClasses.Increased );
    } ) );

    sequence.actions.push( new WaitAction( MuertaReleaseEventConfig.ExpandedCounterLingerDuration ) );
    sequence.actions.push( new RemoveClassAction( counterPanel, MuertaReleaseEventClasses.Expanded ) );
    sequence.actions.push( new RemoveClassAction( counterLabel, MuertaReleaseEventClasses.Increased ) );
    sequence.actions.push( new RemoveClassAction( counterPanel, strScoredClass ) );
}

function OnLocalPlayerScored( nNewScore: number, bKill: boolean, nHeroIdOverride: number )
{
    const sequence = new RunSequentialActions();
    sequence.actions.push( new PlaySoundAction( bKill ? "Muerta_ReleaseEvent.UI_Kill_Feedback" : "Muerta_ReleaseEvent.UI_Assist_Feedback" ) );

    const nLocalPlayerHeroID = Players.GetSelectedHeroID( Players.GetLocalPlayer() );

    if ( bKill && nLocalPlayerHeroID != g_nMuertaHeroID )
    {
        const voSequence = new RunSequentialActions();
        voSequence.actions.push( new WaitAction( 1.7 ) );
        voSequence.actions.push( new PlaySoundAction( "Muerta_ReleaseEvent.UI_Kill_VO" ) );
        RunSingleAction( voSequence );
    }

    const mainPanel = $.GetContextPanel<DOTAHUDMuertaReleaseEvent_t>();

    ShowAnnouncement(
        $.Localize( bKill ? '#DOTA_MuertaReleaseEvent_OpponentKillAnnouncementDesc' : '#DOTA_MuertaReleaseEvent_OpponentAssistAnnouncementDesc', mainPanel ),
        $.Localize( bKill ? '#DOTA_MuertaReleaseEvent_AnnouncementKillReward' : '#DOTA_MuertaReleaseEvent_AnnouncementAssistReward', mainPanel ),
        true,
        Players.GetLocalPlayer(),
        nHeroIdOverride,
        bKill
    );

    const counterPanel = mainPanel.GetCounterPanel();
    if ( counterPanel != null )
    {
        const counterLabel = counterPanel.FindChildTraverse( 'Counter1' ) as Label_t;
        const counterSmallLabel = counterPanel.FindChildTraverse( 'CounterSmall1' ) as Label_t;

        const fxBurstPanel = counterPanel.FindChildTraverse( "CounterBurstFx1" ) as DOTAParticleScenePanel_t;

        AnimateScoreCounter( sequence, counterPanel, counterLabel, nNewScore, MuertaReleaseEventClasses.LocalPlayerScored, fxBurstPanel );
        
        counterSmallLabel.text = nNewScore.toString( 10 );
    }

    RunSingleAction( sequence );
}

function OnOpponentScored( nNewScore: number, bKill: boolean, nOpponentPlayerId: number )
{
    const sequence = new RunSequentialActions();
    sequence.actions.push( new PlaySoundAction( "Muerta_ReleaseEvent.UI_Killed_Feedback" ) );

    const nLocalPlayerHeroID = Players.GetSelectedHeroID( Players.GetLocalPlayer() );

    if ( bKill && nLocalPlayerHeroID != g_nMuertaHeroID ) 
    {
        sequence.actions.push( new PlaySoundAction( "Muerta_ReleaseEvent.UI_Killed_VO" ) );
    }

    const mainPanel = $.GetContextPanel<DOTAHUDMuertaReleaseEvent_t>();

    const counterPanel = mainPanel.GetCounterPanel();
    if ( counterPanel != null )
    {
        const counterLabel = counterPanel.FindChildTraverse( 'Counter2' ) as Label_t;
        const counterSmallLabel = counterPanel.FindChildTraverse( 'CounterSmall2' ) as Label_t;

        const fxBurstPanel = counterPanel.FindChildTraverse( "CounterBurstFx2" ) as DOTAParticleScenePanel_t;

        AnimateScoreCounter( sequence, counterPanel, counterLabel, nNewScore, MuertaReleaseEventClasses.OpponentScored, fxBurstPanel );

        counterSmallLabel.text = nNewScore.toString( 10 );
    }

    RunSingleAction( sequence );
}

function InitializeMuertaMinigamePanels( nLocalPlayerId: number, nTargetPlayerId: number, nLocalPlayerScore: number, nTargetPlayerScore: number )
{
    const targetHero = Players.GetPlayerSelectedHero( nTargetPlayerId );
    const mainPanel = $.GetContextPanel<DOTAHUDMuertaReleaseEvent_t>();

    mainPanel.SetDialogVariableLocString( 'target_hero', targetHero );
    const logoMovie = mainPanel.FindChildTraverse( 'EventLogo' ) as Movie_t;
    if ( logoMovie != null )
    {
        logoMovie.SetMovie( 'file://{resources}/videos/events/muerta/dead_reckoning_logo_2_%language%.webm' );
        logoMovie.SetRepeat( true );
    }

    const counterPanel = mainPanel.GetCounterPanel();

    if ( counterPanel != null )
    {
        const hero1CounterImage = counterPanel.FindChildTraverse( 'CounterHeroImage1' ) as DOTAHeroImage_t;
        const hero2CounterImage = counterPanel.FindChildTraverse( 'CounterHeroImage2' ) as DOTAHeroImage_t;

        hero1CounterImage.heroid = Players.GetSelectedHeroID( nLocalPlayerId );
        hero2CounterImage.heroid = Players.GetSelectedHeroID( nTargetPlayerId );

        const counter1Label = counterPanel.FindChildTraverse( 'Counter1' ) as Label_t;
        const counter2Label = counterPanel.FindChildTraverse( 'Counter2' ) as Label_t;

        const counterSmall1Label = counterPanel.FindChildTraverse( 'CounterSmall1' ) as Label_t;
        const counterSmall2Label = counterPanel.FindChildTraverse( 'CounterSmall2' ) as Label_t;

        counter1Label.text = nLocalPlayerScore.toString( 10 );
        counter2Label.text = nTargetPlayerScore.toString( 10 );

        counterSmall1Label.text = nLocalPlayerScore.toString( 10 );
        counterSmall2Label.text = nTargetPlayerScore.toString( 10 );

        counterPanel.SetDialogVariableLocString( 'target_hero', targetHero );
    }
}

function ShowDescriptionPanel( nLocalHeroID: number, nTargetHeroID: number): void
{
    const mainPanel = $.GetContextPanel<DOTAHUDMuertaReleaseEvent_t>();
                                                                               

    if ( mainPanel.BHasClass( MuertaReleaseEventClasses.ShowVersusPanel ) )
        return;

    const sequence = new RunSequentialActions();

    sequence.actions.push( new WaitAction( MuertaReleaseEventConfig.InitialPopupDelay ) );
    sequence.actions.push( new AddClassAction( mainPanel, MuertaReleaseEventClasses.ShowVersusPanel ) );
    sequence.actions.push( new PlaySoundAction( "Muerta_ReleaseEvent.UI_InitialSlideIn_Feedback" ) );
    sequence.actions.push( new WaitAction( 2.5 ) );

    if ( nLocalHeroID != g_nMuertaHeroID )
    {
        const voSoundEventName = nTargetHeroID == g_nMuertaHeroID ? "Muerta_ReleaseEvent.UI_InitialSlideIn_VO_TargetIsMuerta" : "Muerta_ReleaseEvent.UI_InitialSlideIn_VO";
        sequence.actions.push( new PlaySoundAction( voSoundEventName ) );
    }

    RunSingleAction( sequence );
}

function ToggleDesriptionPanel(): void
{
    const mainPanel = $.GetContextPanel<DOTAHUDMuertaReleaseEvent_t>();
    mainPanel.ToggleClass( MuertaReleaseEventClasses.ShowVersusPanel );

    const counterPanel = mainPanel.GetCounterPanel();
    if ( counterPanel != null )
    {
        counterPanel.ToggleClass( MuertaReleaseEventClasses.ShowCounterPanel );
    }
}

function ShowVersusPanel(): void
{
    const mainPanel = $.GetContextPanel<DOTAHUDMuertaReleaseEvent_t>();

    if ( mainPanel.BHasClass( MuertaReleaseEventClasses.ShowVersusPanel ) )
        return;

    const sequence = new RunSequentialActions();

    sequence.actions.push( new AddClassAction( mainPanel, MuertaReleaseEventClasses.ShowVersusPanel ) );
    sequence.actions.push( new WaitAction( MuertaReleaseEventConfig.AnnouncementLingerDuration ) );
    sequence.actions.push( new RemoveClassAction( mainPanel, MuertaReleaseEventClasses.ShowVersusPanel ) );

    RunSingleAction( sequence );
}

function ShowCounterPanel(): void
{
    const mainPanel = $.GetContextPanel<DOTAHUDMuertaReleaseEvent_t>();
    const counterPanel = mainPanel.GetCounterPanel();
    counterPanel?.SetHasClass( MuertaReleaseEventClasses.ShowCounterPanel, true );
}

function OnResetVersusScreen(): void
{
    const panel = $.GetContextPanel();
    const hero1Panel = $.GetContextPanel().FindChildTraverse( "Hero1Panel" ) as Panel_t;
    const hero2Panel = $.GetContextPanel().FindChildTraverse( "Hero2Panel" ) as Panel_t;
    const versusImage = $.GetContextPanel().FindChildTraverse( "VersusImage" ) as Panel_t;

    panel.RemoveClass( MuertaReleaseEventClasses.Visible );
    hero1Panel.RemoveClass( MuertaReleaseEventClasses.Visible );
    hero1Panel.RemoveClass( MuertaReleaseEventClasses.VisibleFull );
    hero2Panel.RemoveClass( MuertaReleaseEventClasses.Visible );
    versusImage.RemoveClass( MuertaReleaseEventClasses.Visible );
}

function OnFirstVersusSceneStarted(): void
{
    const panel = $.GetContextPanel();
    const hero1Panel = $.GetContextPanel().FindChildTraverse( "Hero1Panel" ) as Panel_t;

    const sequence = new RunSequentialActions();

    sequence.actions.push( new AddClassAction( panel, MuertaReleaseEventClasses.Visible ) );
    sequence.actions.push( new WaitAction( 1.5 ) );
    sequence.actions.push( new AddClassAction( hero1Panel, MuertaReleaseEventClasses.Visible ) );

    RunSingleAction( sequence );
}

function OnSecondVersusSceneStarted(): void
{
    const hero1Panel = $.GetContextPanel().FindChildTraverse( "Hero1Panel" ) as Panel_t;
    const hero2Panel = $.GetContextPanel().FindChildTraverse( "Hero2Panel" ) as Panel_t;
    const versusImage = $.GetContextPanel().FindChildTraverse( "VersusImage" ) as Panel_t;
    const fxBurstPanel = $.GetContextPanel().FindChildTraverse( "VersusBurst" ) as DOTAParticleScenePanel_t;

    const sequence = new RunSequentialActions();

    sequence.actions.push( new WaitAction( 2.0 ) );
    sequence.actions.push( new AddClassAction( hero1Panel, MuertaReleaseEventClasses.VisibleFull ) );
    sequence.actions.push( new AddClassAction( hero2Panel, MuertaReleaseEventClasses.Visible ) );
    sequence.actions.push( new PlaySoundAction( "ui.badge_levelup" ) );
    sequence.actions.push( new WaitAction( 0.35 ) );
    sequence.actions.push( new AddClassAction( versusImage, MuertaReleaseEventClasses.Visible ) );
    sequence.actions.push( new RunFunctionAction( function ()
    {
        fxBurstPanel.SetControlPoint( 15, 0xFF, 0xFF, 0xFF );
        fxBurstPanel.StopParticlesImmediately( true );
        fxBurstPanel.StartParticles();
    } ) );

    RunSingleAction( sequence );
}

function ShowGameEndPanel( nPlayer1Score: number, nPlayer2Score: number, nPlayer1Flowers: number, nPlayer2Flowers: number ): void
{
    const panel = $.GetContextPanel();
    const hero1Panel = $.GetContextPanel().FindChildTraverse( "Hero1Panel" ) as Panel_t;
    const hero2Panel = $.GetContextPanel().FindChildTraverse( "Hero2Panel" ) as Panel_t;
    const versusImage = $.GetContextPanel().FindChildTraverse( "VersusImage" ) as Panel_t;
    const fxBurstPanel = $.GetContextPanel().FindChildTraverse( "VersusBurst" ) as DOTAParticleScenePanel_t;

    const hero1Highlight = $.GetContextPanel().FindChildTraverse( "Hero1Highlight" ) as Panel_t;
    const hero2Highlight = $.GetContextPanel().FindChildTraverse( "Hero2Highlight" ) as Panel_t;

    const bPlayer1Winner = nPlayer1Score > nPlayer2Score;
    const bPlayer2Winner = nPlayer2Score > nPlayer1Score;

    const hero1Frame = $.GetContextPanel().FindChildTraverse( "VersusHero1Frame" ) as Image_t;
    const hero2Frame = $.GetContextPanel().FindChildTraverse( "VersusHero2Frame" ) as Image_t;

    hero1Frame.SetImage( bPlayer1Winner ? "file://{images}/events/muerta/versus_screen/portrait_frame_top_glow.png" : "file://{images}/events/muerta/versus_screen/portrait_frame_top.png" );
    hero2Frame.SetImage( bPlayer2Winner ? "file://{images}/events/muerta/versus_screen/portrait_frame_top_glow.png" : "file://{images}/events/muerta/versus_screen/portrait_frame_top.png" );

    hero1Panel.SetHasClass( MuertaReleaseEventClasses.Winner, bPlayer1Winner );
    hero2Panel.SetHasClass( MuertaReleaseEventClasses.Winner, bPlayer2Winner );

    hero1Highlight.SetHasClass( MuertaReleaseEventClasses.Visible, bPlayer1Winner );
    hero2Highlight.SetHasClass( MuertaReleaseEventClasses.Visible, bPlayer2Winner );

    const winnerLabel1 = $.GetContextPanel().FindChildTraverse( "WinnerLabel1" ) as Label_t;
    const winnerLabel2 = $.GetContextPanel().FindChildTraverse( "WinnerLabel2" ) as Label_t;

    winnerLabel1.SetHasClass( MuertaReleaseEventClasses.Visible, true );
    winnerLabel2.SetHasClass( MuertaReleaseEventClasses.Visible, true );

    winnerLabel1.SetDialogVariableInt( "score", nPlayer1Score );
    winnerLabel2.SetDialogVariableInt( "score", nPlayer2Score );

    winnerLabel1.html = true;
    winnerLabel2.html = true;

    winnerLabel1.text = $.Localize( bPlayer1Winner ? "#DOTA_MuertaReleaseEvent_EndGame_Points_Winner" : "#DOTA_MuertaReleaseEvent_EndGame_Points", winnerLabel1 );
    winnerLabel2.text = $.Localize( bPlayer2Winner ? "#DOTA_MuertaReleaseEvent_EndGame_Points_Winner" : "#DOTA_MuertaReleaseEvent_EndGame_Points", winnerLabel2 );

    const hero1WinnerCap = $.GetContextPanel().FindChildTraverse( "Hero1WinnerCap" );
    const hero2WinnerCap = $.GetContextPanel().FindChildTraverse( "Hero2WinnerCap" );

    hero1WinnerCap.SetHasClass( MuertaReleaseEventClasses.Visible, bPlayer1Winner );
    hero2WinnerCap.SetHasClass( MuertaReleaseEventClasses.Visible, bPlayer2Winner );

    const hero1Cap = $.GetContextPanel().FindChildTraverse( "Hero1Cap" );
    const hero2Cap = $.GetContextPanel().FindChildTraverse( "Hero2Cap" );

    hero1Cap.SetHasClass( MuertaReleaseEventClasses.Visible, !bPlayer1Winner );
    hero2Cap.SetHasClass( MuertaReleaseEventClasses.Visible, !bPlayer2Winner );

    const hero1FlowersContainer = $.GetContextPanel().FindChildTraverse( "Hero1FlowersContainer" );
    const hero2FlowersContainer = $.GetContextPanel().FindChildTraverse( "Hero2FlowersContainer" );

    hero1FlowersContainer.SetHasClass( MuertaReleaseEventClasses.Visible, nPlayer1Flowers > 0 );
    hero2FlowersContainer.SetHasClass( MuertaReleaseEventClasses.Visible, nPlayer2Flowers > 0 );

    for ( let i = 0; i < nPlayer1Flowers; ++i ) 
    {
        const flower = $.CreatePanel( "Image", hero1FlowersContainer, undefined );
        flower.BLoadLayoutSnippet( "Flower" );
    }

    for ( let i = 0; i < nPlayer2Flowers; ++i ) 
    {
        const flower = $.CreatePanel( "Image", hero2FlowersContainer, undefined );
        flower.BLoadLayoutSnippet( "Flower" );
    }

    const sequence = new RunSequentialActions();

    sequence.actions.push( new WaitAction( 4.5 ) );
    sequence.actions.push( new AddClassAction( panel, MuertaReleaseEventClasses.Visible ) );
    sequence.actions.push( new AddClassAction( hero1Panel, MuertaReleaseEventClasses.Visible ) );
    sequence.actions.push( new AddClassAction( hero2Panel, MuertaReleaseEventClasses.Visible ) );
    sequence.actions.push( new PlaySoundAction( "ui.badge_levelup" ) );
    sequence.actions.push( new WaitAction( 0.35 ) );
    sequence.actions.push( new AddClassAction( versusImage, MuertaReleaseEventClasses.Visible ) );
    sequence.actions.push( new RunFunctionAction( function ()
    {
        fxBurstPanel.SetControlPoint( 15, 0xFF, 0xFF, 0xFF );
        fxBurstPanel.StopParticlesImmediately( true );
        fxBurstPanel.StartParticles();
    } ) );

    RunSingleAction( sequence );
}