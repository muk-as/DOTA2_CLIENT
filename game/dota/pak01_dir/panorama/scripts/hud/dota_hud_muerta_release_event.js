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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZG90YV9odWRfbXVlcnRhX3JlbGVhc2VfZXZlbnQuanMiLCJzb3VyY2VSb290IjoiIiwic291cmNlcyI6WyIuLi8uLi8uLi8uLi8uLi9jb250ZW50L2RvdGEvcGFub3JhbWEvc2NyaXB0cy9odWQvZG90YV9odWRfbXVlcnRhX3JlbGVhc2VfZXZlbnQudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IjtBQUFBLHFDQUFxQztBQUNyQywrQ0FBK0M7QUFDL0Msb0RBQW9EO0FBRXBELE1BQU0sd0JBQXdCLEdBQzlCO0lBQ0ksaUJBQWlCLEVBQUUsR0FBRztJQUN0QiwwQkFBMEIsRUFBRSxHQUFHO0lBQy9CLGdDQUFnQyxFQUFFLEdBQUc7SUFDckMsNkJBQTZCLEVBQUUsR0FBRztDQUNyQyxDQUFDO0FBRUYsTUFBTSx5QkFBeUIsR0FDL0I7SUFDSSxlQUFlLEVBQUUsaUJBQWlCO0lBQ2xDLGVBQWUsRUFBRSxpQkFBaUI7SUFDbEMsbUJBQW1CLEVBQUUscUJBQXFCO0lBQzFDLGVBQWUsRUFBRSxpQkFBaUI7SUFDbEMsZ0JBQWdCLEVBQUUsa0JBQWtCO0lBQ3BDLE9BQU8sRUFBRSxTQUFTO0lBQ2xCLFNBQVMsRUFBRSxXQUFXO0lBQ3RCLFlBQVksRUFBRSxjQUFjO0lBQzVCLG9CQUFvQixFQUFFLHNCQUFzQjtJQUM1QyxvQkFBb0IsRUFBRSxzQkFBc0I7SUFDNUMsT0FBTyxFQUFFLFNBQVM7SUFDbEIsUUFBUSxFQUFFLFVBQVU7SUFDcEIsY0FBYyxFQUFFLGdCQUFnQjtJQUNoQyxpQkFBaUIsRUFBRSxtQkFBbUI7SUFDdEMsSUFBSSxFQUFFLE1BQU07SUFDWixNQUFNLEVBQUUsUUFBUTtJQUNoQixnQkFBZ0IsRUFBRSxrQkFBa0I7SUFDcEMsYUFBYSxFQUFFLGVBQWU7SUFDOUIsT0FBTyxFQUFFLFNBQVM7SUFDbEIsV0FBVyxFQUFFLGFBQWE7SUFDMUIsTUFBTSxFQUFFLFFBQVE7Q0FDbkIsQ0FBQztBQUVGLE1BQU0sZUFBZSxHQUFHLEdBQUcsQ0FBQztBQUU1QixTQUFTLGdCQUFnQixDQUFFLFdBQW1CLEVBQUUsTUFBYyxFQUFFLFNBQWtCLEVBQUUsU0FBaUIsRUFBRSxlQUF1QixFQUFFLEtBQWM7SUFFMUksTUFBTSxTQUFTLEdBQUcsQ0FBQyxDQUFDLGVBQWUsRUFBK0IsQ0FBQztJQUNuRSxNQUFNLGtCQUFrQixHQUFHLFNBQVMsQ0FBQyxvQkFBb0IsRUFBRSxDQUFDO0lBQzVELE1BQU0sc0JBQXNCLEdBQUcsa0JBQWtCLEVBQUUsU0FBUyxDQUFFLHdCQUF3QixDQUFFLENBQUM7SUFFekYsSUFBSyxzQkFBc0IsSUFBSSxJQUFJLEVBQ25DO1FBQ0ksTUFBTSxZQUFZLEdBQUcsQ0FBQyxDQUFDLFdBQVcsQ0FBRSx1Q0FBdUMsRUFBRSxzQkFBc0IsRUFBRSxTQUFTLENBQUUsQ0FBQztRQUVqSCxZQUFZLENBQUMsUUFBUSxDQUFFLEtBQUssQ0FBQyxDQUFDLENBQUMseUJBQXlCLENBQUMsSUFBSSxDQUFDLENBQUMsQ0FBQyx5QkFBeUIsQ0FBQyxNQUFNLENBQUUsQ0FBQztRQUVuRyxZQUFZLENBQUMsUUFBUSxDQUFFLHlCQUF5QixDQUFDLFlBQVksQ0FBRSxDQUFDO1FBR2hFLE1BQU0sZ0JBQWdCLEdBQUcsWUFBWSxDQUFDLGlCQUFpQixDQUFFLGtCQUFrQixDQUFhLENBQUM7UUFDekYsTUFBTSxXQUFXLEdBQUcsWUFBWSxDQUFDLGlCQUFpQixDQUFFLGFBQWEsQ0FBYSxDQUFDO1FBQy9FLE1BQU0sY0FBYyxHQUFHLFlBQVksQ0FBQyxpQkFBaUIsQ0FBRSxnQkFBZ0IsQ0FBYSxDQUFDO1FBRXJGLGNBQWMsQ0FBQyxRQUFRLENBQUUsU0FBUyxDQUFDLENBQUMsQ0FBQyw0REFBNEQsQ0FBQyxDQUFDLENBQUMseURBQXlELENBQUUsQ0FBQztRQUVoSyxnQkFBZ0IsQ0FBQyxJQUFJLEdBQUcsSUFBSSxDQUFDO1FBQzdCLGdCQUFnQixDQUFDLElBQUksR0FBRyxXQUFXLENBQUM7UUFFcEMsV0FBVyxDQUFDLElBQUksR0FBRyxJQUFJLENBQUM7UUFDeEIsV0FBVyxDQUFDLElBQUksR0FBRyxNQUFNLENBQUM7UUFFMUIsTUFBTSxTQUFTLEdBQUcsWUFBWSxDQUFDLGlCQUFpQixDQUFFLFdBQVcsQ0FBcUIsQ0FBQztRQUNuRixTQUFTLENBQUMsTUFBTSxHQUFHLGVBQWUsSUFBSSxDQUFDLENBQUMsQ0FBQyxDQUFDLGVBQWUsQ0FBQyxDQUFDLENBQUMsT0FBTyxDQUFDLGlCQUFpQixDQUFFLFNBQVMsQ0FBRSxDQUFDO1FBRW5HLE1BQU0sb0JBQW9CLEdBQUcsSUFBSSxvQkFBb0IsRUFBRSxDQUFDO1FBQ3hELG9CQUFvQixDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxVQUFVLENBQUUsd0JBQXdCLENBQUMsZ0NBQWdDLENBQUUsQ0FBRSxDQUFDO1FBQ2pILG9CQUFvQixDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxjQUFjLENBQUUsWUFBWSxFQUFFLHlCQUF5QixDQUFDLE9BQU8sQ0FBRSxDQUFFLENBQUM7UUFDM0csb0JBQW9CLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGlCQUFpQixDQUFFLGNBQWMsWUFBWSxDQUFDLFdBQVcsQ0FBRSxHQUFHLENBQUUsQ0FBQyxDQUFDLENBQUMsQ0FBRSxDQUFFLENBQUM7UUFFL0csZUFBZSxDQUFFLG9CQUFvQixDQUFFLENBQUM7S0FDM0M7QUFDTCxDQUFDO0FBRUQsU0FBUyxtQkFBbUIsQ0FBRSxRQUE4QixFQUFFLFlBQXFCLEVBQUUsWUFBcUIsRUFBRSxTQUFpQixFQUFFLGNBQXNCLEVBQUUsWUFBc0M7SUFFekwsUUFBUSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxjQUFjLENBQUUsWUFBWSxFQUFFLHlCQUF5QixDQUFDLFFBQVEsQ0FBRSxDQUFFLENBQUM7SUFDaEcsUUFBUSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxjQUFjLENBQUUsWUFBWSxFQUFFLGNBQWMsQ0FBRSxDQUFFLENBQUM7SUFFNUUsUUFBUSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxVQUFVLENBQUUsR0FBRyxDQUFFLENBQUUsQ0FBQztJQUUvQyxRQUFRLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGlCQUFpQixDQUFFO1FBRTFDLFlBQVksQ0FBQyxlQUFlLENBQUUsRUFBRSxFQUFFLElBQUksRUFBRSxJQUFJLEVBQUUsSUFBSSxDQUFFLENBQUM7UUFDckQsWUFBWSxDQUFDLHdCQUF3QixDQUFFLElBQUksQ0FBRSxDQUFDO1FBQzlDLFlBQVksQ0FBQyxjQUFjLEVBQUUsQ0FBQztJQUNsQyxDQUFDLENBQUUsQ0FBRSxDQUFDO0lBRU4sUUFBUSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxVQUFVLENBQUUsSUFBSSxDQUFFLENBQUUsQ0FBQztJQUVoRCxRQUFRLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGlCQUFpQixDQUFFO1FBRTFDLFlBQVksQ0FBQyxJQUFJLEdBQUcsU0FBUyxDQUFDLFFBQVEsQ0FBRSxFQUFFLENBQUUsQ0FBQztRQUM3QyxZQUFZLENBQUMsUUFBUSxDQUFFLHlCQUF5QixDQUFDLFNBQVMsQ0FBRSxDQUFDO0lBQ2pFLENBQUMsQ0FBRSxDQUFFLENBQUM7SUFFTixRQUFRLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLFVBQVUsQ0FBRSx3QkFBd0IsQ0FBQyw2QkFBNkIsQ0FBRSxDQUFFLENBQUM7SUFDbEcsUUFBUSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxpQkFBaUIsQ0FBRSxZQUFZLEVBQUUseUJBQXlCLENBQUMsUUFBUSxDQUFFLENBQUUsQ0FBQztJQUNuRyxRQUFRLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGlCQUFpQixDQUFFLFlBQVksRUFBRSx5QkFBeUIsQ0FBQyxTQUFTLENBQUUsQ0FBRSxDQUFDO0lBQ3BHLFFBQVEsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksaUJBQWlCLENBQUUsWUFBWSxFQUFFLGNBQWMsQ0FBRSxDQUFFLENBQUM7QUFDbkYsQ0FBQztBQUVELFNBQVMsbUJBQW1CLENBQUUsU0FBaUIsRUFBRSxLQUFjLEVBQUUsZUFBdUI7SUFFcEYsTUFBTSxRQUFRLEdBQUcsSUFBSSxvQkFBb0IsRUFBRSxDQUFDO0lBQzVDLFFBQVEsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksZUFBZSxDQUFFLEtBQUssQ0FBQyxDQUFDLENBQUMsc0NBQXNDLENBQUMsQ0FBQyxDQUFDLHdDQUF3QyxDQUFFLENBQUUsQ0FBQztJQUUxSSxNQUFNLGtCQUFrQixHQUFHLE9BQU8sQ0FBQyxpQkFBaUIsQ0FBRSxPQUFPLENBQUMsY0FBYyxFQUFFLENBQUUsQ0FBQztJQUVqRixJQUFLLEtBQUssSUFBSSxrQkFBa0IsSUFBSSxlQUFlLEVBQ25EO1FBQ0ksTUFBTSxVQUFVLEdBQUcsSUFBSSxvQkFBb0IsRUFBRSxDQUFDO1FBQzlDLFVBQVUsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksVUFBVSxDQUFFLEdBQUcsQ0FBRSxDQUFFLENBQUM7UUFDakQsVUFBVSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxlQUFlLENBQUUsZ0NBQWdDLENBQUUsQ0FBRSxDQUFDO1FBQ25GLGVBQWUsQ0FBRSxVQUFVLENBQUUsQ0FBQztLQUNqQztJQUVELE1BQU0sU0FBUyxHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQStCLENBQUM7SUFFbkUsZ0JBQWdCLENBQ1osQ0FBQyxDQUFDLFFBQVEsQ0FBRSxLQUFLLENBQUMsQ0FBQyxDQUFDLHVEQUF1RCxDQUFDLENBQUMsQ0FBQyx5REFBeUQsRUFBRSxTQUFTLENBQUUsRUFDcEosQ0FBQyxDQUFDLFFBQVEsQ0FBRSxLQUFLLENBQUMsQ0FBQyxDQUFDLGlEQUFpRCxDQUFDLENBQUMsQ0FBQyxtREFBbUQsRUFBRSxTQUFTLENBQUUsRUFDeEksSUFBSSxFQUNKLE9BQU8sQ0FBQyxjQUFjLEVBQUUsRUFDeEIsZUFBZSxFQUNmLEtBQUssQ0FDUixDQUFDO0lBRUYsTUFBTSxZQUFZLEdBQUcsU0FBUyxDQUFDLGVBQWUsRUFBRSxDQUFDO0lBQ2pELElBQUssWUFBWSxJQUFJLElBQUksRUFDekI7UUFDSSxNQUFNLFlBQVksR0FBRyxZQUFZLENBQUMsaUJBQWlCLENBQUUsVUFBVSxDQUFhLENBQUM7UUFDN0UsTUFBTSxpQkFBaUIsR0FBRyxZQUFZLENBQUMsaUJBQWlCLENBQUUsZUFBZSxDQUFhLENBQUM7UUFFdkYsTUFBTSxZQUFZLEdBQUcsWUFBWSxDQUFDLGlCQUFpQixDQUFFLGlCQUFpQixDQUE4QixDQUFDO1FBRXJHLG1CQUFtQixDQUFFLFFBQVEsRUFBRSxZQUFZLEVBQUUsWUFBWSxFQUFFLFNBQVMsRUFBRSx5QkFBeUIsQ0FBQyxpQkFBaUIsRUFBRSxZQUFZLENBQUUsQ0FBQztRQUVsSSxpQkFBaUIsQ0FBQyxJQUFJLEdBQUcsU0FBUyxDQUFDLFFBQVEsQ0FBRSxFQUFFLENBQUUsQ0FBQztLQUNyRDtJQUVELGVBQWUsQ0FBRSxRQUFRLENBQUUsQ0FBQztBQUNoQyxDQUFDO0FBRUQsU0FBUyxnQkFBZ0IsQ0FBRSxTQUFpQixFQUFFLEtBQWMsRUFBRSxpQkFBeUI7SUFFbkYsTUFBTSxRQUFRLEdBQUcsSUFBSSxvQkFBb0IsRUFBRSxDQUFDO0lBQzVDLFFBQVEsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksZUFBZSxDQUFFLHdDQUF3QyxDQUFFLENBQUUsQ0FBQztJQUV6RixNQUFNLGtCQUFrQixHQUFHLE9BQU8sQ0FBQyxpQkFBaUIsQ0FBRSxPQUFPLENBQUMsY0FBYyxFQUFFLENBQUUsQ0FBQztJQUVqRixJQUFLLEtBQUssSUFBSSxrQkFBa0IsSUFBSSxlQUFlLEVBQ25EO1FBQ0ksUUFBUSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxlQUFlLENBQUUsa0NBQWtDLENBQUUsQ0FBRSxDQUFDO0tBQ3RGO0lBRUQsTUFBTSxTQUFTLEdBQUcsQ0FBQyxDQUFDLGVBQWUsRUFBK0IsQ0FBQztJQUVuRSxNQUFNLFlBQVksR0FBRyxTQUFTLENBQUMsZUFBZSxFQUFFLENBQUM7SUFDakQsSUFBSyxZQUFZLElBQUksSUFBSSxFQUN6QjtRQUNJLE1BQU0sWUFBWSxHQUFHLFlBQVksQ0FBQyxpQkFBaUIsQ0FBRSxVQUFVLENBQWEsQ0FBQztRQUM3RSxNQUFNLGlCQUFpQixHQUFHLFlBQVksQ0FBQyxpQkFBaUIsQ0FBRSxlQUFlLENBQWEsQ0FBQztRQUV2RixNQUFNLFlBQVksR0FBRyxZQUFZLENBQUMsaUJBQWlCLENBQUUsaUJBQWlCLENBQThCLENBQUM7UUFFckcsbUJBQW1CLENBQUUsUUFBUSxFQUFFLFlBQVksRUFBRSxZQUFZLEVBQUUsU0FBUyxFQUFFLHlCQUF5QixDQUFDLGNBQWMsRUFBRSxZQUFZLENBQUUsQ0FBQztRQUUvSCxpQkFBaUIsQ0FBQyxJQUFJLEdBQUcsU0FBUyxDQUFDLFFBQVEsQ0FBRSxFQUFFLENBQUUsQ0FBQztLQUNyRDtJQUVELGVBQWUsQ0FBRSxRQUFRLENBQUUsQ0FBQztBQUNoQyxDQUFDO0FBRUQsU0FBUyw4QkFBOEIsQ0FBRSxjQUFzQixFQUFFLGVBQXVCLEVBQUUsaUJBQXlCLEVBQUUsa0JBQTBCO0lBRTNJLE1BQU0sVUFBVSxHQUFHLE9BQU8sQ0FBQyxxQkFBcUIsQ0FBRSxlQUFlLENBQUUsQ0FBQztJQUNwRSxNQUFNLFNBQVMsR0FBRyxDQUFDLENBQUMsZUFBZSxFQUErQixDQUFDO0lBRW5FLFNBQVMsQ0FBQywwQkFBMEIsQ0FBRSxhQUFhLEVBQUUsVUFBVSxDQUFFLENBQUM7SUFDbEUsTUFBTSxTQUFTLEdBQUcsU0FBUyxDQUFDLGlCQUFpQixDQUFFLFdBQVcsQ0FBYSxDQUFDO0lBQ3hFLElBQUssU0FBUyxJQUFJLElBQUksRUFDdEI7UUFDSSxTQUFTLENBQUMsUUFBUSxDQUFFLCtFQUErRSxDQUFFLENBQUM7UUFDdEcsU0FBUyxDQUFDLFNBQVMsQ0FBRSxJQUFJLENBQUUsQ0FBQztLQUMvQjtJQUVELE1BQU0sWUFBWSxHQUFHLFNBQVMsQ0FBQyxlQUFlLEVBQUUsQ0FBQztJQUVqRCxJQUFLLFlBQVksSUFBSSxJQUFJLEVBQ3pCO1FBQ0ksTUFBTSxpQkFBaUIsR0FBRyxZQUFZLENBQUMsaUJBQWlCLENBQUUsbUJBQW1CLENBQXFCLENBQUM7UUFDbkcsTUFBTSxpQkFBaUIsR0FBRyxZQUFZLENBQUMsaUJBQWlCLENBQUUsbUJBQW1CLENBQXFCLENBQUM7UUFFbkcsaUJBQWlCLENBQUMsTUFBTSxHQUFHLE9BQU8sQ0FBQyxpQkFBaUIsQ0FBRSxjQUFjLENBQUUsQ0FBQztRQUN2RSxpQkFBaUIsQ0FBQyxNQUFNLEdBQUcsT0FBTyxDQUFDLGlCQUFpQixDQUFFLGVBQWUsQ0FBRSxDQUFDO1FBRXhFLE1BQU0sYUFBYSxHQUFHLFlBQVksQ0FBQyxpQkFBaUIsQ0FBRSxVQUFVLENBQWEsQ0FBQztRQUM5RSxNQUFNLGFBQWEsR0FBRyxZQUFZLENBQUMsaUJBQWlCLENBQUUsVUFBVSxDQUFhLENBQUM7UUFFOUUsTUFBTSxrQkFBa0IsR0FBRyxZQUFZLENBQUMsaUJBQWlCLENBQUUsZUFBZSxDQUFhLENBQUM7UUFDeEYsTUFBTSxrQkFBa0IsR0FBRyxZQUFZLENBQUMsaUJBQWlCLENBQUUsZUFBZSxDQUFhLENBQUM7UUFFeEYsYUFBYSxDQUFDLElBQUksR0FBRyxpQkFBaUIsQ0FBQyxRQUFRLENBQUUsRUFBRSxDQUFFLENBQUM7UUFDdEQsYUFBYSxDQUFDLElBQUksR0FBRyxrQkFBa0IsQ0FBQyxRQUFRLENBQUUsRUFBRSxDQUFFLENBQUM7UUFFdkQsa0JBQWtCLENBQUMsSUFBSSxHQUFHLGlCQUFpQixDQUFDLFFBQVEsQ0FBRSxFQUFFLENBQUUsQ0FBQztRQUMzRCxrQkFBa0IsQ0FBQyxJQUFJLEdBQUcsa0JBQWtCLENBQUMsUUFBUSxDQUFFLEVBQUUsQ0FBRSxDQUFDO1FBRTVELFlBQVksQ0FBQywwQkFBMEIsQ0FBRSxhQUFhLEVBQUUsVUFBVSxDQUFFLENBQUM7S0FDeEU7QUFDTCxDQUFDO0FBRUQsU0FBUyxvQkFBb0IsQ0FBRSxZQUFvQixFQUFFLGFBQXFCO0lBRXRFLE1BQU0sU0FBUyxHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQStCLENBQUM7SUFHbkUsSUFBSyxTQUFTLENBQUMsU0FBUyxDQUFFLHlCQUF5QixDQUFDLGVBQWUsQ0FBRTtRQUNqRSxPQUFPO0lBRVgsTUFBTSxRQUFRLEdBQUcsSUFBSSxvQkFBb0IsRUFBRSxDQUFDO0lBRTVDLFFBQVEsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksVUFBVSxDQUFFLHdCQUF3QixDQUFDLGlCQUFpQixDQUFFLENBQUUsQ0FBQztJQUN0RixRQUFRLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGNBQWMsQ0FBRSxTQUFTLEVBQUUseUJBQXlCLENBQUMsZUFBZSxDQUFFLENBQUUsQ0FBQztJQUNwRyxRQUFRLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGVBQWUsQ0FBRSxnREFBZ0QsQ0FBRSxDQUFFLENBQUM7SUFDakcsUUFBUSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxVQUFVLENBQUUsR0FBRyxDQUFFLENBQUUsQ0FBQztJQUUvQyxJQUFLLFlBQVksSUFBSSxlQUFlLEVBQ3BDO1FBQ0ksTUFBTSxnQkFBZ0IsR0FBRyxhQUFhLElBQUksZUFBZSxDQUFDLENBQUMsQ0FBQyx5REFBeUQsQ0FBQyxDQUFDLENBQUMsMENBQTBDLENBQUM7UUFDbkssUUFBUSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxlQUFlLENBQUUsZ0JBQWdCLENBQUUsQ0FBRSxDQUFDO0tBQ3BFO0lBRUQsZUFBZSxDQUFFLFFBQVEsQ0FBRSxDQUFDO0FBQ2hDLENBQUM7QUFFRCxTQUFTLHFCQUFxQjtJQUUxQixNQUFNLFNBQVMsR0FBRyxDQUFDLENBQUMsZUFBZSxFQUErQixDQUFDO0lBQ25FLFNBQVMsQ0FBQyxXQUFXLENBQUUseUJBQXlCLENBQUMsZUFBZSxDQUFFLENBQUM7SUFFbkUsTUFBTSxZQUFZLEdBQUcsU0FBUyxDQUFDLGVBQWUsRUFBRSxDQUFDO0lBQ2pELElBQUssWUFBWSxJQUFJLElBQUksRUFDekI7UUFDSSxZQUFZLENBQUMsV0FBVyxDQUFFLHlCQUF5QixDQUFDLGdCQUFnQixDQUFFLENBQUM7S0FDMUU7QUFDTCxDQUFDO0FBRUQsU0FBUyxlQUFlO0lBRXBCLE1BQU0sU0FBUyxHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQStCLENBQUM7SUFFbkUsSUFBSyxTQUFTLENBQUMsU0FBUyxDQUFFLHlCQUF5QixDQUFDLGVBQWUsQ0FBRTtRQUNqRSxPQUFPO0lBRVgsTUFBTSxRQUFRLEdBQUcsSUFBSSxvQkFBb0IsRUFBRSxDQUFDO0lBRTVDLFFBQVEsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksY0FBYyxDQUFFLFNBQVMsRUFBRSx5QkFBeUIsQ0FBQyxlQUFlLENBQUUsQ0FBRSxDQUFDO0lBQ3BHLFFBQVEsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksVUFBVSxDQUFFLHdCQUF3QixDQUFDLDBCQUEwQixDQUFFLENBQUUsQ0FBQztJQUMvRixRQUFRLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGlCQUFpQixDQUFFLFNBQVMsRUFBRSx5QkFBeUIsQ0FBQyxlQUFlLENBQUUsQ0FBRSxDQUFDO0lBRXZHLGVBQWUsQ0FBRSxRQUFRLENBQUUsQ0FBQztBQUNoQyxDQUFDO0FBRUQsU0FBUyxnQkFBZ0I7SUFFckIsTUFBTSxTQUFTLEdBQUcsQ0FBQyxDQUFDLGVBQWUsRUFBK0IsQ0FBQztJQUNuRSxNQUFNLFlBQVksR0FBRyxTQUFTLENBQUMsZUFBZSxFQUFFLENBQUM7SUFDakQsWUFBWSxFQUFFLFdBQVcsQ0FBRSx5QkFBeUIsQ0FBQyxnQkFBZ0IsRUFBRSxJQUFJLENBQUUsQ0FBQztBQUNsRixDQUFDO0FBRUQsU0FBUyxtQkFBbUI7SUFFeEIsTUFBTSxLQUFLLEdBQUcsQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDO0lBQ2xDLE1BQU0sVUFBVSxHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQyxpQkFBaUIsQ0FBRSxZQUFZLENBQWEsQ0FBQztJQUNwRixNQUFNLFVBQVUsR0FBRyxDQUFDLENBQUMsZUFBZSxFQUFFLENBQUMsaUJBQWlCLENBQUUsWUFBWSxDQUFhLENBQUM7SUFDcEYsTUFBTSxXQUFXLEdBQUcsQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDLGlCQUFpQixDQUFFLGFBQWEsQ0FBYSxDQUFDO0lBRXRGLEtBQUssQ0FBQyxXQUFXLENBQUUseUJBQXlCLENBQUMsT0FBTyxDQUFFLENBQUM7SUFDdkQsVUFBVSxDQUFDLFdBQVcsQ0FBRSx5QkFBeUIsQ0FBQyxPQUFPLENBQUUsQ0FBQztJQUM1RCxVQUFVLENBQUMsV0FBVyxDQUFFLHlCQUF5QixDQUFDLFdBQVcsQ0FBRSxDQUFDO0lBQ2hFLFVBQVUsQ0FBQyxXQUFXLENBQUUseUJBQXlCLENBQUMsT0FBTyxDQUFFLENBQUM7SUFDNUQsV0FBVyxDQUFDLFdBQVcsQ0FBRSx5QkFBeUIsQ0FBQyxPQUFPLENBQUUsQ0FBQztBQUNqRSxDQUFDO0FBRUQsU0FBUyx5QkFBeUI7SUFFOUIsTUFBTSxLQUFLLEdBQUcsQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDO0lBQ2xDLE1BQU0sVUFBVSxHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQyxpQkFBaUIsQ0FBRSxZQUFZLENBQWEsQ0FBQztJQUVwRixNQUFNLFFBQVEsR0FBRyxJQUFJLG9CQUFvQixFQUFFLENBQUM7SUFFNUMsUUFBUSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxjQUFjLENBQUUsS0FBSyxFQUFFLHlCQUF5QixDQUFDLE9BQU8sQ0FBRSxDQUFFLENBQUM7SUFDeEYsUUFBUSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxVQUFVLENBQUUsR0FBRyxDQUFFLENBQUUsQ0FBQztJQUMvQyxRQUFRLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGNBQWMsQ0FBRSxVQUFVLEVBQUUseUJBQXlCLENBQUMsT0FBTyxDQUFFLENBQUUsQ0FBQztJQUU3RixlQUFlLENBQUUsUUFBUSxDQUFFLENBQUM7QUFDaEMsQ0FBQztBQUVELFNBQVMsMEJBQTBCO0lBRS9CLE1BQU0sVUFBVSxHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQyxpQkFBaUIsQ0FBRSxZQUFZLENBQWEsQ0FBQztJQUNwRixNQUFNLFVBQVUsR0FBRyxDQUFDLENBQUMsZUFBZSxFQUFFLENBQUMsaUJBQWlCLENBQUUsWUFBWSxDQUFhLENBQUM7SUFDcEYsTUFBTSxXQUFXLEdBQUcsQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDLGlCQUFpQixDQUFFLGFBQWEsQ0FBYSxDQUFDO0lBQ3RGLE1BQU0sWUFBWSxHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQyxpQkFBaUIsQ0FBRSxhQUFhLENBQThCLENBQUM7SUFFeEcsTUFBTSxRQUFRLEdBQUcsSUFBSSxvQkFBb0IsRUFBRSxDQUFDO0lBRTVDLFFBQVEsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksVUFBVSxDQUFFLEdBQUcsQ0FBRSxDQUFFLENBQUM7SUFDL0MsUUFBUSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxjQUFjLENBQUUsVUFBVSxFQUFFLHlCQUF5QixDQUFDLFdBQVcsQ0FBRSxDQUFFLENBQUM7SUFDakcsUUFBUSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxjQUFjLENBQUUsVUFBVSxFQUFFLHlCQUF5QixDQUFDLE9BQU8sQ0FBRSxDQUFFLENBQUM7SUFDN0YsUUFBUSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxlQUFlLENBQUUsa0JBQWtCLENBQUUsQ0FBRSxDQUFDO0lBQ25FLFFBQVEsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksVUFBVSxDQUFFLElBQUksQ0FBRSxDQUFFLENBQUM7SUFDaEQsUUFBUSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxjQUFjLENBQUUsV0FBVyxFQUFFLHlCQUF5QixDQUFDLE9BQU8sQ0FBRSxDQUFFLENBQUM7SUFDOUYsUUFBUSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxpQkFBaUIsQ0FBRTtRQUUxQyxZQUFZLENBQUMsZUFBZSxDQUFFLEVBQUUsRUFBRSxJQUFJLEVBQUUsSUFBSSxFQUFFLElBQUksQ0FBRSxDQUFDO1FBQ3JELFlBQVksQ0FBQyx3QkFBd0IsQ0FBRSxJQUFJLENBQUUsQ0FBQztRQUM5QyxZQUFZLENBQUMsY0FBYyxFQUFFLENBQUM7SUFDbEMsQ0FBQyxDQUFFLENBQUUsQ0FBQztJQUVOLGVBQWUsQ0FBRSxRQUFRLENBQUUsQ0FBQztBQUNoQyxDQUFDO0FBRUQsU0FBUyxnQkFBZ0IsQ0FBRSxhQUFxQixFQUFFLGFBQXFCLEVBQUUsZUFBdUIsRUFBRSxlQUF1QjtJQUVySCxNQUFNLEtBQUssR0FBRyxDQUFDLENBQUMsZUFBZSxFQUFFLENBQUM7SUFDbEMsTUFBTSxVQUFVLEdBQUcsQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDLGlCQUFpQixDQUFFLFlBQVksQ0FBYSxDQUFDO0lBQ3BGLE1BQU0sVUFBVSxHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQyxpQkFBaUIsQ0FBRSxZQUFZLENBQWEsQ0FBQztJQUNwRixNQUFNLFdBQVcsR0FBRyxDQUFDLENBQUMsZUFBZSxFQUFFLENBQUMsaUJBQWlCLENBQUUsYUFBYSxDQUFhLENBQUM7SUFDdEYsTUFBTSxZQUFZLEdBQUcsQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDLGlCQUFpQixDQUFFLGFBQWEsQ0FBOEIsQ0FBQztJQUV4RyxNQUFNLGNBQWMsR0FBRyxDQUFDLENBQUMsZUFBZSxFQUFFLENBQUMsaUJBQWlCLENBQUUsZ0JBQWdCLENBQWEsQ0FBQztJQUM1RixNQUFNLGNBQWMsR0FBRyxDQUFDLENBQUMsZUFBZSxFQUFFLENBQUMsaUJBQWlCLENBQUUsZ0JBQWdCLENBQWEsQ0FBQztJQUU1RixNQUFNLGNBQWMsR0FBRyxhQUFhLEdBQUcsYUFBYSxDQUFDO0lBQ3JELE1BQU0sY0FBYyxHQUFHLGFBQWEsR0FBRyxhQUFhLENBQUM7SUFFckQsTUFBTSxVQUFVLEdBQUcsQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDLGlCQUFpQixDQUFFLGtCQUFrQixDQUFhLENBQUM7SUFDMUYsTUFBTSxVQUFVLEdBQUcsQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDLGlCQUFpQixDQUFFLGtCQUFrQixDQUFhLENBQUM7SUFFMUYsVUFBVSxDQUFDLFFBQVEsQ0FBRSxjQUFjLENBQUMsQ0FBQyxDQUFDLHlFQUF5RSxDQUFDLENBQUMsQ0FBQyxvRUFBb0UsQ0FBRSxDQUFDO0lBQ3pMLFVBQVUsQ0FBQyxRQUFRLENBQUUsY0FBYyxDQUFDLENBQUMsQ0FBQyx5RUFBeUUsQ0FBQyxDQUFDLENBQUMsb0VBQW9FLENBQUUsQ0FBQztJQUV6TCxVQUFVLENBQUMsV0FBVyxDQUFFLHlCQUF5QixDQUFDLE1BQU0sRUFBRSxjQUFjLENBQUUsQ0FBQztJQUMzRSxVQUFVLENBQUMsV0FBVyxDQUFFLHlCQUF5QixDQUFDLE1BQU0sRUFBRSxjQUFjLENBQUUsQ0FBQztJQUUzRSxjQUFjLENBQUMsV0FBVyxDQUFFLHlCQUF5QixDQUFDLE9BQU8sRUFBRSxjQUFjLENBQUUsQ0FBQztJQUNoRixjQUFjLENBQUMsV0FBVyxDQUFFLHlCQUF5QixDQUFDLE9BQU8sRUFBRSxjQUFjLENBQUUsQ0FBQztJQUVoRixNQUFNLFlBQVksR0FBRyxDQUFDLENBQUMsZUFBZSxFQUFFLENBQUMsaUJBQWlCLENBQUUsY0FBYyxDQUFhLENBQUM7SUFDeEYsTUFBTSxZQUFZLEdBQUcsQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDLGlCQUFpQixDQUFFLGNBQWMsQ0FBYSxDQUFDO0lBRXhGLFlBQVksQ0FBQyxXQUFXLENBQUUseUJBQXlCLENBQUMsT0FBTyxFQUFFLElBQUksQ0FBRSxDQUFDO0lBQ3BFLFlBQVksQ0FBQyxXQUFXLENBQUUseUJBQXlCLENBQUMsT0FBTyxFQUFFLElBQUksQ0FBRSxDQUFDO0lBRXBFLFlBQVksQ0FBQyxvQkFBb0IsQ0FBRSxPQUFPLEVBQUUsYUFBYSxDQUFFLENBQUM7SUFDNUQsWUFBWSxDQUFDLG9CQUFvQixDQUFFLE9BQU8sRUFBRSxhQUFhLENBQUUsQ0FBQztJQUU1RCxZQUFZLENBQUMsSUFBSSxHQUFHLElBQUksQ0FBQztJQUN6QixZQUFZLENBQUMsSUFBSSxHQUFHLElBQUksQ0FBQztJQUV6QixZQUFZLENBQUMsSUFBSSxHQUFHLENBQUMsQ0FBQyxRQUFRLENBQUUsY0FBYyxDQUFDLENBQUMsQ0FBQyxnREFBZ0QsQ0FBQyxDQUFDLENBQUMseUNBQXlDLEVBQUUsWUFBWSxDQUFFLENBQUM7SUFDOUosWUFBWSxDQUFDLElBQUksR0FBRyxDQUFDLENBQUMsUUFBUSxDQUFFLGNBQWMsQ0FBQyxDQUFDLENBQUMsZ0RBQWdELENBQUMsQ0FBQyxDQUFDLHlDQUF5QyxFQUFFLFlBQVksQ0FBRSxDQUFDO0lBRTlKLE1BQU0sY0FBYyxHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQyxpQkFBaUIsQ0FBRSxnQkFBZ0IsQ0FBRSxDQUFDO0lBQ2pGLE1BQU0sY0FBYyxHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQyxpQkFBaUIsQ0FBRSxnQkFBZ0IsQ0FBRSxDQUFDO0lBRWpGLGNBQWMsQ0FBQyxXQUFXLENBQUUseUJBQXlCLENBQUMsT0FBTyxFQUFFLGNBQWMsQ0FBRSxDQUFDO0lBQ2hGLGNBQWMsQ0FBQyxXQUFXLENBQUUseUJBQXlCLENBQUMsT0FBTyxFQUFFLGNBQWMsQ0FBRSxDQUFDO0lBRWhGLE1BQU0sUUFBUSxHQUFHLENBQUMsQ0FBQyxlQUFlLEVBQUUsQ0FBQyxpQkFBaUIsQ0FBRSxVQUFVLENBQUUsQ0FBQztJQUNyRSxNQUFNLFFBQVEsR0FBRyxDQUFDLENBQUMsZUFBZSxFQUFFLENBQUMsaUJBQWlCLENBQUUsVUFBVSxDQUFFLENBQUM7SUFFckUsUUFBUSxDQUFDLFdBQVcsQ0FBRSx5QkFBeUIsQ0FBQyxPQUFPLEVBQUUsQ0FBQyxjQUFjLENBQUUsQ0FBQztJQUMzRSxRQUFRLENBQUMsV0FBVyxDQUFFLHlCQUF5QixDQUFDLE9BQU8sRUFBRSxDQUFDLGNBQWMsQ0FBRSxDQUFDO0lBRTNFLE1BQU0scUJBQXFCLEdBQUcsQ0FBQyxDQUFDLGVBQWUsRUFBRSxDQUFDLGlCQUFpQixDQUFFLHVCQUF1QixDQUFFLENBQUM7SUFDL0YsTUFBTSxxQkFBcUIsR0FBRyxDQUFDLENBQUMsZUFBZSxFQUFFLENBQUMsaUJBQWlCLENBQUUsdUJBQXVCLENBQUUsQ0FBQztJQUUvRixxQkFBcUIsQ0FBQyxXQUFXLENBQUUseUJBQXlCLENBQUMsT0FBTyxFQUFFLGVBQWUsR0FBRyxDQUFDLENBQUUsQ0FBQztJQUM1RixxQkFBcUIsQ0FBQyxXQUFXLENBQUUseUJBQXlCLENBQUMsT0FBTyxFQUFFLGVBQWUsR0FBRyxDQUFDLENBQUUsQ0FBQztJQUU1RixLQUFNLElBQUksQ0FBQyxHQUFHLENBQUMsRUFBRSxDQUFDLEdBQUcsZUFBZSxFQUFFLEVBQUUsQ0FBQyxFQUN6QztRQUNJLE1BQU0sTUFBTSxHQUFHLENBQUMsQ0FBQyxXQUFXLENBQUUsT0FBTyxFQUFFLHFCQUFxQixFQUFFLFNBQVMsQ0FBRSxDQUFDO1FBQzFFLE1BQU0sQ0FBQyxrQkFBa0IsQ0FBRSxRQUFRLENBQUUsQ0FBQztLQUN6QztJQUVELEtBQU0sSUFBSSxDQUFDLEdBQUcsQ0FBQyxFQUFFLENBQUMsR0FBRyxlQUFlLEVBQUUsRUFBRSxDQUFDLEVBQ3pDO1FBQ0ksTUFBTSxNQUFNLEdBQUcsQ0FBQyxDQUFDLFdBQVcsQ0FBRSxPQUFPLEVBQUUscUJBQXFCLEVBQUUsU0FBUyxDQUFFLENBQUM7UUFDMUUsTUFBTSxDQUFDLGtCQUFrQixDQUFFLFFBQVEsQ0FBRSxDQUFDO0tBQ3pDO0lBRUQsTUFBTSxRQUFRLEdBQUcsSUFBSSxvQkFBb0IsRUFBRSxDQUFDO0lBRTVDLFFBQVEsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksVUFBVSxDQUFFLEdBQUcsQ0FBRSxDQUFFLENBQUM7SUFDL0MsUUFBUSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxjQUFjLENBQUUsS0FBSyxFQUFFLHlCQUF5QixDQUFDLE9BQU8sQ0FBRSxDQUFFLENBQUM7SUFDeEYsUUFBUSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxjQUFjLENBQUUsVUFBVSxFQUFFLHlCQUF5QixDQUFDLE9BQU8sQ0FBRSxDQUFFLENBQUM7SUFDN0YsUUFBUSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxjQUFjLENBQUUsVUFBVSxFQUFFLHlCQUF5QixDQUFDLE9BQU8sQ0FBRSxDQUFFLENBQUM7SUFDN0YsUUFBUSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxlQUFlLENBQUUsa0JBQWtCLENBQUUsQ0FBRSxDQUFDO0lBQ25FLFFBQVEsQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksVUFBVSxDQUFFLElBQUksQ0FBRSxDQUFFLENBQUM7SUFDaEQsUUFBUSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxjQUFjLENBQUUsV0FBVyxFQUFFLHlCQUF5QixDQUFDLE9BQU8sQ0FBRSxDQUFFLENBQUM7SUFDOUYsUUFBUSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxpQkFBaUIsQ0FBRTtRQUUxQyxZQUFZLENBQUMsZUFBZSxDQUFFLEVBQUUsRUFBRSxJQUFJLEVBQUUsSUFBSSxFQUFFLElBQUksQ0FBRSxDQUFDO1FBQ3JELFlBQVksQ0FBQyx3QkFBd0IsQ0FBRSxJQUFJLENBQUUsQ0FBQztRQUM5QyxZQUFZLENBQUMsY0FBYyxFQUFFLENBQUM7SUFDbEMsQ0FBQyxDQUFFLENBQUUsQ0FBQztJQUVOLGVBQWUsQ0FBRSxRQUFRLENBQUUsQ0FBQztBQUNoQyxDQUFDIn0=