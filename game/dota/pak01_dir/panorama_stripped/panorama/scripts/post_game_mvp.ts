/// <reference path="dota.d.ts" />
/// <reference path="util.ts" />
/// <reference path="sequence_actions.ts" />
/// <reference path="mvp_accolade_type_map.ts" />
/// <reference path="post_game_progress/post_game_progress_utils.ts" />

                  

interface MVP2PostGame_t
{
	match_id?: string;
	mvp2:
	{
		mvps: MVP2MVP_t[];
		event_mvps: MVP2MVP_t[];
	};

	bProgressVersion?: boolean;
}

interface MVP2MVP_t
{
	slot: number;
	username?: string;
	herotoken: string;
	herounit: string;
	was_dire: boolean;
	featured_hero_sticker_index: number;
	featured_hero_sticker_quality: number;
	accountid: number;
	guildid?: number;
	map_override?: string;
	accolades: MVP2Accolade_t[];

	overrideheroid?: number;
	overrideeconid?: number;
}

interface MVP2Accolade_t
{
	type: number;
	detail_value: number;
}

class AnimateMVP2TabAction extends RunSequentialActions
{
	data: MVP2PostGame_t;

	constructor( data: MVP2PostGame_t )
	{
		super();
		this.data = data;
	}

	init( mvp2ScreenPanel: Panel_t ): void
	{
		const mapContainer = mvp2ScreenPanel.FindChildInLayoutFile( "MVPMapContainer" );

		const mvpDetails = this.data.mvp2.mvps[0];
		const bDireWon = mvpDetails.was_dire;

		if ( bDireWon )
		{
			mapContainer.BLoadLayoutSnippet( "MVP2MapDire" );
		}
		else
		{
			mapContainer.BLoadLayoutSnippet( "MVP2MapRadiant" );
		}

		if ( mvpDetails.map_override != undefined)
		{
			(mapContainer.FindChild("MVPMap") as DOTAScenePanel_t)?.SetMapName(mvpDetails.map_override);
		}

		                                                     

		const mvp2Data = this.data.mvp2;

		                      
		const addAccolade = function ( nAccoladeIndex: number, accoladeObject: MVP2Accolade_t, accoladeContainer: Panel_t, wasDire: boolean )
		{
			const accolade_id = accoladeObject.type;
			const accolade = g_MVP_Accolade_TypeMap[accolade_id];
			if ( accolade == undefined )
			{
				$.Msg( 'No accolade of type ' + accolade_id.toString() );
				return null;
			}

			const accolade_panel = $.CreatePanel( 'Panel', accoladeContainer, '' );
			accolade_panel.BLoadLayoutSnippet( 'MVPAccolade' );

			const accolade_value = accoladeObject.detail_value;

			const gradient_colour = wasDire ? "red" : "green";
			accolade_panel.AddClass( 'mvp_type_' + accoladeObject.type );
			accolade_panel.FindChildInLayoutFile( 'gradient' ).AddClass( 'mvp_gradient_' + gradient_colour );
			accolade_panel.FindChildInLayoutFile( 'icon' ).style.backgroundImage = 'url("' + accolade.icon + '")';
			accolade_panel.FindChildInLayoutFile( 'icon' ).style.backgroundRepeat = 'no-repeat';
			accolade_panel.FindChildInLayoutFile( 'icon' ).style.backgroundPosition = 'center';
			accolade_panel.FindChildInLayoutFile( 'icon' ).style.backgroundSize = 'cover';

			if ( accolade.ability_name != undefined )
			{
				( accolade_panel.FindChildInLayoutFile( 'ability_icon' ) as DOTAAbilityImage_t ).abilityname = accolade.ability_name;
			}
			else
			{
				( accolade_panel.FindChildInLayoutFile( 'ability_icon' ) as DOTAAbilityImage_t ).style.opacity = "0";
			}

			accolade_panel.SetDialogVariable( 'title', $.Localize( accolade.title_loc_token ) );
			accolade_panel.AddClass( 'Accolade' + nAccoladeIndex );

			const details_panel = accolade_panel.FindChildInLayoutFile( 'details' ) as Label_t;

			if ( accolade.detail_loc_token != undefined )
			{
				details_panel.SetLocString( accolade.detail_loc_token );
				accolade_panel.SetDialogVariableInt( 'detailvalue', accolade_value );
			}
			else
			{
				$.Msg( 'accolade ' + accolade_id.toString() + ' missing detail_loc_token' );
			}

			if ( accolade.event_logo != undefined ) {
				const imagePanel = (accolade_panel.FindChildInLayoutFile('EventLogo') as Image_t);
				if (imagePanel) {
					imagePanel.SetImage(accolade.event_logo);
					imagePanel.SetHasClass( 'HasLogo' , true );
				}
			}

			if (accolade.particle_overlay != undefined) {
				const particle_overlay_panel: DOTAParticleScenePanel_t = accolade_panel.FindChildInLayoutFile('ParticleOverlay') as DOTAParticleScenePanel_t;
				if (particle_overlay_panel) {
					particle_overlay_panel.SetParticleNameAndRefresh(accolade.particle_overlay);
					particle_overlay_panel.StartParticles();
				}
			}

			return accolade_panel;
		};

		const decorateHonorableMentionPanel = function ( honorableMentionPanel: Panel_t, accoladeObject: MVP2Accolade_t) {
			const accolade_id = accoladeObject.type;
			const accolade = g_MVP_Accolade_TypeMap[accolade_id];
			if (accolade == undefined) {
				$.Msg('No accolade of type ' + accolade_id.toString());
				return null;
			}

			if (accolade.event_logo != undefined) {
				const imagePanel = (honorableMentionPanel.FindChildInLayoutFile('EventLogo') as Image_t);
				if (imagePanel) {
					imagePanel.SetImage(accolade.event_logo);
					imagePanel.SetHasClass('HasLogo', true);
				}
			}

			if (accolade.particle_overlay != undefined) {
				const particle_overlay_panel: DOTAParticleScenePanel_t = honorableMentionPanel.FindChildInLayoutFile('ParticleOverlay') as DOTAParticleScenePanel_t;
				if (particle_overlay_panel) {
					particle_overlay_panel.SetParticleNameAndRefresh(accolade.particle_overlay);
					particle_overlay_panel.StartParticles();
				}
			}
		}

		const setupHonorableMentionPanel = function (honorableMentionsContainer: Panel_t, mvpData: MVP2MVP_t): Panel_t {
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
			let accoladeType: number = 0;
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

			const model = honorableMentionPanel.FindChildInLayoutFile('HonorableMentionModel') as DOTAScenePanel_t;
			model.SetAttributeInt("accoladeType", accoladeType);

			honorableMentionPanel.AddClass(mvpData.herounit);
			if (mvpData.overrideheroid == undefined) {
				model.SetScenePanelToPlayerHero(match_id, mvpData.slot);
			}
			else {
				model.SetScenePanelToLocalHero(mvpData.overrideheroid);
			}

			return honorableMentionPanel;
		}

		const map = mapContainer.FindChildInLayoutFile( 'MVPMap' ) as DOTAScenePanel_t;

		$.RegisterEventHandler('DOTAScenePanelEnitiesLoaded', map, function () {
			map.SetHasClass('EntitesLoaded', true);
			return false;
		});

		    
		                                                      

		if ( this.data.bProgressVersion )
		{
			this.actions.push( new RunFunctionAction( function () { $.DispatchEvent( 'DOTASetDashboardBackgroundVisible', false ); } ) );
			this.actions.push( new AddScreenLinkAction( mvp2ScreenPanel, 'MVPProgress', '#DOTAMVP2_TitleLink' ) );
			this.actions.push( new AddClassAction( mvp2ScreenPanel, 'ShowScreen' ) );
		}

		                       
		this.actions.push( new WaitForClassAction( map, 'SceneLoaded' ) );

		const match_id = this.data.match_id;

		if ( this.data.bProgressVersion )
		{
			$.DispatchEvent('DOTAMVP2ScreenReady', mvpDetails.map_override != undefined);
		}

		let mvpPanel: Panel_t | null = null;
		const mvpAccolades: Panel_t[] = [];
		                          
		this.actions.push( new RunFunctionAction( function () 
		{
			                  
			{
				mvpPanel = mvp2ScreenPanel.FindChildInLayoutFile( 'MVPDetails' );
				mvpPanel.SetDialogVariableInt( "user_account_id", mvpDetails.accountid );
				mvpPanel.SetDialogVariable("hero", $.Localize( mvpDetails.herotoken ) );

				{
					                                
					let econSetPreview = mvpPanel.FindChildInLayoutFile('StickerItem') as DOTA_UI_EconSetPreview_t;
					econSetPreview.SetSticker(mvpDetails.featured_hero_sticker_index, mvpDetails.featured_hero_sticker_quality);
                }

				if ( mvpDetails.guildid != undefined && mvpDetails.guildid != 0 )
				{
					( mvpPanel.FindChildInLayoutFile( 'GuildImage' ) as DOTAGuildImage_t ).guildid = mvpDetails.guildid;
					mvpPanel.SetDialogVariableInt( "user_guild_id", mvpDetails.guildid );
				}
				else
				{
					const guildPanel = mvpPanel.FindChildInLayoutFile( 'GuildDetails' );
					if ( guildPanel != undefined )
					{
						guildPanel.RemoveAndDeleteChildren();
					}
				}

				if ( mvpDetails.overrideheroid == undefined )
				{
					map.SpawnHeroInScenePanelByPlayerSlot( match_id, mvpDetails.slot, "featured_hero" );
				}
				else
				{
					let econId = mvpDetails.overrideeconid;
					if ( econId == undefined )
					{
						econId = -1;
					}

					map.SpawnHeroInScenePanelByHeroId( mvpDetails.overrideheroid, "featured_hero", econId );
				}
				$.DispatchEvent('DOTAPostGameMVPSpawnedHero', mvpDetails.map_override != undefined);

				                         
				const accoladeContainer = mvpPanel.FindChildInLayoutFile( 'Accolades' );

				for ( let i = 0; i < mvpDetails.accolades.length; i++ )
				{
					const accolade = mvpDetails.accolades[i];

					const accoladePanel = addAccolade( i, accolade, accoladeContainer, mvpDetails.was_dire );

					if ( accoladePanel != null )
					{
						mvpAccolades.push( accoladePanel );
					}
				}
			}

			                           
			const honorableMentions = mvp2ScreenPanel.FindChildInLayoutFile( 'HonorableMentions' );

			for ( let i = 1; i < 3 && i < mvp2Data.mvps.length; ++i )
			{
				const honorableMentionPanel = setupHonorableMentionPanel( honorableMentions, mvp2Data.mvps[i] );
				honorableMentionPanel.AddClass('HonorableMention' + i.toString());
			}

			                                 
			const eventHonorableMentions = mvp2ScreenPanel.FindChildInLayoutFile('EventHonorableMentions');

			for (let i = 0; i < 1 && i < mvp2Data.event_mvps.length; ++i) {
				const honorableMentionPanel = setupHonorableMentionPanel(eventHonorableMentions, mvp2Data.event_mvps[i]);
				honorableMentionPanel.SetHasClass('EventMVP', true);
				honorableMentionPanel.AddClass('HonorableMention' + i.toString());
			}
		} )
		);

		this.actions.push(new WaitForClassAction(map, 'EntitesLoaded'));
		this.actions.push(new AddClassAction( map, 'MapFadeIn'));

		if ( this.data.bProgressVersion )
			this.actions.push( new SkippableAction( new WaitAction( 0.5 ) ) );
		else
			this.actions.push( new WaitAction( 0.5 ) );
		const honorableMentionsContainer = mvp2ScreenPanel.FindChildInLayoutFile( 'HonorableMentionsContainer' );
		this.actions.push( new AddClassAction( honorableMentionsContainer, 'HMAnimateIn' ) );
		if ( this.data.bProgressVersion )
			this.actions.push( new SkippableAction( new WaitAction( 0.5 ) ) );
		else
			this.actions.push( new WaitAction( 0.5 ) );
		this.actions.push( new RunFunctionAction( function () 
		{
			mvpPanel!.AddClass( 'MVPDetailsAnimateIn' );
			for ( const i in mvpAccolades )
			{
				mvpAccolades[i].AddClass( 'MVPAnimateIn' );
			}
		} ) );

		                     
		this.actions.push( new WaitAction( 0.2 ) );
		this.actions.push( new PlaySoundAction( "ui_hero_select_slide_late" ) );

		                      
		this.actions.push( new WaitAction( 0.4 ) );
		this.actions.push( new PlaySoundAction( "ui_hero_select_slide_late" ) );

		                     
		this.actions.push( new WaitAction( 0.5 ) );
		this.actions.push( new PlaySoundAction( "ui_hero_select_slide_late" ) );

		if ( this.data.bProgressVersion )
		{
			this.actions.push( new SkippableAction( new WaitAction( 0.5 ) ) );
			this.actions.push( new SkippableAction( new WaitAction( 1.5 ) ) );
			this.actions.push( new SwitchClassAction( mvp2ScreenPanel, 'current_screen', '' ) );
			this.actions.push( new SkippableAction( new WaitAction( 7.0 ) ) );
			this.actions.push( new RunFunctionAction( function () { $.DispatchEvent( 'DOTASetDashboardBackgroundVisible', true ); } ) );
			this.actions.push( new StopSkippingAheadAction() );
		}

		super.start();
	}

	start()
	{
		                                                    
		const mvp2ScreenPanel = $.GetContextPanel().FindChildInLayoutFile( 'DetailsMVPInner' );

		this.init( mvp2ScreenPanel );
	}
}

                           

function InitMVPTab( data: MVP2PostGame_t ): void
{
	if ( data.mvp2 != null )
	{
		const seq = new RunSequentialActions();
		seq.actions.push( new AnimateMVP2TabAction( data ) );
		RunSingleAction( seq );
	}
}

