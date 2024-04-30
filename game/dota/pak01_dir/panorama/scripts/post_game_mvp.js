"use strict";
/// <reference path="dota.d.ts" />
/// <reference path="util.ts" />
/// <reference path="sequence_actions.ts" />
/// <reference path="mvp_accolade_type_map.ts" />
/// <reference path="post_game_progress/post_game_progress_utils.ts" />
class AnimateMVP2TabAction extends RunSequentialActions {
    data;
    constructor(data) {
        super();
        this.data = data;
    }
    init(mvp2ScreenPanel) {
        const mapContainer = mvp2ScreenPanel.FindChildInLayoutFile("MVPMapContainer");
        const mvpDetails = this.data.mvp2.mvps[0];
        const bDireWon = mvpDetails.was_dire;
        if (bDireWon) {
            mapContainer.BLoadLayoutSnippet("MVP2MapDire");
        }
        else {
            mapContainer.BLoadLayoutSnippet("MVP2MapRadiant");
        }
        //// Helper functions/containers for sequence actions
        const mvp2Data = this.data.mvp2;
        //helper for accolades
        const addAccolade = function (nAccoladeIndex, accoladeObject, accoladeContainer, wasDire) {
            const accolade_id = accoladeObject.type;
            const accolade = g_MVP_Accolade_TypeMap[accolade_id];
            if (accolade == undefined) {
                $.Msg('No accolade of type ' + accolade_id.toString());
                return null;
            }
            const accolade_panel = $.CreatePanel('Panel', accoladeContainer, '');
            accolade_panel.BLoadLayoutSnippet('MVPAccolade');
            const accolade_value = accoladeObject.detail_value;
            const gradient_colour = wasDire ? "red" : "green";
            accolade_panel.FindChildInLayoutFile('gradient').AddClass('mvp_gradient_' + gradient_colour);
            accolade_panel.FindChildInLayoutFile('icon').style.backgroundImage = 'url("' + accolade.icon + '")';
            accolade_panel.FindChildInLayoutFile('icon').style.backgroundRepeat = 'no-repeat';
            accolade_panel.FindChildInLayoutFile('icon').style.backgroundPosition = 'center';
            accolade_panel.FindChildInLayoutFile('icon').style.backgroundSize = 'cover';
            if (accolade.ability_name != undefined) {
                accolade_panel.FindChildInLayoutFile('ability_icon').abilityname = accolade.ability_name;
            }
            else {
                accolade_panel.FindChildInLayoutFile('ability_icon').style.opacity = "0";
            }
            accolade_panel.SetDialogVariable('title', $.Localize(accolade.title_loc_token));
            accolade_panel.AddClass('Accolade' + nAccoladeIndex);
            const details_panel = accolade_panel.FindChildInLayoutFile('details');
            if (accolade.detail_loc_token != undefined) {
                details_panel.SetLocString(accolade.detail_loc_token);
                accolade_panel.SetDialogVariableInt('detailvalue', accolade_value);
            }
            else {
                $.Msg('accolade ' + accolade_id.toString() + ' missing detail_loc_token');
            }
            return accolade_panel;
        };
        const map = mapContainer.FindChildInLayoutFile('MVPMap');
        ////
        // Setup the sequence of actions to animate the screen
        if (this.data.bProgressVersion) {
            this.actions.push(new RunFunctionAction(function () { $.DispatchEvent('DOTASetDashboardBackgroundVisible', false); }));
            this.actions.push(new AddScreenLinkAction(mvp2ScreenPanel, 'MVPProgress', '#DOTAMVP2_TitleLink'));
            this.actions.push(new AddClassAction(mvp2ScreenPanel, 'ShowScreen'));
        }
        // Wait for map to load
        this.actions.push(new WaitForClassAction(map, 'SceneLoaded'));
        const match_id = this.data.match_id;
        let mvpPanel = null;
        const mvpAccolades = [];
        // Load up the MVP and HMs
        this.actions.push(new RunFunctionAction(function () {
            // Setup mvp model
            {
                mvpPanel = mvp2ScreenPanel.FindChildInLayoutFile('MVPDetails');
                mvpPanel.SetDialogVariableInt("user_account_id", mvpDetails.accountid);
                mvpPanel.SetDialogVariable("hero", $.Localize(mvpDetails.herotoken));
                {
                    // Set up featured hero sticker.
                    let econSetPreview = mvpPanel.FindChildInLayoutFile('StickerItem');
                    econSetPreview.SetSticker(mvpDetails.featured_hero_sticker_index, mvpDetails.featured_hero_sticker_quality);
                }
                if (mvpDetails.guildid != undefined && mvpDetails.guildid != 0) {
                    mvpPanel.FindChildInLayoutFile('GuildImage').guildid = mvpDetails.guildid;
                    mvpPanel.SetDialogVariableInt("user_guild_id", mvpDetails.guildid);
                }
                else {
                    const guildPanel = mvpPanel.FindChildInLayoutFile('GuildDetails');
                    if (guildPanel != undefined) {
                        guildPanel.RemoveAndDeleteChildren();
                    }
                }
                if (mvpDetails.overrideheroid == undefined) {
                    map.SpawnHeroInScenePanelByPlayerSlot(match_id, mvpDetails.slot, "featured_hero");
                }
                else {
                    let econId = mvpDetails.overrideeconid;
                    if (econId == undefined) {
                        econId = -1;
                    }
                    map.SpawnHeroInScenePanelByHeroId(mvpDetails.overrideheroid, "featured_hero", econId);
                }
                $.DispatchEvent('DOTAPostGameMVPSpawnedHero');
                //setup accolades for mvp
                const accoladeContainer = mvpPanel.FindChildInLayoutFile('Accolades');
                for (let i = 0; i < mvpDetails.accolades.length; i++) {
                    const accolade = mvpDetails.accolades[i];
                    const accoladePanel = addAccolade(i, accolade, accoladeContainer, mvpDetails.was_dire);
                    if (accoladePanel != null) {
                        mvpAccolades.push(accoladePanel);
                    }
                }
            }
            // Setup honorable mentions
            const honorableMentions = mvp2ScreenPanel.FindChildInLayoutFile('HonorableMentions');
            for (let i = 1; i < 3 && i < mvp2Data.mvps.length; ++i) {
                const honorableMentionData = mvp2Data.mvps[i];
                const honorableMentionPanel = $.CreatePanel('Panel', honorableMentions, '');
                honorableMentionPanel.BLoadLayoutSnippet('HonorableMention');
                honorableMentionPanel.SetDialogVariableInt("user_account_id", honorableMentionData.accountid);
                if (honorableMentionData.guildid != undefined && honorableMentionData.guildid != 0) {
                    honorableMentionPanel.SetDialogVariableInt("user_guild_id", honorableMentionData.guildid);
                }
                else {
                    const guildPanel = honorableMentionPanel.FindChildInLayoutFile('GuildName');
                    if (guildPanel != null) {
                        guildPanel.style.opacity = "0";
                    }
                }
                honorableMentionPanel.AddClass(honorableMentionData.was_dire ? "dire" : "radiant");
                honorableMentionPanel.AddClass('HonorableMention' + i.toString());
                const model = honorableMentionPanel.FindChildInLayoutFile('HonorableMentionModel');
                honorableMentionPanel.AddClass(honorableMentionData.herounit);
                if (honorableMentionData.overrideheroid == undefined) {
                    model.SetScenePanelToPlayerHero(match_id, honorableMentionData.slot);
                }
                else {
                    model.SetScenePanelToLocalHero(honorableMentionData.overrideheroid);
                }
                const accoladeContainer = honorableMentionPanel.FindChildInLayoutFile('Accolades');
                for (let j = 0; j < honorableMentionData.accolades.length; j++) {
                    const accolade = honorableMentionData.accolades[j];
                    if (accolade != undefined) {
                        addAccolade(j, accolade, accoladeContainer, honorableMentionData.was_dire);
                        break; // THERE CAN BE ONLY ONE
                    }
                    else {
                        $.Msg("Unable to find accolade of type " + j.toString());
                    }
                }
            }
        }));
        if (this.data.bProgressVersion)
            this.actions.push(new SkippableAction(new WaitAction(0.5)));
        else
            this.actions.push(new WaitAction(0.5));
        const honorableMentionsContainer = mvp2ScreenPanel.FindChildInLayoutFile('HonorableMentionsContainer');
        this.actions.push(new AddClassAction(honorableMentionsContainer, 'HMAnimateIn'));
        if (this.data.bProgressVersion)
            this.actions.push(new SkippableAction(new WaitAction(0.5)));
        else
            this.actions.push(new WaitAction(0.5));
        this.actions.push(new RunFunctionAction(function () {
            mvpPanel.AddClass('MVPDetailsAnimateIn');
            for (const i in mvpAccolades) {
                mvpAccolades[i].AddClass('MVPAnimateIn');
            }
        }));
        // first mvp accolade
        this.actions.push(new WaitAction(0.2));
        this.actions.push(new PlaySoundAction("ui_hero_select_slide_late"));
        // second mvp accolade
        this.actions.push(new WaitAction(0.4));
        this.actions.push(new PlaySoundAction("ui_hero_select_slide_late"));
        // third mvp accolade
        this.actions.push(new WaitAction(0.5));
        this.actions.push(new PlaySoundAction("ui_hero_select_slide_late"));
        if (this.data.bProgressVersion) {
            this.actions.push(new SkippableAction(new WaitAction(0.5)));
            this.actions.push(new SkippableAction(new WaitAction(1.5)));
            this.actions.push(new SwitchClassAction(mvp2ScreenPanel, 'current_screen', ''));
            this.actions.push(new SkippableAction(new WaitAction(7.0)));
            this.actions.push(new RunFunctionAction(function () { $.DispatchEvent('DOTASetDashboardBackgroundVisible', true); }));
            this.actions.push(new StopSkippingAheadAction());
        }
        super.start();
    }
    start() {
        // Create the screen and do a bunch of initial setup
        const mvp2ScreenPanel = $.GetContextPanel().FindPanelInLayoutFile('DetailsMVPInner');
        this.init(mvp2ScreenPanel);
    }
}
// ------------------------
function InitMVPTab(data) {
    if (data.mvp2 != null) {
        const seq = new RunSequentialActions();
        seq.actions.push(new AnimateMVP2TabAction(data));
        RunSingleAction(seq);
    }
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoicG9zdF9nYW1lX212cC5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbIi4uLy4uLy4uLy4uL2NvbnRlbnQvZG90YS9wYW5vcmFtYS9zY3JpcHRzL3Bvc3RfZ2FtZV9tdnAudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IjtBQUFBLGtDQUFrQztBQUNsQyxnQ0FBZ0M7QUFDaEMsNENBQTRDO0FBQzVDLGlEQUFpRDtBQUNqRCx1RUFBdUU7QUFzQ3ZFLE1BQU0sb0JBQXFCLFNBQVEsb0JBQW9CO0lBRXRELElBQUksQ0FBaUI7SUFFckIsWUFBYSxJQUFvQjtRQUVoQyxLQUFLLEVBQUUsQ0FBQztRQUNSLElBQUksQ0FBQyxJQUFJLEdBQUcsSUFBSSxDQUFDO0lBQ2xCLENBQUM7SUFFRCxJQUFJLENBQUUsZUFBd0I7UUFFN0IsTUFBTSxZQUFZLEdBQUcsZUFBZSxDQUFDLHFCQUFxQixDQUFFLGlCQUFpQixDQUFFLENBQUM7UUFFaEYsTUFBTSxVQUFVLEdBQUcsSUFBSSxDQUFDLElBQUksQ0FBQyxJQUFJLENBQUMsSUFBSSxDQUFDLENBQUMsQ0FBQyxDQUFDO1FBQzFDLE1BQU0sUUFBUSxHQUFHLFVBQVUsQ0FBQyxRQUFRLENBQUM7UUFFckMsSUFBSyxRQUFRLEVBQ2I7WUFDQyxZQUFZLENBQUMsa0JBQWtCLENBQUUsYUFBYSxDQUFFLENBQUM7U0FDakQ7YUFFRDtZQUNDLFlBQVksQ0FBQyxrQkFBa0IsQ0FBRSxnQkFBZ0IsQ0FBRSxDQUFDO1NBQ3BEO1FBRUQscURBQXFEO1FBRXJELE1BQU0sUUFBUSxHQUFHLElBQUksQ0FBQyxJQUFJLENBQUMsSUFBSSxDQUFDO1FBRWhDLHNCQUFzQjtRQUN0QixNQUFNLFdBQVcsR0FBRyxVQUFXLGNBQXNCLEVBQUUsY0FBOEIsRUFBRSxpQkFBMEIsRUFBRSxPQUFnQjtZQUVsSSxNQUFNLFdBQVcsR0FBRyxjQUFjLENBQUMsSUFBSSxDQUFDO1lBQ3hDLE1BQU0sUUFBUSxHQUFHLHNCQUFzQixDQUFDLFdBQVcsQ0FBQyxDQUFD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