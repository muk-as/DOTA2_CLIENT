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
                    break; // THERE CAN BE ONLY ONE
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
                $.DispatchEvent('DOTAPostGameMVPSpawnedHero', mvpDetails.map_override != undefined);
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
                const honorableMentionPanel = setupHonorableMentionPanel(honorableMentions, mvp2Data.mvps[i]);
                honorableMentionPanel.AddClass('HonorableMention' + i.toString());
            }
            // Setup event honorable mentions
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
        const mvp2ScreenPanel = $.GetContextPanel().FindChildInLayoutFile('DetailsMVPInner');
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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoicG9zdF9nYW1lX212cC5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbIi4uLy4uLy4uLy4uL2NvbnRlbnQvZG90YS9wYW5vcmFtYS9zY3JpcHRzL3Bvc3RfZ2FtZV9tdnAudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IjtBQUFBLGtDQUFrQztBQUNsQyxnQ0FBZ0M7QUFDaEMsNENBQTRDO0FBQzVDLGlEQUFpRDtBQUNqRCx1RUFBdUU7QUF3Q3ZFLE1BQU0sb0JBQXFCLFNBQVEsb0JBQW9CO0lBRXRELElBQUksQ0FBaUI7SUFFckIsWUFBYSxJQUFvQjtRQUVoQyxLQUFLLEVBQUUsQ0FBQztRQUNSLElBQUksQ0FBQyxJQUFJLEdBQUcsSUFBSSxDQUFDO0lBQ2xCLENBQUM7SUFFRCxJQUFJLENBQUUsZUFBd0I7UUFFN0IsTUFBTSxZQUFZLEdBQUcsZUFBZSxDQUFDLHFCQUFxQixDQUFFLGlCQUFpQixDQUFFLENBQUM7UUFFaEYsTUFBTSxVQUFVLEdBQUcsSUFBSSxDQUFDLElBQUksQ0FBQyxJQUFJLENBQUMsSUFBSSxDQUFDLENBQUMsQ0FBQyxDQUFDO1FBQzFDLE1BQU0sUUFBUSxHQUFHLFVBQVUsQ0FBQyxRQUFRLENBQUM7UUFFckMsSUFBSyxRQUFRLEVBQ2I7WUFDQyxZQUFZLENBQUMsa0JBQWtCLENBQUUsYUFBYSxDQUFFLENBQUM7U0FDakQ7YUFFRDtZQUNDLFlBQVksQ0FBQyxrQkFBa0IsQ0FBRSxnQkFBZ0IsQ0FBRSxDQUFDO1NBQ3BEO1FBRUQsSUFBSyxVQUFVLENBQUMsWUFBWSxJQUFJLFNBQVMsRUFDekM7WUFDRSxZQUFZLENBQUMsU0FBUyxDQUFDLFFBQVEsQ0FBc0IsRUFBRSxVQUFVLENBQUMsVUFBVSxDQUFDLFlBQVksQ0FBQyxDQUFDO1NBQzVGO1FBRUQscURBQXFEO1FBRXJELE1BQU0sUUFBUSxHQUFHLElBQUksQ0FBQyxJQUFJLENBQUMsSUFBSSxDQUFDO1FBRWhDLHNCQUFzQjtRQUN0QixNQUFNLFdBQVcsR0FBRyxVQUFXLGNBQXNCLEVBQUUsY0FBOEIsRUFBRSxpQkFBMEIsRUFBRSxPQUFnQjtZQUVsSSxNQUFNLFdBQVcsR0FBRyxjQUFjLENBQUMsSUFBSSxDQUFDO1lBQ3hDLE1BQU0sUUFBUSxHQUFHLHNCQUFzQixDQUFDLFdBQVcsQ0FBQyxDQUFDO1lBQ3JELElBQUssUUFBUSxJQUFJLFNBQVMsRUFDMUI7Z0JBQ0MsQ0FBQyxDQUFDLEdBQUcsQ0FBRSxzQkFBc0IsR0FBRyxXQUFXLENBQUMsUUFBUSxFQUFFLENBQUUsQ0FBQztnQkFDekQsT0FBTyxJQUFJLENBQUM7YUFDWjtZQUVELE1BQU0sY0FBYyxHQUFHLENBQUMsQ0FBQyxXQUFXLENBQUUsT0FBTyxFQUFFLGlCQUFpQixFQUFFLEVBQUUsQ0FBRSxDQUFDO1lBQ3ZFLGNBQWMsQ0FBQyxrQkFBa0IsQ0FBRSxhQUFhLENBQUUsQ0FBQztZQUVuRCxNQUFNLGNBQWMsR0FBRyxjQUFjLENBQUMsWUFBWSxDQUFDO1lBRW5ELE1BQU0sZUFBZSxHQUFHLE9BQU8sQ0FBQyxDQUFDLENBQUMsS0FBSyxDQUFDLENBQUMsQ0FBQyxPQUFPLENBQUM7WUFDbEQsY0FBYyxDQUFDLFFBQVEsQ0FBRSxXQUFXLEdBQUcsY0FBYyxDQUFDLElBQUksQ0FBRSxDQUFDO1lBQzdELGNBQWMsQ0FBQyxxQkFBcUIsQ0FBRSxVQUFVLENBQUUsQ0FBQyxRQUFRLENBQUUsZUFBZSxHQUFHLGVBQWUsQ0FBRSxDQUFDO1lBQ2pHLGNBQWMsQ0FBQyxxQkFBcUIsQ0FBRSxNQUFNLENBQUUsQ0FBQyxLQUFLLENBQUMsZUFBZSxHQUFHLE9BQU8sR0FBRyxRQUFRLENBQUMsSUFBSSxHQUFHLElBQUksQ0FBQztZQUN0RyxjQUFjLENBQUMscUJBQXFCLENBQUUsTUFBTSxDQUFFLENBQUMsS0FBSyxDQUFDLGdCQUFnQixHQUFHLFdBQVcsQ0FBQztZQUNwRixjQUFjLENBQUMscUJBQXFCLENBQUUsTUFBTSxDQUFFLENBQUMsS0FBSyxDQUFDLGtCQUFrQixHQUFHLFFBQVEsQ0FBQztZQUNuRixjQUFjLENBQUMscUJBQXFCLENBQUUsTUFBTSxDQUFFLENBQUMsS0FBSyxDQUFDLGNBQWMsR0FBRyxPQUFPLENBQUM7WUFFOUUsSUFBSyxRQUFRLENBQUMsWUFBWSxJQUFJLFNBQVMsRUFDdkM7Z0JBQ0csY0FBYyxDQUFDLHFCQUFxQixDQUFFLGNBQWMsQ0FBMEIsQ0FBQyxXQUFXLEdBQUcsUUFBUSxDQUFDLFlBQVksQ0FBQzthQUNySDtpQkFFRDtnQkFDRyxjQUFjLENBQUMscUJBQXFCLENBQUUsY0FBYyxDQUEwQixDQUFDLEtBQUssQ0FBQyxPQUFPLEdBQUcsR0FBRyxDQUFDO2FBQ3JHO1lBRUQsY0FBYyxDQUFDLGlCQUFpQixDQUFFLE9BQU8sRUFBRSxDQUFDLENBQUMsUUFBUSxDQUFFLFFBQVEsQ0FBQyxlQUFlLENBQUUsQ0FBRSxDQUFDO1lBQ3BGLGNBQWMsQ0FBQyxRQUFRLENBQUUsVUFBVSxHQUFHLGNBQWMsQ0FBRSxDQUFDO1lBRXZELE1BQU0sYUFBYSxHQUFHLGNBQWMsQ0FBQyxxQkFBcUIsQ0FBRSxTQUFTLENBQWEsQ0FBQztZQUVuRixJQUFLLFFBQVEsQ0FBQyxnQkFBZ0IsSUFBSSxTQUFTLEVBQzNDO2dCQUNDLGFBQWEsQ0FBQyxZQUFZLENBQUUsUUFBUSxDQUFDLGdCQUFnQixDQUFFLENBQUM7Z0JBQ3hELGNBQWMsQ0FBQyxvQkFBb0IsQ0FBRSxhQUFhLEVBQUUsY0FBYyxDQUFFLENBQUM7YUFDckU7aUJBRUQ7Z0JBQ0MsQ0FBQyxDQUFDLEdBQUcsQ0FBRSxXQUFXLEdBQUcsV0FBVyxDQUFDLFFBQVEsRUFBRSxHQUFHLDJCQUEyQixDQUFFLENBQUM7YUFDNUU7WUFFRCxJQUFLLFFBQVEsQ0FBQyxVQUFVLElBQUksU0FBUyxFQUFHO2dCQUN2QyxNQUFNLFVBQVUsR0FBSSxjQUFjLENBQUMscUJBQXFCLENBQUMsV0FBVyxDQUFhLENBQUM7Z0JBQ2xGLElBQUksVUFBVSxFQUFFO29CQUNmLFVBQVUsQ0FBQyxRQUFRLENBQUMsUUFBUSxDQUFDLFVBQVUsQ0FBQyxDQUFDO29CQUN6QyxVQUFVLENBQUMsV0FBVyxDQUFFLFNBQVMsRUFBRyxJQUFJLENBQUUsQ0FBQztpQkFDM0M7YUFDRDtZQUVELElBQUksUUFBUSxDQUFDLGdCQUFnQixJQUFJLFNBQVMsRUFBRTtnQkFDM0MsTUFBTSxzQkFBc0IsR0FBNkIsY0FBYyxDQUFDLHFCQUFxQixDQUFDLGlCQUFpQixDQUE2QixDQUFDO2dCQUM3SSxJQUFJLHNCQUFzQixFQUFFO29CQUMzQixzQkFBc0IsQ0FBQyx5QkFBeUIsQ0FBQyxRQUFRLENBQUMsZ0JBQWdCLENBQUMsQ0FBQztvQkFDNUUsc0JBQXNCLENBQUMsY0FBYyxFQUFFLENBQUM7aUJBQ3hDO2FBQ0Q7WUFFRCxPQUFPLGNBQWMsQ0FBQztRQUN2QixDQUFDLENBQUM7UUFFRixNQUFNLDZCQUE2QixHQUFHLFVBQVcscUJBQThCLEVBQUUsY0FBOEI7WUFDOUcsTUFBTSxXQUFXLEdBQUcsY0FBYyxDQUFDLElBQUksQ0FBQztZQUN4QyxNQUFNLFFBQVEsR0FBRyxzQkFBc0IsQ0FBQyxXQUFXLENBQUMsQ0FBQztZQUNyRCxJQUFJLFFBQVEsSUFBSSxTQUFTLEVBQUU7Z0JBQzFCLENBQUMsQ0FBQyxHQUFHLENBQUMsc0JBQXNCLEdBQUcsV0FBVyxDQUFDLFFBQVEsRUFBRSxDQUFDLENBQUM7Z0JBQ3ZELE9BQU8sSUFBSSxDQUFDO2FBQ1o7WUFFRCxJQUFJLFFBQVEsQ0FBQyxVQUFVLElBQUksU0FBUyxFQUFFO2dCQUNyQyxNQUFNLFVBQVUsR0FBSSxxQkFBcUIsQ0FBQyxxQkFBcUIsQ0FBQyxXQUFXLENBQWEsQ0FBQztnQkFDekYsSUFBSSxVQUFVLEVBQUU7b0JBQ2YsVUFBVSxDQUFDLFFBQVEsQ0FBQyxRQUFRLENBQUMsVUFBVSxDQUFDLENBQUM7b0JBQ3pDLFVBQVUsQ0FBQyxXQUFXLENBQUMsU0FBUyxFQUFFLElBQUksQ0FBQyxDQUFDO2lCQUN4QzthQUNEO1lBRUQsSUFBSSxRQUFRLENBQUMsZ0JBQWdCLElBQUksU0FBUyxFQUFFO2dCQUMzQyxNQUFNLHNCQUFzQixHQUE2QixxQkFBcUIsQ0FBQyxxQkFBcUIsQ0FBQyxpQkFBaUIsQ0FBNkIsQ0FBQztnQkFDcEosSUFBSSxzQkFBc0IsRUFBRTtvQkFDM0Isc0JBQXNCLENBQUMseUJBQXlCLENBQUMsUUFBUSxDQUFDLGdCQUFnQixDQUFDLENBQUM7b0JBQzVFLHNCQUFzQixDQUFDLGNBQWMsRUFBRSxDQUFDO2lCQUN4QzthQUNEO1FBQ0YsQ0FBQyxDQUFBO1FBRUQsTUFBTSwwQkFBMEIsR0FBRyxVQUFVLDBCQUFtQyxFQUFFLE9BQWtCO1lBQ25HLE1BQU0scUJBQXFCLEdBQUcsQ0FBQyxDQUFDLFdBQVcsQ0FBQyxPQUFPLEVBQUUsMEJBQTBCLEVBQUUsRUFBRSxDQUFDLENBQUM7WUFDckYscUJBQXFCLENBQUMsa0JBQWtCLENBQUMsa0JBQWtCLENBQUMsQ0FBQztZQUM3RCxxQkFBcUIsQ0FBQyxvQkFBb0IsQ0FBQyxpQkFBaUIsRUFBRSxPQUFPLENBQUMsU0FBUyxDQUFDLENBQUM7WUFDakYsSUFBSSxPQUFPLENBQUMsT0FBTyxJQUFJLFNBQVMsSUFBSSxPQUFPLENBQUMsT0FBTyxJQUFJLENBQUMsRUFBRTtnQkFDekQscUJBQXFCLENBQUMsb0JBQW9CLENBQUMsZUFBZSxFQUFFLE9BQU8sQ0FBQyxPQUFPLENBQUMsQ0FBQzthQUM3RTtpQkFDSTtnQkFDSixNQUFNLFVBQVUsR0FBRyxxQkFBcUIsQ0FBQyxxQkFBcUIsQ0FBQyxXQUFXLENBQUMsQ0FBQztnQkFDNUUsSUFBSSxVQUFVLElBQUksSUFBSSxFQUFFO29CQUN2QixVQUFVLENBQUMsS0FBSyxDQUFDLE9BQU8sR0FBRyxHQUFHLENBQUM7aUJBQy9CO2FBQ0Q7WUFDRCxxQkFBcUIsQ0FBQyxRQUFRLENBQUMsT0FBTyxDQUFDLFFBQVEsQ0FBQyxDQUFDLENBQUMsTUFBTSxDQUFDLENBQUMsQ0FBQyxTQUFTLENBQUMsQ0FBQztZQUV0RSxNQUFNLGlCQUFpQixHQUFHLHFCQUFxQixDQUFDLHFCQUFxQixDQUFDLFdBQVcsQ0FBQyxDQUFDO1lBQ25GLElBQUksWUFBWSxHQUFXLENBQUMsQ0FBQztZQUM3QixLQUFLLElBQUksQ0FBQyxHQUFHLENBQUMsRUFBRSxDQUFDLEdBQUcsT0FBTyxDQUFDLFNBQVMsQ0FBQyxNQUFNLEVBQUUsQ0FBQyxFQUFFLEVBQUU7Z0JBQ2xELE1BQU0sUUFBUSxHQUFHLE9BQU8sQ0FBQyxTQUFTLENBQUMsQ0FBQyxDQUFDLENBQUM7Z0JBRXRDLElBQUksUUFBUSxJQUFJLFNBQVMsRUFBRTtvQkFDMUIsV0FBVyxDQUFDLENBQUMsRUFBRSxRQUFRLEVBQUUsaUJBQWlCLEVBQUUsT0FBTyxDQUFDLFFBQVEsQ0FBQyxDQUFDO29CQUM5RCxZQUFZLEdBQUcsUUFBUSxDQUFDLElBQUksQ0FBQztvQkFDN0IscUJBQXFCLENBQUMsUUFBUSxDQUFDLHdCQUF3QixHQUFHLFFBQVEsQ0FBQyxJQUFJLENBQUMsQ0FBQztvQkFDekUsNkJBQTZCLENBQUMscUJBQXFCLEVBQUUsUUFBUSxDQUFDLENBQUM7b0JBRS9ELE1BQU0sQ0FBQyx3QkFBd0I7aUJBQy9CO3FCQUNJO29CQUNKLENBQUMsQ0FBQyxHQUFHLENBQUMsa0NBQWtDLEdBQUcsQ0FBQyxDQUFDLFFBQVEsRUFBRSxDQUFDLENBQUM7aUJBQ3pEO2FBQ0Q7WUFFRCxNQUFNLEtBQUssR0FBRyxxQkFBcUIsQ0FBQyxxQkFBcUIsQ0FBQyx1QkFBdUIsQ0FBcUIsQ0FBQztZQUN2RyxLQUFLLENBQUMsZUFBZSxDQUFDLGNBQWMsRUFBRSxZQUFZLENBQUMsQ0FBQztZQUVwRCxxQkFBcUIsQ0FBQyxRQUFRLENBQUMsT0FBTyxDQUFDLFFBQVEsQ0FBQyxDQUFDO1lBQ2pELElBQUksT0FBTyxDQUFDLGNBQWMsSUFBSSxTQUFTLEVBQUU7Z0JBQ3hDLEtBQUssQ0FBQyx5QkFBeUIsQ0FBQyxRQUFRLEVBQUUsT0FBTyxDQUFDLElBQUksQ0FBQyxDQUFDO2FBQ3hEO2lCQUNJO2dCQUNKLEtBQUssQ0FBQyx3QkFBd0IsQ0FBQyxPQUFPLENBQUMsY0FBYyxDQUFDLENBQUM7YUFDdkQ7WUFFRCxPQUFPLHFCQUFxQixDQUFDO1FBQzlCLENBQUMsQ0FBQTtRQUVELE1BQU0sR0FBRyxHQUFHLFlBQVksQ0FBQyxxQkFBcUIsQ0FBRSxRQUFRLENBQXNCLENBQUM7UUFFL0UsQ0FBQyxDQUFDLG9CQUFvQixDQUFDLDZCQUE2QixFQUFFLEdBQUcsRUFBRTtZQUMxRCxHQUFHLENBQUMsV0FBVyxDQUFDLGVBQWUsRUFBRSxJQUFJLENBQUMsQ0FBQztZQUN2QyxPQUFPLEtBQUssQ0FBQztRQUNkLENBQUMsQ0FBQyxDQUFDO1FBRUgsSUFBSTtRQUNKLHNEQUFzRDtRQUV0RCxJQUFLLElBQUksQ0FBQyxJQUFJLENBQUMsZ0JBQWdCLEVBQy9CO1lBQ0MsSUFBSSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxpQkFBaUIsQ0FBRSxjQUFjLENBQUMsQ0FBQyxhQUFhLENBQUUsbUNBQW1DLEVBQUUsS0FBSyxDQUFFLENBQUMsQ0FBQyxDQUFDLENBQUUsQ0FBRSxDQUFDO1lBQzdILElBQUksQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksbUJBQW1CLENBQUUsZUFBZSxFQUFFLGFBQWEsRUFBRSxxQkFBcUIsQ0FBRSxDQUFFLENBQUM7WUFDdEcsSUFBSSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxjQUFjLENBQUUsZUFBZSxFQUFFLFlBQVksQ0FBRSxDQUFFLENBQUM7U0FDekU7UUFFRCx1QkFBdUI7UUFDdkIsSUFBSSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxrQkFBa0IsQ0FBRSxHQUFHLEVBQUUsYUFBYSxDQUFFLENBQUUsQ0FBQztRQUVsRSxNQUFNLFFBQVEsR0FBRyxJQUFJLENBQUMsSUFBSSxDQUFDLFFBQVEsQ0FBQztRQUVwQyxJQUFJLFFBQVEsR0FBbUIsSUFBSSxDQUFDO1FBQ3BDLE1BQU0sWUFBWSxHQUFjLEVBQUUsQ0FBQztRQUNuQywwQkFBMEI7UUFDMUIsSUFBSSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxpQkFBaUIsQ0FBRTtZQUV6QyxrQkFBa0I7WUFDbEI7Z0JBQ0MsUUFBUSxHQUFHLGVBQWUsQ0FBQyxxQkFBcUIsQ0FBRSxZQUFZLENBQUUsQ0FBQztnQkFDakUsUUFBUSxDQUFDLG9CQUFvQixDQUFFLGlCQUFpQixFQUFFLFVBQVUsQ0FBQyxTQUFTLENBQUUsQ0FBQztnQkFDekUsUUFBUSxDQUFDLGlCQUFpQixDQUFDLE1BQU0sRUFBRSxDQUFDLENBQUMsUUFBUSxDQUFFLFVBQVUsQ0FBQyxTQUFTLENBQUUsQ0FBRSxDQUFDO2dCQUV4RTtvQkFDQyxnQ0FBZ0M7b0JBQ2hDLElBQUksY0FBYyxHQUFHLFFBQVEsQ0FBQyxxQkFBcUIsQ0FBQyxhQUFhLENBQTZCLENBQUM7b0JBQy9GLGNBQWMsQ0FBQyxVQUFVLENBQUMsVUFBVSxDQUFDLDJCQUEyQixFQUFFLFVBQVUsQ0FBQyw2QkFBNkIsQ0FBQyxDQUFDO2lCQUNoRztnQkFFYixJQUFLLFVBQVUsQ0FBQyxPQUFPLElBQUksU0FBUyxJQUFJLFVBQVUsQ0FBQyxPQUFPLElBQUksQ0FBQyxFQUMvRDtvQkFDRyxRQUFRLENBQUMscUJBQXFCLENBQUUsWUFBWSxDQUF3QixDQUFDLE9BQU8sR0FBRyxVQUFVLENBQUMsT0FBTyxDQUFDO29CQUNwRyxRQUFRLENBQUMsb0JBQW9CLENBQUUsZUFBZSxFQUFFLFVBQVUsQ0FBQyxPQUFPLENBQUUsQ0FBQztpQkFDckU7cUJBRUQ7b0JBQ0MsTUFBTSxVQUFVLEdBQUcsUUFBUSxDQUFDLHFCQUFxQixDQUFFLGNBQWMsQ0FBRSxDQUFDO29CQUNwRSxJQUFLLFVBQVUsSUFBSSxTQUFTLEVBQzVCO3dCQUNDLFVBQVUsQ0FBQyx1QkFBdUIsRUFBRSxDQUFDO3FCQUNyQztpQkFDRDtnQkFFRCxJQUFLLFVBQVUsQ0FBQyxjQUFjLElBQUksU0FBUyxFQUMzQztvQkFDQyxHQUFHLENBQUMsaUNBQWlDLENBQUUsUUFBUSxFQUFFLFVBQVUsQ0FBQyxJQUFJLEVBQUUsZUFBZSxDQUFFLENBQUM7aUJBQ3BGO3FCQUVEO29CQUNDLElBQUksTUFBTSxHQUFHLFVBQVUsQ0FBQyxjQUFjLENBQUM7b0JBQ3ZDLElBQUssTUFBTSxJQUFJLFNBQVMsRUFDeEI7d0JBQ0MsTUFBTSxHQUFHLENBQUMsQ0FBQyxDQUFDO3FCQUNaO29CQUVELEdBQUcsQ0FBQyw2QkFBNkIsQ0FBRSxVQUFVLENBQUMsY0FBYyxFQUFFLGVBQWUsRUFBRSxNQUFNLENBQUUsQ0FBQztpQkFDeEY7Z0JBQ0QsQ0FBQyxDQUFDLGFBQWEsQ0FBQyw0QkFBNEIsRUFBRSxVQUFVLENBQUMsWUFBWSxJQUFJLFNBQVMsQ0FBQyxDQUFDO2dCQUVwRix5QkFBeUI7Z0JBQ3pCLE1BQU0saUJBQWlCLEdBQUcsUUFBUSxDQUFDLHFCQUFxQixDQUFFLFdBQVcsQ0FBRSxDQUFDO2dCQUV4RSxLQUFNLElBQUksQ0FBQyxHQUFHLENBQUMsRUFBRSxDQUFDLEdBQUcsVUFBVSxDQUFDLFNBQVMsQ0FBQyxNQUFNLEVBQUUsQ0FBQyxFQUFFLEVBQ3JEO29CQUNDLE1BQU0sUUFBUSxHQUFHLFVBQVUsQ0FBQyxTQUFTLENBQUMsQ0FBQyxDQUFDLENBQUM7b0JBRXpDLE1BQU0sYUFBYSxHQUFHLFdBQVcsQ0FBRSxDQUFDLEVBQUUsUUFBUSxFQUFFLGlCQUFpQixFQUFFLFVBQVUsQ0FBQyxRQUFRLENBQUUsQ0FBQztvQkFFekYsSUFBSyxhQUFhLElBQUksSUFBSSxFQUMxQjt3QkFDQyxZQUFZLENBQUMsSUFBSSxDQUFFLGFBQWEsQ0FBRSxDQUFDO3FCQUNuQztpQkFDRDthQUNEO1lBRUQsMkJBQTJCO1lBQzNCLE1BQU0saUJBQWlCLEdBQUcsZUFBZSxDQUFDLHFCQUFxQixDQUFFLG1CQUFtQixDQUFFLENBQUM7WUFFdkYsS0FBTSxJQUFJLENBQUMsR0FBRyxDQUFDLEVBQUUsQ0FBQyxHQUFHLENBQUMsSUFBSSxDQUFDLEdBQUcsUUFBUSxDQUFDLElBQUksQ0FBQyxNQUFNLEVBQUUsRUFBRSxDQUFDLEVBQ3ZEO2dCQUNDLE1BQU0scUJBQXFCLEdBQUcsMEJBQTBCLENBQUUsaUJBQWlCLEVBQUUsUUFBUSxDQUFDLElBQUksQ0FBQyxDQUFDLENBQUMsQ0FBRSxDQUFDO2dCQUNoRyxxQkFBcUIsQ0FBQyxRQUFRLENBQUMsa0JBQWtCLEdBQUcsQ0FBQyxDQUFDLFFBQVEsRUFBRSxDQUFDLENBQUM7YUFDbEU7WUFFRCxpQ0FBaUM7WUFDakMsTUFBTSxzQkFBc0IsR0FBRyxlQUFlLENBQUMscUJBQXFCLENBQUMsd0JBQXdCLENBQUMsQ0FBQztZQUUvRixLQUFLLElBQUksQ0FBQyxHQUFHLENBQUMsRUFBRSxDQUFDLEdBQUcsQ0FBQyxJQUFJLENBQUMsR0FBRyxRQUFRLENBQUMsVUFBVSxDQUFDLE1BQU0sRUFBRSxFQUFFLENBQUMsRUFBRTtnQkFDN0QsTUFBTSxxQkFBcUIsR0FBRywwQkFBMEIsQ0FBQyxzQkFBc0IsRUFBRSxRQUFRLENBQUMsVUFBVSxDQUFDLENBQUMsQ0FBQyxDQUFDLENBQUM7Z0JBQ3pHLHFCQUFxQixDQUFDLFdBQVcsQ0FBQyxVQUFVLEVBQUUsSUFBSSxDQUFDLENBQUM7Z0JBQ3BELHFCQUFxQixDQUFDLFFBQVEsQ0FBQyxrQkFBa0IsR0FBRyxDQUFDLENBQUMsUUFBUSxFQUFFLENBQUMsQ0FBQzthQUNsRTtRQUNGLENBQUMsQ0FBRSxDQUNGLENBQUM7UUFFRixJQUFJLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBQyxJQUFJLGtCQUFrQixDQUFDLEdBQUcsRUFBRSxlQUFlLENBQUMsQ0FBQyxDQUFDO1FBQ2hFLElBQUksQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFDLElBQUksY0FBYyxDQUFFLEdBQUcsRUFBRSxXQUFXLENBQUMsQ0FBQyxDQUFDO1FBRXpELElBQUssSUFBSSxDQUFDLElBQUksQ0FBQyxnQkFBZ0I7WUFDOUIsSUFBSSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxlQUFlLENBQUUsSUFBSSxVQUFVLENBQUUsR0FBRyxDQUFFLENBQUUsQ0FBRSxDQUFDOztZQUVsRSxJQUFJLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLFVBQVUsQ0FBRSxHQUFHLENBQUUsQ0FBRSxDQUFDO1FBQzVDLE1BQU0sMEJBQTBCLEdBQUcsZUFBZSxDQUFDLHFCQUFxQixDQUFFLDRCQUE0QixDQUFFLENBQUM7UUFDekcsSUFBSSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxjQUFjLENBQUUsMEJBQTBCLEVBQUUsYUFBYSxDQUFFLENBQUUsQ0FBQztRQUNyRixJQUFLLElBQUksQ0FBQyxJQUFJLENBQUMsZ0JBQWdCO1lBQzlCLElBQUksQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksZUFBZSxDQUFFLElBQUksVUFBVSxDQUFFLEdBQUcsQ0FBRSxDQUFFLENBQUUsQ0FBQzs7WUFFbEUsSUFBSSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxVQUFVLENBQUUsR0FBRyxDQUFFLENBQUUsQ0FBQztRQUM1QyxJQUFJLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGlCQUFpQixDQUFFO1lBRXpDLFFBQVMsQ0FBQyxRQUFRLENBQUUscUJBQXFCLENBQUUsQ0FBQztZQUM1QyxLQUFNLE1BQU0sQ0FBQyxJQUFJLFlBQVksRUFDN0I7Z0JBQ0MsWUFBWSxDQUFDLENBQUMsQ0FBQyxDQUFDLFFBQVEsQ0FBRSxjQUFjLENBQUUsQ0FBQzthQUMzQztRQUNGLENBQUMsQ0FBRSxDQUFFLENBQUM7UUFFTixxQkFBcUI7UUFDckIsSUFBSSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxVQUFVLENBQUUsR0FBRyxDQUFFLENBQUUsQ0FBQztRQUMzQyxJQUFJLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGVBQWUsQ0FBRSwyQkFBMkIsQ0FBRSxDQUFFLENBQUM7UUFFeEUsc0JBQXNCO1FBQ3RCLElBQUksQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksVUFBVSxDQUFFLEdBQUcsQ0FBRSxDQUFFLENBQUM7UUFDM0MsSUFBSSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxlQUFlLENBQUUsMkJBQTJCLENBQUUsQ0FBRSxDQUFDO1FBRXhFLHFCQUFxQjtRQUNyQixJQUFJLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLFVBQVUsQ0FBRSxHQUFHLENBQUUsQ0FBRSxDQUFDO1FBQzNDLElBQUksQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksZUFBZSxDQUFFLDJCQUEyQixDQUFFLENBQUUsQ0FBQztRQUV4RSxJQUFLLElBQUksQ0FBQyxJQUFJLENBQUMsZ0JBQWdCLEVBQy9CO1lBQ0MsSUFBSSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSxlQUFlLENBQUUsSUFBSSxVQUFVLENBQUUsR0FBRyxDQUFFLENBQUUsQ0FBRSxDQUFDO1lBQ2xFLElBQUksQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksZUFBZSxDQUFFLElBQUksVUFBVSxDQUFFLEdBQUcsQ0FBRSxDQUFFLENBQUUsQ0FBQztZQUNsRSxJQUFJLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGlCQUFpQixDQUFFLGVBQWUsRUFBRSxnQkFBZ0IsRUFBRSxFQUFFLENBQUUsQ0FBRSxDQUFDO1lBQ3BGLElBQUksQ0FBQyxPQUFPLENBQUMsSUFBSSxDQUFFLElBQUksZUFBZSxDQUFFLElBQUksVUFBVSxDQUFFLEdBQUcsQ0FBRSxDQUFFLENBQUUsQ0FBQztZQUNsRSxJQUFJLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLGlCQUFpQixDQUFFLGNBQWMsQ0FBQyxDQUFDLGFBQWEsQ0FBRSxtQ0FBbUMsRUFBRSxJQUFJLENBQUUsQ0FBQyxDQUFDLENBQUMsQ0FBRSxDQUFFLENBQUM7WUFDNUgsSUFBSSxDQUFDLE9BQU8sQ0FBQyxJQUFJLENBQUUsSUFBSSx1QkFBdUIsRUFBRSxDQUFFLENBQUM7U0FDbkQ7UUFFRCxLQUFLLENBQUMsS0FBSyxFQUFFLENBQUM7SUFDZixDQUFDO0lBRUQsS0FBSztRQUVKLG9EQUFvRDtRQUNwRCxNQUFNLGVBQWUsR0FBRyxDQUFDLENBQUMsZUFBZSxFQUFFLENBQUMscUJBQXFCLENBQUUsaUJBQWlCLENBQUUsQ0FBQztRQUV2RixJQUFJLENBQUMsSUFBSSxDQUFFLGVBQWUsQ0FBRSxDQUFDO0lBQzlCLENBQUM7Q0FDRDtBQUVELDJCQUEyQjtBQUUzQixTQUFTLFVBQVUsQ0FBRSxJQUFvQjtJQUV4QyxJQUFLLElBQUksQ0FBQyxJQUFJLElBQUksSUFBSSxFQUN0QjtRQUNDLE1BQU0sR0FBRyxHQUFHLElBQUksb0JBQW9CLEVBQUUsQ0FBQztRQUN2QyxHQUFHLENBQUMsT0FBTyxDQUFDLElBQUksQ0FBRSxJQUFJLG9CQUFvQixDQUFFLElBQUksQ0FBRSxDQUFFLENBQUM7UUFDckQsZUFBZSxDQUFFLEdBQUcsQ0FBRSxDQUFDO0tBQ3ZCO0FBQ0YsQ0FBQyJ9