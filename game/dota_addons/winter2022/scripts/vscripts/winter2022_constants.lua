_G.TEAM_SPECTATOR = 1

-- Game States
_G.WINTER2022_GAMESTATE_PREGAME = 1
_G.WINTER2022_GAMESTATE_INTERSTITIAL_ROUND_PHASE = 10
_G.WINTER2022_GAMESTATE_PREP_TIME = 20
_G.WINTER2022_GAMESTATE_GAME_IN_PROGRESS = 30
_G.WINTER2022_GAMESTATE_GAME_IN_PROGRESS_BETWEEN_ROUNDS = 40
_G.WINTER2022_GAMESTATE_DISPLAY_FINAL_ROUND_RESULTS = 60
_G.WINTER2022_GAMESTATE_ENDING_CINEMATIC = 70
_G.WINTER2022_GAMESTATE_GAMEOVER = 100

_G.WINTER2022_NUM_ROUNDS = 5

_G.WINTER2022_PLAYERS_PER_TEAM = 5
_G.WINTER2022_THINK_INTERVAL = 0.25
_G.WINTER2022_BAN_PHASE_TIME = GlobalSys:CommandLineInt( "-winter2022_ban_time_override", 10 )
_G.WINTER2022_PICK_PHASE_TIME = 40.0

_G.WINTER2022_RUNE_START_TIME = 120
_G.WINTER2022_RUNE_INTERVAL = 60

_G.WINTER2022_BUYBACK_COOLDOWN = 8 * 60

_G.WINTER2022_NUM_INITIAL_SPAWN_LEVEL_UPS = 2

_G.WINTER2022_STATE_GOHOME = 1
_G.WINTER2022_STATE_SLEEPING = 2
_G.WINTER2022_STATE_GREEVILS = 3
_G.WINTER2022_STATE_ROSHAN_KILL_GREEVILS = 4
_G.WINTER2022_STATE_ROSHAN = 5

_G.WINTER2022_STATE_TIMES = { }
_G.WINTER2022_STATE_TIMES[ _G.WINTER2022_STATE_GOHOME ] = -1
_G.WINTER2022_STATE_TIMES[ _G.WINTER2022_STATE_SLEEPING ] = 5 -- disabled in code
_G.WINTER2022_STATE_TIMES[ _G.WINTER2022_STATE_GREEVILS ] = 38
_G.WINTER2022_STATE_TIMES[ _G.WINTER2022_STATE_ROSHAN_KILL_GREEVILS ] = 105
_G.WINTER2022_STATE_ROSHAN_TIME = 30 -- done like this for use by UI
_G.WINTER2022_STATE_ROSHAN_TIME_EXTRA = 10 -- total travel time is ROSHAN_TIME - this
_G.WINTER2022_STATE_TIMES[ _G.WINTER2022_STATE_ROSHAN ] = _G.WINTER2022_STATE_ROSHAN_TIME
_G.WINTER2022_STATE_MAX = #_G.WINTER2022_STATE_TIMES

_G.WINTER2022_STATE_NAMES = {}
_G.WINTER2022_STATE_NAMES[ _G.WINTER2022_STATE_GOHOME ] = "ReturnHome"
_G.WINTER2022_STATE_NAMES[ _G.WINTER2022_STATE_SLEEPING ] = "Sleeping"
_G.WINTER2022_STATE_NAMES[ _G.WINTER2022_STATE_GREEVILS ] = "Greevils"
_G.WINTER2022_STATE_NAMES[ _G.WINTER2022_STATE_ROSHAN_KILL_GREEVILS ] = "RoshanKillGreevils"
_G.WINTER2022_STATE_NAMES[ _G.WINTER2022_STATE_ROSHAN ] = "Roshan"

_G.WINTER2022_GREEVIL_SPAWN_COUNT_BASE = 4
_G.WINTER2022_GREEVIL_SPAWN_COUNT_INCREMENT = 0 --1
_G.WINTER2022_GREEVIL_SPAWN_COUNT_MAX = 9
_G.WINTER2022_GREEVIL_THIEVES_SPAWNED_PER_CANDY = 0.3
_G.WINTER2022_GREEVIL_LIFETIME_BASE = 30
_G.WINTER2022_GREEVIL_MAX_SKINS = 8
_G.WINTER2022_GREEVIL_MAX_BODY_GROUPS = 3

_G.WINTER2022_GREEVIL_FILLING_TYPE_INVALID = -1
_G.WINTER2022_GREEVIL_FILLING_TYPE_RED = 1
_G.WINTER2022_GREEVIL_FILLING_TYPE_ORANGE = 2
_G.WINTER2022_GREEVIL_FILLING_TYPE_YELLOW = 3
_G.WINTER2022_GREEVIL_FILLING_TYPE_GREEN = 4
_G.WINTER2022_GREEVIL_FILLING_TYPE_BLUE = 5
_G.WINTER2022_GREEVIL_FILLING_TYPE_PURPLE = 6
_G.WINTER2022_GREEVIL_FILLING_TYPE_WHITE = 7
_G.WINTER2022_GREEVIL_FILLING_TYPE_BLACK = 8

_G.WINTER2022_GREEVIL_FILLING_COLORS = {}
_G.WINTER2022_GREEVIL_FILLING_COLORS[ WINTER2022_GREEVIL_FILLING_TYPE_INVALID ] = Vector( 1, 0, 0 )
_G.WINTER2022_GREEVIL_FILLING_COLORS[ WINTER2022_GREEVIL_FILLING_TYPE_RED ] = Vector( 0.46, 0, 0 )
_G.WINTER2022_GREEVIL_FILLING_COLORS[ WINTER2022_GREEVIL_FILLING_TYPE_ORANGE ] = Vector( 0.57, 0.17, 0 )
_G.WINTER2022_GREEVIL_FILLING_COLORS[ WINTER2022_GREEVIL_FILLING_TYPE_YELLOW ] = Vector( 0.6, 0.59, 0.05 )
_G.WINTER2022_GREEVIL_FILLING_COLORS[ WINTER2022_GREEVIL_FILLING_TYPE_GREEN ] = Vector( 0.26, 0.48, 0 )
_G.WINTER2022_GREEVIL_FILLING_COLORS[ WINTER2022_GREEVIL_FILLING_TYPE_BLUE ] = Vector( 0, 0.37, 0.65 )
_G.WINTER2022_GREEVIL_FILLING_COLORS[ WINTER2022_GREEVIL_FILLING_TYPE_PURPLE ] = Vector( 0.6, 0.1, 0.66 )
_G.WINTER2022_GREEVIL_FILLING_COLORS[ WINTER2022_GREEVIL_FILLING_TYPE_WHITE ] = Vector( 0.54, 0.69, 0.74 )
_G.WINTER2022_GREEVIL_FILLING_COLORS[ WINTER2022_GREEVIL_FILLING_TYPE_BLACK ] = Vector( 0.31, 0.27, 0.23 )
--_G.WINTER2022_GREEVIL_FILLING_TYPE_GOLD = 1

_G.WINTER2022_BUCKET_COUNT = 4

_G.WINTER2022_BUCKET_SOLDIERS_MAX = 1
_G.WINTER2022_BUCKET_SOLDIERS_MAX_HOME = 0
_G.WINTER2022_BUCKET_SOLDIERS_INTERVAL = 10.0
_G.WINTER2022_BUCKET_SOLDIER_AGGRO_RANGE = 900
_G.WINTER2022_BUCKET_SOLDIER_LEASH_RANGE = 1100
_G.WINTER2022_BUCKET_SOLDIER_LEASHING_REACTIVATE_RANGE = 600	-- if we're leashing back to the well, start searching for aggro targets once we're this close to the well
_G.WINTER2022_BUCKET_SOLDIER_MAX_LEASH_TIME = 3.0
_G.WINTER2022_BUCKET_SOLDIER_MAINTAIN_RANGE = 300
_G.WINTER2022_BUCKET_SOLDIER_FOR_NEUTRALS = false
_G.WINTER2022_BUCKET_SOLDIERS_OUTER_BUCKET_BUFF_MULTIPLIER = 85 -- unused
_G.WINTER2022_BUCKET_SOLDIERS_HOME_BUCKET_BUFF_MULTIPLIER = 110 -- unused
_G.WINTER2022_BUCKET_SOLDIERS_OUTER_BUCKET_MODEL_SCALE_MULTIPLIER = 10
_G.WINTER2022_BUCKET_SOLDIERS_HOME_BUCKET_MODEL_SCALE_MULTIPLIER = 11
_G.WINTER2022_BUCKET_SOLDIERS_ROUND_ARMOR_BONUS = 3
_G.WINTER2022_BUCKET_SOLDIERS_ROUND_STATUS_RESIST_BASE = 20 -- If changing this value, also change on the creature (as DisableResistance) in npc_units_custom.txt
_G.WINTER2022_BUCKET_SOLDIERS_ROUND_STATUS_RESIST_BONUS = 10
_G.WINTER2022_BUCKET_SOLDIERS_INHERENTLY_BUFF_TIER_TWO = 0

_G.WINTER2022_HOME_BUCKET_HEALTH_BUFF_MULTIPLIER = 50
_G.WINTER2022_OUTER_BUCKET_HEALTH_BUFF_MULTIPLIER = 70

_G.WINTER2022_NUM_CANDY_SCORED_TO_TRIGGER_ANNOUNCER = 15

_G.WINTER2022_ROSHAN_RESET_CANDY_ON_KILL = true
_G.WINTER2022_ROSHAN_WEIGHTED_RANDOM_TEAM = false
_G.WINTER2022_ROSHAN_WEIGHTED_RANDOM_TEAM_BASE = 5
_G.WINTER2022_ROSHAN_WEIGHTED_RANDOM_TEAM_EXTRA_PER_OVERRIDE = 10
--_G.WINTER2022_ROSHAN_WEIGHTED_RANDOM_TEAM_HELD_CANDY_MULTIPLIER = 2
_G.WINTER2022_ROSHAN_WEIGHTED_RANDOM_TEAM_THRESHOLD_RATIO_FOR_OVERRIDE = 1.3
_G.WINTER2022_ROSHAN_WEIGHTED_RANDOM_TEAM_THRESHOLD_CANDY_FOR_OVERRIDE = 60
_G.WINTER2022_ROSHAN_WEIGHTED_RANDOM_TEAM_THRESHOLD_CANDY_DIFF_FOR_OVERRIDE = 15
_G.WINTER2022_ROSHAN_WEIGHTED_RANDOM_RATIO_MULT = 100
_G.WINTER2022_ROSHAN_WEIGHTED_RANDOM_DIFF_MULT = 1 -- was 10
_G.WINTER2022_ROSHAN_WEIGHTED_RANDOM_PLAYER = true
_G.WINTER2022_ROSHAN_WEIGHTED_RANDOM_PLAYER_BASE = 1
_G.WINTER2022_ROSHAN_ALLOW_NO_CANDY = true
_G.WINTER2022_ROSHAN_CANDY_TAKEN_PER_HIT = 0
_G.WINTER2022_ROSHAN_HERO_TARGET_IMMUNITY_TIME = 115.0
_G.WINTER2022_ROSHAN_HERO_TARGET_SPAWN_IMMUNITY_TIME = 20.0
_G.WINTER2022_ROSHAN_REQUEST_PROXIMITY_DISTANCE = 450
_G.WINTER2022_ROSHAN_SECONDS_TO_WAIT_FOR_OUT_OF_GAME = 2.0
_G.WINTER2022_ROSHAN_TARGET_SWITCH_PAUSE_TIME = 2.0

_G.WINTER2022_ROSHAN_ALLOW_RETARGET = true

_G.WINTER2022_ROSHAN_DAMAGE_BASE = 150
_G.WINTER2022_ROSHAN_DAMAGE_PER_MIN = 25

_G.ROSHAN_TRICK_OR_TREAT_MODE_NONE = 0
_G.ROSHAN_TRICK_OR_TREAT_MODE_REQUEST = 1
_G.ROSHAN_TRICK_OR_TREAT_MODE_ATTACK = 2
_G.ROSHAN_TRICK_OR_TREAT_MODE_RETURN = 3
_G.ROSHAN_TRICK_OR_TREAT_MODE_WAKE_UP = 4
_G.ROSHAN_TRICK_OR_TREAT_MODE_GREEVILS = 5

_G.ROSHAN_TRICK_OR_TREAT_REQUEST_DURATION = 5.0
_G.ROSHAN_TRICK_OR_TREAT_EAT_DURATION = 10.0
_G.ROSHAN_TRICK_OR_TREAT_BASE_CANDY_COUNT = 5
_G.ROSHAN_TRICK_OR_TREAT_CANDY_COUNT_INCREMENT = 5
_G.ROSHAN_TRICK_OR_TREAT_ANGER_DURATION = 10.0
_G.ROSHAN_TRICK_OR_TREAT_CURSE_DELAY = 3.0
_G.ROSHAN_TRICK_OR_TREAT_SCORE_DIFF_MULTIPLIER = 0.2

_G.WINTER2022_GOLEM_INITIAL_SPAWN_TIME = 90
_G.WINTER2022_GOLEM_SPAWN_INTERVAL_MIN = 75
_G.WINTER2022_GOLEM_SPAWN_INTERVAL_MAX = 105
_G.WINTER2022_GOLEM_DEATH_CANDY_COUNT = 0
_G.WINTER2022_GOLEM_DEATH_NEUTRAL_ITEM_COUNT = 3
_G.WINTER2022_GOLEM_KILL_GOLD_BASE = 150
_G.WINTER2022_GOLEM_KILL_GOLD_PER_MIN = 5
_G.WINTER2022_GOLEM_KILL_XP_BASE = 150
_G.WINTER2022_GOLEM_KILL_XP_PER_MIN = 5

_G.WINTER2022_CANDY_COUNT_IN_CANDY_BAG = 5
_G.WINTER2022_CREEPS_DROP_CANDY = false
_G.WINTER2022_CANDY_EXPIRY_SECONDS = 10 -- Set to 0 to disable candy expiry.
_G.WINTER2022_CANDY_MAX_LAUNCH_DISTANCE = 950 -- set to 0 to have candy not tossed to killer.
_G.WINTER2022_CANDY_CAN_BE_EATEN = false
_G.WINTER2022_CANDY_EXPIRY_ROSHAN_RANGE = -1 --if roshan is within this many units of the candy item_physical, it poofs (-1 to disable)
_G.WINTER2022_HERO_CANDY_PORTION_DROP_ON_DEATH = 1.0
_G.WINTER2022_CANDY_PORTION_KEPT_ON_ROUND_END = 0.5
_G.WINTER2022_CAN_PICKUP_CANDY_WHEN_FULL = true

_G.WINTER2022_BUILDING_DAMAGE_TO_CANDY_DIVISOR = 0 -- set to 0 to disable candy from wells
_G.WINTER2022_HOME_BUCKET_DAMAGE_TO_CANDY_DIVISOR = 25
_G.WINTER2022_BUILDING_CANDY_FROM_CREEPS = false
_G.WINTER2022_BUILDING_CANDY_CREEP_ATTACKS_TO_LOSE = 4
_G.WINTER2022_BUILDING_CANDY_GAIN_AMOUNT = 0
_G.WINTER2022_BUILDING_CANDY_GAIN_INTERVAL = 5
_G.WINTER2022_BUILDING_NEUTRAL_RESPAWN_INTERVAL = 60

_G.CANDY_SCORE_GOLD_PER_CANDY = 0
_G.CANDY_SCORE_XP_PER_CANDY = 0

-- time in minutes that each drop tier will be unlocked (SYNC THESE TIMES UP WITH npc_neutral_items_custom.txt)
_G.WINTER2022_NEUTRAL_ITEM_DROP_TIME_TIER_1 = 0
_G.WINTER2022_NEUTRAL_ITEM_DROP_TIME_TIER_2 = 4.5
_G.WINTER2022_NEUTRAL_ITEM_DROP_TIME_TIER_3 = 9
_G.WINTER2022_NEUTRAL_ITEM_DROP_TIME_TIER_4 = 13.5
_G.WINTER2022_NEUTRAL_ITEM_DROP_TIME_TIER_5 = 18

_G.WINTER2022_OFFENSIVE_CANDY_LIMIT_TIER_1 = 50
_G.WINTER2022_OFFENSIVE_CANDY_LIMIT_TIER_2 = 30
_G.WINTER2022_OFFENSIVE_CANDY_LIMIT_HOME_BUCKET = 40

_G.WINTER_2022_REFRESH_GOLEMS_AFTER_SCORING = 1
_G.WINTER2022_WIPE_SCORED_CANDY_AFTER_SCORING = 0
_G.WINTER2022_WIPE_HELD_CANDY_AFTER_SCORING = 0

-- Waves
_G.WINTER2022_SPAWN_DELAY = 10.0
_G.WINTER2022_SPAWNERS = {}
_G.WINTER2022_SPAWNERS[ DOTA_TEAM_GOODGUYS ] =
{
	top =
	{
		SpawnerName =	"radiant_creep_spawn_top",
		Waypoint =		"radiant_path_top"
	},
	bot =
	{
		SpawnerName =	"radiant_creep_spawn_bot",
		Waypoint =		"radiant_path_bot"
	},
}
_G.WINTER2022_SPAWNERS[ DOTA_TEAM_BADGUYS ] =
{
	top =
	{
		SpawnerName =	"dire_creep_spawn_top",
		Waypoint =		"dire_path_top"
	},
	bot =
	{
		SpawnerName =	"dire_creep_spawn_bot",
		Waypoint =		"dire_path_bot"
	},
}

-- Gold/XP
_G.WINTER2022_GOLD_PER_TICK = 1

_G.WINTER2022_REWARD_XP_MULT_DEAD = 1.0
_G.WINTER2022_REWARD_GOLD_MULT_DEAD = 1.0

_G.WINTER2022_HERO_KILL_XP_MULTIPLIER_SELF = 0.36
_G.WINTER2022_HERO_KILL_XP_MULTIPLIER_OTHERS = 0.128
_G.WINTER2022_HERO_KILL_GOLD_MULTIPLIER = 1.0

_G.WINTER2022_REWARD_OUT_OF_BAND_GOLD = 1.0
_G.WINTER2022_REWARD_OUT_OF_BAND_XP = 0.7

_G.WINTER2022_REWARD_MULTIPLIER_GOLD = _G.WINTER2022_SPAWN_DELAY / 60.0 * 0.81 * 1.4 -- basic multiplier to gold
_G.WINTER2022_REWARD_MULTIPLIER_XP = _G.WINTER2022_SPAWN_DELAY / 60.0 * 0.85 * 1.4 -- basic multiplier to xp
-- when no hero nearby
_G.WINTER2022_REWARD_BASE_GOLD = 0.5
_G.WINTER2022_REWARD_BASE_XP = 0.5
-- when hero is nearby but not lasthitting
_G.WINTER2022_REWARD_HERO_RADIUS = 1000
_G.WINTER2022_REWARD_NEAR_GOLD = 1.0
_G.WINTER2022_REWARD_NEAR_XP = 1.0
-- when hero lasthits the creep
_G.WINTER2022_REWARD_LASTHIT_GOLD = 4.0
_G.WINTER2022_REWARD_LASTHIT_XP = 2.0
_G.WINTER2022_REWARD_LASHIT_GOLD_SELF_PORTION = 0.75
_G.WINTER2022_REWARD_LASHIT_XP_SELF_PORTION = 0.5

-- Neutrals
_G.WINTER2022_REWARD_NEUTRAL_MULTIPLIER_GOLD = 2.0
_G.WINTER2022_REWARD_NEUTRAL_MULTIPLIER_XP = 2.0
-- when hero is nearby but not lasthitting
_G.WINTER2022_REWARD_NEUTRAL_HERO_RADIUS = 1000
_G.WINTER2022_REWARD_NEUTRAL_NEAR_GOLD = 1.0
_G.WINTER2022_REWARD_NEUTRAL_NEAR_XP = 1.0
-- when hero lasthits the creep
_G.WINTER2022_REWARD_NEUTRAL_LASTHIT_GOLD = 2.0
_G.WINTER2022_REWARD_NEUTRAL_LASHIT_GOLD_SELF_PORTION = 1.0
_G.WINTER2022_REWARD_NEUTRAL_LASHIT_XP_SELF_EXTRA_MULT = 0.2 -- lasthitter gets this * teamshare amount on top of base amount

-- These ignore other multipliers, since by definition it's a hero lasthit
_G.WINTER2022_REWARD_DENY_MULTIPLIER_GOLD = 0
_G.WINTER2022_REWARD_DENY_MULTIPLIER_XP = 0.25

_G.WINTER2022_WAVE_REWARD_GOLD_BASE = 300
_G.WINTER2022_WAVE_REWARD_GOLD_POW = 3
_G.WINTER2022_WAVE_REWARD_GOLD_SQRT = 2
_G.WINTER2022_WAVE_REWARD_GOLD_COEFF = 60
_G.WINTER2022_WAVE_REWARD_GOLD_POW2_START = 20
_G.WINTER2022_WAVE_REWARD_GOLD_POW2 = 3
_G.WINTER2022_WAVE_REWARD_GOLD_COEFF2 = -0.5
_G.WINTER2022_WAVE_REWARD_GOLD_MIN_ADD = 300
_G.WINTER2022_WAVE_REWARD_GOLD_FINAL_MULT = 0.22

_G.WINTER2022_WAVE_REWARD_XP_BASE = 450
_G.WINTER2022_WAVE_REWARD_XP_POW = 1
_G.WINTER2022_WAVE_REWARD_XP_SQRT = 0
_G.WINTER2022_WAVE_REWARD_XP_COEFF = 65
_G.WINTER2022_WAVE_REWARD_XP_POW2_START = 23
_G.WINTER2022_WAVE_REWARD_XP_POW2 = 3
_G.WINTER2022_WAVE_REWARD_XP_SQRT2 = 0
_G.WINTER2022_WAVE_REWARD_XP_COEFF2 = 33
_G.WINTER2022_WAVE_REWARD_XP_FINAL_MULT = 0.205

--
_G.WINTER2022_GOLD_REASON_LABELS =
{
	[DOTA_ModifyGold_Unspecified] = "unspecified",
	[DOTA_ModifyGold_Death] = "death",
	[DOTA_ModifyGold_Buyback] = "buyback",
	[DOTA_ModifyGold_PurchaseConsumable] = "consumable",
	[DOTA_ModifyGold_PurchaseItem] = "item",
	[DOTA_ModifyGold_AbandonedRedistribute] = "abandonredist",
	[DOTA_ModifyGold_SellItem] = "sellitem",
	[DOTA_ModifyGold_AbilityCost] = "abilitycost",
	[DOTA_ModifyGold_CheatCommand] = "cheat",
	[DOTA_ModifyGold_SelectionPenalty] = "selectionpenalty",
	[DOTA_ModifyGold_GameTick] = "tick",
	[DOTA_ModifyGold_Building] = "building",
	[DOTA_ModifyGold_HeroKill] = "hero",
	[DOTA_ModifyGold_CreepKill] = "creep",
	[DOTA_ModifyGold_NeutralKill] = "neutral",
	[DOTA_ModifyGold_RoshanKill] = "roshan",
	[DOTA_ModifyGold_CourierKill] = "courier",
	[DOTA_ModifyGold_BountyRune] = "bounty",
	[DOTA_ModifyGold_SharedGold] = "shared",
	[DOTA_ModifyGold_AbilityGold] = "ability",
	[DOTA_ModifyGold_WardKill] = "ward",
}

_G.WINTER2022_CREEPS_SPAWN_FROM_ALL_SPAWNPOINTS = true
_G.WINTER2022_FLIP_SPAWNER_TEAM_NUMBERS = false
_G.WINTER2022_ONLY_SPAWN_IF_TEAM_HAS_PLAYERS = false

_G.WINTER2022_PREGAME_TIME = GlobalSys:CommandLineInt( "-winter2022_prep_time_override", 15 )
_G.WINTER2022_INTERSTITIAL_TIME = GlobalSys:CommandLineInt( "-winter2022_interstitialtime_override", 25 )
_G.WINTER2022_DISPLAY_FINAL_ROUND_RESULTS_TIME = 8
_G.WINTER2022_ENDING_CINEMATIC_TIME = 4
_G.WINTER2022_END_OF_ROUND_TIME_SLOP = 0.25
_G.WINTER2022_NEUTRAL_CREEP_SPAWN_DELAY = 0

-- use thsese instead
_G.WINTER2022_HERO_RESPAWN_TIME_PERCENTAGE_DECREASE = 0.3
_G.WINTER2022_HERO_RESPAWN_TIME_CONSTANT = 3.0
_G.WINTER2022_HERO_RESPAWN_TIME_EXTRA_TIME_TIME_LIMIT = 20.0 * 60.0
_G.WINTER2022_HERO_RESPAWN_TIME_EXTRA_TIME_PER_SECOND_PAST_LIMIT = 0.05

-- Announcer constants
_G.WINTER2022_INTERVAL_BETWEEN_BUILDING_HIT_ANNOUNCE = 5
_G.WINTER2022_INTERVAL_BETWEEN_ROSHAN_CANDY_WELL_ATTACK_PING = 99
_G.WINTER2022_ANNOUNCER_TIMER_OFFSET = 1.1 + _G.WINTER2022_STATE_ROSHAN_TIME_EXTRA
_G.WINTER2022_ANNOUNCER_KILLING_SPREE_COOLDOWN = 5
_G.WINTER2022_SHOW_ROUND_START_EARLY_SECONDS = 4.0
_G.WINTER2022_PLAY_ROUND_START_EARLY_SECONDS = 4.0

_G.WINTER2022_RESET_GLYPH_ON_WELL_DESTROY = false
_G.WINTER2022_GLYPH_COOLDOWN = 240.0
_G.WINTER2022_GLYPH_DURATION_CREEP = 0.0
_G.WINTER2022_GLYPH_DURATION_GUARD = 7.0

_G.WINTER2022_ITEM_EXPIRE_TIME = 10.0
_G.WINTER2022_TIME_OF_DAY_DAY = 0.251
_G.WINTER2022_TIME_OF_DAY_NIGHT = 0.751

_G.WINTER2022_MOUNT_CHOICES = { "penguin", "ogreseal", "snowball", "frosttoad" }


-- Lookup tables

-- Mapping of tower names in the map to what the BHandleWinter2022EventGameMatchSignOut code expects.
_G.WINTER2022_TOWER_NAME_TO_KV_KEY = {
	-- radiant
	["radiant_candy_bucket_1"] = "candy_in_well_team_0_well_0",
	["radiant_candy_bucket_2"] = "candy_in_well_team_0_well_1",
	-- bucket_3 is missing in the map.
	["radiant_candy_bucket_4"] = "candy_in_well_team_0_well_2",
	["radiant_candy_bucket_5"] = "candy_in_well_team_0_well_3",

	-- dire
	["dire_candy_bucket_1"] = "candy_in_well_team_1_well_0",
	["dire_candy_bucket_2"] = "candy_in_well_team_1_well_1",
	-- bucket_3 is missing in the map.
	["dire_candy_bucket_4"] = "candy_in_well_team_1_well_2",
	["dire_candy_bucket_5"] = "candy_in_well_team_1_well_3",
}