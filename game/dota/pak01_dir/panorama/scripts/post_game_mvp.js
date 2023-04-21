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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoicG9zdF9nYW1lX212cC5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbInBvc3RfZ2FtZV9tdnAudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IkFBQUEsa0NBQWtDO0FBQ2xDLGdDQUFnQztBQUNoQyw0Q0FBNEM7QUFDNUMsaURBQWlEO0FBQ2pELHVFQUF1RTtBQXFDdkUsTUFBTSxvQkFBcUIsU0FBUSxvQkFBb0I7SUFFdEQsSUFBSSxDQUFpQjtJQUVyQixZQUFhLElBQW9CO1FBRWhDLEtBQUssRUFBRSxDQUFDO1FBQ1IsSUFBSSxDQUFDLElBQUksR0FBRyxJQUFJLENBQUM7SUFDbEIsQ0FBQztJQUVELElBQUksQ0FBRSxlQUF3QjtRQUU3QixNQUFNLFlBQVksR0FBRyxlQUFlLENBQUMscUJBQXFCLENBQUUsaUJBQWlCLENBQUUsQ0FBQztRQUVoRixNQUFNLFVBQVUsR0FBRyxJQUFJLENBQUMsSUFBSSxDQUFDLElBQUksQ0FBQyxJQUFJLENBQUMsQ0FBQyxDQUFDLENBQUM7UUFDMUMsTUFBTSxRQUFRLEdBQUcsVUFBVSxDQUFDLFFBQVEsQ0FBQztRQUVyQyxJQUFLLFFBQVEsRUFDYjtZQUNDLFlBQVksQ0FBQyxrQkFBa0IsQ0FBRSxhQUFhLENBQUUsQ0FBQztTQUNqRDthQUVEO1lBQ0MsWUFBWSxDQUFDLGtCQUFrQixDQUFFLGdCQUFnQixDQUFFLENBQUM7U0FDcEQ7UUFFRCxxREFBcUQ7UUFFckQsTUFBTSxRQUFRLEdBQUcsSUFBSSxDQUFDLElBQUksQ0FBQyxJQUFJLENBQUM7UUFFaEMsc0JBQXNCO1FBQ3RCLE1BQU0sV0FBVyxHQUFHLFVBQVcsY0FBc0IsRUFBRSxjQUE4QixFQUFFLGlCQUEwQixFQUFFLE9BQWdCO1lBRWxJLE1BQU0sV0FBVyxHQUFHLGNBQWMsQ0FBQyxJQUFJLENBQUM7WUFDeEMsTUFBTSxRQUFRLEdBQUcsc0JBQXNCLENBQUMsV0FBVyxDQUFDLENBQUM7WUFDckQsSUFBSyxRQUFRLElBQUksU0FBUyxFQUMxQjtnQkFDQyxDQUFD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