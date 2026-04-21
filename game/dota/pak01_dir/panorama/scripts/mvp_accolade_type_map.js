"use strict";
/// <reference path="dota.d.ts" />
// The indices need to line up with dota_gcmessages_common_match_management.proto
const g_MVP_Accolade_TypeMap = {
    /* common */
    1: // total kills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_total_kills",
        icon: 's2r://panorama/images/challenges/icon_challenges_kills.png',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_total_kills:f',
    },
    2: // total deaths
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_total_deaths",
        icon: 's2r://panorama/images/challenges/icon_challenges_tombstone.png',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_total_deaths:f',
    },
    3: // total assists
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_total_assists",
        icon: 's2r://panorama/images/challenges/icon_challenges_xassists.png',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_total_assists:f',
    },
    5: // total net_worth
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_total_net_worth",
        icon: 's2r://panorama/images/challenges/icon_challenges_networth.png',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_total_net_worth:f',
    },
    7: // total support_gold_spent
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_total_support_gold_spent",
        icon: 's2r://panorama/images/challenges/icon_challenges_assistgold.png',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_total_support_gold_spent:f',
    },
    8: // total wards_placed
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_total_wards_placed",
        icon: 's2r://panorama/images/challenges/icon_challenges_ward.png',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_total_wards_placed:f',
    },
    9: // total wards_spotted_for_dewarding
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_total_wards_spotted_for_dewarding",
        icon: 's2r://panorama/images/challenges/icon_challenges_deward.png',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_total_wards_spotted_for_dewarding:f',
    },
    10: // total camps_stacked
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_total_camps_stacked",
        icon: 's2r://panorama/images/challenges/icon_challenges_campsstacked.png',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_total_camps_stacked:f',
    },
    11: // total last_hits
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_total_last_hits",
        icon: 's2r://panorama/images/challenges/icon_challenges_lasthits.png',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_total_last_hits:f',
    },
    12: // total denies
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_total_denies",
        icon: 's2r://panorama/images/challenges/icon_challenges_denies.png',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_total_denies:f',
    },
    15: // kKillEaterEvent_Towers_Destroyed
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_Towers_Destroyed",
        icon: 's2r://panorama/images/challenges/icon_challenges_tower.png',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEvent_Towers_Destroyed:f',
    },
    19: // kKillEaterEventType_LowHealthKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_LowHealthKills",
        icon: 's2r://panorama/images/challenges/icon_challenges_neardeathkills.png',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_LowHealthKills:f',
    },
    28: // kKillEaterEventType_RoshanKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_RoshanKills",
        icon: 's2r://panorama/images/challenges/icon_challenges_roshan.png',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_RoshanKills:f',
    },
    161: // kKillEaterEventType_ThreeManMeks
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_ThreeManMeks",
        icon: 's2r://panorama/images/challenges/icon_challenges_mekthree.png',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_ThreeManMeks:f',
    },
    164: // kKillEaterEventType_ThreeHeroVeils
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_ThreeHeroVeils",
        icon: 's2r://panorama/images/challenges/icon_challenges_veilthree.png',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_ThreeHeroVeils:f',
    },
    224: // kKillEaterEventType_VeilsLeadingToKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_VeilsLeadingToKills",
        icon: 's2r://panorama/images/challenges/icon_challenges_veil.png',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_VeilsLeadingToKills:f',
    },
    225: // kKillEaterEventType_DustLeadingToKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_DustLeadingToKills",
        icon: 's2r://panorama/images/challenges/icon_challenges_killsdust.png',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_DustLeadingToKills:f',
    },
    274: // Custom_KillStreak
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_Custom_KillStreak",
        icon: 's2r://panorama/images/challenges/icon_challenges_xkills.png',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_Custom_KillStreak:f',
    },
    // Hero specific
    16: // kKillEaterEventType_Invoker_SunstrikeKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Invoker_SunstrikeKills",
        ability_name: 'invoker_sun_strike',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Invoker_SunstrikeKills:f',
    },
    17: // kKillEaterEventType_Axe_Culls
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Axe_Culls",
        ability_name: 'axe_culling_blade',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Axe_Culls:f',
    },
    18: // kKillEaterEventType_Axe_BattleHungerKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Axe_BattleHungerKills",
        ability_name: 'axe_battle_hunger',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Axe_BattleHungerKills:f',
    },
    20: // kKillEaterEventType_Invoker_TornadoKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Invoker_TornadoKills",
        ability_name: 'invoker_tornado',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Invoker_TornadoKills:f',
    },
    21: // kKillEaterEventType_Sven_DoubleStuns
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Sven_DoubleStuns",
        ability_name: 'sven_storm_bolt',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Sven_DoubleStuns:f',
    },
    22: // kKillEaterEventType_Sven_WarcryAssists
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Sven_WarcryAssists",
        ability_name: 'sven_warcry',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Sven_WarcryAssists:f',
    },
    23: // kKillEaterEventType_Sven_CleaveDoubleKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Sven_CleaveDoubleKills",
        ability_name: 'sven_great_cleave',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Sven_CleaveDoubleKills:f',
    },
    /*
    24 : // kKillEaterEventType_Sven_TeleportInterrupts
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Sven_TeleportInterrupts",
        ability_name: 'sven_',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Sven_TeleportInterrupts:f',
    },*/
    25: // kKillEaterEventType_Faceless_MultiChrono
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Faceless_MultiChrono",
        ability_name: 'faceless_void_chronosphere',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Faceless_MultiChrono:f',
    },
    26: // kKillEaterEventType_Faceless_ChronoKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Faceless_ChronoKills",
        ability_name: 'faceless_void_chronosphere',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Faceless_ChronoKills:f',
    },
    27: // kKillEaterEventType_Ursa_MultiShocks
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Ursa_MultiShocks",
        ability_name: 'ursa_earthshock',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Ursa_MultiShocks:f',
    },
    29: // kKillEaterEventType_Lion_FingerKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Lion_FingerKills",
        ability_name: 'lion_finger_of_death',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Lion_FingerKills:f',
    },
    32: // kKillEaterEventType_Riki_SmokedHeroKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Riki_SmokedHeroKills",
        ability_name: 'riki_smoke_screen',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Riki_SmokedHeroKills:f',
    },
    33: // kKillEaterEventType_HeroesRevealedWithDust
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_HeroesRevealedWithDust",
        icon: 's2r://panorama/images/challenges/icon_challenges_totaldust.png',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_HeroesRevealedWithDust:f',
    },
    34: // kKillEaterEventType_SkeletonKing_ReincarnationKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_SkeletonKing_ReincarnationKills",
        ability_name: 'skeleton_king_reincarnation',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_SkeletonKing_ReincarnationKills:f',
    },
    35: // kKillEaterEventType_Skywrath_FlareKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Skywrath_FlareKills",
        ability_name: 'skywrath_mage_mystic_flare',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Skywrath_FlareKills:f',
    },
    36: // kKillEaterEventType_Leshrac_SplitEarthStuns
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Leshrac_SplitEarthStuns",
        ability_name: 'leshrac_split_earth',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Leshrac_SplitEarthStuns:f',
    },
    37: // kKillEaterEventType_Mirana_MaxStunArrows
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Mirana_MaxStunArrows",
        ability_name: 'mirana_arrow',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Mirana_MaxStunArrows:f',
    },
    38: // kKillEaterEventType_PhantomAssassin_CoupdeGraceCrits
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_PhantomAssassin_CoupdeGraceCrits",
        ability_name: 'phantom_assassin_coup_de_grace',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_PhantomAssassin_CoupdeGraceCrits:f',
    },
    39: // kKillEaterEventType_PhantomAssassin_DaggerCrits
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_PhantomAssassin_DaggerCrits",
        ability_name: 'phantom_assassin_stifling_dagger',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_PhantomAssassin_DaggerCrits:f',
    },
    40: // kKillEaterEventType_Meepo_Earthbinds
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Meepo_Earthbinds",
        ability_name: 'meepo_earthbind',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Meepo_Earthbinds:f',
    },
    41: // kKillEaterEventType_Bloodseeker_RuptureKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Bloodseeker_RuptureKills",
        ability_name: 'bloodseeker_rupture',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Bloodseeker_RuptureKills:f',
    },
    42: // kKillEaterEventType_Slark_LeashedEnemies
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Slark_LeashedEnemies",
        ability_name: 'slark_pounce',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Slark_LeashedEnemies:f',
    },
    43: // kKillEaterEventType_Disruptor_FountainGlimpses
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Disruptor_FountainGlimpses",
        ability_name: 'disruptor_glimpse',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Disruptor_FountainGlimpses:f',
    },
    44: // kKillEaterEventType_Rubick_SpellsStolen
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Rubick_SpellsStolen",
        ability_name: 'rubick_spell_steal',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Rubick_SpellsStolen:f',
    },
    45: // kKillEaterEventType_Rubick_UltimatesStolen
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Rubick_UltimatesStolen",
        ability_name: 'rubick_spell_steal',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Rubick_UltimatesStolen:f',
    },
    46: // kKillEaterEventType_Doom_EnemiesDoomed
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Doom_EnemiesDoomed",
        ability_name: 'doom_bringer_doom',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Doom_EnemiesDoomed:f',
    },
    47: // kKillEaterEventType_Omniknight_Purifications
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Omniknight_Purifications",
        ability_name: 'omniknight_purification',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Omniknight_Purifications:f',
    },
    48: // kKillEaterEventType_Omniknight_AlliesRepelled
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Omniknight_AlliesRepelled",
        ability_name: 'omniknight_repel',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Omniknight_AlliesRepelled:f',
    },
    49: // kKillEaterEventType_Omniknight_EnemiesRepelled
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Omniknight_EnemiesRepelled",
        ability_name: 'omniknight_repel',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Omniknight_EnemiesRepelled:f',
    },
    50: // kKillEaterEventType_Warlock_FiveHeroFatalBonds
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Warlock_FiveHeroFatalBonds",
        ability_name: 'warlock_fatal_bonds',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Warlock_FiveHeroFatalBonds:f',
    },
    51: // kKillEaterEventType_CrystalMaiden_FrostbittenEnemies
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_CrystalMaiden_FrostbittenEnemies",
        ability_name: 'crystal_maiden_frostbite',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_CrystalMaiden_FrostbittenEnemies:f',
    },
    52: // kKillEaterEventType_CrystalMaiden_CrystalNovas
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_CrystalMaiden_CrystalNovas",
        ability_name: 'crystal_maiden_crystal_nova',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_CrystalMaiden_CrystalNovas:f',
    },
    53: // kKillEaterEventType_Kunkka_DoubleHeroTorrents
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Kunkka_DoubleHeroTorrents",
        ability_name: 'kunkka_torrent',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Kunkka_DoubleHeroTorrents:f',
    },
    54: // kKillEaterEventType_Kunkka_TripleHeroGhostShips
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Kunkka_TripleHeroGhostShips",
        ability_name: 'kunkka_ghostship',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Kunkka_TripleHeroGhostShips:f',
    },
    55: // kKillEaterEventType_NagaSiren_EnemiesEnsnared
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_NagaSiren_EnemiesEnsnared",
        ability_name: 'naga_siren_ensnare',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_NagaSiren_EnemiesEnsnared:f',
    },
    56: // kKillEaterEventType_NagaSiren_TripleHeroRipTides
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_NagaSiren_TripleHeroRipTides",
        ability_name: 'naga_siren_rip_tide',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_NagaSiren_TripleHeroRipTides:f',
    },
    57: // kKillEaterEventType_Lycan_KillsDuringShapeshift
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Lycan_KillsDuringShapeshift",
        ability_name: 'lycan_shapeshift',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Lycan_KillsDuringShapeshift:f',
    },
    58: // kKillEaterEventType_Pudge_DismemberKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Pudge_DismemberKills",
        ability_name: 'pudge_dismember',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Pudge_DismemberKills:f',
    },
    59: // kKillEaterEventType_Pudge_EnemyHeroesHooked
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Pudge_EnemyHeroesHooked",
        ability_name: 'pudge_meat_hook',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Pudge_EnemyHeroesHooked:f',
    },
    60: // kKillEaterEventType_Pudge_HookKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Pudge_HookKills",
        ability_name: 'pudge_meat_hook',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Pudge_HookKills:f',
    },
    61: // kKillEaterEventType_Pudge_UnseenEnemyHeroesHooked
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Pudge_UnseenEnemyHeroesHooked",
        ability_name: 'pudge_meat_hook',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Pudge_UnseenEnemyHeroesHooked:f',
    },
    62: // kKillEaterEventType_DrowRanger_EnemiesSilenced
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_DrowRanger_EnemiesSilenced",
        ability_name: 'drow_ranger_silence',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_DrowRanger_EnemiesSilenced:f',
    },
    63: // kKillEaterEventType_DrowRanger_MultiHeroSilences
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_DrowRanger_MultiHeroSilences",
        ability_name: 'drow_ranger_silence',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_DrowRanger_MultiHeroSilences:f',
    },
    64: // kKillEaterEventType_DrowRanger_SilencedKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_DrowRanger_SilencedKills",
        ability_name: 'drow_ranger_silence',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_DrowRanger_SilencedKills:f',
    },
    65: // kKillEaterEventType_DrowRanger_FrostArrowKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_DrowRanger_FrostArrowKills",
        ability_name: 'drow_ranger_frost_arrows',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_DrowRanger_FrostArrowKills:f',
    },
    66: // kKillEaterEventType_DragonKnight_KillsInDragonForm
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_DragonKnight_KillsInDragonForm",
        ability_name: 'dragon_knight_elder_dragon_form',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_DragonKnight_KillsInDragonForm:f',
    },
    67: // kKillEaterEventType_DragonKnight_BreatheFireKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_DragonKnight_BreatheFireKills",
        ability_name: 'dragon_knight_breathe_fire',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_DragonKnight_BreatheFireKills:f',
    },
    68: // kKillEaterEventType_DragonKnight_SplashKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_DragonKnight_SplashKills",
        ability_name: 'dragon_knight_elder_dragon_form',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_DragonKnight_SplashKills:f',
    },
    69: // kKillEaterEventType_WitchDoctor_CaskStuns
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_WitchDoctor_CaskStuns",
        ability_name: 'witch_doctor_paralyzing_cask',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_WitchDoctor_CaskStuns:f',
    },
    70: // kKillEaterEventType_WitchDoctor_MaledictKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_WitchDoctor_MaledictKills",
        ability_name: 'witch_doctor_maledict',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_WitchDoctor_MaledictKills:f',
    },
    71: // kKillEaterEventType_WitchDoctor_MultiHeroMaledicts
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_WitchDoctor_MultiHeroMaledicts",
        ability_name: 'witch_doctor_maledict',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_WitchDoctor_MultiHeroMaledicts:f',
    },
    72: // kKillEaterEventType_WitchDoctor_DeathWardKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_WitchDoctor_DeathWardKills",
        ability_name: 'witch_doctor_death_ward',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_WitchDoctor_DeathWardKills:f',
    },
    73: // kKillEaterEventType_Disruptor_ThunderStrikeKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Disruptor_ThunderStrikeKills",
        ability_name: 'disruptor_thunder_strike',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Disruptor_ThunderStrikeKills:f',
    },
    74: // kKillEaterEventType_Disruptor_HeroesGlimpsed
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Disruptor_HeroesGlimpsed",
        ability_name: 'disruptor_glimpse',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Disruptor_HeroesGlimpsed:f',
    },
    75: // kKillEaterEventType_CrystalMaiden_FreezingFieldKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_CrystalMaiden_FreezingFieldKills",
        ability_name: 'crystal_maiden_freezing_field',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_CrystalMaiden_FreezingFieldKills:f',
    },
    77: // kKillEaterEventType_Medusa_EnemiesPetrified
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Medusa_EnemiesPetrified",
        ability_name: 'medusa_stone_gaze',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Medusa_EnemiesPetrified:f',
    },
    78: // kKillEaterEventType_Warlock_FatalBondsKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Warlock_FatalBondsKills",
        ability_name: 'warlock_fatal_bonds',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Warlock_FatalBondsKills:f',
    },
    79: // kKillEaterEventType_Warlock_GolemKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Warlock_GolemKills",
        ability_name: 'warlock_golem_flaming_fists',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Warlock_GolemKills:f',
    },
    80: // kKillEaterEventType_Tusk_WalrusPunches
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Tusk_WalrusPunches",
        ability_name: 'tusk_walrus_punch',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Tusk_WalrusPunches:f',
    },
    81: // kKillEaterEventType_Tusk_SnowballStuns
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Tusk_SnowballStuns",
        ability_name: 'tusk_snowball',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Tusk_SnowballStuns:f',
    },
    82: // kKillEaterEventType_Earthshaker_FissureStuns
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Earthshaker_FissureStuns",
        ability_name: 'earthshaker_fissure',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Earthshaker_FissureStuns:f',
    },
    83: // kKillEaterEventType_Earthshaker_3HeroEchoslams
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Earthshaker_3HeroEchoslams",
        ability_name: 'earthshaker_echo_slam',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Earthshaker_3HeroEchoslams:f',
    },
    84: // kKillEaterEventType_SandKing_BurrowstrikeStuns
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_SandKing_BurrowstrikeStuns",
        ability_name: 'sandking_burrowstrike',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_SandKing_BurrowstrikeStuns:f',
    },
    85: // kKillEaterEventType_SandKing_EpicenterKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_SandKing_EpicenterKills",
        ability_name: 'sandking_epicenter',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_SandKing_EpicenterKills:f',
    },
    86: // kKillEaterEventType_SkywrathMage_AncientSealKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_SkywrathMage_AncientSealKills",
        ability_name: 'skywrath_mage_ancient_seal',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_SkywrathMage_AncientSealKills:f',
    },
    87: // kKillEaterEventType_SkywrathMage_ConcussiveShotKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_SkywrathMage_ConcussiveShotKills",
        ability_name: 'skywrath_mage_concussive_shot',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_SkywrathMage_ConcussiveShotKills:f',
    },
    88: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Luna_LucentBeamKills",
        ability_name: "luna_lucent_beam",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Luna_LucentBeamKills:f",
    },
    89: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Luna_EclipseKills",
        ability_name: "luna_eclipse",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Luna_EclipseKills:f",
    },
    90: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_KeeperOfTheLight_IlluminateKills",
        ability_name: "keeper_of_the_light_illuminate",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_KeeperOfTheLight_IlluminateKills:f",
    },
    91: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_KeeperOfTheLight_ManaLeakStuns",
        ability_name: "keeper_of_the_light_mana_leak",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_KeeperOfTheLight_ManaLeakStuns:f",
    },
    92: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_KeeperOfTheLight_TeammatesRecalled",
        ability_name: "keeper_of_the_light_blinding_light",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_KeeperOfTheLight_TeammatesRecalled:f",
    },
    93: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_LegionCommander_DuelsWon",
        ability_name: "legion_commander_duel",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_LegionCommander_DuelsWon:f",
    },
    94: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Beastmaster_RoarKills",
        ability_name: "beastmaster_primal_roar",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Beastmaster_RoarKills:f",
    },
    95: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Beastmaster_RoarMultiKills",
        ability_name: "beastmaster_primal_roar",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Beastmaster_RoarMultiKills:f",
    },
    96: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Windrunner_FocusFireBuildings",
        ability_name: "windrunner_focusfire",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Windrunner_FocusFireBuildings:f",
    },
    97: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Windrunner_PowershotKills",
        ability_name: "windrunner_powershot",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Windrunner_PowershotKills:f",
    },
    98: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_PhantomAssassin_DaggerLastHits",
        ability_name: "phantom_assassin_stifling_dagger",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_PhantomAssassin_DaggerLastHits:f",
    },
    99: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_PhantomAssassin_PhantomStrikeKills",
        ability_name: "phantom_assassin_phantom_strike",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_PhantomAssassin_PhantomStrikeKills:f",
    },
    100: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_DeathProphet_CryptSwarmKills",
        ability_name: "death_prophet_carrion_swarm",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_DeathProphet_CryptSwarmKills:f",
    },
    101: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_DeathProphet_ExorcismBuildingKills",
        ability_name: "death_prophet_exorcism",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_DeathProphet_ExorcismBuildingKills:f",
    },
    102: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_DeathProphet_ExorcismSpiritsSummoned",
        ability_name: "death_prophet_exorcism",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_DeathProphet_ExorcismSpiritsSummoned:f",
    },
    103: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_DeathProphet_MultiHeroSilences",
        ability_name: "death_prophet_silence",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_DeathProphet_MultiHeroSilences:f",
    },
    104: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Abaddon_MistCoilKills",
        ability_name: "abaddon_death_coil",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Abaddon_MistCoilKills:f",
    },
    105: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Abaddon_MistCoilHealed",
        ability_name: "abaddon_death_coil",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Abaddon_MistCoilHealed:f",
    },
    106: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Abaddon_AphoticShieldKills",
        ability_name: "abaddon_aphotic_shield",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Abaddon_AphoticShieldKills:f",
    },
    107: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Lich_ChainFrostTripleKills",
        ability_name: "lich_chain_frost",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Lich_ChainFrostTripleKills:f",
    },
    108: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Lich_ChainFrostMultiKills",
        ability_name: "lich_chain_frost",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Lich_ChainFrostMultiKills:f",
    },
    109: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Lich_ChainFrostBounces",
        ability_name: "lich_chain_frost",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Lich_ChainFrostBounces:f",
    },
    110: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Ursa_EnragedKills",
        ability_name: "enraged_wildkin_tornado",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Ursa_EnragedKills:f",
    },
    111: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Ursa_EarthshockKills",
        ability_name: "ursa_earthshock",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Ursa_EarthshockKills:f",
    },
    112: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Lina_LagunaBladeKills",
        ability_name: "lina_laguna_blade",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Lina_LagunaBladeKills:f",
    },
    113: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Lina_DragonSlaveKills",
        ability_name: "lina_dragon_slave",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Lina_DragonSlaveKills:f",
    },
    114: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Lina_LightStrikeArrayStuns",
        ability_name: "lina_light_strike_array",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Lina_LightStrikeArrayStuns:f",
    },
    115: // kKillEaterEvent_Barracks_Destroyed
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_Barracks_Destroyed",
        icon: 's2r://panorama/images/challenges/icon_challenges_barracksdestroyed.png',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEvent_Barracks_Destroyed:f',
    },
    116: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_TemplarAssassin_MeldKills",
        ability_name: "templar_assassin_meld",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_TemplarAssassin_MeldKills:f",
    },
    117: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_TemplarAssassin_HeroesSlowed",
        ability_name: "special_bonus_unique_templar_assassin",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_TemplarAssassin_HeroesSlowed:f",
    },
    118: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_Sniper_AssassinationKills",
        ability_name: "sniper_assassinate",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_Sniper_AssassinationKills:f",
    },
    119: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_Sniper_HeadshotStuns",
        ability_name: "sniper_headshot",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_Sniper_HeadshotStuns:f",
    },
    120: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_EarthSpirit_SmashStuns",
        ability_name: "earth_spirit_boulder_smash",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_EarthSpirit_SmashStuns:f",
    },
    121: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_EarthSpirit_GripSilences",
        ability_name: "earth_spirit_geomagnetic_grip",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_EarthSpirit_GripSilences:f",
    },
    122: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_ShadowShaman_ShackleKills",
        ability_name: "shadow_shaman_shackles",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_ShadowShaman_ShackleKills:f",
    },
    123: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_ShadowShaman_HexKills",
        ability_name: "shadow_shaman_voodoo",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_ShadowShaman_HexKills:f",
    },
    124: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_Centaur_EnemiesStomped",
        ability_name: "centaur_double_edge",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_Centaur_EnemiesStomped:f",
    },
    125: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_Centaur_DoubleEdgeKills",
        ability_name: "centaur_double_edge",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_Centaur_DoubleEdgeKills:f",
    },
    126: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_Centaur_ReturnKills",
        ability_name: "centaur_return",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_Centaur_ReturnKills:f",
    },
    127: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_EmberSpirit_EnemiesChained",
        ability_name: "ember_spirit_searing_chains",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_EmberSpirit_EnemiesChained:f",
    },
    128: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_EmberSpirit_SleightOfFistMultiKills",
        ability_name: "ember_spirit_sleight_of_fist",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_EmberSpirit_SleightOfFistMultiKills:f",
    },
    129: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_Puck_OrbKills",
        ability_name: "puck_illusory_orb",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_Puck_OrbKills:f",
    },
    130: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_VengefulSpirit_EnemiesStunned",
        ability_name: "special_bonus_unique_vengeful_spirit_1",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_VengefulSpirit_EnemiesStunned:f",
    },
    131: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_Lifestealer_RageKills",
        ability_name: "life_stealer_rage",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_Lifestealer_RageKills:f",
    },
    132: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_Lifestealer_OpenWoundsKills",
        ability_name: "life_stealer_open_wounds",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_Lifestealer_OpenWoundsKills:f",
    },
    133: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_Lifestealer_InfestKills",
        ability_name: "life_stealer_infest",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_Lifestealer_InfestKills:f",
    },
    134: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_ElderTitan_SpiritKills",
        ability_name: "elder_titan_ancestral_spirit",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_ElderTitan_SpiritKills:f",
    },
    135: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_ElderTitan_GoodStomps",
        ability_name: "elder_titan_ancestral_spirit",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_ElderTitan_GoodStomps:f",
    },
    136: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_Clockwerk_RocketKills",
        ability_name: "gyrocopter_rocket_barrage",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_Clockwerk_RocketKills:f",
    },
    137: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_Clockwerk_BlindRocketKills",
        ability_name: "gyrocopter_rocket_barrage",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_Clockwerk_BlindRocketKills:f",
    },
    138: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_StormSpirit_BallKills",
        ability_name: "storm_spirit_ball_lightning",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_StormSpirit_BallKills:f",
    },
    139: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_StormSpirit_DoubleRemnantKills",
        ability_name: "storm_spirit_static_remnant",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_StormSpirit_DoubleRemnantKills:f",
    },
    140: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_StormSpirit_VortexKills",
        ability_name: "storm_spirit_electric_vortex",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_StormSpirit_VortexKills:f",
    },
    141: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_Tinker_DoubleMissileKills",
        ability_name: "tinker_heat_seeking_missile",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_Tinker_DoubleMissileKills:f",
    },
    142: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_Tinker_LaserKills",
        ability_name: "tinker_laser",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_Tinker_LaserKills:f",
    },
    143: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_Techies_SuicideKills",
        ability_name: "techies_suicide",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_Techies_SuicideKills:f",
    },
    144: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_Techies_LandMineKills",
        ability_name: "techies_land_mines",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_Techies_LandMineKills:f",
    },
    145: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_Techies_StatisTrapStuns",
        ability_name: "techies_stasis_trap",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_Techies_StatisTrapStuns:f",
    },
    146: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_Techies_RemoteMineKills",
        ability_name: "techies_remote_mines",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_Techies_RemoteMineKills:f",
    },
    147: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_ShadowFiend_TripleRazeKills",
        ability_name: "nevermore_shadowraze1",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_ShadowFiend_TripleRazeKills:f",
    },
    148: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_ShadowFiend_RequiemMultiKills",
        ability_name: "nevermore_requiem",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_ShadowFiend_RequiemMultiKills:f",
    },
    149: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_ShadowFiend_QRazeKills",
        ability_name: "nevermore_shadowraze1",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_ShadowFiend_QRazeKills:f",
    },
    150: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_ShadowFiend_WRazeKills",
        ability_name: "nevermore_shadowraze2",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_ShadowFiend_WRazeKills:f",
    },
    151: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_ShadowFiend_ERazeKills",
        ability_name: "nevermore_shadowraze3",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_ShadowFiend_ERazeKills:f",
    },
    152: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_Oracle_FatesEdictKills",
        ability_name: "oracle_fates_edict",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_Oracle_FatesEdictKills:f",
    },
    153: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_Oracle_FalsePromiseSaves",
        ability_name: "oracle_false_promise",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_Oracle_FalsePromiseSaves:f",
    },
    154: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_Juggernaut_OmnislashKills",
        ability_name: "juggernaut_blade_dance",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_Juggernaut_OmnislashKills:f",
    },
    157: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_SkeletonKing_SkeletonHeroKills",
        ability_name: "skeleton_king_hellfire_blast",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_SkeletonKing_SkeletonHeroKills:f",
    },
    158: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_DarkWillow_CursedCrownTripleStuns",
        ability_name: "dark_willow_cursed_crown",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_DarkWillow_CursedCrownTripleStuns:f",
    },
    159: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Dazzle_ShallowGraveSaves",
        ability_name: "dazzle_shallow_grave",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Dazzle_ShallowGraveSaves:f",
    },
    160: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Dazzle_PoisonTouchKills",
        ability_name: "dazzle_poison_touch",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Dazzle_PoisonTouchKills:f",
    },
    162: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Viper_PoisonAttackKills",
        ability_name: "viper_poison_attack",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Viper_PoisonAttackKills:f",
    },
    163: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Viper_CorrosiveSkinKills",
        ability_name: "viper_corrosive_skin",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Viper_CorrosiveSkinKills:f",
    },
    165: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Viper_KillsDuringViperStrike",
        ability_name: "viper_viper_strike",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Viper_KillsDuringViperStrike:f",
    },
    167: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Tiny_TreeThrowKills",
        ability_name: "tiny_toss_tree",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Tiny_TreeThrowKills:f",
    },
    168: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Riki_BackstabKills",
        ability_name: "riki_backstab",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Riki_BackstabKills:f",
    },
    169: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Phoenix_ThreeHeroSupernovaStuns",
        ability_name: "phoenix_supernova",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Phoenix_ThreeHeroSupernovaStuns:f",
    },
    170: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Terrorblade_MetamorphosisKills",
        ability_name: "terrorblade_metamorphosis",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Terrorblade_MetamorphosisKills:f",
    },
    171: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Lion_GreatFingerKills",
        ability_name: "lion_finger_of_death",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Lion_GreatFingerKills:f",
    },
    172: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Antimage_SpellsBlockedWithAghanims",
        ability_name: "antimage_blink",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Antimage_SpellsBlockedWithAghanims:f",
    },
    173: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Antimage_ThreeManManaVoids",
        ability_name: "antimage_mana_break",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Antimage_ThreeManManaVoids:f",
    },
    174: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_ArcWarden_TempestDoubleKills",
        ability_name: "arc_warden_tempest_double",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_ArcWarden_TempestDoubleKills:f",
    },
    175: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_ArcWarden_SparkWraithKills",
        ability_name: "arc_warden_spark_wraith",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_ArcWarden_SparkWraithKills:f",
    },
    176: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Bane_BrainSapKills",
        ability_name: "bane_brain_sap",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Bane_BrainSapKills:f",
    },
    177: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Bane_FiendsGripKills",
        ability_name: "bane_fiends_grip",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Bane_FiendsGripKills:f",
    },
    178: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Batrider_TripleHeroFlamebreaks",
        ability_name: "batrider_firefly",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Batrider_TripleHeroFlamebreaks:f",
    },
    179: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Batrider_DoubleHeroLassoes",
        ability_name: "arc_warden_tempest_double",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Batrider_DoubleHeroLassoes:f",
    },
    180: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Brewmaster_KillsDuringPrimalSplit",
        ability_name: "brewmaster_primal_split",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Brewmaster_KillsDuringPrimalSplit:f",
    },
    181: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Bristleback_KillsUnderFourQuillStacks",
        ability_name: "bristleback_quill_spray",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Bristleback_KillsUnderFourQuillStacks:f",
    },
    182: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Bristleback_TripleHeroNasalGoo",
        ability_name: "bristleback_viscous_nasal_goo",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Bristleback_TripleHeroNasalGoo:f",
    },
    183: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Broodmother_SpiderlingHeroKills",
        ability_name: "broodmother_spawn_spiderlings",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Broodmother_SpiderlingHeroKills:f",
    },
    184: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Broodmother_KillsInsideWeb",
        ability_name: "broodmother_spin_web",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Broodmother_KillsInsideWeb:f",
    },
    185: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Centaur_ThreeHeroStampede",
        ability_name: "centaur_stampede",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Centaur_ThreeHeroStampede:f",
    },
    186: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_ChaosKnight_RealityRiftKills",
        ability_name: "chaos_knight_reality_rift",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_ChaosKnight_RealityRiftKills:f",
    },
    187: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Chen_KillsWithPenitence",
        ability_name: "chen_penitence",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Chen_KillsWithPenitence:f",
    },
    188: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_CrystalMaiden_TwoHeroCrystalNovas",
        ability_name: "crystal_maiden_brilliance_aura",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_CrystalMaiden_TwoHeroCrystalNovas:f",
    },
    189: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_CrystalMaiden_ThreeHeroFreezingFields",
        ability_name: "crystal_maiden_freezing_field",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_CrystalMaiden_ThreeHeroFreezingFields:f",
    },
    190: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Dazzle_ShadowWaveKills",
        ability_name: "dazzle_shadow_wave",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Dazzle_ShadowWaveKills:f",
    },
    191: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_DeathProphet_SiphonKills",
        ability_name: "death_prophet_spirit_siphon",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_DeathProphet_SiphonKills:f",
    },
    192: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_DeathProphet_ExorcismKillsDuringEuls",
        ability_name: "death_prophet_exorcism",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_DeathProphet_ExorcismKillsDuringEuls:f",
    },
    193: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Disruptor_ThreeHeroKineticFieldStaticStorm",
        ability_name: "disruptor_kinetic_field",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Disruptor_ThreeHeroKineticFieldStaticStorm:f",
    },
    194: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Doom_InfernalBladeBurnKills",
        ability_name: "doom_bringer_infernal_blade",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Doom_InfernalBladeBurnKills:f",
    },
    195: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_DrowRanger_PrecisionAuraCreepTowerKills",
        ability_name: "drow_ranger_frost_arrows",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_DrowRanger_PrecisionAuraCreepTowerKills:f",
    },
    196: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_EmberSpirit_RemnantKills",
        ability_name: "ember_spirit_activate_fire_remnant",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_EmberSpirit_RemnantKills:f",
    },
    197: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_EmberSpirit_SleightOfFistKills",
        ability_name: "ember_spirit_sleight_of_fist",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_EmberSpirit_SleightOfFistKills:f",
    },
    198: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Enigma_MidnightPulseBlackHoleCombos",
        ability_name: "enigma_black_hole",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Enigma_MidnightPulseBlackHoleCombos:f",
    },
    199: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Enigma_ThreeManBlackHoles",
        ability_name: "enigma_black_hole",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Enigma_ThreeManBlackHoles:f",
    },
    200: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_FacelessVoid_MultiHeroTimeDilation",
        ability_name: "faceless_void_time_dilation",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_FacelessVoid_MultiHeroTimeDilation:f",
    },
    201: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Gyrocopter_ThreeHeroFlakCannon",
        ability_name: "gyrocopter_flak_cannon",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Gyrocopter_ThreeHeroFlakCannon:f",
    },
    202: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Gyrocopter_HomingMissileKills",
        ability_name: "gyrocopter_homing_missile",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Gyrocopter_HomingMissileKills:f",
    },
    203: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Gyrocopter_RocketBarrageKills",
        ability_name: "gyrocopter_rocket_barrage",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Gyrocopter_RocketBarrageKills:f",
    },
    204: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Huskar_KillsDuringLifeBreak",
        ability_name: "huskar_life_break",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Huskar_KillsDuringLifeBreak:f",
    },
    205: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Huskar_BurningSpearKills",
        ability_name: "huskar_burning_spear",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Huskar_BurningSpearKills:f",
    },
    206: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Invoker_MultiHeroIceWall",
        ability_name: "invoker_ice_wall",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Invoker_MultiHeroIceWall:f",
    },
    207: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Invoker_ThreeHeroEMP",
        ability_name: "invoker_emp",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Invoker_ThreeHeroEMP:f",
    },
    208: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Invoker_ThreeHeroDeafeningBlast",
        ability_name: "invoker_deafening_blast",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Invoker_ThreeHeroDeafeningBlast:f",
    },
    209: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Invoker_MultiHeroChaosMeteor",
        ability_name: "invoker_chaos_meteor",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Invoker_MultiHeroChaosMeteor:f",
    },
    210: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Jakiro_MultiHeroDualBreath",
        ability_name: "jakiro_dual_breath",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Jakiro_MultiHeroDualBreath:f",
    },
    211: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Jakiro_IcePathMacropyreCombos",
        ability_name: "jakiro_ice_path",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Jakiro_IcePathMacropyreCombos:f",
    },
    212: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Leshrac_PulseNovaKills",
        ability_name: "leshrac_pulse_nova",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Leshrac_PulseNovaKills:f",
    },
    213: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Leshrac_ThreeHeroLightningStorm",
        ability_name: "leshrac_lightning_storm",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Leshrac_ThreeHeroLightningStorm:f",
    },
    214: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Lion_ThreeHeroFingerOfDeath",
        ability_name: "lion_finger_of_death",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Lion_ThreeHeroFingerOfDeath:f",
    },
    215: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Meepo_PoofKills",
        ability_name: "meepo_poof",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Meepo_PoofKills:f",
    },
    216: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Meepo_MultiHeroEarthbinds",
        ability_name: "drow_ranger_multishot",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Meepo_MultiHeroEarthbinds:f",
    },
    217: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_NightStalker_NighttimeKills",
        ability_name: "night_stalker_crippling_fear",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_NightStalker_NighttimeKills:f",
    },
    218: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Morphling_KillsDuringReplicate",
        ability_name: "morphling_morph_replicate",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Morphling_KillsDuringReplicate:f",
    },
    219: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_OgreMagi_FireblastKills",
        ability_name: "ogre_magi_fireblast",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_OgreMagi_FireblastKills:f",
    },
    220: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_OgreMagi_IgniteKills",
        ability_name: "ogre_magi_ignite",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_OgreMagi_IgniteKills:f",
    },
    221: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_DominatingKillStreaks",
        ability_name: "None",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_DominatingKillStreaks:f",
    },
    223: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Alchemist_AghanimsGiven",
        ability_name: "alchemist_acid_spray",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Alchemist_AghanimsGiven:f",
    },
    226: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_WitchDoctor_MultiHeroCaskStuns",
        ability_name: "witch_doctor_paralyzing_cask",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_WitchDoctor_MultiHeroCaskStuns:f",
    },
    227: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Weaver_ShukuchiKills",
        ability_name: "weaver_shukuchi",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Weaver_ShukuchiKills:f",
    },
    228: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Windrunner_ShackleFocusFireKills",
        ability_name: "windrunner_focusfire",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Windrunner_ShackleFocusFireKills:f",
    },
    229: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_VengefulSpirit_VengeanceAuraIllusionKills",
        ability_name: "vengefulspirit_command_aura",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_VengefulSpirit_VengeanceAuraIllusionKills:f",
    },
    230: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Tusk_WalrusPunchKills",
        ability_name: "tusk_walrus_punch",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Tusk_WalrusPunchKills:f",
    },
    231: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Tinker_TripleHeroLasers",
        ability_name: "special_bonus_unique_tinker",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Tinker_TripleHeroLasers:f",
    },
    232: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_TemplarAssassin_MultiHeroPsiBlades",
        ability_name: "templar_assassin_psi_blades",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_TemplarAssassin_MultiHeroPsiBlades:f",
    },
    233: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Sven_KillsDuringGodsStrength",
        ability_name: "sven_gods_strength",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Sven_KillsDuringGodsStrength:f",
    },
    234: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Sniper_ThreeHeroShrapnels",
        ability_name: "sniper_assassinate",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Sniper_ThreeHeroShrapnels:f",
    },
    235: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Slark_KillsDuringShadowDance",
        ability_name: "slark_shadow_dance",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Slark_KillsDuringShadowDance:f",
    },
    236: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_ShadowShaman_MultiHeroEtherShocks",
        ability_name: "shadow_shaman_ether_shock",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_ShadowShaman_MultiHeroEtherShocks:f",
    },
    237: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_ShadowShaman_SerpentWardShackleKills",
        ability_name: "shadow_shaman_mass_serpent_ward",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_ShadowShaman_SerpentWardShackleKills:f",
    },
    238: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Riki_ThreeHeroTricksOfTheTrade",
        ability_name: "riki_tricks_of_the_trade",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Riki_ThreeHeroTricksOfTheTrade:f",
    },
    239: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Razor_EyeOfTheStormKills",
        ability_name: "razor_eye_of_the_storm",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Razor_EyeOfTheStormKills:f",
    },
    240: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Pugna_LifeDrainKills",
        ability_name: "pugna_life_drain",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Pugna_LifeDrainKills:f",
    },
    241: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_ObsidianDestroyer_SanitysEclipseKills",
        ability_name: "obsidian_destroyer_sanity_eclipse",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_ObsidianDestroyer_SanitysEclipseKills:f",
    },
    242: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Oracle_MultiHeroFortunesEnd",
        ability_name: "oracle_fortunes_end",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Oracle_MultiHeroFortunesEnd:f",
    },
    243: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Omniknight_PurificationKills",
        ability_name: "omniknight_purification",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Omniknight_PurificationKills:f",
    },
    244: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_NightStalker_EnemyMissesUnderCripplingFear",
        ability_name: "night_stalker_crippling_fear",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_NightStalker_EnemyMissesUnderCripplingFear:f",
    },
    245: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Warlock_ThreeHeroFatalBonds",
        ability_name: "warlock_fatal_bonds",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Warlock_ThreeHeroFatalBonds:f",
    },
    246: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Riki_TricksOfTheTradeKills",
        ability_name: "riki_tricks_of_the_trade",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Riki_TricksOfTheTradeKills:f",
    },
    247: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Earthshaker_AftershockHits10",
        ability_name: "earthshaker_aftershock",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Earthshaker_AftershockHits10:f",
    },
    248: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Earthshaker_5HeroEchoslams",
        ability_name: "ad_special_bonus_gold_150_l",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Earthshaker_5HeroEchoslams:f",
    },
    249: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Lina_LagunaBladeHeroKills",
        ability_name: "lina_laguna_blade",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Lina_LagunaBladeHeroKills:f",
    },
    250: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Lina_LightStrikeHeroStuns",
        ability_name: "lina_light_strike_array",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Lina_LightStrikeHeroStuns:f",
    },
    251: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Earthshaker_FissureMultiStuns",
        ability_name: "earthshaker_fissure",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Earthshaker_FissureMultiStuns:f",
    },
    252: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Earthshaker_TotemKills",
        ability_name: "earthshaker_enchant_totem",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Earthshaker_TotemKills:f",
    },
    253: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Pangolier_SwashbuckleKills",
        ability_name: "pangolier_swashbuckle",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Pangolier_SwashbuckleKills:f",
    },
    254: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Furion_EnemyHeroesTrapped",
        ability_name: "furion_sprout",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Furion_EnemyHeroesTrapped:f",
    },
    255: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Pangolier_HeartpiercerKills",
        ability_name: "pangolier_lucky_shot",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Pangolier_HeartpiercerKills:f",
    },
    256: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Medusa_MultiHeroStoneGaze",
        ability_name: "medusa_stone_gaze",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Medusa_MultiHeroStoneGaze:f",
    },
    257: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Medusa_SplitShotKills",
        ability_name: "medusa_split_shot",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Medusa_SplitShotKills:f",
    },
    258: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Mirana_MultiHeroStarstorm",
        ability_name: "drow_ranger_multishot",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Mirana_MultiHeroStarstorm:f",
    },
    259: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Mirana_KillsFromMoonlightShadow",
        ability_name: "mirana_invis",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Mirana_KillsFromMoonlightShadow:f",
    },
    260: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Magnus_MultiHeroSkewers",
        ability_name: "drow_ranger_multishot",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Magnus_MultiHeroSkewers:f",
    },
    261: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Magnus_MultiHeroReversePolarity",
        ability_name: "magnataur_reverse_polarity",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Magnus_MultiHeroReversePolarity:f",
    },
    262: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Magnus_HeroesSlowedWithShockwave",
        ability_name: "magnataur_shockwave",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Magnus_HeroesSlowedWithShockwave:f",
    },
    263: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_NagaSiren_MultiHeroSong",
        ability_name: "naga_siren_song_of_the_siren",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_NagaSiren_MultiHeroSong:f",
    },
    264: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_NagaSiren_AlliesHealedBySong",
        ability_name: "naga_siren_song_of_the_siren",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_NagaSiren_AlliesHealedBySong:f",
    },
    265: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_LoneDruid_MultiHeroRoar",
        ability_name: "lone_druid_savage_roar",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_LoneDruid_MultiHeroRoar:f",
    },
    266: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_LoneDruid_BattleCryKills",
        ability_name: "lone_druid_true_form_battle_cry",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_LoneDruid_BattleCryKills:f",
    },
    267: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_WinterWyvern_ThreeHeroCurses",
        ability_name: "special_bonus_unique_winter_wyvern_1",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_WinterWyvern_ThreeHeroCurses:f",
    },
    268: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Antimage_SpellsBlockedWithCounterspell",
        ability_name: "antimage_counterspell",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Antimage_SpellsBlockedWithCounterspell:f",
    },
    269: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Mars_EnemiesKilledInArena",
        ability_name: "mars_arena_of_blood",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Mars_EnemiesKilledInArena:f",
    },
    270: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Mars_MultiHeroGodsRebuke",
        ability_name: "mars_gods_rebuke",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Mars_MultiHeroGodsRebuke:f",
    },
    271: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Mars_GodsRebukeKills",
        ability_name: "mars_gods_rebuke",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Mars_GodsRebukeKills:f",
    },
    272: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Snapfire_LizardBlobsKills",
        ability_name: "snapfire_mortimer_kisses",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Snapfire_LizardBlobsKills:f",
    },
    273: {
        // kKillEaterEventType_Snapfire_TwoHeroCookieStuns
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Snapfire_TwoHeroCookieStuns",
        ability_name: "snapfire_firesnap_cookie",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Snapfire_TwoHeroCookieStuns:f",
    },
    275: {
        // kKillEaterEventType_Muerta_DeadShotKills
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Muerta_DeadShotKills",
        ability_name: "muerta_dead_shot",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Muerta_DeadShotKills:f",
    },
    276: {
        // kKillEaterEventType_Muerta_PierceTheVeilKills
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Muerta_PierceTheVeilKills",
        ability_name: "muerta_pierce_the_veil",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Muerta_PierceTheVeilKills:f",
    },
    277: {
        // kKillEaterEventType_Muerta_MultiHeroDeadShot
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Muerta_MultiHeroDeadShot",
        ability_name: "muerta_dead_shot",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Muerta_MultiHeroDeadShot:f",
    },
    278: {
        // kKillEaterEventType_Muerta_DeadShotsIntoTheCalling
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Muerta_DeadShotsIntoTheCalling",
        ability_name: "muerta_the_calling",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Muerta_DeadShotsIntoTheCalling:f",
    },
    279: {
        // kKillEaterEventType_Ringmaster_LongRangeDaggerHits
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Ringmaster_LongRangeDaggerHits",
        ability_name: "ringmaster_impalement",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Ringmaster_LongRangeDaggerHits:f",
    },
    280: {
        // kKillEaterEventType_Ringmaster_MultiHeroWhips
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Ringmaster_MultiHeroWhips",
        ability_name: "ringmaster_tame_the_beasts",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Ringmaster_MultiHeroWhips:f",
    },
    281: {
        // kKillEaterEventType_Ringmaster_MultiHeroMesmerizes
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Ringmaster_MultiHeroMesmerizes",
        ability_name: "ringmaster_wheel",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Ringmaster_MultiHeroMesmerizes:f",
    },
    282: {
        // kKillEaterEventType_Kez_ParryCounterAttacks
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Kez_ParryCounterAttacks",
        ability_name: "kez_shodo_sai",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Kez_ParryCounterAttacks:f",
    },
    283: {
        // kKillEaterEventType_Kez_RavensVeilKills
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Kez_RavensVeilKills",
        ability_name: "kez_ravens_veil",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Kez_RavensVeilKills:f",
    },
    284: {
        // kKillEaterEventType_Kez_RaptorDanceHealing
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Kez_RaptorDanceHealing",
        ability_name: "kez_raptor_dance",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Kez_RaptorDanceHealing:f",
    },
    285: {
        // kKillEaterEventType_Kez_KillsDuringFalconRush
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Kez_KillsDuringFalconRush",
        ability_name: "kez_falcon_rush",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Kez_KillsDuringFalconRush:f",
    },
    286: {
        // kKillEaterEventType_Seasonal_PartyHatsStolen
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Seasonal_PartyHatsStolen",
        icon: 's2r://panorama/images/spellicons/consumables/seasonal_frostivus_party_hat.png',
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Seasonal_PartyHatsStolen:f",
        //event_logo: "file://{images}/front_page/frostivus_2024_en_small.psd",
        particle_overlay: "particles/ui/ui_generic_snow.vpcf",
    },
    287: {
        // kKillEaterEventType_Seasonal_TallestHat
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Seasonal_TallestHat",
        icon: 's2r://panorama/images/spellicons/consumables/seasonal_frostivus_party_hat.png',
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Seasonal_TallestHat:f",
        //event_logo: "file://{images}/front_page/frostivus_2024_en_small.psd",
        particle_overlay: "particles/ui/ui_generic_snow.vpcf",
    },
    288: {
        // kKillEaterEventType_Largo_MultiHeroFrogstomp
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Largo_MultiHeroFrogstomp",
        ability_name: "largo_frogstomp",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Largo_MultiHeroFrogstomp:f",
    },
    289: {
        // kKillEaterEventType_Largo_AmphibianRhapsodyKillsAndAssists
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Largo_AmphibianRhapsodyKillsAndAssists",
        ability_name: "largo_amphibian_rhapsody",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Largo_AmphibianRhapsodyKillsAndAssists:f",
    }
};
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoibXZwX2FjY29sYWRlX3R5cGVfbWFwLmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsiLi4vLi4vLi4vLi4vY29udGVudC9kb3RhL3Bhbm9yYW1hL3NjcmlwdHMvbXZwX2FjY29sYWRlX3R5cGVfbWFwLnRzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiI7QUFBQSxrQ0FBa0M7QUFhbEMsaUZBQWlGO0FBQ2pGLE1BQU0sc0JBQXNCLEdBQXdDO0lBQ25FLFlBQVk7SUFDWixDQUFDLEVBQUUsY0FBYztJQUNqQjtRQUNDLGVBQWUsRUFBRSx1Q0FBdUM7UUFDeEQsSUFBSSxFQUFFLDREQUE0RDtRQUNsRSxRQUFRLEVBQUUsS0FBSztRQUNmLGdCQUFnQixFQUFFLDBDQUEwQztLQUM1RDtJQUNELENBQUMsRUFBRSxlQUFlO0lBQ2xCO1FBQ0MsZUFBZSxFQUFFLHdDQUF3QztRQUN6RCxJQUFJLEVBQUUsZ0VBQWdFO1FBQ3RFLFFBQVEsRUFBRSxLQUFLO1FBQ2YsZ0JBQWdCLEVBQUUsMkNBQTJDO0tBQzdEO0lBQ0QsQ0FBQyxFQUFFLGdCQUFnQjtJQUNuQjtRQUNDLGVBQWUsRUFBRSx5Q0FBeUM7UUFDMUQsSUFBSSxFQUFFLCtEQUErRDtRQUNyRSxRQUFRLEVBQUUsS0FBSztRQUNmLGdCQUFnQixFQUFFLDRDQUE0QztLQUM5RDtJQUNELENBQUMsRUFBRSxrQkFBa0I7SUFDckI7UUFDQyxlQUFlLEVBQUUsMkNBQTJDO1FBQzVELElBQUksRUFBRSwrREFBK0Q7UUFDckUsUUFBUSxFQUFFLEtBQUs7UUFDZixnQkFBZ0IsRUFBRSw4Q0FBOEM7S0FDaEU7SUFDRCxDQUFDLEVBQUUsMkJBQTJCO0lBQzlCO1FBQ0MsZUFBZSxFQUFFLG9EQUFvRDtRQUNyRSxJQUFJLEVBQUUsaUVBQWlFO1FBQ3ZFLFFBQVEsRUFBRSxLQUFLO1FBQ2YsZ0JBQWdCLEVBQUUsdURBQXVEO0tBQ3pFO0lBQ0QsQ0FBQyxFQUFFLHFCQUFxQjtJQUN4QjtRQUNDLGVBQWUsRUFBRSw4Q0FBOEM7UUFDL0Qs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