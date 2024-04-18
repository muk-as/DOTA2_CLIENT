/// <reference path="../../../../core/panorama/scripts/index.d.ts" />

declare enum DOTA_GameMode
{
	DOTA_GAMEMODE_NONE = 0,
	DOTA_GAMEMODE_AP = 1,
	DOTA_GAMEMODE_CM = 2,
	DOTA_GAMEMODE_RD = 3,
	DOTA_GAMEMODE_SD = 4,
	DOTA_GAMEMODE_AR = 5,
	DOTA_GAMEMODE_INTRO = 6,
	DOTA_GAMEMODE_HW = 7,
	DOTA_GAMEMODE_REVERSE_CM = 8,
	DOTA_GAMEMODE_XMAS = 9,
	DOTA_GAMEMODE_TUTORIAL = 10,
	DOTA_GAMEMODE_MO = 11,
	DOTA_GAMEMODE_LP = 12,
	DOTA_GAMEMODE_POOL1 = 13,
	DOTA_GAMEMODE_FH = 14,
	DOTA_GAMEMODE_CUSTOM = 15,
	DOTA_GAMEMODE_CD = 16,
	DOTA_GAMEMODE_BD = 17,
	DOTA_GAMEMODE_ABILITY_DRAFT = 18,
	DOTA_GAMEMODE_EVENT = 19,
	DOTA_GAMEMODE_ARDM = 20,
	DOTA_GAMEMODE_1V1MID = 21,
	DOTA_GAMEMODE_ALL_DRAFT = 22,
	DOTA_GAMEMODE_TURBO = 23,
	DOTA_GAMEMODE_MUTATION = 24,
	DOTA_GAMEMODE_COACHES_CHALLENGE = 25
}

declare enum DOTATeam_t
{
	DOTA_TEAM_FIRST = 2,
	DOTA_TEAM_GOODGUYS = 2,
	DOTA_TEAM_BADGUYS = 3,
	DOTA_TEAM_NEUTRALS = 4,
	DOTA_TEAM_NOTEAM = 5,
	DOTA_TEAM_CUSTOM_1 = 6,
	DOTA_TEAM_CUSTOM_2 = 7,
	DOTA_TEAM_CUSTOM_3 = 8,
	DOTA_TEAM_CUSTOM_4 = 9,
	DOTA_TEAM_CUSTOM_5 = 10,
	DOTA_TEAM_CUSTOM_6 = 11,
	DOTA_TEAM_CUSTOM_7 = 12,
	DOTA_TEAM_CUSTOM_8 = 13,
	DOTA_TEAM_COUNT = 14,
	DOTA_TEAM_CUSTOM_MIN = 6,
	DOTA_TEAM_CUSTOM_MAX = 13,
	DOTA_TEAM_CUSTOM_COUNT = 8,
}

declare enum DOTA_GameState
{
	// Indicates the order in which each mode happens.
	DOTA_GAMERULES_STATE_INIT = 0,
	DOTA_GAMERULES_STATE_WAIT_FOR_PLAYERS_TO_LOAD = 1,
	DOTA_GAMERULES_STATE_CUSTOM_GAME_SETUP = 2,
	DOTA_GAMERULES_STATE_HERO_SELECTION = 3,
	DOTA_GAMERULES_STATE_STRATEGY_TIME = 4,
	DOTA_GAMERULES_STATE_TEAM_SHOWCASE = 5,
	DOTA_GAMERULES_STATE_WAIT_FOR_MAP_TO_LOAD = 6,
	DOTA_GAMERULES_STATE_PRE_GAME = 7,
	DOTA_GAMERULES_STATE_SCENARIO_SETUP = 8,
	DOTA_GAMERULES_STATE_GAME_IN_PROGRESS = 9,
	DOTA_GAMERULES_STATE_POST_GAME = 10,
	DOTA_GAMERULES_STATE_DISCONNECT = 11,

	DOTA_GAMERULES_STATE_LAST = 12,
}

declare interface TeamDetails
{
	team_id: number;
	team_name: string;
	team_max_players: number;
	team_score: number;
	team_num_players: number;
}

declare interface PlayerInfo
{
	player_id: number;
	player_name: string;
	player_connection_state: number;
	player_steamid: string;
	player_kills: number;
	player_deaths: number;
	player_assists: number;
	player_selected_hero_id: number;
	player_selected_hero: string;
	player_selected_hero_entity_index: number;
	possible_hero_selection: string;
	player_level: number;
	player_respawn_seconds: number;
	player_gold: number;
	player_networth: number;
	player_team_id: number;
	player_is_local: boolean;
	player_has_host_privileges: boolean;
}

declare interface ItemInfo
{
	item_id: number;
	item_name: string;
	item_level: number;
}

declare interface PlayerItems
{
	inventory: Array<ItemInfo | null>;
	inventory_slot_min: 0;
	inventory_slot_max: 9;
	backpack_size: 3;
	stash: Array<ItemInfo | null>;
	stash_slot_min: 9;
	stash_slot_max: 6;
	neutral_item: ItemInfo | null;
}

declare interface MapInfo
{
	map_name: string;
	map_display_name: string;
}

declare interface InputUnitOrder
{
	OrderType?: number;
	TargetIndex?: number;
	Position?: InputVector;
	AbilityIndex?: number;
	OrderIssuer?: number;
	UnitIndex?: number;
	Queue?: boolean;
	QueueBehavior?: number;
	ShowEffects?: boolean;
}

declare interface ContextualTip
{
	TipAnnotation?: string;
	DisplayDuration?: number;
	PanoramaClasses?: string[];
	PanoramaSnippet?: string;
	ReferencedAbilities?: string[];
	ReferencedUnits: string[];
	Variant?: number;
	ForceAnnotation?: boolean;
	IntParameter?: number;
	IntParameter2?: number;
	FloatParameter?: number;
	FloatParameter2?: number;
	StringParameter?: string;
	StringParameter2?: string;
}

declare enum SteamUGCQuery
{
	RankedByVote = 0,
	RankedByPublicationDate = 1,
	AcceptedForGameRankedByAcceptanceDate = 2,
	RankedByTrend = 3,
	FavoritedByFriendsRankedByPublicationDate = 4,
	CreatedByFriendsRankedByPublicationDate = 5,
	RankedByNumTimesReported = 6,
	CreatedByFollowedUsersRankedByPublicationDate = 7,
	NotYetRated = 8,
	RankedByTotalVotesAsc = 9,
	RankedByVotesUp = 10,
	RankedByTextSearch = 11,
	RankedByTotalUniqueSubscriptions = 12,
	RankedByPlaytimeTrend = 13,
	RankedByTotalPlaytime = 14,
	RankedByAveragePlaytimeTrend = 15,
	RankedByLifetimeAveragePlaytime = 16,
	RankedByPlaytimeSessionsTrend = 17,
	RankedByLifetimePlaytimeSessions = 18,
}

declare enum SteamUGCMatchingUGCType
{
	Items = 0,
	Items_Mtx = 1,
	Items_ReadyToUse = 2,
	Collections = 3,
	Artwork = 4,
	Videos = 5,
	Screenshots = 6,
	AllGuides = 7,
	WebGuides = 8,
	IntegratedGuides = 9,
	UsableInGame = 10,
	ControllerBindings = 11,
	GameManagedItems = 12,
	All = -1,
}

declare enum SteamUniverse
{
	Invalid = 0,
	Internal = 3,
	Dev = 4,
	Beta = 2,
	Public = 1,
}

interface CPanoramaScript_GameEvents
{
	/** Subscribe to a game event */
	Subscribe<T = object> ( pEventName: string, funcVal: ( event: T ) => void ): number;
	/** Unsubscribe from a game event */
	Unsubscribe ( nCallbackHandle: number ): void;
	/** Send a custom game event to the server */
	SendCustomGameEventToServer ( pEventName: string, jsObject: object ): void;
	/** Send a custom game event to the server, which will send it to all clients */
	SendCustomGameEventToAllClients ( pEventName: string, jsObject: object ): void;
	/** Send a custom game event to the server, which will then send it to one client */
	SendCustomGameEventToClient ( pEventName: string, playerIndex: number, jsObject: object ): void;
	/** Send a client-side event using gameeventmanager (only useful for a few specific events) */
	SendEventClientSide ( pEventName: string, jsObject: object ): void;
}
declare const GameEvents: CPanoramaScript_GameEvents;

interface CPanoramaScript_CustomNetTables
{
	/** Get a key from a custom net table */
	GetTableValue<T = any> ( sTableName: string, sKeyName: string ): T;
	/** Get all values from a custom net table */
	GetAllTableValues<T = any> ( sTableName: string ): Array<{ key: string, value: T; }>;
	/** Register a callback when a particular custom net table changes */
	SubscribeNetTableListener<T = any> ( sTableName: string, callback: ( sTableName: string, sKey: string, value: T ) => void ): number;
	/** Unsubscribe from a game event */
	UnsubscribeNetTableListener ( nCallbackHandle: number ): void;
}
declare const CustomNetTables: CPanoramaScript_CustomNetTables;

interface UGCQueryResult
{
	success: number;
	handle: number;
	num_results: string;
	total_results: string;
	details: {
		[ index: number ]: {
			publishedfileid: string;
			creator_steamid: string;
			title: string;
			description: string;
			filetype: number;
			timestamp_created: number;
			timestamp_updated: number;
			votes_up: number;
			votes_down: number;
			score: number;

			preview_image?: string;

			num_tags: number;
			tags: Array<{ tag: string; }>;

			num_children: number;
			children: Array<{ publishedfileid: string; }>;
		};
	};
}

interface CPanoramaScript_SteamFriends
{
	/** Requests the user's persona name */
	RequestPersonaName ( pchSteamID: string, funcVal: ( data: { steamid: string; persona_name: string; } ) => void ): string;
	/** Sets the avatar image on the image panel */
	SetLargeAvatarImage ( steamid: string, image: Image_t ): boolean;
}
declare const SteamFriends: CPanoramaScript_SteamFriends;

interface CPanoramaScript_SteamUtils
{
	/** Returns the connected universe */
	GetConnectedUniverse (): SteamUniverse;
	/** Returns the appid of the current app */
	GetAppID (): number;
}
declare const SteamUtils: CPanoramaScript_SteamUtils;

interface VRAppPropertyData
{
	data_valid: 0 | 1;
	app_key: string;
	app_name: string;
	image_path: string;
	is_dashboard_overlay: 0 | 1;
	is_template: 0 | 1;
	last_launch_time: number;
}

declare interface DOTAScenePanel_t extends Panel_t
{
	/**
	 * Invokes named inputs on all entities with matching names.
	 * `sValue` defaults to "0" if left undefined.
	 */
	FireEntityInput ( sTargetName: string, sInputName: string, sValue?: string | number ): boolean;
	PlayEntitySoundEvent ( sEntityName: string, sSoundEventName: string ): void;
	SetUnit ( sUnitName: string, sCameraName: string, bDrawBackgroundTexture: boolean ): void;
	SetAnimgraphParameterOnEntityInt ( sEntityName: string, sParamName: string, nParamValue: number ): boolean;
	SetAnimgraphParameterOnEntityFloat ( sEntityName: string, sParamName: string, nParamValue: number ): boolean;
	SetAnimgraphParameterOnEntityEnum ( sEntityName: string, sParamName: string, sParamValue: string ): boolean;
	GetPanoramaSurfacePanel (): Panel_t | null;
	SetRotateParams ( nYawMin: number, nYawMax: number, nPitchMin: number, nPitchMax: number ): void;
	ReloadScene (): void;
	ClearScene ( bUnload: boolean ): void;
	SpawnHeroInScenePanelByPlayerSlot ( sMatchID: string | null | undefined, nPlayerSlot: number, pLocatorName: string ): boolean;
	SpawnHeroInScenePanelByHeroId ( nHeroId: number, pLocatorName: string, nEconId: number ): boolean;
	SetScenePanelToPlayerHero ( sMatchID: string | null | undefined, nPlayerSlot: number ): boolean;
	SetScenePanelToLocalHero ( nHeroID: number ): boolean;
	ReplaceEconItemSlot ( nSlot: number, nItemDefIndex: number, nStyle: number ): boolean;
	SetPostProcessFade ( nFade: number ): void;
	SetCustomPostProcessMaterial ( sShaderName: string ): void;
	SpawnHeroInScenePanelByPlayerSlotWithFullBodyView ( sMatchID: string, nPlayerSlot: number ): boolean;
	LerpToCameraEntity ( sEntityName: string, nDuration: number ): void;
}

declare interface DOTAParticleScenePanel_t extends DOTAScenePanel_t
{
	StartParticles (): void;
	StopParticlesImmediately ( bIgnoreAsserts: boolean ): void;
	StopParticlesWithEndcaps (): void;
	SetControlPoint ( iControlPoint: number, x: number, y: number, z: number ): any;
}

declare interface DOTAHudVersusScene_t extends Panel_t
{
	GetHeroEntityNameByHeroSlot ( nHeroSlot: number ): string;
	AreHeroModelsLoaded (): boolean;
}

declare interface DOTAHeroImage_t extends Panel_t
{
	heroid: number;
	heroname: string;
	persona: number;
	heroimagestyle: string;
}

declare interface DOTAHeroMovie_t extends Panel_t
{
	heroid: number;
	heroname: string;
	persona: number;
}

declare interface DOTAAbilityImage_t extends Image_t
{
	abilityid: number;
	abilityname: string;
	abilitylevel: number;
	contextEntityIndex: number;
}

declare interface DOTA_UI_EconSetPreview_t extends Panel_t
{
	SetSticker ( unItemDefIndex: number, unQuality: number ): void;
}

declare interface DOTAGuildImage_t extends Panel_t
{
	guildid: number;
}

declare interface DOTAEventLevelShield_t extends Panel_t
{
	SetEventPoints ( nEvent: number, nEventPoints: number ): void;
	SetEventLevel ( nEvent: number, nEventLevel: number ): void;
}

declare interface DOTAWeeklyQuestPipBar_t extends Panel_t
{
	SetLocalUserSeasonInfo ( nEvent: number, nSeasonID: number ): void;
}

declare interface DOTAUserControl_t extends Panel_t
{
	steamid: string;
	accountid: string;
}

declare interface DOTAAvatarImage_t extends Panel_t
{
	SetAccountID ( unAccountID: number ): void;
}

declare interface DOTAGuildContract_t extends Panel_t
{
	SetContract ( unEvent: number, unChallengeInstanceID: number, unChallengeParameter: number, bCompleted: boolean ): void;
}

declare interface DOTAHUDMuertaReleaseEvent_t extends Panel_t
{
	GetAnnoucementsPanel (): Panel_t | null;
	GetCounterPanel (): Panel_t | null;
}

declare interface DOTACrownfallToken_t extends Panel_t
{
	overworld_id: number;
	token_id: number;
}

declare interface DOTAHUDMuertaReleaseEventAnnouncement_t extends Panel_t
{
}

interface CScriptBindingPR_Players
{
	/** Get the maximum number of players in the game. */
	GetMaxPlayers (): number;
	/** Get the maximum number of players on teams. */
	GetMaxTeamPlayers (): number;
	/** Get the local player ID. */
	GetLocalPlayer (): number;
	/** Is the nth player a valid player? */
	IsValidPlayerID ( iPlayerID: number ): boolean;
	/** Return the name of a player. */
	GetPlayerName ( iPlayerID: number ): string;
	/** Get the entity index of the hero controlled by this player. */
	GetPlayerHeroEntityIndex ( iPlayerID: number ): number;
	/** Get the entities this player has selected. */
	GetSelectedEntities ( iPlayerID: number ): number[];
	/** Get the entities this player is querying. */
	GetQueryUnit ( iPlayerID: number ): number;
	/** Get local player current portrait unit. (ie. Player's hero or primary selected unit.) */
	GetLocalPlayerPortraitUnit (): number;
	/** Can the player buy back? */
	CanPlayerBuyback ( nPlayerID: number ): boolean;
	/** Does this player have a custom game ticket? */
	HasCustomGameTicketForPlayerID ( nPlayerID: number ): boolean;
	/** The number of assists credited to a player. */
	GetAssists ( nPlayerID: number ): number;
	GetClaimedDenies ( nPlayerID: number ): number;
	GetClaimedMisses ( nPlayerID: number ): number;
	/** The number of deaths a player has suffered. */
	GetDeaths ( nPlayerID: number ): number;
	/** The number of denies credited to a player. */
	GetDenies ( nPlayerID: number ): number;
	/** The amount of gold a player has. */
	GetGold ( nPlayerID: number ): number;
	/** The number of kills credited to a player. */
	GetKills ( nPlayerID: number ): number;
	GetLastBuybackTime ( nPlayerID: number ): number;
	GetLastHitMultikill ( nPlayerID: number ): number;
	/** The number of last hits credited to a player. */
	GetLastHits ( nPlayerID: number ): number;
	GetLastHitStreak ( nPlayerID: number ): number;
	/** The current level of a player. */
	GetLevel ( nPlayerID: number ): number;
	GetMisses ( nPlayerID: number ): number;
	GetNearbyCreepDeaths ( nPlayerID: number ): number;
	/** Total reliable gold for this player. */
	GetReliableGold ( nPlayerID: number ): number;
	GetRespawnSeconds ( nPlayerID: number ): number;
	GetStreak ( nPlayerID: number ): number;
	/** Total gold earned in this game by this player. */
	GetTotalEarnedGold ( nPlayerID: number ): number;
	/** Total xp earned in this game by this player. */
	GetTotalEarnedXP ( nPlayerID: number ): number;
	/** Total unreliable gold for this player. */
	GetUnreliableGold ( nPlayerID: number ): number;
	/** Get the team this player is on. */
	GetTeam ( nPlayerID: number ): number;
	/** Get the player's selected hero id. */
	GetSelectedHeroID ( nPlayerID: number ): number;
	/** Average gold earned per minute for this player. */
	GetGoldPerMin ( nPlayerID: number ): number;
	/** Average xp earned per minute for this player. */
	GetXPPerMin ( nPlayerID: number ): number;
	/** Return the name of the hero a player is controlling. */
	GetPlayerSelectedHero ( nPlayerID: number ): string;
	/** Get the player color. */
	GetPlayerColor ( iPlayerID: number ): number;
	/** Is this player a spectator. */
	IsSpectator ( iPlayerID: number ): boolean;
	/** . */
	PlayerPortraitClicked ( nClickedPlayerID: number, bHoldingCtrl: boolean, bHoldingAlt: boolean ): void;
	/** . */
	PlayerPortraitDoubleClicked ( nClickedPlayerID: number, bHoldingCtrl: boolean, bHoldingAlt: boolean ): void;
	/** . */
	BuffClicked ( nEntity: number, nBuffSerial: number, bAlert: boolean ): void;
	/** Is the local player live spectating? */
	IsLocalPlayerLiveSpectating (): boolean;
	/** If local player is in perspective camera, returns true. Else, false */
	IsLocalPlayerInPerspectiveCamera (): boolean;
	/** If player is in perspective mode, returns the followed players entity index.  Else, -1. */
	GetPerspectivePlayerEntityIndex (): number;
	/** If player is in perspective mode, returns the followed players id.  Else, -1. */
	GetPerspectivePlayerId (): number;
}
declare const Players: CScriptBindingPR_Players;

interface CScriptBindingPR_Entities
{
	/** Get the world origin of the entity. */
	GetAbsOrigin ( nEntityIndex: number ): Vector;
	/** Get the world angles of the entity. */
	GetAbsAngles ( nEntityIndex: number ): Vector;
	/** Get the forward vector of the entity. */
	GetForward ( nEntityIndex: number ): Vector;
	/** Get the left vector of the entity. */
	GetLeft ( nEntityIndex: number ): Vector;
	/** Get the right vector of the entity. WARNING: This produces a left-handed coordinate system. Use GetLeft instead! */
	GetRight ( nEntityIndex: number ): Vector;
	/** Get the up vector of the entity. */
	GetUp ( nEntityIndex: number ): Vector;
	/** Get all the building entities. */
	GetAllBuildingEntities (): number[];
	/** Get all the hero entities. */
	GetAllHeroEntities (): number[];
	/** Get all the entities with a given name. */
	GetAllEntitiesByName ( pszName: string ): number[];
	/** Get all the entities with a given classname. */
	GetAllEntitiesByClassname ( pszName: string ): number[];
	/** Get all the creature entities. */
	GetAllCreatureEntities (): number[];
	/** Get all the entities. */
	GetAllEntities (): number[];
	CanBeDominated ( nEntityIndex: number ): boolean;
	HasAttackCapability ( nEntityIndex: number ): boolean;
	HasCastableAbilities ( nEntityIndex: number ): boolean;
	HasFlyingVision ( nEntityIndex: number ): boolean;
	HasFlyMovementCapability ( nEntityIndex: number ): boolean;
	HasGroundMovementCapability ( nEntityIndex: number ): boolean;
	HasMovementCapability ( nEntityIndex: number ): boolean;
	HasScepter ( nEntityIndex: number ): boolean;
	HasUpgradeableAbilities ( nEntityIndex: number ): boolean;
	HasUpgradeableAbilitiesThatArentMaxed ( nEntityIndex: number ): boolean;
	IsAlive ( nEntityIndex: number ): boolean;
	IsAncient ( nEntityIndex: number ): boolean;
	IsAttackImmune ( nEntityIndex: number ): boolean;
	IsBarracks ( nEntityIndex: number ): boolean;
	IsBlind ( nEntityIndex: number ): boolean;
	IsBoss ( nEntityIndex: number ): boolean;
	IsBossCreature ( nEntityIndex: number ): boolean;
	IsRoshan ( nEntityIndex: number ): boolean;
	IsBuilding ( nEntityIndex: number ): boolean;
	IsCommandRestricted ( nEntityIndex: number ): boolean;
	IsConsideredHero ( nEntityIndex: number ): boolean;
	IsControllableByAnyPlayer ( nEntityIndex: number ): boolean;
	IsCourier ( nEntityIndex: number ): boolean;
	IsCreature ( nEntityIndex: number ): boolean;
	IsCreep ( nEntityIndex: number ): boolean;
	IsCreepHero ( nEntityIndex: number ): boolean;
	IsDeniable ( nEntityIndex: number ): boolean;
	IsDominated ( nEntityIndex: number ): boolean;
	IsEnemy ( nEntityIndex: number ): boolean;
	IsEvadeDisabled ( nEntityIndex: number ): boolean;
	IsFort ( nEntityIndex: number ): boolean;
	IsFrozen ( nEntityIndex: number ): boolean;
	IsGeneratedByEconItem ( nEntityIndex: number ): boolean;
	IsHallofFame ( nEntityIndex: number ): boolean;
	IsDisarmed ( nEntityIndex: number ): boolean;
	IsHero ( nEntityIndex: number ): boolean;
	IsHexed ( nEntityIndex: number ): boolean;
	IsIllusion ( nEntityIndex: number ): boolean;
	IsInRangeOfFountain ( nEntityIndex: number ): boolean;
	IsInventoryEnabled ( nEntityIndex: number ): boolean;
	IsInvisible ( nEntityIndex: number ): boolean;
	IsInvulnerable ( nEntityIndex: number ): boolean;
	IsLaneCreep ( nEntityIndex: number ): boolean;
	IsLowAttackPriority ( nEntityIndex: number ): boolean;
	IsMagicImmune ( nEntityIndex: number ): boolean;
	IsMuted ( nEntityIndex: number ): boolean;
	IsNeutralUnitType ( nEntityIndex: number ): boolean;
	IsNightmared ( nEntityIndex: number ): boolean;
	IsOther ( nEntityIndex: number ): boolean;
	IsOutOfGame ( nEntityIndex: number ): boolean;
	IsOwnedByAnyPlayer ( nEntityIndex: number ): boolean;
	IsPhantom ( nEntityIndex: number ): boolean;
	IsRangedAttacker ( nEntityIndex: number ): boolean;
	IsRealHero ( nEntityIndex: number ): boolean;
	IsRooted ( nEntityIndex: number ): boolean;
	IsSelectable ( nEntityIndex: number ): boolean;
	IsShop ( nEntityIndex: number ): boolean;
	IsSilenced ( nEntityIndex: number ): boolean;
	IsSpeciallyDeniable ( nEntityIndex: number ): boolean;
	IsSpeciallyUndeniable ( nEntityIndex: number ): boolean;
	IsStunned ( nEntityIndex: number ): boolean;
	IsSummoned ( nEntityIndex: number ): boolean;
	IsTower ( nEntityIndex: number ): boolean;
	IsUnselectable ( nEntityIndex: number ): boolean;
	IsWard ( nEntityIndex: number ): boolean;
	IsZombie ( nEntityIndex: number ): boolean;
	NoHealthBar ( nEntityIndex: number ): boolean;
	NoTeamMoveTo ( nEntityIndex: number ): boolean;
	NoTeamSelect ( nEntityIndex: number ): boolean;
	NotOnMinimap ( nEntityIndex: number ): boolean;
	NotOnMinimapForEnemies ( nEntityIndex: number ): boolean;
	NoUnitCollision ( nEntityIndex: number ): boolean;
	PassivesDisabled ( nEntityIndex: number ): boolean;
	ProvidesVision ( nEntityIndex: number ): boolean;
	UsesHeroAbilityNumbers ( nEntityIndex: number ): boolean;
	IsMoving ( nEntityIndex: number ): boolean;
	GetAbilityCount ( nEntityIndex: number ): number;
	GetCombatClassAttack ( nEntityIndex: number ): number;
	GetCombatClassDefend ( nEntityIndex: number ): number;
	GetCurrentVisionRange ( nEntityIndex: number ): number;
	GetDamageBonus ( nEntityIndex: number ): number;
	GetDamageMax ( nEntityIndex: number ): number;
	GetDamageMin ( nEntityIndex: number ): number;
	GetDayTimeVisionRange ( nEntityIndex: number ): number;
	GetHealth ( nEntityIndex: number ): number;
	GetHealthPercent ( nEntityIndex: number ): number;
	GetHealthThinkRegen ( nEntityIndex: number ): number;
	GetLevel ( nEntityIndex: number ): number;
	GetMaxHealth ( nEntityIndex: number ): number;
	GetNightTimeVisionRange ( nEntityIndex: number ): number;
	GetPlayerOwnerID ( nEntityIndex: number ): number;
	GetStates ( nEntityIndex: number ): number;
	GetTotalPurchasedUpgradeGoldCost ( nEntityIndex: number ): number;
	GetTeamNumber ( nEntityIndex: number ): number;
	GetHealthBarOffset ( nEntityIndex: number ): number;
	GetAttackRange ( nEntityIndex: number ): number;
	GetAttackSpeed ( nEntityIndex: number ): number;
	GetAttacksPerSecond ( nEntityIndex: number ): number;
	GetBaseAttackTime ( nEntityIndex: number ): number;
	GetBaseMagicalResistanceValue ( nEntityIndex: number ): number;
	GetBaseMoveSpeed ( nEntityIndex: number ): number;
	GetBonusPhysicalArmor ( nEntityIndex: number ): number;
	GetCollisionPadding ( nEntityIndex: number ): number;
	GetEffectiveInvisibilityLevel ( nEntityIndex: number ): number;
	GetHasteFactor ( nEntityIndex: number ): number;
	GetHullRadius ( nEntityIndex: number ): number;
	GetIdealSpeed ( nEntityIndex: number ): number;
	GetIncreasedAttackSpeed ( nEntityIndex: number ): number;
	GetMana ( nEntityIndex: number ): number;
	GetManaThinkRegen ( nEntityIndex: number ): number;
	GetMaxMana ( nEntityIndex: number ): number;
	GetMagicalArmorValue ( nEntityIndex: number ): number;
	GetPaddedCollisionRadius ( nEntityIndex: number ): number;
	GetPercentInvisible ( nEntityIndex: number ): number;
	GetPhysicalArmorValue ( nEntityIndex: number ): number;
	GetProjectileCollisionSize ( nEntityIndex: number ): number;
	GetRingRadius ( nEntityIndex: number ): number;
	GetSecondsPerAttack ( nEntityIndex: number ): number;
	ManaFraction ( nEntityIndex: number ): number;
	GetClassNameAsCStr ( nEntityIndex: number ): string;
	GetDisplayedUnitName ( nEntityIndex: number ): string;
	GetSelectionGroup ( nEntityIndex: number ): string;
	GetSoundSet ( nEntityIndex: number ): string;
	GetUnitLabel ( nEntityIndex: number ): string;
	GetUnitName ( nEntityIndex: number ): string;
	GetTotalDamageTaken ( nEntityIndex: number ): number;
	IsControllableByPlayer ( nEntityIndex: number, nPlayerIndex: number ): boolean;
	GetChosenTarget ( nEntityIndex: number ): number;
	HasItemInInventory ( nEntityIndex: number, pItemName: string ): boolean;
	GetRangeToUnit ( nEntityIndex: number, nEntityIndex2: number ): number;
	IsEntityInRange ( nEntityIndex: number, nEntityIndex2: number, flRange: number ): boolean;
	GetMoveSpeedModifier ( nEntityIndex: number, flBaseSpeed: number ): number;
	CanAcceptTargetToAttack ( nEntityIndex: number, nEntityIndex2: number ): boolean;
	InState ( nEntityIndex: number, nState: number ): boolean;
	GetArmorForDamageType ( nEntityIndex: number, iDamageType: number ): number;
	GetArmorReductionForDamageType ( nEntityIndex: number, iDamageType: number ): number;
	IsInRangeOfShop ( nEntityIndex: number, iShopType: number, bSpecific: boolean ): boolean;
	GetNumItemsInStash ( nEntityIndex: number ): number;
	GetNumItemsInInventory ( nEntityIndex: number ): number;
	GetItemInSlot ( nEntityIndex: number, nSlotIndex: number ): number;
	GetAbility ( nEntityIndex: number, nSlotIndex: number ): number;
	GetAbilityByName ( nEntityIndex: number, pszAbilityName: string ): number;
	GetNumBuffs ( nEntityIndex: number ): number;
	GetBuff ( nEntityIndex: number, nBufIndex: number ): number;
	/** Set the minimap icon on this client. */
	SetMinimapIcon ( nEntityIndex: number, pszMinimapIcon: string ): void;
	GetAbilityPoints ( nEntityIndex: number ): number;
	GetCurrentXP ( nEntityIndex: number ): number;
	GetNeededXPToLevel ( nEntityIndex: number ): number;
	/** Get the currently selected entities */
	GetSelectionEntities ( nEntityIndex: number ): number[];
	/** Is this a valid entity index? */
	IsValidEntity ( nEntityIndex: number ): boolean;
	/** Is this entity an item container in the world? */
	IsItemPhysical ( nEntityIndex: number ): boolean;
	/** Get the item contained in this physical item container. */
	GetContainedItem ( nEntityIndex: number ): number;
}
declare const Entities: CScriptBindingPR_Entities;

interface CScriptBindingPR_Abilities
{
	GetAbilityName ( nEntityIndex: number ): string;
	GetAbilityTextureName ( nEntityIndex: number ): string;
	GetAssociatedPrimaryAbilities ( nEntityIndex: number ): string;
	GetAssociatedSecondaryAbilities ( nEntityIndex: number ): string;
	GetHotkeyOverride ( nEntityIndex: number ): string;
	GetIntrinsicModifierName ( nEntityIndex: number ): string;
	GetSharedCooldownName ( nEntityIndex: number ): string;
	AbilityReady ( nEntityIndex: number ): number;
	/** Returns an AbilityLearnResult_t */
	CanAbilityBeUpgraded ( nEntityIndex: number ): number;
	CanBeExecuted ( nEntityIndex: number ): number;
	GetAbilityDamage ( nEntityIndex: number ): number;
	GetAbilityDamageType ( nEntityIndex: number ): number;
	GetAbilityTargetFlags ( nEntityIndex: number ): number;
	GetAbilityTargetTeam ( nEntityIndex: number ): number;
	GetAbilityTargetType ( nEntityIndex: number ): number;
	GetAbilityType ( nEntityIndex: number ): number;
	GetBehavior ( nEntityIndex: number ): number;
	GetCastRange ( nEntityIndex: number ): number;
	GetChannelledManaCostPerSecond ( nEntityIndex: number ): number;
	GetCurrentCharges ( nEntityIndex: number ): number;
	GetCurrentAbilityCharges ( nEntityIndex: number ): number;
	GetEffectiveLevel ( nEntityIndex: number ): number;
	GetHeroLevelRequiredToUpgrade ( nEntityIndex: number ): number;
	GetLevel ( nEntityIndex: number ): number;
	GetManaCost ( nEntityIndex: number ): number;
	GetMaxLevel ( nEntityIndex: number ): number;
	AttemptToUpgrade ( nEntityIndex: number ): boolean;
	CanLearn ( nEntityIndex: number ): boolean;
	GetAutoCastState ( nEntityIndex: number ): boolean;
	GetToggleState ( nEntityIndex: number ): boolean;
	HasScepterUpgradeTooltip ( nEntityIndex: number ): boolean;
	IsActivated ( nEntityIndex: number ): boolean;
	IsActivatedChanging ( nEntityIndex: number ): boolean;
	IsAttributeBonus ( nEntityIndex: number ): boolean;
	IsAutocast ( nEntityIndex: number ): boolean;
	IsCooldownReady ( nEntityIndex: number ): boolean;
	IsDisplayedAbility ( nEntityIndex: number ): boolean;
	IsHidden ( nEntityIndex: number ): boolean;
	IsHiddenWhenStolen ( nEntityIndex: number ): boolean;
	IsInAbilityPhase ( nEntityIndex: number ): boolean;
	IsItem ( nEntityIndex: number ): boolean;
	IsMarkedAsDirty ( nEntityIndex: number ): boolean;
	IsMuted ( nEntityIndex: number ): boolean;
	IsOnCastbar ( nEntityIndex: number ): boolean;
	IsOnLearnbar ( nEntityIndex: number ): boolean;
	IsOwnersGoldEnough ( nEntityIndex: number ): boolean;
	IsOwnersGoldEnoughForUpgrade ( nEntityIndex: number ): boolean;
	IsOwnersManaEnough ( nEntityIndex: number ): boolean;
	IsPassive ( nEntityIndex: number ): boolean;
	IsRecipe ( nEntityIndex: number ): boolean;
	IsSharedWithTeammates ( nEntityIndex: number ): boolean;
	IsStealable ( nEntityIndex: number ): boolean;
	IsStolen ( nEntityIndex: number ): boolean;
	IsToggle ( nEntityIndex: number ): boolean;
	UsesAbilityCharges ( nEntityIndex: number ): boolean;
	GetAOERadius ( nEntityIndex: number ): number;
	GetBackswingTime ( nEntityIndex: number ): number;
	GetCastPoint ( nEntityIndex: number ): number;
	GetChannelStartTime ( nEntityIndex: number ): number;
	GetChannelTime ( nEntityIndex: number ): number;
	GetCooldown ( nEntityIndex: number ): number;
	GetCooldownLength ( nEntityIndex: number ): number;
	GetCooldownTime ( nEntityIndex: number ): number;
	GetCooldownTimeRemaining ( nEntityIndex: number ): number;
	GetDuration ( nEntityIndex: number ): number;
	GetUpgradeBlend ( nEntityIndex: number ): number;
	GetAbilityChargeRestoreTimeRemaining ( nEntityIndex: number ): number;
	/** Get the local player's current active ability. (Pre-cast targetting state.) */
	GetLocalPlayerActiveAbility (): number;
	GetCaster ( nAbilityIndex: number ): number;
	GetCustomValueFor ( nAbilityIndex: number, pszAbilityVarName: string ): number;
	GetLevelSpecialValueFor ( nAbilityIndex: number, szName: string, nLevel: number ): number;
	GetSpecialValueFor ( nAbilityIndex: number, szName: string ): number;
	IsCosmetic ( nAbilityIndex: number, nTargetEntityIndex: number ): boolean;
	/** Attempt to execute the specified ability (Equivalent to clicking the ability in the HUD action bar) */
	ExecuteAbility ( nAbilityEntIndex: number, nCasterEntIndex: number, bIsQuickCast: boolean ): boolean;
	/** Get the max ability charge count. */
	GetMaxAbilityCharges ( nAbilityEntIndex: number ): number;
	/** Attempt to double-tap (self-cast) the specified ability (Equivalent to double-clicking the ability in the HUD action bar) */
	CreateDoubleTapCastOrder ( nAbilityEntIndex: number, nCasterEntIndex: number ): void;
	/** Ping the specified ability (Equivalent to alt-clicking the ability in the HUD action bar) */
	PingAbility ( nAbilityIndex: number ): void;
	/** Returns the keybind (as a string) for the specified ability. */
	GetKeybind ( nAbilityEntIndex: number ): string;
}
declare const Abilities: CScriptBindingPR_Abilities;

interface CScriptBindingPR_Game
{
	Time (): number;
	GetGameTime (): number;
	GetGameFrameTime (): number;
	GetDOTATime ( bIncludePreGame: boolean, bIncludeNegativeTime: boolean ): number;
	IsGamePaused (): boolean;
	IsDayTime (): boolean;
	IsInToolsMode (): boolean;
	IsInBanPhase (): boolean;
	/** Return the team id of the winning team. */
	GetGameWinner (): number;
	GetStateTransitionTime (): number;
	/** Get the difficulty setting of the game. */
	GetCustomGameDifficulty (): number;
	/** Returns true if the user has enabled flipped HUD */
	IsHUDFlipped (): boolean;
	/** Returns the width of the display. */
	GetScreenWidth (): number;
	/** Returns the height of the display. */
	GetScreenHeight (): number;
	/** Converts the specified x,y,z world co-ordinate into an x screen coordinate. Returns -1 if behind the camera */
	WorldToScreenX ( x: number, y: number, z: number ): number;
	/** Converts the specified x,y,z world co-ordinate into a y screen coordinate. Returns -1 if behind the camera */
	WorldToScreenY ( x: number, y: number, z: number ): number;
	/** Converts the specified x, y screen coordinates into a x, y, z world coordinates. */
	ScreenXYToWorld ( nX: number, nY: number ): Vector;
	/** Returns the keybind (as a string) for the requested ability slot. */
	GetKeybindForAbility ( iSlot: number ): string;
	/** Returns the keybind (as a string) for the requested inventory slot. */
	GetKeybindForInventorySlot ( iSlot: number ): string;
	/** Returns the keybind (as a string). */
	GetKeybindForCommand ( nCommand: number ): string;
	/** Create a new keybind. */
	CreateCustomKeyBind ( pszKey: string, pszCommand: string ): void;
	GetNianFightTimeLeft (): number;
	Diretide2020ShouldShowGameInfo (): boolean;
	Diretide2020SetShowGameInfo ( bShowGameInfo: boolean ): void;
	Diretide2020GetGameplayTipNumber (): number;
	Diretide2020SetGameplayTipNumber ( nGameplayTipNumber: number ): void;
	NemesticeGetGameplayTipNumber (): number;
	NemesticeSetGameplayTipNumber ( nGameplayTipNumber: number ): void;
	NemesticeShouldShowGameInfo (): boolean;
	NemesticeSetShowGameInfo ( bShowGameInfo: boolean ): void;
	Winter2022ShouldShowGameInfo (): boolean;
	Winter2022SetShowGameInfo ( bShowGameInfo: boolean ): void;
	Winter2022GetGameplayTipNumber (): number;
	Winter2022SetGameplayTipNumber ( nGameplayTipNumber: number ): void;
	ForceCustomUILoad (): void;
	CutToDefaultCamera (): void;
	PlayDataDrivenCamera ( pszCameraName: string ): number;

	GetState (): number;
	GameStateIs ( nState: number ): boolean;
	GameStateIsBefore ( nState: number ): boolean;
	GameStateIsAfter ( nState: number ): boolean;
	AddCommand ( pszCommandName: string, callback: Function, pszDescription: string, nFlags: number ): void;
	GetJoyFocusPanel (): Panel_t | null;
	SetJoyFocusPanel ( pPanelArg: Panel_t | null ): void;
	PushJoyFocusPanel ( pPanelArg: Panel_t | null ): void;
	PopJoyFocusPanel (): void;
	GetLocalPlayerID (): number;
	/** Assign the local player to the specified team */
	PlayerJoinTeam ( nTeamID: number ): void;
	/** Assign the currently unassigned players to teams */
	AutoAssignPlayersToTeams (): void;
	/** Shuffle the team assignments of all of the players currently assigned to a team. */
	ShufflePlayerTeamAssignments (): void;
	/** Set the remaining seconds in team setup before the game starts. -1 to stop the countdown timer */
	SetRemainingSetupTime ( flSeconds: number ): void;
	/** Set the amount of time in seconds that will be set as the remaining time when all players are assigned to a team. */
	SetAutoLaunchDelay ( flSeconds: number ): void;
	/** Enable or disable automatically starting the game once all players are assigned to a team */
	SetAutoLaunchEnabled ( bEnable: boolean ): void;
	/** Return true of false indicating if automatically starting the game is enabled. */
	GetAutoLaunchEnabled (): boolean;
	/** Lock the team selection preventing players from swiching teams. */
	SetTeamSelectionLocked ( bLockTeams: boolean ): void;
	/** Returns true or false to indicate if team selection is locked */
	GetTeamSelectionLocked (): boolean;
	/** Get all team IDs */
	GetAllTeamIDs (): number[];
	/** Get all player IDs */
	GetAllPlayerIDs (): number[];
	/** Get unassigned player IDs */
	GetUnassignedPlayerIDs (): number[];
	/** Get info about the player hero ultimate ability */
	GetPlayerUltimateStateOrTime ( nPlayerID: number ): number;
	/** Whether the local player has muted text and voice chat for the specified player id */
	IsPlayerMuted ( nPlayerID: number ): boolean;
	/** Set whether the local player has muted text and voice chat for the specified player id */
	SetPlayerMuted ( nPlayerID: number, bMuted: boolean ): void;
	/** Whether the local player has muted voice chat for the specified player id */
	IsPlayerMutedVoice ( nPlayerID: number ): boolean;
	/** Set whether the local player has muted voice chat for the specified player id */
	SetPlayerMutedVoice ( nPlayerID: number, bMutedVoice: boolean ): void;
	/** Whether the local player has muted text chat for the specified player id */
	IsPlayerMutedText ( nPlayerID: number ): boolean;
	/** Set whether the local player has muted text chat for the specified player id */
	SetPlayerMutedText ( nPlayerID: number, bMutedText: boolean ): void;
	/** Get detailed information for the given team */
	GetTeamDetails ( nTeam: number ): TeamDetails;
	/** Get details for the local player */
	GetLocalPlayerInfo (): PlayerInfo;
	/** Get info about the player items. */
	GetPlayerItems ( nPlayerID: number ): PlayerItems;
	/** Get info about the given player */
	GetPlayerInfo ( nPlayerID: number ): PlayerInfo;
	/** Get player IDs for the given team */
	GetPlayerIDsOnTeam ( nTeam: number ): number[];
	ServerCmd ( pMsg: string ): void;
	SetDotaRefractHeroes ( bEnabled: boolean ): void;
	FinishGame (): void;
	LeaveCurrentGame (): void;
	Disconnect (): void;
	FindEventMatch (): void;
	SlideOutEventGamePlayButton (): void;
	/** Emit a sound for the local player. Returns an integer handle that can be passed to StopSound. (Returns 0 on failure.) */
	EmitSound ( pSoundEventName: string ): string;
	/** Stop a current playing sound on the local player. Takes handle from a call to EmitSound */
	StopSound ( nHandle: boolean ): void;
	/** Ask whether the in game shop is open. */
	IsShopOpen (): boolean;
	/** Set custom shop context. */
	SetCustomShopEntityString ( pszCustomShopEntityString: string ): void;
	/** Get the boolean value of the specific convar. Asserts if invalid and returns false */
	GetConvarBool ( cvar: string ): boolean;
	/** Get the number value of the specific convar. Asserts if invalid and returns 0 */
	GetConvarInt ( cvar: string ): number;
	/** Get the number value of the specific convar. Asserts if invalid and returns 0.f */
	GetConvarFloat ( cvar: string ): number;
	/** Return information about the current map. */
	GetMapInfo (): MapInfo;

	/** Orders from the local player - takes a single arguments object that supports: dotaunitorder_t OrderType, ent_index TargetIndex, vector Position, ent_index AbilityIndex, OrderIssuer_t OrderIssuer, ent_index UnitIndex, OrderQueueBehavior_t QueueBehavior, boolean ShowEffects. */
	PrepareUnitOrders ( unitOrder: InputUnitOrder ): void;
	/** Order a unit to drop the specified item at the current cursor location. */
	DropItemAtCursor ( nControlledUnitEnt: number, nItemEnt: number ): void;
	/** Calculate 2D length. */
	Length2D ( vec1: InputVector, vec2: InputVector ): number;
	/** Returns normalized vector. */
	Normalized ( vec: InputVector ): Vector;
	EnterAbilityLearnMode (): void;
	EndAbilityLearnMode (): void;
	IsInAbilityLearnMode (): boolean;
}
declare const Game: CScriptBindingPR_Game;

interface CDOTA_PanoramaScript_GameUI
{
	/** Control whether the default UI is enabled */
	SetDefaultUIEnabled ( nElementType: number, bVisible: boolean ): void;
	/** Save persistent data used by an event game */
	SavePersistentEventGameData ( val: any ): void;
	/** Load persistent data used by an event game */
	LoadPersistentEventGameData (): any;
	/** Get the current UI configuration */
	CustomUIConfig (): any;
	/** Create a minimap ping at the given location */
	PingMinimapAtLocation ( vec3: InputVector ): void;
	/** Install a mouse input filter */
	SetMouseCallback ( callbackFn: ( sInputEvent: "pressed" | "released" | "doublepressed" | "wheeled", nMouseButton: number ) => void ): void;
	/** Query to check if Tips are available for the local player */
	AreTipsAvailable (): boolean;
	/** Query to see if the local player can tip a specific player */
	IsPlayerTippable ( iPlayerID: number ): boolean;
	/** Tip a player */
	TipPlayer ( iPlayerID: number ): void;
	EnableAliMode ( bEnable: boolean, nPort: number, offsetVal: InputVector, flScale: number ): void;
	/** Get the current mouse position. */
	GetCursorPosition (): [ number, number ];
	/** Return the entity index of the entity under the given screen position. */
	FindScreenEntities ( pos: [ number, number ] ): Array<{ entityIndex: number, accurateCollision: boolean; }>;
	/** Return the entity index of the entity under the given screen position. */
	FindScreenEntities ( x: number, y: number ): Array<{ entityIndex: number, accurateCollision: boolean; }>;
	/** Get the world position of the screen position, or null if the cursor is out of the world. */
	GetScreenWorldPosition ( pos: [ number, number ] ): Vector | null;
	/** Get the world position of the screen position, or null if the cursor is out of the world. */
	GetScreenWorldPosition ( x: number, y: number ): Vector | null;
	/** Install a mouse input filter */
	WasMousePressed ( nButtonNum: number ): boolean;
	/** Install a mouse input filter */
	WasMouseDoublePressed ( nButtonNum: number ): boolean;
	/** Install a mouse input filter */
	IsMouseDown ( nButtonNum: number ): boolean;
	/** Is the shift button pressed? */
	IsShiftDown (): boolean;
	/** Is the alt button pressed? */
	IsAltDown (): boolean;
	/** Is the control button pressed? */
	IsControlDown (): boolean;
	/** Get the current UI click interaction mode. */
	GetClickBehaviors (): number;
	/** Select a unit, adding it to the group or replacing the current selection. */
	SelectUnit ( nEntityIndex: number, bAddToGroup: boolean ): void;
	/** Get the current look at position. */
	GetCameraLookAtPosition (): Vector | [];
	/** Get the current camera position. */
	GetCameraPosition (): Vector | [];
	/** Get the current look at position height offset. */
	GetCameraLookAtPositionHeightOffset (): number;
	/** Set the minimum camera pitch angle. */
	SetCameraPitchMin ( flPitchMin: number ): void;
	/** Set the maximum camera pitch angle. */
	SetCameraPitchMax ( flPitchMax: number ): void;
	/** Set the camera's yaw. */
	SetCameraYaw ( flCameraYaw: number ): void;
	/** Get the camera's yaw. */
	GetCameraYaw (): number;
	/** Offset the camera's look at point. */
	SetCameraLookAtPositionHeightOffset ( flCameraLookAtHeightOffset: number ): void;
	/** Set the camera from a lateral position. */
	SetCameraPositionFromLateralLookAtPosition ( x: number, y: number ): void;
	/** Set whether the camera should automatically adjust to average terrain height. */
	SetCameraTerrainAdjustmentEnabled ( bEnabled: boolean ): void;
	/** Set the camera distance from the look at point. */
	SetCameraDistance ( flDistance: number ): void;
	/** Set the gap between the bottom of the screen and the game rendering viewport. (Value expressed as pixels in a normalized 1024x768 viewport.) */
	SetRenderBottomInsetOverride ( nInset: number ): void;
	/** Set the gap between the top of the screen and the game rendering viewport. (Value expressed as pixels in a normalized 1024x768 viewport.) */
	SetRenderTopInsetOverride ( nInset: number ): void;
	/** Set the camera target for the local player, or -1 to clear. */
	SetCameraTarget ( nTargetEntIndex: number ): void;
	/** Set the camera target as position for the local player over specified lerp. */
	SetCameraTargetPosition ( vec3: InputVector, flLerp: number ): void;
	/** Moves the camera to an entity, but doesn't lock the camera on that entity. */
	MoveCameraToEntity ( nTargetEntIndex: number ): void;
	/** Converts the specified x,y,z world co-ordinate into an x,y screen coordinate. Will clamp position to always be in front of camera.  Position returned as 0->1.0 */
	WorldToScreenXYClamped ( vec3: InputVector ): Vector;
	/** Get the current players scoreboard score for the specified zone. */
	GetPlayerScoreboardScore ( pszScoreboardName: string ): number;
	/** Send a custom client side error message with passed string and soundevent. */
	SendCustomHUDError ( pszErrorText: string, pszErrorSound: string ): void;
	/** Given a passed ability, replace the special value variables in the passed localized text. */
	ReplaceDOTAAbilitySpecialValues ( sAbilityName: string, sToken: string ): string | null;
	/** Display a custom contextual tip (wizard tip) with specific loc string and duration */
	DisplayCustomContextualTip ( tip: ContextualTip ): void;
	/** Set the text of a passed label for a DOTA Talent using ability values. */
	SetupDOTATalentNameLabel ( panel: Label_t, sAbilityName: string ): string;
	/** Returns true if the passed ability is a talent. */
	IsAbilityDOTATalent ( pszAbilityName: string ): boolean;
	/** Returns the localization token to use for a particular unit, given the unit's name */
	GetUnitLocToken ( pszUnitName: string ): string;
	/** Get the localized version of a unit's name */
	GetUnitNameLocalized ( pszUnitName: string ): string;
}
declare const GameUI: CDOTA_PanoramaScript_GameUI;

declare function IsDotaAltPressed (): boolean;
declare function PlayUISoundScript ( sSound: string ): number;
declare function StopUISoundScript ( nGuid: number ): void;
declare function IsUISoundScriptPlaying ( nGuid: number ): boolean;
declare function SetDuckingUIMusic ( pPanel: Panel_t, bDucking: boolean ): void;

interface DotaPanelTypes extends CorePanelTypes
{
	DOTAHeroImage: DOTAHeroImage_t;
	DOTAHUDMuertaReleaseEventAnnouncement: DOTAHUDMuertaReleaseEventAnnouncement_t;
}

interface DotaEventHandlers extends CoreEventHandlers
{
	DOTAScenePanelSceneLoaded: PanelEventDefinition_t;
	DOTAScenePanelSceneUnloaded: PanelEventDefinition_t;
	DOTAScenePanelCameraLerpFinished: PanelEventDefinition_t;
	DOTAScenePanelSetRotationSpeed: PanelEventDefinition_t<[ number ]>;
	DOTASceneFireEntityInput: PanelEventDefinition_t<[ string, string, string | number ]>;
	DOTAScenePanelSimulateWorld: PanelEventDefinition_t<[ number ]>;
	DOTAScenePanelEntityClicked: PanelEventDefinition_t<[ string ]>;
	DOTAScenePanelEntityMouseOver: PanelEventDefinition_t<[ string ]>;
	DOTAScenePanelEntityMouseOut: PanelEventDefinition_t<[ string ]>;
	DOTASceneSetCameraEntity: EventDefinition_t<[ string, number ]>;
	DOTAScenePanelResetRotation: EventDefinition_t;
	DOTAGlobalSceneSetCameraEntity: EventDefinition_t<[ string, string, number ]>;
	DOTAGlobalSceneSetRootEntity: EventDefinition_t<[ string, string ]>;
	DOTAScenePanelDumpState: EventDefinition_t;
	DOTAShowReferencePage: EventDefinition_t<[ string ]>;  // the xml file to load
	DOTAShowReferencePageStyled: EventDefinition_t<[ string, string ]>;  // the xml file to load, plus a css class to set

	UIResetAllPortraitInfo: EventDefinition_t;

	DOTAMuertaCalaveraClosed: EventDefinition_t<[ number ]>;
	DOTANavigateMuertaCalaveraBackward: EventDefinition_t;
	DOTANavigateMuertaCalaveraForward: EventDefinition_t;

	DOTAMuertaOfrendaStateChanged: PanelEventDefinition_t<[ number ]>;
	DOTASetMuertaOfrendaState: PanelEventDefinition_t<[ number ]>;
	DOTAShowMuertaCalaveraPage: PanelEventDefinition_t<[ number ]>;
	DOTAMuertaDebutClosed: PanelEventDefinition_t;
	DOTASetMuertaModelRevealedState: PanelEventDefinition_t<[ string, boolean ]>;

	PostGameProgressConfirmAbusiveCoachRating: PanelEventDefinition_t;
	PostGameProgressSkippingAhead: EventDefinition_t;
	PostGameProgressConfirmAbusiveCoachRatingFinished: EventDefinition_t<[ boolean, string ]>;

	DOTAPlayButtonClicked: EventDefinition_t;
	DOTAToggleRankedMatch: EventDefinition_t;
	DOTAPlayPanelCloseButtonClicked: EventDefinition_t<[ boolean ]>;
	DOTACancelFindMatch: EventDefinition_t;
	DOTAPlayAcceptMatch: EventDefinition_t;
	DOTAPlayDeclineMatch: EventDefinition_t;
	DOTAToggleExpandGameModes: EventDefinition_t;
	DOTAWeekendTourneyStartSetup: EventDefinition_t;
	DOTAOpenLobbySelector: EventDefinition_t;
	DOTACreateLobby: EventDefinition_t;
	DOTALobbyStartWithoutTeamsOrLeagueSetConfirmed: EventDefinition_t;
	DOTAJoinLobby: EventDefinition_t<[ number ]>;
	DOTAGameModeToggled: PanelEventDefinition_t<[ boolean ]>;
	DOTAGameModeShowAllToggled: EventDefinition_t;
	DOTAPlaySectionRadioChecked: EventDefinition_t<[ number ]>;
	DOTABotScriptIndexChecked: EventDefinition_t<[ number ]>;
	DOTABotDifficultyChecked: EventDefinition_t<[ number ]>;
	DOTABotSoloDifficultyChecked: EventDefinition_t<[ number ]>;
	DOTAPracticeBotsTeamRadioChecked: EventDefinition_t<[ number ]>;
	DOTAPlayBotsCoopOrSoloRadioChecked: EventDefinition_t<[ boolean ]>;
	DOTAOpenMatchmakingLanguage: EventDefinition_t;
	DOTAOpenMatchmakingRegion: EventDefinition_t;
	DOTAMatchmakingRegionApply: EventDefinition_t;
	DOTAMatchmakingRegionCancel: EventDefinition_t;
	DOTAAbandonClicked: EventDefinition_t;
	DOTAAbandonConfirm: EventDefinition_t;
	DOTADisconnectClicked: EventDefinition_t;
	DOTAReconnectClicked: EventDefinition_t;
	DOTAConfirmLocalLobbyDisconnect: EventDefinition_t;
	DOTAUpdateMatchGroupPingUI: EventDefinition_t<[ number ]>;
	DOTAPlayUpdateWaitingTimer: EventDefinition_t;
	DOTAPlayUpdateMatchDeniedLabels: EventDefinition_t;
	DOTAUpdateMatchmakingStats: EventDefinition_t<[ boolean ]>;
	DOTAOnEngineLoopModeChanged: EventDefinition_t<[ string ]>;
	DOTASetFindingMatch: EventDefinition_t<[ boolean ]>;
	DOTALobbyClosed: EventDefinition_t;
	DOTAUseTeamIdentityCheckClicked: PanelEventDefinition_t;
	DOTAPlayChangeTeamIdentity: EventDefinition_t<[ number ]>;
	DOTAJoinPlaytestButtonClicked: EventDefinition_t;
	DOTAOpenPlayTab: EventDefinition_t<[ number ]>;
	DOTAHidePlayTab: EventDefinition_t;
	DOTAStartFindingEventMatch: EventDefinition_t<[ number ]>; // nEventType
	DOTAStartFindingMatch: EventDefinition_t<[ number, number ]>;
	DOTASetupPlayDOTAForMatch: EventDefinition_t<[ number, number ]>;
	DOTALaunchBotPractice: EventDefinition_t<[ number, number ]>; //bot difficulty, team number
	DOTAAnchorSteamPhone: EventDefinition_t;
	DOTARankedModeRadioChecked: EventDefinition_t<[ number ]>;

	DOTACavernCrawlPostGameProgressComplete: EventDefinition_t;
	DOTACavernCrawlSelectRoom: EventDefinition_t<[ number ]>;
	DOTACavernCrawlSelectPath: EventDefinition_t<[ number ]>;
	DOTACavernCrawlDisplayingUpdates: EventDefinition_t<[ boolean ]>;
	DOTACavernCrawlPreDisplayingUpdate: EventDefinition_t<[ [ number, number ] ]>;
	DOTACavernCrawlDisplayingUpdate: EventDefinition_t<[ number, string ]>;
	DOTACavernCrawlUpdateClaimCountUI: EventDefinition_t<[ number, number ]>;
	DOTACavernCrawlFlareShooting: PanelEventDefinition_t<[ boolean ]>;
	DOTACavernCrawlAdvanceUpdates: PanelEventDefinition_t;
	DOTACavernCrawlDebugSwapChallenge: EventDefinition_t<[ number, number ]>;
	DOTACavernCrawlDebugRevealReward: EventDefinition_t<[ number, number ]>;
	DOTACavernCrawlShowPathParticles: PanelEventDefinition_t;

	DOTALeagueShowBattlePassRollup: EventDefinition_t<[ number, number ]>; //LeagueID
	DOTASetCurrentDashboardPageFullscreen: EventDefinition_t<[ boolean ]>;
	DOTAToggleCurrentDashboardPageFullscreen: EventDefinition_t;
	DOTASetWatchMenuVisible: EventDefinition_t<[ boolean ]>;

	DOTAPostGameLeave: EventDefinition_t;
	DOTAMatchDetailsRefreshExistencePostGame: EventDefinition_t<[ number ]>;
	OverviewHeroDislikePlayer: EventDefinition_t;
	OverviewHeroCommendPlayer: EventDefinition_t;
	OverviewHeroReportPlayer: EventDefinition_t;
	OverviewHeroExpand: PanelEventDefinition_t;
	OverviewHeroExpandSlot: EventDefinition_t<[ number ]>;
	OverviewHeroContract: PanelEventDefinition_t;
	OverviewHeroContractSlot: EventDefinition_t<[ number ]>;
	OverviewHeroHoverSlot: EventDefinition_t<[ number, boolean ]>;
	OverviewHeroShowContextMenu: EventDefinition_t;
	DOTARequestReplayAvailableNotification: EventDefinition_t;
	DOTAShowReplayPendingPopup: EventDefinition_t;
	DOTAPostGameShowNetWorthTooltip: PanelEventDefinition_t<[ number ]>;
	DOTAPostGameHideNetWorthTooltip: PanelEventDefinition_t;
	DOTAPostGameShowHeroDamageTooltip: PanelEventDefinition_t<[ number ]>;
	DOTAPostGameHideHeroDamageTooltip: PanelEventDefinition_t;
	DOTAPostGameShowPlayerItemsTooltip: PanelEventDefinition_t<[ number, number, number ]>;
	DOTAPostGameHidePlayerItemsTooltip: PanelEventDefinition_t;
	DOTAPostGameToggleTeamSelected: PanelEventDefinition_t<[ number ]>;
	DOTAPostGameShowPersonalGraphTooltip: PanelEventDefinition_t<[ number, number, number, number ]>;
	DOTAPostGameHidePersonalGraphTooltip: PanelEventDefinition_t;
	DOTAPostGameTogglePinnedPlayerSelected: EventDefinition_t<[ number ]>;
	DOTAPostGameSwitchGraph: EventDefinition_t<[ string ]>;
	DOTAPostGameSwitchPersonalGraph: EventDefinition_t<[ string ]>;
	DOTAPostGameRenderGraph: EventDefinition_t;
	DOTAPostGameRenderPersonalGraph: EventDefinition_t;
	DOTAPostGameGraphHighlightSlot: EventDefinition_t<[ number ]>;
	DOTAPostGamePlayerReevaluateControls: EventDefinition_t;
	DOTADownloadReplay: EventDefinition_t;
	DOTAProcessQueuedPostGameHeroPanels: EventDefinition_t;
	DOTAWatchReplay: EventDefinition_t<[ boolean ]>;
	DOTAUpdatePlusPerPlayerTables: EventDefinition_t<[ number ]>;
	DOTAPostGameVoteGuideUp: EventDefinition_t;
	DOTAPostGameVoteGuideDown: EventDefinition_t;
	DOTAPostGameToggleFavoriteGuide: EventDefinition_t;
	DOTAPostGameProgressAnimationComplete: EventDefinition_t;
	DOTAPostGameProgressShowSummary: EventDefinition_t;
	DOTAPostGameSetSkillTier: EventDefinition_t<[ number ]>;
	OverviewHeroCheckDebugHero: EventDefinition_t;
	DOTAToggleMorokaiPostGame: EventDefinition_t;
	DOTAPostGameGraphsFirstLayout: EventDefinition_t;
	DOTAPostGamePersonalGraphsFirstLayout: EventDefinition_t;
	DOTAPostGameShowMVPProgress: EventDefinition_t;

	DOTASetDashboardBackgroundVisible: PanelEventDefinition_t<[ boolean ]>;
	DOTASetDashboardBackgroundLayout: PanelEventDefinition_t<[ string ]>;

	DOTABattleReportIncrementActiveScreen: EventDefinition_t<[ number ]>;
	DOTABattleReportSetActiveScreen: EventDefinition_t<[ number ]>;
	DOTABattleReportSetNavEnabled: EventDefinition_t<[ boolean ]>;
	DOTABattleReportFinished: EventDefinition_t;

	DOTAMatchSubmitPlayerMatchSurvey: EventDefinition_t<[ number, number, number ]>;
	DOTALastMatchUpdated: EventDefinition_t;
}


declare const $: Panorama & {
    /** Create a new panel */
    CreatePanel ( sPanelType: string, pParent: Panel_t, sPanelID: string | undefined, properties?: Dictionary<string | number | boolean | Function> ): Panel_t;

    /** Dispatch an event */
    DispatchEvent ( sEvent: string, ...params: any[] ): void;

    /** Dispatch an event to occur later */
    DispatchEventAsync ( fAsyncDelay: number, sEvent: string, ...params: any[] ): void;

    /** Register an event handler */
    RegisterEventHandler ( sEvent: string, pTarget: Panel_t | string, fCallback: ( ...args: any[] ) => void ): void;

    /** Register a handler for an event that is not otherwise handled */
    RegisterForUnhandledEvent ( sEvent: string, fCallback: ( ...args: any[] ) => void ): void;
};
