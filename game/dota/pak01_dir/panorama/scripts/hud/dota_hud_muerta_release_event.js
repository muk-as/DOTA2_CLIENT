"use strict";
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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZG90YV9odWRfbXVlcnRhX3JlbGVhc2VfZXZlbnQuanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyIuLi8uLi8uLi8uLi8uLi9jb250ZW50L2RvdGEvcGFub3JhbWEvc2NyaXB0cy9odWQvZG90YV9odWRfbXVlcnRhX3JlbGVhc2VfZXZlbnQudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IjtBQUFBLHFDQUFxQztBQUNyQywrQ0FBK0M7QUFDL0Msb0RBQW9EO0FBRXBELE1BQU0sd0JBQXdCLEdBQzlCO0lBQ0ksaUJBQWlCLEVBQUUsR0FBRztJQUN0QiwwQkFBMEIsRUFBRSxHQUFHO0lBQy9CLGdDQUFnQyxFQUFFLEdBQUc7SUFDckMsNkJBQTZCLEVBQUUsR0FBRztDQUNyQyxDQUFDO0FBRUYsTUFBTSx5QkFBeUIsR0FDL0I7SUFDSSxlQUFlLEVBQUUsaUJBQWlCO0lBQ2xDLGVBQWUsRUFBRSxpQkFBaUI7SUFDbEMsbUJBQW1CLEVBQUUscUJBQXFCO0lBQzFDLGVBQWUsRUFBRSxpQkFBaUI7SUFDbEMsZ0JBQWdCLEVBQUUsa0JBQWtCO0lBQ3BDLE9BQU8sRUFBRSxTQUFTO0lBQ2xCLFNBQVMsRUFBRSxXQUFXO0lBQ3RCLFlBQVksRUFBRSxjQUFjO0lBQzVCLG9CQUFvQixFQUFFLHNCQUFzQjtJQUM1QyxvQkFBb0IsRUFBRSxzQkFBc0I7SUFDNUMsT0FBTyxFQUFFLFNBQVM7SUFDbEIsUUFBUSxFQUFFLFVBQVU7SUFDcEIsY0FBYyxFQUFFLGdCQUFnQjtJQUNoQyxpQkFBaUIsRUFBRSxtQkFBbUI7SUFDdEMsSUFBSSxFQUFFLE1BQU07SUFDWixNQUFNLEVBQUUsUUFBUTtJQUNoQixnQkFBZ0IsRUFBRSxrQkFBa0I7SUFDcEMsYUFBYSxFQUFFLGVBQWU7SUFDOUIsT0FBTyxFQUFFLFNBQVM7SUFDbEIsV0FBVyxFQUFFLGFBQWE7SUFDMUIsTUFBTSxFQUFFLFFBQVE7Q0FDbkIsQ0FBQztBQUVGLE1BQU0sZUFBZSxHQUFHLEdBQUcsQ0FBQztBQUU1QixTQUFTLGdCQUFnQixDQUFFLFdBQW1CLEVBQUUsTUFBYyxFQUFFLFNBQWtCLEVBQUUsU0FBaUIsRUFBRSxlQUF1QixFQUFFLEtBQWM7SUFFMUksTUFBTSxTQUFTLEdBQUcsQ0FBQyxDQUFDLGVBQWUsRUFBK0IsQ0FBQztJQUNuRSxNQUFNLGtCQUFrQixHQUFHLFNBQVMsQ0FBQyxvQkFBb0IsRUFBRSxDQUFDO0lBQzVELE1BQU0sc0JBQXNCLEdBQUcsa0JBQWtCLEVBQUUsU0FBUyxDQUFFLHdCQUF3QixDQUFFLENBQUM7SUFFekYsSUFBSyxzQkFBc0IsSUFBSSxJQUFJLEVBQ25DO1FBQ0ksTUFBTSxZQUFZLEdBQUcsQ0FBQyxDQUFDLFdBQVcsQ0FBRSx1Q0FBdUMsRUFBRSxzQkFBc0IsRUFBRSxTQUFTLENBQUUsQ0FBQztRQUVqSCxZQUFZLENBQUMsUUFBUSxDQUFFLEtBQUssQ0FBQyxDQUFDLENBQUMseUJBQXlCLENBQUMsSUFBSSxDQUFDLENBQUMsQ0FBQyx5QkFBeUIsQ0FBQyxNQUFNLENBQUUsQ0FBQztRQUVuRyxZQUFZLENBQUMsUUFBUSxDQUFFLHlCQUF5QixDQUFDLFlBQVksQ0FBRSxDQUFDO1FBQ2hFLHVJQUF1STtRQUV2SSxNQUFNLGdCQUFnQixHQUFHLFlBQVksQ0FBQyxpQkFBaUIsQ0FBRSxrQkFBa0IsQ0FBYSxDQUFDO1FBQ3pGLE1BQU0sV0FBVyxHQUFHLFlBQVksQ0FBQyxpQkFBaUIsQ0FBRSxhQUFhLENBQWEsQ0FBQztRQUMvRSxNQUFNLGNBQWMsR0FBRyxZQUFZLENBQUMsaUJBQWlCLENBQUUsZ0JBQWdCLENBQWEsQ0FBQztRQUVyRixjQUFjLENBQUMsUUFBUSxDQUFFLFNBQVMsQ0FBQyxDQUFDLENBQUMsNERBQTRELENBQUMsQ0FBQyxDQUFDLHlEQUF5RCxDQUFFLENBQUM7UUFFaEssZ0JBQWdCLENBQUMsSUFBSSxHQUFHLElBQUksQ0FBQztRQUM3QixnQkFBZ0IsQ0FBQyxJQUFJLEdBQUcsV0FBVyxDQUFDO1FBRXBDLFdBQVcsQ0FBQyxJQUFJLEdBQUcsSUFBSSxDQUFDO1FBQ3hCLFdBQVcsQ0FBQyxJQUFJLEdBQUcsTUFBTSxDQUFDO1FBRTFCLE1BQU0sU0FBUyxHQUFHLFlBQVksQ0FBQyxpQkFBaUIsQ0FBRSxXQUFXLENBQXFCLENBQUM7UUFDbkYsU0FBUyxDQUFDLE1BQU0sR0FBRyxlQUFlLElBQUksQ0FBQyxDQUFDLENBQUMsQ0FBQyxlQUFlLENBQUMsQ0FBQyxDQUFDLE9BQU8sQ0FBQyxpQkFBaUIsQ0FBRSxTQUFTLENBQUUsQ0FBQztRQUVuRyxNQUFNLG9CQUFvQixHQUFHLElBQUksb0JBQW9CLEVBQUUsQ0FBQztRQUN4RCxvQkFBb0IsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksVUFBVSxDQUFFLHdCQUF3QixDQUFDLGdDQUFnQyxDQUFFLENBQUUsQ0FBQztRQUNqSCxvQkFBb0IsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksY0FBYyxDQUFFLFlBQVksRUFBRSx5QkFBeUIsQ0FBQyxPQUFPLENBQUUsQ0FBRSxDQUFDO1FBQzNHLG9CQUFvQixDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxpQkFBaUIsQ0FBRSxjQUFjLFlBQVksQ0FBQyxXQUFXLENBQUUsR0FBRyxDQUFFLENBQUMsQ0FBQyxDQUFDLENBQUUsQ0FBRSxDQUFDO1FBRS9HLGVBQWUsQ0FBRSxvQkFBb0IsQ0FBRSxDQUFDO0tBQzNDO0FBQ0wsQ0FBQztBQUVELFNBQVMsbUJBQW1CLENBQUUsUUFBOEIsRUFBRSxZQUFxQixFQUFFLFlBQXFCLEVBQUUsU0FBaUIsRUFBRSxjQUFzQixFQUFFLFlBQXNDO0lBRXpMLFFBQVEsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksY0FBYyxDQUFFLFlBQVksRUFBRSx5QkFBeUIsQ0FBQyxRQUFRLENBQUUsQ0FBRSxDQUFDO0lBQ2hHLFFBQVEsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksY0FBYyxDQUFFLFlBQVksRUFBRSxjQUFjLENBQUUsQ0FBRSxDQUFDO0lBRTVFLFFBQVEsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksVUFBVSxDQUFFLEdBQUcsQ0FBRSxDQUFFLENBQUM7SUFFL0MsUUFBUSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxpQkFBaUIsQ0FBRTtRQUUxQyxZQUFZLENBQUMsZUFBZSxDQUFFLEVBQUUsRUFBRSxJQUFJLEVBQUUsSUFBSSxFQUFFLElBQUksQ0FBRSxDQUFDO1FBQ3JELFlBQVksQ0FBQyx3QkFBd0IsQ0FBRSxJQUFJLENBQUUsQ0FBQztRQUM5QyxZQUFZLENBQUMsY0FBYyxFQUFFLENBQUM7SUFDbEMsQ0FBQyxDQUFFLENBQUUsQ0FBQztJQUVOLFFBQVEsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksVUFBVSxDQUFFLElBQUksQ0FBRSxDQUFFLENBQUM7SUFFaEQsUUFBUSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxpQkFBaUIsQ0FBRTtRQUUxQyxZQUFZLENBQUMsSUFBSSxHQUFHLFNBQVMsQ0FBQyxRQUFRLENBQUUsRUFBRSxDQUFFLENBQUM7UUFDN0MsWUFBWSxDQUFDLFFBQVEsQ0FBRSx5QkFBeUIsQ0FBQyxTQUFTLENBQUUsQ0FBQztJQUNqRSxDQUFDLENBQUUsQ0FBRSxDQUFDO0lBRU4sUUFBUSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxVQUFVLENBQUUsd0JBQXdCLENBQUMsNkJBQTZCLENBQUUsQ0FBRSxDQUFDO0lBQ2xHLFFBQVEsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksaUJBQWlCLENBQUUsWUFBWSxFQUFFLHlCQUF5QixDQUFDLFFBQVEsQ0FBRSxDQUFFLENBQUM7SUFDbkcsUUFBUSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxpQkFBaUIsQ0FBRSxZQUFZLEVBQUUseUJBQXlCLENBQUMsU0FBUyxDQUFFLENBQUUsQ0FBQztJQUNwRyxRQUFRLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGlCQUFpQixDQUFFLFlBQVksRUFBRSxjQUFjLENBQUUsQ0FBRSxDQUFDO0FBQ25GLENBQUM7QUFFRCxTQUFTLG1CQUFtQixDQUFFLFNBQWlCLEVBQUUsS0FBYyxFQUFFLGVBQXVCO0lBRXBGLE1BQU0sUUFBUSxHQUFHLElBQUksb0JBQW9CLEVBQUUsQ0FBQztJQUM1QyxRQUFRLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGVBQWUsQ0FBRSxLQUFLLENBQUMsQ0FBQyxDQUFDLHNDQUFzQyxDQUFDLENBQUMsQ0FBQyx3Q0FBd0MsQ0FBRSxDQUFFLENBQUM7SUFFMUksTUFBTSxrQkFBa0IsR0FBRyxPQUFPLENBQUMsaUJBQWlCLENBQUUsT0FBTyxDQUFDLGNBQWMsRUFBRSxDQUFFLENBQUM7SUFFakYsSUFBSyxLQUFLLElBQUksa0JBQWtCLElBQUksZUFBZSxFQUNuRDtRQUNJLE1BQU0sVUFBVSxHQUFHLElBQUksb0JBQW9CLEVBQUUsQ0FBQztRQUM5QyxVQUFVLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLFVBQVUsQ0FBRSxHQUFHLENBQUUsQ0FBRSxDQUFDO1FBQ2pELFVBQVUsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksZUFBZSxDQUFFLGdDQUFnQyxDQUFFLENBQUUsQ0FBQztRQUNuRixlQUFlLENBQUUsVUFBVSxDQUFFLENBQUM7S0FDakM7SUFFRCxNQUFNLFNBQVMsR0FBRyxDQUFDLENBQUMsZUFBZSxFQUErQixDQUFDO0lBRW5FLGdCQUFnQixDQUNaLENBQUMsQ0FBQyxRQUFRLENBQUUsS0FBSyxDQUFDLENBQUMsQ0FBQyx1REFBdUQsQ0FBQyxDQUFDLENBQUMseURBQXlELEVBQUUsU0FBUyxDQUFFLEVBQ3BKLENBQUMsQ0FBQyxRQUFRLENBQUUsS0FBSyxDQUFDLENBQUMsQ0FBQyxpREFBaUQsQ0FBQyxDQUFDLENBQUMsbURBQW1ELEVBQUUsU0FBUyxDQUFFLEVBQ3hJLElBQUksRUFDSixPQUFPLENBQUMsY0FBYyxFQUFFLEVBQ3hCLGVBQWUsRUFDZixLQUFLLENBQ1IsQ0FBQztJQUVGLE1BQU0sWUFBWSxHQUFHLFNBQVMsQ0FBQyxlQUFlLEVBQUUsQ0FBQztJQUNqRCxJQUFLLFlBQVksSUFBSSxJQUFJLEVBQ3pCO1FBQ0ksTUFBTSxZQUFZLEdBQUcsWUFBWSxDQUFDLGlCQUFpQixDQUFFLFVBQVUsQ0FBYSxDQUFDO1FBQzdFLE1BQU0saUJBQWlCLEdBQUcsWUFBWSxDQUFDLGlCQUFpQixDQUFFLGVBQWUsQ0FBYSxDQUFDO1FBRXZGLE1BQU0sWUFBWSxHQUFHLFlBQVksQ0FBQyxpQkFBaUIsQ0FBRSxpQkFBaUIsQ0FBOEIsQ0FBQztRQUVyRyxtQkFBbUIsQ0FBRSxRQUFRLEVBQUUsWUFBWSxFQUFFLFlBQVksRUFBRSxTQUFTLEVBQUUseUJBQXlCLENBQUMsaUJBQWlCLEVBQUUsWUFBWSxDQUFFLENBQUM7UUFFbEksaUJBQWlCLENBQUMsSUFBSSxHQUFHLFNBQVMsQ0FBQyxRQUFRLENBQUUsRUFBRSxDQUFFLENBQUM7S0FDckQ7SUFFRCxlQUFlLENBQUUsUUFBUSxDQUFFLENBQUM7QUFDaEMsQ0FBQztBQUVELFNBQVMsZ0JBQWdCLENBQUUsU0FBaUIsRUFBRSxLQUFjLEVBQUUsaUJBQXlCO0lBRW5GLE1BQU0sUUFBUSxHQUFHLElBQUksb0JBQW9CLEVBQUUsQ0FBQztJQUM1QyxRQUFRLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGVBQWUsQ0FBRSx3Q0FBd0MsQ0FBRSxDQUFFLENBQUM7SUFFekYsTUFBTSxrQkFBa0IsR0FBRyxPQUFPLENBQUMsaUJBQWlCLENBQUUsT0FBTyxDQUFDLGNBQWMsRUFBRSxDQUFFLENBQUM7SUFFakYsSUFBSyxLQUFLLElBQUksa0JBQWtCLElBQUksZUFBZSxFQUNuRDtRQUNJLFFBQVEsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksZUFBZSxDQUFFLGtDQUFrQyxDQUFFLENBQUUsQ0FBQztLQUN0RjtJQUVELE1BQU0sU0FBUyxHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQStCLENBQUM7SUFFbkUsTUFBTSxZQUFZLEdBQUcsU0FBUyxDQUFDLGVBQWUsRUFBRSxDQUFDO0lBQ2pELElBQUssWUFBWSxJQUFJLElBQUksRUFDekI7UUFDSSxNQUFNLFlBQVksR0FBRyxZQUFZLENBQUMsaUJBQWlCLENBQUUsVUFBVSxDQUFhLENBQUM7UUFDN0UsTUFBTSxpQkFBaUIsR0FBRyxZQUFZLENBQUMsaUJBQWlCLENBQUUsZUFBZSxDQUFhLENBQUM7UUFFdkYsTUFBTSxZQUFZLEdBQUcsWUFBWSxDQUFDLGlCQUFpQixDQUFFLGlCQUFpQixDQUE4QixDQUFDO1FBRXJHLG1CQUFtQixDQUFFLFFBQVEsRUFBRSxZQUFZLEVBQUUsWUFBWSxFQUFFLFNBQVMsRUFBRSx5QkFBeUIsQ0FBQyxjQUFjLEVBQUUsWUFBWSxDQUFFLENBQUM7UUFFL0gsaUJBQWlCLENBQUMsSUFBSSxHQUFHLFNBQVMsQ0FBQyxRQUFRLENBQUUsRUFBRSxDQUFFLENBQUM7S0FDckQ7SUFFRCxlQUFlLENBQUUsUUFBUSxDQUFFLENBQUM7QUFDaEMsQ0FBQztBQUVELFNBQVMsOEJBQThCLENBQUUsY0FBc0IsRUFBRSxlQUF1QixFQUFFLGlCQUF5QixFQUFFLGtCQUEwQjtJQUUzSSxNQUFNLFVBQVUsR0FBRyxPQUFPLENBQUMscUJBQXFCLENBQUUsZUFBZSxDQUFFLENBQUM7SUFDcEUsTUFBTSxTQUFTLEdBQUcsQ0FBQyxDQUFDLGVBQWUsRUFBK0IsQ0FBQztJQUVuRSxTQUFTLENBQUMsMEJBQTBCLENBQUUsYUFBYSxFQUFFLFVBQVUsQ0FBRSxDQUFDO0lBQ2xFLE1BQU0sU0FBUyxHQUFHLFNBQVMsQ0FBQyxpQkFBaUIsQ0FBRSxXQUFXLENBQWEsQ0FBQztJQUN4RSxJQUFLLFNBQVMsSUFBSSxJQUFJLEVBQ3RCO1FBQ0ksU0FBUyxDQUFDLFFBQVEsQ0FBRSwrRUFBK0UsQ0FBRSxDQUFDO1FBQ3RHLFNBQVMsQ0FBQyxTQUFTLENBQUUsSUFBSSxDQUFFLENBQUM7S0FDL0I7SUFFRCxNQUFNLFlBQVksR0FBRyxTQUFTLENBQUMsZUFBZSxFQUFFLENBQUM7SUFFakQsSUFBSyxZQUFZLElBQUksSUFBSSxFQUN6QjtRQUNJLE1BQU0saUJBQWlCLEdBQUcsWUFBWSxDQUFDLGlCQUFpQixDQUFFLG1CQUFtQixDQUFxQixDQUFDO1FBQ25HLE1BQU0saUJBQWlCLEdBQUcsWUFBWSxDQUFDLGlCQUFpQixDQUFFLG1CQUFtQixDQUFxQixDQUFDO1FBRW5HLGlCQUFpQixDQUFDLE1BQU0sR0FBRyxPQUFPLENBQUMsaUJBQWlCLENBQUUsY0FBYyxDQUFFLENBQUM7UUFDdkUsaUJBQWlCLENBQUMsTUFBTSxHQUFHLE9BQU8sQ0FBQyxpQkFBaUIsQ0FBRSxlQUFlLENBQUUsQ0FBQztRQUV4RSxNQUFNLGFBQWEsR0FBRyxZQUFZLENBQUMsaUJBQWlCLENBQUUsVUFBVSxDQUFhLENBQUM7UUFDOUUsTUFBTSxhQUFhLEdBQUcsWUFBWSxDQUFDLGlCQUFpQixDQUFFLFVBQVUsQ0FBYSxDQUFDO1FBRTlFLE1BQU0sa0JBQWtCLEdBQUcsWUFBWSxDQUFDLGlCQUFpQixDQUFFLGVBQWUsQ0FBYSxDQUFDO1FBQ3hGLE1BQU0sa0JBQWtCLEdBQUcsWUFBWSxDQUFDLGlCQUFpQixDQUFFLGVBQWUsQ0FBYSxDQUFDO1FBRXhGLGFBQWEsQ0FBQyxJQUFJLEdBQUcsaUJBQWlCLENBQUMsUUFBUSxDQUFFLEVBQUUsQ0FBRSxDQUFDO1FBQ3RELGFBQWEsQ0FBQyxJQUFJLEdBQUcsa0JBQWtCLENBQUMsUUFBUSxDQUFFLEVBQUUsQ0FBRSxDQUFDO1FBRXZELGtCQUFrQixDQUFDLElBQUksR0FBRyxpQkFBaUIsQ0FBQyxRQUFRLENBQUUsRUFBRSxDQUFFLENBQUM7UUFDM0Qsa0JBQWtCLENBQUMsSUFBSSxHQUFHLGtCQUFrQixDQUFDLFFBQVEsQ0FBRSxFQUFFLENBQUUsQ0FBQztRQUU1RCxZQUFZLENBQUMsMEJBQTBCLENBQUUsYUFBYSxFQUFFLFVBQVUsQ0FBRSxDQUFDO0tBQ3hFO0FBQ0wsQ0FBQztBQUVELFNBQVMsb0JBQW9CLENBQUUsWUFBb0IsRUFBRSxhQUFxQjtJQUV0RSxNQUFNLFNBQVMsR0FBRyxDQUFDLENBQUMsZUFBZSxFQUErQixDQUFDO0lBQ25FLDJFQUEyRTtJQUUzRSxJQUFLLFNBQVMsQ0FBQyxTQUFTLENBQUUseUJBQXlCLENBQUMsZUFBZSxDQUFFO1FBQ2pFLE9BQU87SUFFWCxNQUFNLFFBQVEsR0FBRyxJQUFJLG9CQUFvQixFQUFFLENBQUM7SUFFNUMsUUFBUSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxVQUFVLENBQUUsd0JBQXdCLENBQUMsaUJBQWlCLENBQUUsQ0FBRSxDQUFDO0lBQ3RGLFFBQVEsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksY0FBYyxDQUFFLFNBQVMsRUFBRSx5QkFBeUIsQ0FBQyxlQUFlLENBQUUsQ0FBRSxDQUFDO0lBQ3BHLFFBQVEsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksZUFBZSxDQUFFLGdEQUFnRCxDQUFFLENBQUUsQ0FBQztJQUNqRyxRQUFRLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLFVBQVUsQ0FBRSxHQUFHLENBQUUsQ0FBRSxDQUFDO0lBRS9DLElBQUssWUFBWSxJQUFJLGVBQWUsRUFDcEM7UUFDSSxNQUFNLGdCQUFnQixHQUFHLGFBQWEsSUFBSSxlQUFlLENBQUMsQ0FBQyxDQUFDLHlEQUF5RCxDQUFDLENBQUMsQ0FBQywwQ0FBMEMsQ0FBQztRQUNuSyxRQUFRLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGVBQWUsQ0FBRSxnQkFBZ0IsQ0FBRSxDQUFFLENBQUM7S0FDcEU7SUFFRCxlQUFlLENBQUUsUUFBUSxDQUFFLENBQUM7QUFDaEMsQ0FBQztBQUVELFNBQVMscUJBQXFCO0lBRTFCLE1BQU0sU0FBUyxHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQStCLENBQUM7SUFDbkUsU0FBUyxDQUFDLFdBQVcsQ0FBRSx5QkFBeUIsQ0FBQyxlQUFlLENBQUUsQ0FBQztJQUVuRSxNQUFNLFlBQVksR0FBRyxTQUFTLENBQUMsZUFBZSxFQUFFLENBQUM7SUFDakQsSUFBSyxZQUFZLElBQUksSUFBSSxFQUN6QjtRQUNJLFlBQVksQ0FBQyxXQUFXLENBQUUseUJBQXlCLENBQUMsZ0JBQWdCLENBQUUsQ0FBQztLQUMxRTtBQUNMLENBQUM7QUFFRCxTQUFTLGVBQWU7SUFFcEIsTUFBTSxTQUFTLEdBQUcsQ0FBQyxDQUFDLGVBQWUsRUFBK0IsQ0FBQztJQUVuRSxJQUFLLFNBQVMsQ0FBQyxTQUFTLENBQUUseUJBQXlCLENBQUMsZUFBZSxDQUFFO1FBQ2pFLE9BQU87SUFFWCxNQUFNLFFBQVEsR0FBRyxJQUFJLG9CQUFvQixFQUFFLENBQUM7SUFFNUMsUUFBUSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxjQUFjLENBQUUsU0FBUyxFQUFFLHlCQUF5QixDQUFDLGVBQWUsQ0FBRSxDQUFFLENBQUM7SUFDcEcsUUFBUSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxVQUFVLENBQUUsd0JBQXdCLENBQUMsMEJBQTBCLENBQUUsQ0FBRSxDQUFDO0lBQy9GLFFBQVEsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksaUJBQWlCLENBQUUsU0FBUyxFQUFFLHlCQUF5QixDQUFDLGVBQWUsQ0FBRSxDQUFFLENBQUM7SUFFdkcsZUFBZSxDQUFFLFFBQVEsQ0FBRSxDQUFDO0FBQ2hDLENBQUM7QUFFRCxTQUFTLGdCQUFnQjtJQUVyQixNQUFNLFNBQVMsR0FBRyxDQUFDLENBQUMsZUFBZSxFQUErQixDQUFDO0lBQ25FLE1BQU0sWUFBWSxHQUFHLFNBQVMsQ0FBQyxlQUFlLEVBQUUsQ0FBQztJQUNqRCxZQUFZLEVBQUUsV0FBVyxDQUFFLHlCQUF5QixDQUFDLGdCQUFnQixFQUFFLElBQUksQ0FBRSxDQUFDO0FBQ2xGLENBQUM7QUFFRCxTQUFTLG1CQUFtQjtJQUV4QixNQUFNLEtBQUssR0FBRyxDQUFDLENBQUMsZUFBZSxFQUFFLENBQUM7SUFDbEMsTUFBTSxVQUFVLEdBQUcsQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDLGlCQUFpQixDQUFFLFlBQVksQ0FBYSxDQUFDO0lBQ3BGLE1BQU0sVUFBVSxHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQyxpQkFBaUIsQ0FBRSxZQUFZLENBQWEsQ0FBQztJQUNwRixNQUFNLFdBQVcsR0FBRyxDQUFDLENBQUMsZUFBZSxFQUFFLENBQUMsaUJBQWlCLENBQUUsYUFBYSxDQUFhLENBQUM7SUFFdEYsS0FBSyxDQUFDLFdBQVcsQ0FBRSx5QkFBeUIsQ0FBQyxPQUFPLENBQUUsQ0FBQztJQUN2RCxVQUFVLENBQUMsV0FBVyxDQUFFLHlCQUF5QixDQUFDLE9BQU8sQ0FBRSxDQUFDO0lBQzVELFVBQVUsQ0FBQyxXQUFXLENBQUUseUJBQXlCLENBQUMsV0FBVyxDQUFFLENBQUM7SUFDaEUsVUFBVSxDQUFDLFdBQVcsQ0FBRSx5QkFBeUIsQ0FBQyxPQUFPLENBQUUsQ0FBQztJQUM1RCxXQUFXLENBQUMsV0FBVyxDQUFFLHlCQUF5QixDQUFDLE9BQU8sQ0FBRSxDQUFDO0FBQ2pFLENBQUM7QUFFRCxTQUFTLHlCQUF5QjtJQUU5QixNQUFNLEtBQUssR0FBRyxDQUFDLENBQUMsZUFBZSxFQUFFLENBQUM7SUFDbEMsTUFBTSxVQUFVLEdBQUcsQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDLGlCQUFpQixDQUFFLFlBQVksQ0FBYSxDQUFDO0lBRXBGLE1BQU0sUUFBUSxHQUFHLElBQUksb0JBQW9CLEVBQUUsQ0FBQztJQUU1QyxRQUFRLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGNBQWMsQ0FBRSxLQUFLLEVBQUUseUJBQXlCLENBQUMsT0FBTyxDQUFFLENBQUUsQ0FBQztJQUN4RixRQUFRLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLFVBQVUsQ0FBRSxHQUFHLENBQUUsQ0FBRSxDQUFDO0lBQy9DLFFBQVEsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksY0FBYyxDQUFFLFVBQVUsRUFBRSx5QkFBeUIsQ0FBQyxPQUFPLENBQUUsQ0FBRSxDQUFDO0lBRTdGLGVBQWUsQ0FBRSxRQUFRLENBQUUsQ0FBQztBQUNoQyxDQUFDO0FBRUQsU0FBUywwQkFBMEI7SUFFL0IsTUFBTSxVQUFVLEdBQUcsQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDLGlCQUFpQixDQUFFLFlBQVksQ0FBYSxDQUFDO0lBQ3BGLE1BQU0sVUFBVSxHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQyxpQkFBaUIsQ0FBRSxZQUFZLENBQWEsQ0FBQztJQUNwRixNQUFNLFdBQVcsR0FBRyxDQUFDLENBQUMsZUFBZSxFQUFFLENBQUMsaUJBQWlCLENBQUUsYUFBYSxDQUFhLENBQUM7SUFDdEYsTUFBTSxZQUFZLEdBQUcsQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDLGlCQUFpQixDQUFFLGFBQWEsQ0FBOEIsQ0FBQztJQUV4RyxNQUFNLFFBQVEsR0FBRyxJQUFJLG9CQUFvQixFQUFFLENBQUM7SUFFNUMsUUFBUSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxVQUFVLENBQUUsR0FBRyxDQUFFLENBQUUsQ0FBQztJQUMvQyxRQUFRLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGNBQWMsQ0FBRSxVQUFVLEVBQUUseUJBQXlCLENBQUMsV0FBVyxDQUFFLENBQUUsQ0FBQztJQUNqRyxRQUFRLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGNBQWMsQ0FBRSxVQUFVLEVBQUUseUJBQXlCLENBQUMsT0FBTyxDQUFFLENBQUUsQ0FBQztJQUM3RixRQUFRLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGVBQWUsQ0FBRSxrQkFBa0IsQ0FBRSxDQUFFLENBQUM7SUFDbkUsUUFBUSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxVQUFVLENBQUUsSUFBSSxDQUFFLENBQUUsQ0FBQztJQUNoRCxRQUFRLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGNBQWMsQ0FBRSxXQUFXLEVBQUUseUJBQXlCLENBQUMsT0FBTyxDQUFFLENBQUUsQ0FBQztJQUM5RixRQUFRLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGlCQUFpQixDQUFFO1FBRTFDLFlBQVksQ0FBQyxlQUFlLENBQUUsRUFBRSxFQUFFLElBQUksRUFBRSxJQUFJLEVBQUUsSUFBSSxDQUFFLENBQUM7UUFDckQsWUFBWSxDQUFDLHdCQUF3QixDQUFFLElBQUksQ0FBRSxDQUFDO1FBQzlDLFlBQVksQ0FBQyxjQUFjLEVBQUUsQ0FBQztJQUNsQyxDQUFDLENBQUUsQ0FBRSxDQUFDO0lBRU4sZUFBZSxDQUFFLFFBQVEsQ0FBRSxDQUFDO0FBQ2hDLENBQUM7QUFFRCxTQUFTLGdCQUFnQixDQUFFLGFBQXFCLEVBQUUsYUFBcUIsRUFBRSxlQUF1QixFQUFFLGVBQXVCO0lBRXJILE1BQU0sS0FBSyxHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQztJQUNsQyxNQUFNLFVBQVUsR0FBRyxDQUFDLENBQUMsZUFBZSxFQUFFLENBQUMsaUJBQWlCLENBQUUsWUFBWSxDQUFhLENBQUM7SUFDcEYsTUFBTSxVQUFVLEdBQUcsQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDLGlCQUFpQixDQUFFLFlBQVksQ0FBYSxDQUFDO0lBQ3BGLE1BQU0sV0FBVyxHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQyxpQkFBaUIsQ0FBRSxhQUFhLENBQWEsQ0FBQztJQUN0RixNQUFNLFlBQVksR0FBRyxDQUFDLENBQUMsZUFBZSxFQUFFLENBQUMsaUJBQWlCLENBQUUsYUFBYSxDQUE4QixDQUFDO0lBRXhHLE1BQU0sY0FBYyxHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQyxpQkFBaUIsQ0FBRSxnQkFBZ0IsQ0FBYSxDQUFDO0lBQzVGLE1BQU0sY0FBYyxHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQyxpQkFBaUIsQ0FBRSxnQkFBZ0IsQ0FBYSxDQUFDO0lBRTVGLE1BQU0sY0FBYyxHQUFHLGFBQWEsR0FBRyxhQUFhLENBQUM7SUFDckQsTUFBTSxjQUFjLEdBQUcsYUFBYSxHQUFHLGFBQWEsQ0FBQztJQUVyRCxNQUFNLFVBQVUsR0FBRyxDQUFDLENBQUMsZUFBZSxFQUFFLENBQUMsaUJBQWlCLENBQUUsa0JBQWtCLENBQWEsQ0FBQztJQUMxRixNQUFNLFVBQVUsR0FBRyxDQUFDLENBQUMsZUFBZSxFQUFFLENBQUMsaUJBQWlCLENBQUUsa0JBQWtCLENBQWEsQ0FBQztJQUUxRixVQUFVLENBQUMsUUFBUSxDQUFFLGNBQWMsQ0FBQyxDQUFDLENBQUMseUVBQXlFLENBQUMsQ0FBQyxDQUFDLG9FQUFvRSxDQUFFLENBQUM7SUFDekwsVUFBVSxDQUFDLFFBQVEsQ0FBRSxjQUFjLENBQUMsQ0FBQyxDQUFDLHlFQUF5RSxDQUFDLENBQUMsQ0FBQyxvRUFBb0UsQ0FBRSxDQUFDO0lBRXpMLFVBQVUsQ0FBQyxXQUFXLENBQUUseUJBQXlCLENBQUMsTUFBTSxFQUFFLGNBQWMsQ0FBRSxDQUFDO0lBQzNFLFVBQVUsQ0FBQyxXQUFXLENBQUUseUJBQXlCLENBQUMsTUFBTSxFQUFFLGNBQWMsQ0FBRSxDQUFDO0lBRTNFLGNBQWMsQ0FBQyxXQUFXLENBQUUseUJBQXlCLENBQUMsT0FBTyxFQUFFLGNBQWMsQ0FBRSxDQUFDO0lBQ2hGLGNBQWMsQ0FBQyxXQUFXLENBQUUseUJBQXlCLENBQUMsT0FBTyxFQUFFLGNBQWMsQ0FBRSxDQUFDO0lBRWhGLE1BQU0sWUFBWSxHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQyxpQkFBaUIsQ0FBRSxjQUFjLENBQWEsQ0FBQztJQUN4RixNQUFNLFlBQVksR0FBRyxDQUFDLENBQUMsZUFBZSxFQUFFLENBQUMsaUJBQWlCLENBQUUsY0FBYyxDQUFhLENBQUM7SUFFeEYsWUFBWSxDQUFDLFdBQVcsQ0FBRSx5QkFBeUIsQ0FBQyxPQUFPLEVBQUUsSUFBSSxDQUFFLENBQUM7SUFDcEUsWUFBWSxDQUFDLFdBQVcsQ0FBRSx5QkFBeUIsQ0FBQyxPQUFPLEVBQUUsSUFBSSxDQUFFLENBQUM7SUFFcEUsWUFBWSxDQUFDLG9CQUFvQixDQUFFLE9BQU8sRUFBRSxhQUFhLENBQUUsQ0FBQztJQUM1RCxZQUFZLENBQUMsb0JBQW9CLENBQUUsT0FBTyxFQUFFLGFBQWEsQ0FBRSxDQUFDO0lBRTVELFlBQVksQ0FBQyxJQUFJLEdBQUcsSUFBSSxDQUFDO0lBQ3pCLFlBQVksQ0FBQyxJQUFJLEdBQUcsSUFBSSxDQUFDO0lBRXpCLFlBQVksQ0FBQyxJQUFJLEdBQUcsQ0FBQyxDQUFDLFFBQVEsQ0FBRSxjQUFjLENBQUMsQ0FBQyxDQUFDLGdEQUFnRCxDQUFDLENBQUMsQ0FBQyx5Q0FBeUMsRUFBRSxZQUFZLENBQUUsQ0FBQztJQUM5SixZQUFZLENBQUMsSUFBSSxHQUFHLENBQUMsQ0FBQyxRQUFRLENBQUUsY0FBYyxDQUFDLENBQUMsQ0FBQyxnREFBZ0QsQ0FBQyxDQUFDLENBQUMseUNBQXlDLEVBQUUsWUFBWSxDQUFFLENBQUM7SUFFOUosTUFBTSxjQUFjLEdBQUcsQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDLGlCQUFpQixDQUFFLGdCQUFnQixDQUFFLENBQUM7SUFDakYsTUFBTSxjQUFjLEdBQUcsQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDLGlCQUFpQixDQUFFLGdCQUFnQixDQUFFLENBQUM7SUFFakYsY0FBYyxDQUFDLFdBQVcsQ0FBRSx5QkFBeUIsQ0FBQyxPQUFPLEVBQUUsY0FBYyxDQUFFLENBQUM7SUFDaEYsY0FBYyxDQUFDLFdBQVcsQ0FBRSx5QkFBeUIsQ0FBQyxPQUFPLEVBQUUsY0FBYyxDQUFFLENBQUM7SUFFaEYsTUFBTSxRQUFRLEdBQUcsQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDLGlCQUFpQixDQUFFLFVBQVUsQ0FBRSxDQUFDO0lBQ3JFLE1BQU0sUUFBUSxHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQyxpQkFBaUIsQ0FBRSxVQUFVLENBQUUsQ0FBQztJQUVyRSxRQUFRLENBQUMsV0FBVyxDQUFFLHlCQUF5QixDQUFDLE9BQU8sRUFBRSxDQUFDLGNBQWMsQ0FBRSxDQUFDO0lBQzNFLFFBQVEsQ0FBQyxXQUFXLENBQUUseUJBQXlCLENBQUMsT0FBTyxFQUFFLENBQUMsY0FBYyxDQUFFLENBQUM7SUFFM0UsTUFBTSxxQkFBcUIsR0FBRyxDQUFDLENBQUMsZUFBZSxFQUFFLENBQUMsaUJBQWlCLENBQUUsdUJBQXVCLENBQUUsQ0FBQztJQUMvRixNQUFNLHFCQUFxQixHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQyxpQkFBaUIsQ0FBRSx1QkFBdUIsQ0FBRSxDQUFDO0lBRS9GLHFCQUFxQixDQUFDLFdBQVcsQ0FBRSx5QkFBeUIsQ0FBQyxPQUFPLEVBQUUsZUFBZSxHQUFHLENBQUMsQ0FBRSxDQUFDO0lBQzVGLHFCQUFxQixDQUFDLFdBQVcsQ0FBRSx5QkFBeUIsQ0FBQyxPQUFPLEVBQUUsZUFBZSxHQUFHLENBQUMsQ0FBRSxDQUFDO0lBRTVGLEtBQU0sSUFBSSxDQUFDLEdBQUcsQ0FBQyxFQUFFLENBQUMsR0FBRyxlQUFlLEVBQUUsRUFBRSxDQUFDLEVBQ3pDO1FBQ0ksTUFBTSxNQUFNLEdBQUcsQ0FBQyxDQUFDLFdBQVcsQ0FBRSxPQUFPLEVBQUUscUJBQXFCLEVBQUUsU0FBUyxDQUFFLENBQUM7UUFDMUUsTUFBTSxDQUFDLGtCQUFrQixDQUFFLFFBQVEsQ0FBRSxDQUFDO0tBQ3pDO0lBRUQsS0FBTSxJQUFJLENBQUMsR0FBRyxDQUFDLEVBQUUsQ0FBQyxHQUFHLGVBQWUsRUFBRSxFQUFFLENBQUMsRUFDekM7UUFDSSxNQUFNLE1BQU0sR0FBRyxDQUFDLENBQUMsV0FBVyxDQUFFLE9BQU8sRUFBRSxxQkFBcUIsRUFBRSxTQUFTLENBQUUsQ0FBQztRQUMxRSxNQUFNLENBQUMsa0JBQWtCLENBQUUsUUFBUSxDQUFFLENBQUM7S0FDekM7SUFFRCxNQUFNLFFBQVEsR0FBRyxJQUFJLG9CQUFvQixFQUFFLENBQUM7SUFFNUMsUUFBUSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxVQUFVLENBQUUsR0FBRyxDQUFFLENBQUUsQ0FBQztJQUMvQyxRQUFRLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGNBQWMsQ0FBRSxLQUFLLEVBQUUseUJBQXlCLENBQUMsT0FBTyxDQUFFLENBQUUsQ0FBQztJQUN4RixRQUFRLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGNBQWMsQ0FBRSxVQUFVLEVBQUUseUJBQXlCLENBQUMsT0FBTyxDQUFFLENBQUUsQ0FBQztJQUM3RixRQUFRLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGNBQWMsQ0FBRSxVQUFVLEVBQUUseUJBQXlCLENBQUMsT0FBTyxDQUFFLENBQUUsQ0FBQztJQUM3RixRQUFRLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGVBQWUsQ0FBRSxrQkFBa0IsQ0FBRSxDQUFFLENBQUM7SUFDbkUsUUFBUSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxVQUFVLENBQUUsSUFBSSxDQUFFLENBQUUsQ0FBQztJQUNoRCxRQUFRLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGNBQWMsQ0FBRSxXQUFXLEVBQUUseUJBQXlCLENBQUMsT0FBTyxDQUFFLENBQUUsQ0FBQztJQUM5RixRQUFRLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGlCQUFpQixDQUFFO1FBRTFDLFlBQVksQ0FBQyxlQUFlLENBQUUsRUFBRSxFQUFFLElBQUksRUFBRSxJQUFJLEVBQUUsSUFBSSxDQUFFLENBQUM7UUFDckQsWUFBWSxDQUFDLHdCQUF3QixDQUFFLElBQUksQ0FBRSxDQUFDO1FBQzlDLFlBQVksQ0FBQyxjQUFjLEVBQUUsQ0FBQztJQUNsQyxDQUFDLENBQUUsQ0FBRSxDQUFDO0lBRU4sZUFBZSxDQUFFLFFBQVEsQ0FBRSxDQUFDO0FBQ2hDLENBQUMifQ==