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
        if (mvpDetails.map_override != undefined) {
            mapContainer.FindChild("MVPMap")?.SetMapName(mvpDetails.map_override);
        }
        const mvp2Data = this.data.mvp2;
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
            accolade_panel.AddClass('mvp_type_' + accoladeObject.type);
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
            if (accolade.event_logo != undefined) {
                const imagePanel = accolade_panel.FindChildInLayoutFile('EventLogo');
                if (imagePanel) {
                    imagePanel.SetImage(accolade.event_logo);
                    imagePanel.SetHasClass('HasLogo', true);
                }
            }
            if (accolade.particle_overlay != undefined) {
                const particle_overlay_panel = accolade_panel.FindChildInLayoutFile('ParticleOverlay');
                if (particle_overlay_panel) {
                    particle_overlay_panel.SetParticleNameAndRefresh(accolade.particle_overlay);
                    particle_overlay_panel.StartParticles();
                }
            }
            return accolade_panel;
        };
        const decorateHonorableMentionPanel = function (honorableMentionPanel, accoladeObject) {
            const accolade_id = accoladeObject.type;
            const accolade = g_MVP_Accolade_TypeMap[accolade_id];
            if (accolade == undefined) {
                $.Msg('No accolade of type ' + accolade_id.toString());
                return null;
            }
            if (accolade.event_logo != undefined) {
                const imagePanel = honorableMentionPanel.FindChildInLayoutFile('EventLogo');
                if (imagePanel) {
                    imagePanel.SetImage(accolade.event_logo);
                    imagePanel.SetHasClass('HasLogo', true);
                }
            }
            if (accolade.particle_overlay != undefined) {
                const particle_overlay_panel = honorableMentionPanel.FindChildInLayoutFile('ParticleOverlay');
                if (particle_overlay_panel) {
                    particle_overlay_panel.SetParticleNameAndRefresh(accolade.particle_overlay);
                    particle_overlay_panel.StartParticles();
                }
            }
        };
        const setupHonorableMentionPanel = function (honorableMentionsContainer, mvpData) {
            const honorableMentionPanel = $.CreatePanel('Panel', honorableMentionsContainer, '');
            honorableMentionPanel.BLoadLayoutSnippet('HonorableMention');
            honorableMentionPanel.SetDialogVariableInt("user_account_id", mvpData.accountid);
            if (mvpData.guildid != undefined && mvpData.guildid != 0) {
                honorableMentionPanel.SetDialogVariableInt("user_guild_id", mvpData.guildid);
            }
            else {
                const guildPanel = honorableMentionPanel.FindChildInLayoutFile('GuildName');
                if (guildPanel != null) {
                    guildPanel.style.opacity = "0";
                }
            }
            honorableMentionPanel.AddClass(mvpData.was_dire ? "dire" : "radiant");
            const accoladeContainer = honorableMentionPanel.FindChildInLayoutFile('Accolades');
            let accoladeType = 0;
            for (let j = 0; j < mvpData.accolades.length; j++) {
                const accolade = mvpData.accolades[j];
                if (accolade != undefined) {
                    addAccolade(j, accolade, accoladeContainer, mvpData.was_dire);
                    accoladeType = accolade.type;
                    honorableMentionPanel.AddClass('honorablemention_type_' + accolade.type);
                    decorateHonorableMentionPanel(honorableMentionPanel, accolade);
                    break;
                }
                else {
                    $.Msg("Unable to find accolade of type " + j.toString());
                }
            }
            const model = honorableMentionPanel.FindChildInLayoutFile('HonorableMentionModel');
            model.SetAttributeInt("accoladeType", accoladeType);
            honorableMentionPanel.AddClass(mvpData.herounit);
            if (mvpData.overrideheroid == undefined) {
                model.SetScenePanelToPlayerHero(match_id, mvpData.slot);
            }
            else {
                model.SetScenePanelToLocalHero(mvpData.overrideheroid);
            }
            return honorableMentionPanel;
        };
        const map = mapContainer.FindChildInLayoutFile('MVPMap');
        $.RegisterEventHandler('DOTAScenePanelEnitiesLoaded', map, function () {
            map.SetHasClass('EntitesLoaded', true);
            return false;
        });
        if (this.data.bProgressVersion) {
            this.actions.push(new RunFunctionAction(function () { $.DispatchEvent('DOTASetDashboardBackgroundVisible', false); }));
            this.actions.push(new AddScreenLinkAction(mvp2ScreenPanel, 'MVPProgress', '#DOTAMVP2_TitleLink'));
            this.actions.push(new AddClassAction(mvp2ScreenPanel, 'ShowScreen'));
        }
        this.actions.push(new WaitForClassAction(map, 'SceneLoaded'));
        const match_id = this.data.match_id;
        if (this.data.bProgressVersion) {
            $.DispatchEvent('DOTAMVP2ScreenReady', mvpDetails.map_override != undefined);
        }
        let mvpPanel = null;
        const mvpAccolades = [];
        this.actions.push(new RunFunctionAction(function () {
            {
                mvpPanel = mvp2ScreenPanel.FindChildInLayoutFile('MVPDetails');
                mvpPanel.SetDialogVariableInt("user_account_id", mvpDetails.accountid);
                mvpPanel.SetDialogVariable("hero", $.Localize(mvpDetails.herotoken));
                {
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
                $.DispatchEvent('DOTAPostGameMVPSpawnedHero', mvpDetails.map_override != undefined);
                const accoladeContainer = mvpPanel.FindChildInLayoutFile('Accolades');
                for (let i = 0; i < mvpDetails.accolades.length; i++) {
                    const accolade = mvpDetails.accolades[i];
                    const accoladePanel = addAccolade(i, accolade, accoladeContainer, mvpDetails.was_dire);
                    if (accoladePanel != null) {
                        mvpAccolades.push(accoladePanel);
                    }
                }
            }
            const honorableMentions = mvp2ScreenPanel.FindChildInLayoutFile('HonorableMentions');
            for (let i = 1; i < 3 && i < mvp2Data.mvps.length; ++i) {
                const honorableMentionPanel = setupHonorableMentionPanel(honorableMentions, mvp2Data.mvps[i]);
                honorableMentionPanel.AddClass('HonorableMention' + i.toString());
            }
            const eventHonorableMentions = mvp2ScreenPanel.FindChildInLayoutFile('EventHonorableMentions');
            for (let i = 0; i < 1 && i < mvp2Data.event_mvps.length; ++i) {
                const honorableMentionPanel = setupHonorableMentionPanel(eventHonorableMentions, mvp2Data.event_mvps[i]);
                honorableMentionPanel.SetHasClass('EventMVP', true);
                honorableMentionPanel.AddClass('HonorableMention' + i.toString());
            }
        }));
        this.actions.push(new WaitForClassAction(map, 'EntitesLoaded'));
        this.actions.push(new AddClassAction(map, 'MapFadeIn'));
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
        this.actions.push(new WaitAction(0.2));
        this.actions.push(new PlaySoundAction("ui_hero_select_slide_late"));
        this.actions.push(new WaitAction(0.4));
        this.actions.push(new PlaySoundAction("ui_hero_select_slide_late"));
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
        const mvp2ScreenPanel = $.GetContextPanel().FindChildInLayoutFile('DetailsMVPInner');
        this.init(mvp2ScreenPanel);
    }
}
function InitMVPTab(data) {
    if (data.mvp2 != null) {
        const seq = new RunSequentialActions();
        seq.actions.push(new AnimateMVP2TabAction(data));
        RunSingleAction(seq);
    }
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoicG9zdF9nYW1lX212cC5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbIi4uLy4uLy4uLy4uL2NvbnRlbnQvZG90YS9wYW5vcmFtYS9zY3JpcHRzL3Bvc3RfZ2FtZV9tdnAudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IjtBQUFBLGtDQUFrQztBQUNsQyxnQ0FBZ0M7QUFDaEMsNENBQTRDO0FBQzVDLGlEQUFpRDtBQUNqRCx1RUFBdUU7QUF3Q3ZFLE1BQU0sb0JBQXFCLFNBQVEsb0JBQW9CO0lBRXRELElBQUksQ0FBaUI7SUFFckIsWUFBYSxJQUFvQjtRQUVoQyxLQUFLLEVBQUUsQ0FBQztRQUNSLElBQUksQ0FBQyxJQUFJLEdBQUcsSUFBSSxDQUFDO0lBQ2xCLENBQUM7SUFFRCxJQUFJLENBQUUsZUFBd0I7UUFFN0IsTUFBTSxZQUFZLEdBQUcsZUFBZSxDQUFDLHFCQUFxQixDQUFFLGlCQUFpQixDQUFFLENBQUM7UUFFaEYsTUFBTSxVQUFVLEdBQUcsSUFBSSxDQUFDLElBQUksQ0FBQyxJQUFJLENBQUMsSUFBSSxDQUFDLENBQUMsQ0FBQyxDQUFDO1FBQzFDLE1BQU0sUUFBUSxHQUFHLFVBQVUsQ0FBQyxRQUFRLENBQUM7UUFFckMsSUFBSyxRQUFRLEVBQ2I7WUFDQyxZQUFZLENBQUMsa0JBQWtCLENBQUUsYUFBYSxDQUFFLENBQUM7U0FDakQ7YUFFRDtZQUNDLFlBQVksQ0FBQyxrQkFBa0IsQ0FBRSxnQkFBZ0IsQ0FBRSxDQUFDO1NBQ3BEO1FBRUQsSUFBSyxVQUFVLENBQUMsWUFBWSxJQUFJLFNBQVMsRUFDekM7WUFDRSxZQUFZLENBQUMsU0FBUyxDQUFDLFFBQVEsQ0FBc0IsRUFBRSxVQUFVLENBQUMsVUFBVSxDQUFDLFlBQVksQ0FBQyxDQUFDO1NBQzVGO1FBSUQsTUFBTSxRQUFRLEdBQUcsSUFBSSxDQUFDLElBQUksQ0FBQyxJQUFJLENBQUM7UUFHaEMsTUFBTSxXQUFXLEdBQUcsVUFBVyxjQUFzQixFQUFFLGNBQThCLEVBQUUsaUJBQTBCLEVB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