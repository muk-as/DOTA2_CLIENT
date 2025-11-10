"use strict";
/// <reference path="../dota.d.ts" />
/// <reference path="../util.ts" />
/// <reference path="../sequence_actions.ts" />
/// <reference path="post_game_progress_utils.ts" />
/// <reference path="post_game_progress_screens.ts" />
// Monster Hunter Progress
class AnimateMonsterHunterScreenAction extends RunSequentialActions {
    data;
    constructor(data) {
        super();
        this.data = data.monster_hunter_progress;
    }
    start() {
        $.Msg('Monster Hunter post game: processing...\n');
        // Create the screen and do a bunch of initial setup
        let panel = StartNewScreen('MonsterHunterProgressScreen');
        panel.BLoadLayoutSnippet("MonsterHunterProgress");
        // Setup the sequence of actions to animate the screen
        let actions = this.actions;
        actions.push(new AddScreenLinkAction(panel, 'MonsterHunterProgress', '#DOTA_PlusPostGame_MonsterHunterProgress', function () {
            panel.SwitchClass('current_screen', 'ShowMonsterHunterProgress');
        }));
        panel.FindChildTraverse("LossExplaination").SetHasClass("LostMatch", !this.data.won_match);
        let monsterHunterProgressMain = panel.FindChildTraverse("MonsterHunterProgressMain");
        let heroIconPanel = panel.FindChildTraverse("HuntHeroIconImage");
        heroIconPanel.heroid = this.data.target_hero_id;
        const locHeroName = GameUI.GetUnitNameLocalized("npc_dota_hero_" + heroIconPanel.heroname);
        panel.SetDialogVariableLocString("hunt_target", locHeroName);
        this.actions.push(new WaitAction(0.1));
        actions.push(new AddClassAction(panel, 'ShowScreen'));
        // Show Logo, sigil and win /loss text
        let monsterHunterProgressTitle = panel.FindChildTraverse("MonsterHunterProgressTitle");
        this.actions.push(new AddClassAction(monsterHunterProgressTitle, 'Reveal'));
        let sigilContainer = panel.FindChildTraverse("SigilContainer");
        this.actions.push(new AddClassAction(sigilContainer, 'Reveal'));
        let winLossDescriptionContainer = panel.FindChildTraverse("WinLossDescriptionContainer");
        this.actions.push(new AddClassAction(winLossDescriptionContainer, 'Reveal'));
        this.actions.push(new WaitAction(0.6));
        // Win loss message
        let winLossContainer = panel.FindChildTraverse("WinLossContainer");
        if (this.data.won_match) {
            this.actions.push(new TriggerClassAction(winLossContainer, 'Success'));
            this.actions.push(new PlaySoundAction("ui.contract_complete"));
        }
        else {
            this.actions.push(new TriggerClassAction(winLossContainer, 'Failure'));
            this.actions.push(new PlaySoundAction("ui.contract_fail"));
        }
        this.actions.push(new WaitAction(0.3));
        let huntStatus = panel.FindChildTraverse("HuntStatus");
        if (this.data.hunt_success) {
            this.actions.push(new TriggerClassAction(huntStatus, 'Success'));
            this.actions.push(new PlaySoundAction("ui.contract_complete"));
        }
        else {
            this.actions.push(new TriggerClassAction(huntStatus, 'Failure'));
            this.actions.push(new PlaySoundAction("ui.contract_fail"));
        }
        this.actions.push(new WaitAction(0.5));
        // Main Hero Image
        {
            //let huntTargetImage = panel.FindChildTraverse("InvestigationHeroImage") as MonsterHunterHeroImagePanel_t;
            //huntTargetImage.codex_id = this.data.target_hero_id;
            //huntTargetImage.unlock_progress = 4;
            panel.SetDialogVariableInt("target_hero_id", this.data.target_hero_id);
        }
        // Material Rewards
        let materialRewardsListPanels = [
            panel.FindChildTraverse("MaterialRewardListMatch"),
            panel.FindChildTraverse("MaterialRewardListHunt"),
            panel.FindChildTraverse("MaterialRewardListDenial")
        ];
        let matchRewardsContainer = panel.FindChildTraverse("MatchRewardsContainer");
        this.actions.push(new AddClassAction(matchRewardsContainer, 'AnimatingRewards'));
        // (1) Match Material Rewards
        // if (this.data.won_match) {
        // 	this.actions.push(new TriggerClassAction(matchRewardsContainer, 'Success'));
        // }
        for (let i = 0; i < this.data.match_rewards.length; i++) {
            let materialContainerPanel = $.CreatePanel("Panel", materialRewardsListPanels[0], "Material" + i, {});
            materialContainerPanel.BLoadLayoutSnippet("MonsterHunterMaterial");
            let materialPanel = materialContainerPanel.FindChildTraverse("Material");
            materialPanel.material_id = this.data.match_rewards[i].material_id;
            materialPanel.SetMaterialEarnedReason(4, -1, this.data.match_rewards[i].rewarded);
            if (!this.data.won_match) {
                materialPanel.AddClass("LostMatch");
            }
            if (this.data.match_rewards[i].rewarded) {
                this.actions.push(new TriggerClassAction(materialContainerPanel, 'Rewarded'));
                if (materialPanel.IsMaterialRare()) {
                    this.actions.push(new PlaySoundAction("monsterhunter.rare_material"));
                    this.actions.push(new SkippableAction(new WaitAction(0.4)));
                }
                else if (materialPanel.IsMaterialSuperRare()) {
                    this.actions.push(new PlaySoundAction("monsterhunter.rare_material.2"));
                    this.actions.push(new SkippableAction(new WaitAction(0.4)));
                }
                else {
                    this.actions.push(new PlaySoundAction("playercard.flip"));
                    this.actions.push(new SkippableAction(new WaitAction(0.2)));
                }
            }
            else {
                this.actions.push(new TriggerClassAction(materialContainerPanel, 'Failed'));
                this.actions.push(new PlaySoundAction("ui.contract_fail"));
                this.actions.push(new SkippableAction(new WaitAction(0.2)));
            }
        }
        let bHunterDuel = this.data.hunter_duel;
        if (bHunterDuel) {
            let objectiveIcon = panel.FindChildTraverse("ObjectiveIcon");
            objectiveIcon.SetImage('file://{images}/events/monster_hunter/artwork/quest_side_objective_icon_withbg_gloves.psd');
        }
        if (this.data.hunt_rewards.length > 0) {
            let materialContainerPanel = $.CreatePanel("Panel", materialRewardsListPanels[0], "Divider", {});
            materialContainerPanel.BLoadLayoutSnippet("MonsterHunterMaterialDivider");
            for (let i = 0; i < this.data.hunt_rewards.length; i++) {
                let materialContainerPanel = $.CreatePanel("Panel", materialRewardsListPanels[0], "Material" + i, {});
                materialContainerPanel.BLoadLayoutSnippet("MonsterHunterMaterial");
                let materialPanel = materialContainerPanel.FindChildTraverse("Material");
                materialPanel.material_id = this.data.hunt_rewards[i].material_id;
                materialPanel.SetMaterialEarnedReason(bHunterDuel ? 3 : 1, this.data.target_hero_id, this.data.hunt_rewards[i].rewarded);
                materialPanel.AddClass(bHunterDuel ? "HunterDuel" : "HuntReward");
                if (this.data.hunt_rewards[i].rewarded) {
                    this.actions.push(new TriggerClassAction(materialContainerPanel, 'Rewarded'));
                    if (materialPanel.IsMaterialRare()) {
                        this.actions.push(new PlaySoundAction("monsterhunter.rare_material"));
                        this.actions.push(new SkippableAction(new WaitAction(0.4)));
                    }
                    else if (materialPanel.IsMaterialSuperRare()) {
                        this.actions.push(new PlaySoundAction("monsterhunter.rare_material.2"));
                        this.actions.push(new SkippableAction(new WaitAction(0.4)));
                    }
                    else {
                        this.actions.push(new PlaySoundAction("playercard.flip"));
                        this.actions.push(new SkippableAction(new WaitAction(0.2)));
                    }
                }
                else {
                    this.actions.push(new TriggerClassAction(materialContainerPanel, 'Failed'));
                    this.actions.push(new PlaySoundAction("ui.contract_fail"));
                    this.actions.push(new SkippableAction(new WaitAction(0.2)));
                }
            }
            // Check for hunter duel rewards
            for (let i = 0; i < this.data.denial_rewards.length; i++) {
                if (this.data.denial_rewards[i].hero_id == this.data.target_hero_id) {
                    let materialContainerPanel = $.CreatePanel("Panel", materialRewardsListPanels[0], "Material" + i, {});
                    materialContainerPanel.BLoadLayoutSnippet("MonsterHunterMaterial");
                    let materialPanel = materialContainerPanel.FindChildTraverse("Material");
                    materialPanel.material_id = this.data.denial_rewards[i].material_id;
                    materialPanel.SetMaterialEarnedReason(3, this.data.target_hero_id, true);
                    materialPanel.AddClass("HunterDuel");
                    this.actions.push(new TriggerClassAction(materialContainerPanel, 'Rewarded'));
                    this.actions.push(new PlaySoundAction("playercard.flip"));
                    this.actions.push(new SkippableAction(new WaitAction(0.2)));
                }
            }
        }
        if (this.data.denial_rewards.length > 0) {
            let materialDivider = null;
            for (let i = 0; i < this.data.denial_rewards.length; i++) {
                if (this.data.denial_rewards[i].hero_id != this.data.target_hero_id) {
                    if (materialDivider == null) {
                        materialDivider = $.CreatePanel("Panel", materialRewardsListPanels[0], "Divider", {});
                        materialDivider.BLoadLayoutSnippet("MonsterHunterMaterialDivider");
                    }
                    let materialContainerPanel = $.CreatePanel("Panel", materialRewardsListPanels[0], "Material" + i, {});
                    materialContainerPanel.BLoadLayoutSnippet("MonsterHunterMaterial");
                    let materialPanel = materialContainerPanel.FindChildTraverse("Material");
                    materialPanel.material_id = this.data.denial_rewards[i].material_id;
                    materialPanel.SetMaterialEarnedReason(2, this.data.denial_rewards[i].hero_id, true);
                    materialPanel.AddClass("HuntDenial");
                    this.actions.push(new TriggerClassAction(materialContainerPanel, 'Rewarded'));
                    this.actions.push(new PlaySoundAction("playercard.flip"));
                    this.actions.push(new SkippableAction(new WaitAction(0.2)));
                }
            }
        }
        this.actions.push(new RemoveClassAction(matchRewardsContainer, 'AnimatingRewards'));
        this.actions.push(new AddClassAction(matchRewardsContainer, 'FinishedAnimatingRewards'));
        this.actions.push(new SkippableAction(new WaitAction(0.3)));
        this.actions.push(new StopSkippingAheadAction());
        // (4) Codex Rewards
        let monsterHunterProgressCodex = panel.FindChildTraverse("MonsterHunterProgressCodex");
        this.actions.push(new TriggerClassAction(monsterHunterProgressCodex, 'Reveal'));
        let codexListPanel = panel.FindChildTraverse("CodexList");
        for (let i = 0; i < this.data.codex.length; i++) {
            let panelProperties = {};
            let codex_id = this.data.codex[i].codex_id;
            let codexContainerPanel = $.CreatePanel("Panel", codexListPanel, "Hero" + i, panelProperties);
            codexContainerPanel.BLoadLayoutSnippet("MonsterHunterHeroCodex");
            let heroPanel = codexContainerPanel.FindChildTraverse("HeroImage");
            heroPanel.codex_id = codex_id;
            heroPanel.unlock_progress = this.data.codex[i].initial_progress;
            let state_changed = this.data.codex[i].initial_progress != this.data.codex[i].unlock_progress;
            if (state_changed) {
                heroPanel.hittest = false;
                heroPanel.hittestchildren = false;
                let new_unlock_progress = this.data.codex[i].unlock_progress;
                this.actions.push(new TriggerClassAction(heroPanel, 'NewProgress'));
                this.actions.push(new PlaySoundAction('ui.books.pageturns'));
                this.actions.push(new WaitAction(0.2));
                this.actions.push(new RunFunctionAction(function () {
                    heroPanel.unlock_progress = new_unlock_progress;
                    heroPanel.hittest = true;
                    heroPanel.hittestchildren = true;
                    heroPanel.activate_opens_popup = false;
                }));
                if (new_unlock_progress == 10) // Fully unlocked
                 {
                    this.actions.push(new TriggerClassAction(codexContainerPanel, 'Claimable'));
                    this.actions.push(new WaitAction(0.3));
                    this.actions.push(new PlaySoundAction('Item.PickUpGemShop'));
                    this.actions.push(new WaitAction(0.3));
                }
            }
        }
        this.actions.push(new TriggerClassAction(monsterHunterProgressCodex, 'Finished'));
        this.actions.push(new SkippableAction(new WaitAction(0.5)));
        this.actions.push(new StopSkippingAheadAction());
        // (5) Hunter Rank
        let hunterRankContainer = panel.FindChildTraverse("HunterRankContainer");
        this.actions.push(new TriggerClassAction(hunterRankContainer, 'Reveal'));
        {
            let hunterRankBadge = panel.FindChildInLayoutFile('HunterRankBadge');
            let hunterRankProgressBar = panel.FindChildInLayoutFile('HunterRankProgressBar');
            let nCurrentLevelPoints = this.data.hunter_rank_points % this.data.hunter_rank_points_per_level;
            panel.SetDialogVariableInt("current_rank_xp", nCurrentLevelPoints);
            panel.SetDialogVariableInt("xp_for_next_rank", this.data.hunter_rank_points_per_level);
            hunterRankProgressBar.min = 0;
            hunterRankProgressBar.max = this.data.hunter_rank_points_per_level;
            hunterRankProgressBar.lowervalue = nCurrentLevelPoints;
            hunterRankProgressBar.uppervalue = nCurrentLevelPoints;
            let nCurrentHunterRankLevel = this.data.hunter_rank_level;
            let nTotalEarnedPoints = 0;
            hunterRankBadge.SetEventLevel(nCurrentHunterRankLevel);
            nTotalEarnedPoints += this.data.hunter_rank_match_points_earned;
            // Animate Hunter Rank Points
            let nIterationSanityCheck = 0;
            let nTotalPointsToAnimate = nTotalEarnedPoints;
            while (nTotalPointsToAnimate > 0) {
                let nPointsToNextLevel = this.data.hunter_rank_points_per_level - nCurrentLevelPoints;
                let nPointsToAnimate = Math.min(nPointsToNextLevel, nTotalPointsToAnimate);
                $.Msg("anim state: " + nTotalPointsToAnimate + ", points to next level: " + nPointsToNextLevel + ", nPointsToAnimate: " + nPointsToAnimate);
                let fAnimateSeconds = 1.0;
                let par = new RunParallelActions();
                par.actions.push(new AnimateDialogVariableIntAction(panel, 'current_rank_xp', nCurrentLevelPoints, nCurrentLevelPoints + nPointsToAnimate, fAnimateSeconds));
                par.actions.push(new AnimateProgressBarWithMiddleAction(hunterRankProgressBar, nCurrentLevelPoints, nCurrentLevelPoints + nPointsToAnimate, fAnimateSeconds));
                par.actions.push(new PlaySoundForDurationAction("XP.Count", fAnimateSeconds));
                this.actions.push(par);
                if (nPointsToNextLevel == nPointsToAnimate) {
                    nCurrentHunterRankLevel++;
                    nCurrentLevelPoints = 0;
                    this.actions.push(new RunFunctionAction(function () {
                        hunterRankBadge.SetEventLevel(nCurrentHunterRankLevel);
                        hunterRankProgressBar.lowervalue = 0;
                        par.actions.push(new WaitAction(0.1));
                    }));
                    this.actions.push(new RunFunctionAction(function () { PlaySoundEffect('HeroBadgeLevelUpReward.ShowReward'); }));
                    this.actions.push(new TriggerClassAction(hunterRankBadge, 'LevelUp'));
                }
                else {
                    nCurrentLevelPoints += nPointsToAnimate;
                }
                nTotalPointsToAnimate -= nPointsToAnimate;
                ++nIterationSanityCheck;
                if (nIterationSanityCheck > 2000) {
                    break;
                }
            }
        }
        // Crafting available
        if (this.data.crafting_available) {
            let craftingAvailableContainer = panel.FindChildTraverse("CraftingAvailableContainer");
            this.actions.push(new TriggerClassAction(craftingAvailableContainer, 'Reveal'));
            this.actions.push(new TriggerClassAction(monsterHunterProgressMain, 'CraftingAvailable'));
        }
        this.actions.push(new WaitAction(1));
        this.actions.push(new StopSkippingAheadAction());
        this.actions.push(new SkippableAction(new WaitAction(6.0)));
        this.actions.push(new SwitchClassAction(panel, 'current_screen', ''));
        this.actions.push(new SkippableAction(new WaitAction(1.5)));
        super.start();
    }
}
function TestAnimateMonsterHunter() {
    let bHuntSuccess = Math.random() < 0.5;
    let data = {
        monster_hunter_progress: {
            crafting_available: true,
            hunter_rank_level: 23,
            hunter_rank_points: 23250,
            hunter_rank_points_per_level: 1000,
            hunter_rank_match_points_earned: 800,
            target_hero_id: 10,
            won_match: true,
            hunt_success: bHuntSuccess,
            denial_success: true,
            lucky_voucher: true,
            hunter_duel: false,
            match_rewards: [
                {
                    material_id: 1,
                    rewarded: true
                },
                {
                    material_id: 6,
                    rewarded: true
                },
                {
                    material_id: 11,
                    rewarded: true
                },
                {
                    material_id: 11,
                    rewarded: true
                },
                {
                    material_id: 1,
                    rewarded: false
                },
                {
                    material_id: 6,
                    rewarded: false
                },
                {
                    material_id: 6,
                    rewarded: false
                },
                {
                    material_id: 11,
                    rewarded: false
                },
            ],
            hunt_rewards: [
                {
                    material_id: 7,
                    rewarded: bHuntSuccess
                },
            ],
            denial_rewards: [
                {
                    material_id: 5,
                    hero_id: 45
                },
                {
                    material_id: 14,
                    hero_id: 60
                },
            ],
            codex: [
                {
                    codex_id: 10,
                    unlock_progress: 200,
                    initial_progress: 0,
                },
                {
                    codex_id: 15,
                    unlock_progress: 400,
                    initial_progress: 0,
                },
                {
                    codex_id: 20,
                    unlock_progress: 600,
                    initial_progress: 0,
                },
                {
                    codex_id: 25,
                    unlock_progress: 100,
                    initial_progress: 0,
                },
                {
                    codex_id: 30,
                    unlock_progress: 900,
                    initial_progress: 0,
                },
                {
                    codex_id: 35,
                    unlock_progress: 200,
                    initial_progress: 0,
                },
                {
                    codex_id: 40,
                    unlock_progress: 300,
                    initial_progress: 300,
                },
                {
                    codex_id: 45,
                    unlock_progress: 1000,
                    initial_progress: 0,
                },
                {
                    codex_id: 50,
                    unlock_progress: 1000,
                    initial_progress: 0,
                },
                {
                    codex_id: 60,
                    unlock_progress: 400,
                    initial_progress: 0,
                },
            ]
        },
        match_won: true,
    };
    TestProgressAnimation(data);
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoicG9zdF9nYW1lX3Byb2dyZXNzX21vbnN0ZXJfaHVudGVyLmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsiLi4vLi4vLi4vLi4vLi4vY29udGVudC9kb3RhL3Bhbm9yYW1hL3NjcmlwdHMvcG9zdF9nYW1lX3Byb2dyZXNzL3Bvc3RfZ2FtZV9wcm9ncmVzc19tb25zdGVyX2h1bnRlci50cyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiO0FBQUEscUNBQXFDO0FBQ3JDLG1DQUFtQztBQUNuQywrQ0FBK0M7QUFDL0Msb0RBQW9EO0FBQ3BELHNEQUFzRDtBQStDdEQsMEJBQTBCO0FBQzFCLE1BQU0sZ0NBQWlDLFNBQVEsb0JBQW9CO0lBRWxFLElBQUksQ0FBMEI7SUFFOUIsWUFBYSxJQUE2QjtRQUV6QyxLQUFLLEVBQUUsQ0FBQztRQUNSLElBQUksQ0FBQyxJQUFJLEdBQUcsSUFBSSxDQUFDLHVCQUF1QixDQUFDO0lBQzFDLENBQUM7SUFHRCxLQUFLO1FBQ0osQ0FBQyxDQUFDLEdBQUcsQ0FBQywyQ0FBMkMsQ0FBQyxDQUFDO1FBRW5ELG9EQUFvRDtRQUNwRCxJQUFJLEtBQUssR0FBRyxjQUFjLENBQUUsNkJBQTZCLENBQUUsQ0FBQztRQUM1RCxLQUFLLENBQUMsa0JBQWtCLENBQUMsdUJBQXVCLENBQUMsQ0FBQztRQUNsRCxzREFBc0Q7UUFDdEQsSUFBSSxPQUFPLEdBQUcsSUFBSSxDQUFDLE9BQU8sQ0FBQztRQUUzQixPQUFPLENBQUMsSUFBSSxDQUFDLElBQUksbUJBQW1CLENBQUMsS0FBSyxFQUFFLHVCQUF1QixFQUFFLDBDQUEwQyxFQUFFO1lBQ2hILEtBQUssQ0FBQyxXQUFXLENBQUMsZ0JBQWdCLEVBQUUsMkJBQTJCLENBQUMsQ0FBQztRQUNsRSxDQUFDLENBQUMsQ0FBQyxDQUFDO1FBRUosS0FBSyxDQUFDLGlCQUFpQixDQUFDLGtCQUFrQixDQUFDLENBQUMsV0FBVyxDQUFDLFdBQVcsRUFBRSxDQUFDLElBQUksQ0FBQyxJQUFJLENBQUMsU0FBUyxD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