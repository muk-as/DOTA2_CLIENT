/// <reference path="../dota.d.ts" />
/// <reference path="../sequence_actions.ts" />
/// <reference path="../dota_sequence_actions.ts" />
const MuertaReleaseEventConfig = {
    InitialPopupDelay: 4.0,
    AnnouncementLingerDuration: 8.0,
    CenterAnnouncementLingerDuration: 4.0,
    ExpandedCounterLingerDuration: 9.0
};
const MuertaReleaseEventClasses = {
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
function ShowAnnouncement(description, reward, bPositive, nPlayerId, nHeroIdOverride, bKill) {
    const mainPanel = $.GetContextPanel();
    const announcementsPanel = mainPanel.GetAnnoucementsPanel();
    const announcementsContainer = announcementsPanel?.FindChild("AnnouncementsContainer");
    if (announcementsContainer != null) {
        const announcement = $.CreatePanel("DOTAHUDMuertaReleaseEventAnnouncement", announcementsContainer, undefined);
        announcement.AddClass(bKill ? MuertaReleaseEventClasses.Kill : MuertaReleaseEventClasses.Assist);
        announcement.AddClass(MuertaReleaseEventClasses.Announcement);
        //announcement.AddClass( bPositive ? MuertaReleaseEventClasses.PositiveAnnouncement : MuertaReleaseEventClasses.NegativeAnnouncement );
        const descriptionLabel = announcement.FindChildTraverse("DescriptionLabel");
        const rewardLabel = announcement.FindChildTraverse("RewardLabel");
        const heroImageFrame = announcement.FindChildTraverse("HeroImageFrame");
        heroImageFrame.SetImage(bPositive ? "file://{images}/hud/muerta/muerta_target_frame_radiant.psd" : "file://{images}/hud/muerta/muerta_target_frame_dire.psd");
        descriptionLabel.html = true;
        descriptionLabel.text = description;
        rewardLabel.html = true;
        rewardLabel.text = reward;
        const heroImage = announcement.FindChildTraverse('HeroImage');
        heroImage.heroid = nHeroIdOverride >= 0 ? nHeroIdOverride : Players.GetSelectedHeroID(nPlayerId);
        const announcementSequence = new RunSequentialActions();
        announcementSequence.actions.push(new WaitAction(MuertaReleaseEventConfig.CenterAnnouncementLingerDuration));
        announcementSequence.actions.push(new AddClassAction(announcement, MuertaReleaseEventClasses.Expired));
        announcementSequence.actions.push(new RunFunctionAction(function () { announcement.DeleteAsync(0.5); }));
        RunSingleAction(announcementSequence);
    }
}
function AnimateScoreCounter(sequence, counterPanel, counterLabel, nNewScore, strScoredClass, fxBurstPanel) {
    sequence.actions.push(new AddClassAction(counterPanel, MuertaReleaseEventClasses.Expanded));
    sequence.actions.push(new AddClassAction(counterPanel, strScoredClass));
    sequence.actions.push(new WaitAction(0.3));
    sequence.actions.push(new RunFunctionAction(function () {
        fxBurstPanel.SetControlPoint(15, 0x27, 0xcd, 0xae);
        fxBurstPanel.StopParticlesImmediately(true);
        fxBurstPanel.StartParticles();
    }));
    sequence.actions.push(new WaitAction(0.15));
    sequence.actions.push(new RunFunctionAction(function () {
        counterLabel.text = nNewScore.toString(10);
        counterLabel.AddClass(MuertaReleaseEventClasses.Increased);
    }));
    sequence.actions.push(new WaitAction(MuertaReleaseEventConfig.ExpandedCounterLingerDuration));
    sequence.actions.push(new RemoveClassAction(counterPanel, MuertaReleaseEventClasses.Expanded));
    sequence.actions.push(new RemoveClassAction(counterLabel, MuertaReleaseEventClasses.Increased));
    sequence.actions.push(new RemoveClassAction(counterPanel, strScoredClass));
}
function OnLocalPlayerScored(nNewScore, bKill, nHeroIdOverride) {
    const sequence = new RunSequentialActions();
    sequence.actions.push(new PlaySoundAction(bKill ? "Muerta_ReleaseEvent.UI_Kill_Feedback" : "Muerta_ReleaseEvent.UI_Assist_Feedback"));
    const nLocalPlayerHeroID = Players.GetSelectedHeroID(Players.GetLocalPlayer());
    if (bKill && nLocalPlayerHeroID != g_nMuertaHeroID) {
        const voSequence = new RunSequentialActions();
        voSequence.actions.push(new WaitAction(1.7));
        voSequence.actions.push(new PlaySoundAction("Muerta_ReleaseEvent.UI_Kill_VO"));
        RunSingleAction(voSequence);
    }
    const mainPanel = $.GetContextPanel();
    ShowAnnouncement($.Localize(bKill ? '#DOTA_MuertaReleaseEvent_OpponentKillAnnouncementDesc' : '#DOTA_MuertaReleaseEvent_OpponentAssistAnnouncementDesc', mainPanel), $.Localize(bKill ? '#DOTA_MuertaReleaseEvent_AnnouncementKillReward' : '#DOTA_MuertaReleaseEvent_AnnouncementAssistReward', mainPanel), true, Players.GetLocalPlayer(), nHeroIdOverride, bKill);
    const counterPanel = mainPanel.GetCounterPanel();
    if (counterPanel != null) {
        const counterLabel = counterPanel.FindChildTraverse('Counter1');
        const counterSmallLabel = counterPanel.FindChildTraverse('CounterSmall1');
        const fxBurstPanel = counterPanel.FindChildTraverse("CounterBurstFx1");
        AnimateScoreCounter(sequence, counterPanel, counterLabel, nNewScore, MuertaReleaseEventClasses.LocalPlayerScored, fxBurstPanel);
        counterSmallLabel.text = nNewScore.toString(10);
    }
    RunSingleAction(sequence);
}
function OnOpponentScored(nNewScore, bKill, nOpponentPlayerId) {
    const sequence = new RunSequentialActions();
    sequence.actions.push(new PlaySoundAction("Muerta_ReleaseEvent.UI_Killed_Feedback"));
    const nLocalPlayerHeroID = Players.GetSelectedHeroID(Players.GetLocalPlayer());
    if (bKill && nLocalPlayerHeroID != g_nMuertaHeroID) {
        sequence.actions.push(new PlaySoundAction("Muerta_ReleaseEvent.UI_Killed_VO"));
    }
    const mainPanel = $.GetContextPanel();
    const counterPanel = mainPanel.GetCounterPanel();
    if (counterPanel != null) {
        const counterLabel = counterPanel.FindChildTraverse('Counter2');
        const counterSmallLabel = counterPanel.FindChildTraverse('CounterSmall2');
        const fxBurstPanel = counterPanel.FindChildTraverse("CounterBurstFx2");
        AnimateScoreCounter(sequence, counterPanel, counterLabel, nNewScore, MuertaReleaseEventClasses.OpponentScored, fxBurstPanel);
        counterSmallLabel.text = nNewScore.toString(10);
    }
    RunSingleAction(sequence);
}
function InitializeMuertaMinigamePanels(nLocalPlayerId, nTargetPlayerId, nLocalPlayerScore, nTargetPlayerScore) {
    const targetHero = Players.GetPlayerSelectedHero(nTargetPlayerId);
    const mainPanel = $.GetContextPanel();
    mainPanel.SetDialogVariableLocString('target_hero', targetHero);
    const logoMovie = mainPanel.FindChildTraverse('EventLogo');
    if (logoMovie != null) {
        logoMovie.SetMovie('file://{resources}/videos/events/muerta/dead_reckoning_logo_2_%language%.webm');
        logoMovie.SetRepeat(true);
    }
    const counterPanel = mainPanel.GetCounterPanel();
    if (counterPanel != null) {
        const hero1CounterImage = counterPanel.FindChildTraverse('CounterHeroImage1');
        const hero2CounterImage = counterPanel.FindChildTraverse('CounterHeroImage2');
        hero1CounterImage.heroid = Players.GetSelectedHeroID(nLocalPlayerId);
        hero2CounterImage.heroid = Players.GetSelectedHeroID(nTargetPlayerId);
        const counter1Label = counterPanel.FindChildTraverse('Counter1');
        const counter2Label = counterPanel.FindChildTraverse('Counter2');
        const counterSmall1Label = counterPanel.FindChildTraverse('CounterSmall1');
        const counterSmall2Label = counterPanel.FindChildTraverse('CounterSmall2');
        counter1Label.text = nLocalPlayerScore.toString(10);
        counter2Label.text = nTargetPlayerScore.toString(10);
        counterSmall1Label.text = nLocalPlayerScore.toString(10);
        counterSmall2Label.text = nTargetPlayerScore.toString(10);
        counterPanel.SetDialogVariableLocString('target_hero', targetHero);
    }
}
function ShowDescriptionPanel(nLocalHeroID, nTargetHeroID) {
    const mainPanel = $.GetContextPanel();
    //const eventDescriptionPanel = $<Panel_t>( '#EventDescriptionContainer' );
    if (mainPanel.BHasClass(MuertaReleaseEventClasses.ShowVersusPanel))
        return;
    const sequence = new RunSequentialActions();
    sequence.actions.push(new WaitAction(MuertaReleaseEventConfig.InitialPopupDelay));
    sequence.actions.push(new AddClassAction(mainPanel, MuertaReleaseEventClasses.ShowVersusPanel));
    sequence.actions.push(new PlaySoundAction("Muerta_ReleaseEvent.UI_InitialSlideIn_Feedback"));
    sequence.actions.push(new WaitAction(2.5));
    if (nLocalHeroID != g_nMuertaHeroID) {
        const voSoundEventName = nTargetHeroID == g_nMuertaHeroID ? "Muerta_ReleaseEvent.UI_InitialSlideIn_VO_TargetIsMuerta" : "Muerta_ReleaseEvent.UI_InitialSlideIn_VO";
        sequence.actions.push(new PlaySoundAction(voSoundEventName));
    }
    RunSingleAction(sequence);
}
function ToggleDesriptionPanel() {
    const mainPanel = $.GetContextPanel();
    mainPanel.ToggleClass(MuertaReleaseEventClasses.ShowVersusPanel);
    const counterPanel = mainPanel.GetCounterPanel();
    if (counterPanel != null) {
        counterPanel.ToggleClass(MuertaReleaseEventClasses.ShowCounterPanel);
    }
}
function ShowVersusPanel() {
    const mainPanel = $.GetContextPanel();
    if (mainPanel.BHasClass(MuertaReleaseEventClasses.ShowVersusPanel))
        return;
    const sequence = new RunSequentialActions();
    sequence.actions.push(new AddClassAction(mainPanel, MuertaReleaseEventClasses.ShowVersusPanel));
    sequence.actions.push(new WaitAction(MuertaReleaseEventConfig.AnnouncementLingerDuration));
    sequence.actions.push(new RemoveClassAction(mainPanel, MuertaReleaseEventClasses.ShowVersusPanel));
    RunSingleAction(sequence);
}
function ShowCounterPanel() {
    const mainPanel = $.GetContextPanel();
    const counterPanel = mainPanel.GetCounterPanel();
    counterPanel?.SetHasClass(MuertaReleaseEventClasses.ShowCounterPanel, true);
}
function OnResetVersusScreen() {
    const panel = $.GetContextPanel();
    const hero1Panel = $.GetContextPanel().FindChildTraverse("Hero1Panel");
    const hero2Panel = $.GetContextPanel().FindChildTraverse("Hero2Panel");
    const versusImage = $.GetContextPanel().FindChildTraverse("VersusImage");
    panel.RemoveClass(MuertaReleaseEventClasses.Visible);
    hero1Panel.RemoveClass(MuertaReleaseEventClasses.Visible);
    hero1Panel.RemoveClass(MuertaReleaseEventClasses.VisibleFull);
    hero2Panel.RemoveClass(MuertaReleaseEventClasses.Visible);
    versusImage.RemoveClass(MuertaReleaseEventClasses.Visible);
}
function OnFirstVersusSceneStarted() {
    const panel = $.GetContextPanel();
    const hero1Panel = $.GetContextPanel().FindChildTraverse("Hero1Panel");
    const sequence = new RunSequentialActions();
    sequence.actions.push(new AddClassAction(panel, MuertaReleaseEventClasses.Visible));
    sequence.actions.push(new WaitAction(1.5));
    sequence.actions.push(new AddClassAction(hero1Panel, MuertaReleaseEventClasses.Visible));
    RunSingleAction(sequence);
}
function OnSecondVersusSceneStarted() {
    const hero1Panel = $.GetContextPanel().FindChildTraverse("Hero1Panel");
    const hero2Panel = $.GetContextPanel().FindChildTraverse("Hero2Panel");
    const versusImage = $.GetContextPanel().FindChildTraverse("VersusImage");
    const fxBurstPanel = $.GetContextPanel().FindChildTraverse("VersusBurst");
    const sequence = new RunSequentialActions();
    sequence.actions.push(new WaitAction(2.0));
    sequence.actions.push(new AddClassAction(hero1Panel, MuertaReleaseEventClasses.VisibleFull));
    sequence.actions.push(new AddClassAction(hero2Panel, MuertaReleaseEventClasses.Visible));
    sequence.actions.push(new PlaySoundAction("ui.badge_levelup"));
    sequence.actions.push(new WaitAction(0.35));
    sequence.actions.push(new AddClassAction(versusImage, MuertaReleaseEventClasses.Visible));
    sequence.actions.push(new RunFunctionAction(function () {
        fxBurstPanel.SetControlPoint(15, 0xFF, 0xFF, 0xFF);
        fxBurstPanel.StopParticlesImmediately(true);
        fxBurstPanel.StartParticles();
    }));
    RunSingleAction(sequence);
}
function ShowGameEndPanel(nPlayer1Score, nPlayer2Score, nPlayer1Flowers, nPlayer2Flowers) {
    const panel = $.GetContextPanel();
    const hero1Panel = $.GetContextPanel().FindChildTraverse("Hero1Panel");
    const hero2Panel = $.GetContextPanel().FindChildTraverse("Hero2Panel");
    const versusImage = $.GetContextPanel().FindChildTraverse("VersusImage");
    const fxBurstPanel = $.GetContextPanel().FindChildTraverse("VersusBurst");
    const hero1Highlight = $.GetContextPanel().FindChildTraverse("Hero1Highlight");
    const hero2Highlight = $.GetContextPanel().FindChildTraverse("Hero2Highlight");
    const bPlayer1Winner = nPlayer1Score > nPlayer2Score;
    const bPlayer2Winner = nPlayer2Score > nPlayer1Score;
    const hero1Frame = $.GetContextPanel().FindChildTraverse("VersusHero1Frame");
    const hero2Frame = $.GetContextPanel().FindChildTraverse("VersusHero2Frame");
    hero1Frame.SetImage(bPlayer1Winner ? "file://{images}/events/muerta/versus_screen/portrait_frame_top_glow.png" : "file://{images}/events/muerta/versus_screen/portrait_frame_top.png");
    hero2Frame.SetImage(bPlayer2Winner ? "file://{images}/events/muerta/versus_screen/portrait_frame_top_glow.png" : "file://{images}/events/muerta/versus_screen/portrait_frame_top.png");
    hero1Panel.SetHasClass(MuertaReleaseEventClasses.Winner, bPlayer1Winner);
    hero2Panel.SetHasClass(MuertaReleaseEventClasses.Winner, bPlayer2Winner);
    hero1Highlight.SetHasClass(MuertaReleaseEventClasses.Visible, bPlayer1Winner);
    hero2Highlight.SetHasClass(MuertaReleaseEventClasses.Visible, bPlayer2Winner);
    const winnerLabel1 = $.GetContextPanel().FindChildTraverse("WinnerLabel1");
    const winnerLabel2 = $.GetContextPanel().FindChildTraverse("WinnerLabel2");
    winnerLabel1.SetHasClass(MuertaReleaseEventClasses.Visible, true);
    winnerLabel2.SetHasClass(MuertaReleaseEventClasses.Visible, true);
    winnerLabel1.SetDialogVariableInt("score", nPlayer1Score);
    winnerLabel2.SetDialogVariableInt("score", nPlayer2Score);
    winnerLabel1.html = true;
    winnerLabel2.html = true;
    winnerLabel1.text = $.Localize(bPlayer1Winner ? "#DOTA_MuertaReleaseEvent_EndGame_Points_Winner" : "#DOTA_MuertaReleaseEvent_EndGame_Points", winnerLabel1);
    winnerLabel2.text = $.Localize(bPlayer2Winner ? "#DOTA_MuertaReleaseEvent_EndGame_Points_Winner" : "#DOTA_MuertaReleaseEvent_EndGame_Points", winnerLabel2);
    const hero1WinnerCap = $.GetContextPanel().FindChildTraverse("Hero1WinnerCap");
    const hero2WinnerCap = $.GetContextPanel().FindChildTraverse("Hero2WinnerCap");
    hero1WinnerCap.SetHasClass(MuertaReleaseEventClasses.Visible, bPlayer1Winner);
    hero2WinnerCap.SetHasClass(MuertaReleaseEventClasses.Visible, bPlayer2Winner);
    const hero1Cap = $.GetContextPanel().FindChildTraverse("Hero1Cap");
    const hero2Cap = $.GetContextPanel().FindChildTraverse("Hero2Cap");
    hero1Cap.SetHasClass(MuertaReleaseEventClasses.Visible, !bPlayer1Winner);
    hero2Cap.SetHasClass(MuertaReleaseEventClasses.Visible, !bPlayer2Winner);
    const hero1FlowersContainer = $.GetContextPanel().FindChildTraverse("Hero1FlowersContainer");
    const hero2FlowersContainer = $.GetContextPanel().FindChildTraverse("Hero2FlowersContainer");
    hero1FlowersContainer.SetHasClass(MuertaReleaseEventClasses.Visible, nPlayer1Flowers > 0);
    hero2FlowersContainer.SetHasClass(MuertaReleaseEventClasses.Visible, nPlayer2Flowers > 0);
    for (let i = 0; i < nPlayer1Flowers; ++i) {
        const flower = $.CreatePanel("Image", hero1FlowersContainer, undefined);
        flower.BLoadLayoutSnippet("Flower");
    }
    for (let i = 0; i < nPlayer2Flowers; ++i) {
        const flower = $.CreatePanel("Image", hero2FlowersContainer, undefined);
        flower.BLoadLayoutSnippet("Flower");
    }
    const sequence = new RunSequentialActions();
    sequence.actions.push(new WaitAction(4.5));
    sequence.actions.push(new AddClassAction(panel, MuertaReleaseEventClasses.Visible));
    sequence.actions.push(new AddClassAction(hero1Panel, MuertaReleaseEventClasses.Visible));
    sequence.actions.push(new AddClassAction(hero2Panel, MuertaReleaseEventClasses.Visible));
    sequence.actions.push(new PlaySoundAction("ui.badge_levelup"));
    sequence.actions.push(new WaitAction(0.35));
    sequence.actions.push(new AddClassAction(versusImage, MuertaReleaseEventClasses.Visible));
    sequence.actions.push(new RunFunctionAction(function () {
        fxBurstPanel.SetControlPoint(15, 0xFF, 0xFF, 0xFF);
        fxBurstPanel.StopParticlesImmediately(true);
        fxBurstPanel.StartParticles();
    }));
    RunSingleAction(sequence);
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZG90YV9odWRfbXVlcnRhX3JlbGVhc2VfZXZlbnQuanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyJkb3RhX2h1ZF9tdWVydGFfcmVsZWFzZV9ldmVudC50cyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiQUFBQSxxQ0FBcUM7QUFDckMsK0NBQStDO0FBQy9DLG9EQUFvRDtBQUVwRCxNQUFNLHdCQUF3QixHQUM5QjtJQUNJLGlCQUFpQixFQUFFLEdBQUc7SUFDdEIsMEJBQTBCLEVBQUUsR0FBRztJQUMvQixnQ0FBZ0MsRUFBRSxHQUFHO0lBQ3JDLDZCQUE2QixFQUFFLEdBQUc7Q0FDckMsQ0FBQztBQUVGLE1BQU0seUJBQXlCLEdBQy9CO0lBQ0ksZUFBZSxFQUFFLGlCQUFpQjtJQUNsQyxlQUFlLEVBQUUsaUJBQWlCO0lBQ2xDLG1CQUFtQixFQUFFLHFCQUFxQjtJQUMxQyxlQUFlLEVBQUUsaUJBQWlCO0lBQ2xDLGdCQUFnQixFQUFFLGtCQUFrQjtJQUNwQyxPQUFPLEVBQUUsU0FBUztJQUNsQixTQUFTLEVBQUUsV0FBVztJQUN0QixZQUFZLEVBQUUsY0FBYztJQUM1QixvQkFBb0IsRUFBRSxzQkFBc0I7SUFDNUMsb0JBQW9CLEVBQUUsc0JBQXNCO0lBQzVDLE9BQU8sRUFBRSxTQUFTO0lBQ2xCLFFBQVEsRUFBRSxVQUFVO0lBQ3BCLGNBQWMsRUFBRSxnQkFBZ0I7SUFDaEMsaUJBQWlCLEVBQUUsbUJBQW1CO0lBQ3RDLElBQUksRUFBRSxNQUFNO0lBQ1osTUFBTSxFQUFFLFFBQVE7SUFDaEIsZ0JBQWdCLEVBQUUsa0JBQWtCO0lBQ3BDLGFBQWEsRUFBRSxlQUFlO0lBQzlCLE9BQU8sRUFBRSxTQUFTO0lBQ2xCLFdBQVcsRUFBRSxhQUFhO0lBQzFCLE1BQU0sRUFBRSxRQUFRO0NBQ25CLENBQUM7QUFFRixNQUFNLGVBQWUsR0FBRyxHQUFHLENBQUM7QUFFNUIsU0FBUyxnQkFBZ0IsQ0FBRSxXQUFtQixFQUFFLE1BQWMsRUFBRSxTQUFrQixFQUFFLFNBQWlC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