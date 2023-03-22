/// <reference path="dota.d.ts" />
/// <reference path="util.ts" />
/// <reference path="sequence_actions.ts" />
/// <reference path="mvp_accolade_type_map.ts" />
/// <reference path="post_game_progress/post_game_progress_utils.ts" />
class AnimateMVP2TabAction extends RunSequentialActions {
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
                mvpPanel.SetDialogVariable("hero", $.Localize('#' + mvpDetails.heroname));
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
                honorableMentionPanel.AddClass(honorableMentionData.heroname);
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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoicG9zdF9nYW1lX212cC5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbInBvc3RfZ2FtZV9tdnAudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IkFBQUEsa0NBQWtDO0FBQ2xDLGdDQUFnQztBQUNoQyw0Q0FBNEM7QUFDNUMsaURBQWlEO0FBQ2pELHVFQUF1RTtBQXFDdkUsTUFBTSxvQkFBcUIsU0FBUSxvQkFBb0I7SUFJdEQsWUFBYSxJQUFvQjtRQUVoQyxLQUFLLEVBQUUsQ0FBQztRQUNSLElBQUksQ0FBQyxJQUFJLEdBQUcsSUFBSSxDQUFDO0lBQ2xCLENBQUM7SUFFRCxJQUFJLENBQUUsZUFBd0I7UUFFN0IsTUFBTSxZQUFZLEdBQUcsZUFBZSxDQUFDLHFCQUFxQixDQUFFLGlCQUFpQixDQUFFLENBQUM7UUFFaEYsTUFBTSxVQUFVLEdBQUcsSUFBSSxDQUFDLElBQUksQ0FBQyxJQUFJLENBQUMsSUFBSSxDQUFDLENBQUMsQ0FBQyxDQUFDO1FBQzFDLE1BQU0sUUFBUSxHQUFHLFVBQVUsQ0FBQyxRQUFRLENBQUM7UUFFckMsSUFBSyxRQUFRLEVBQ2I7WUFDQyxZQUFZLENBQUMsa0JBQWtCLENBQUUsYUFBYSxDQUFFLENBQUM7U0FDakQ7YUFFRDtZQUNDLFlBQVksQ0FBQyxrQkFBa0IsQ0FBRSxnQkFBZ0IsQ0FBRSxDQUFDO1NBQ3BEO1FBRUQscURBQXFEO1FBRXJELE1BQU0sUUFBUSxHQUFHLElBQUksQ0FBQyxJQUFJLENBQUMsSUFBSSxDQUFDO1FBRWhDLHNCQUFzQjtRQUN0QixNQUFNLFdBQVcsR0FBRyxVQUFXLGNBQXNCLEVBQUUsY0FBOEIsRUFBRSxpQkFBMEIsRUFBRSxPQUFnQjtZQUVsSSxNQUFNLFdBQVcsR0FBRyxjQUFjLENBQUMsSUFBSSxDQUFDO1lBQ3hDLE1BQU0sUUFBUSxHQUFHLHNCQUFzQixDQUFDLFdBQVcsQ0FBQyxDQUFDO1lBQ3JELElBQUssUUFBUSxJQUFJLFNBQVMsRUFDMUI7Z0JBQ0MsQ0FBQyxDQUFDLEdBQUcsQ0FBRSxz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