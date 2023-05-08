/// <reference path="dota.d.ts" />
// The indices need to line up with dota_gcmessages_common_match_management.proto
const g_MVP_Accolade_TypeMap = {
    /* common */
    1: // total kills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_total_kills",
        icon: 's2r://panorama/images/challenges/icon_challenges_kills.png',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_total_kills',
    },
    2: // total deaths
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_total_deaths",
        icon: 's2r://panorama/images/challenges/icon_challenges_tombstone.png',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_total_deaths',
    },
    3: // total assists
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_total_assists",
        icon: 's2r://panorama/images/challenges/icon_challenges_xassists.png',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_total_assists',
    },
    5: // total net_worth
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_total_net_worth",
        icon: 's2r://panorama/images/challenges/icon_challenges_networth.png',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_total_net_worth',
    },
    7: // total support_gold_spent
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_total_support_gold_spent",
        icon: 's2r://panorama/images/challenges/icon_challenges_assistgold.png',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_total_support_gold_spent',
    },
    8: // total wards_placed
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_total_wards_placed",
        icon: 's2r://panorama/images/challenges/icon_challenges_ward.png',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_total_wards_placed',
    },
    9: // total wards_spotted_for_dewarding
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_total_wards_spotted_for_dewarding",
        icon: 's2r://panorama/images/challenges/icon_challenges_deward.png',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_total_wards_spotted_for_dewarding',
    },
    10: // total camps_stacked
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_total_camps_stacked",
        icon: 's2r://panorama/images/challenges/icon_challenges_campsstacked.png',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_total_camps_stacked',
    },
    11: // total last_hits
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_total_last_hits",
        icon: 's2r://panorama/images/challenges/icon_challenges_lasthits.png',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_total_last_hits',
    },
    12: // total denies
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_total_denies",
        icon: 's2r://panorama/images/challenges/icon_challenges_denies.png',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_total_denies',
    },
    15: // kKillEaterEvent_Towers_Destroyed
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_Towers_Destroyed",
        icon: 's2r://panorama/images/challenges/icon_challenges_tower.png',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEvent_Towers_Destroyed',
    },
    19: // kKillEaterEventType_LowHealthKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_LowHealthKills",
        icon: 's2r://panorama/images/challenges/icon_challenges_neardeathkills.png',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_LowHealthKills',
    },
    28: // kKillEaterEventType_RoshanKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_RoshanKills",
        icon: 's2r://panorama/images/challenges/icon_challenges_roshan.png',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_RoshanKills',
    },
    161: // kKillEaterEventType_ThreeManMeks
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_ThreeManMeks",
        icon: 's2r://panorama/images/challenges/icon_challenges_mekthree.png',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_ThreeManMeks',
    },
    164: // kKillEaterEventType_ThreeHeroVeils
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_ThreeHeroVeils",
        icon: 's2r://panorama/images/challenges/icon_challenges_veilthree.png',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_ThreeHeroVeils',
    },
    224: // kKillEaterEventType_VeilsLeadingToKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_VeilsLeadingToKills",
        icon: 's2r://panorama/images/challenges/icon_challenges_veil.png',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_VeilsLeadingToKills',
    },
    225: // kKillEaterEventType_DustLeadingToKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_DustLeadingToKills",
        icon: 's2r://panorama/images/challenges/icon_challenges_killsdust.png',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_DustLeadingToKills',
    },
    274: // Custom_KillStreak
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_Custom_KillStreak",
        icon: 's2r://panorama/images/challenges/icon_challenges_xkills.png',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_Custom_KillStreak',
    },
    // Hero specific
    16: // kKillEaterEventType_Invoker_SunstrikeKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Invoker_SunstrikeKills",
        ability_name: 'invoker_sun_strike',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Invoker_SunstrikeKills',
    },
    17: // kKillEaterEventType_Axe_Culls
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Axe_Culls",
        ability_name: 'axe_culling_blade',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Axe_Culls',
    },
    18: // kKillEaterEventType_Axe_BattleHungerKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Axe_BattleHungerKills",
        ability_name: 'axe_battle_hunger',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Axe_BattleHungerKills',
    },
    20: // kKillEaterEventType_Invoker_TornadoKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Invoker_TornadoKills",
        ability_name: 'invoker_tornado',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Invoker_TornadoKills',
    },
    21: // kKillEaterEventType_Sven_DoubleStuns
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Sven_DoubleStuns",
        ability_name: 'sven_storm_bolt',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Sven_DoubleStuns',
    },
    22: // kKillEaterEventType_Sven_WarcryAssists
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Sven_WarcryAssists",
        ability_name: 'sven_warcry',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Sven_WarcryAssists',
    },
    23: // kKillEaterEventType_Sven_CleaveDoubleKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Sven_CleaveDoubleKills",
        ability_name: 'sven_great_cleave',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Sven_CleaveDoubleKills',
    },
    /*
    24 : // kKillEaterEventType_Sven_TeleportInterrupts
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Sven_TeleportInterrupts",
        ability_name: 'sven_',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Sven_TeleportInterrupts',
    },*/
    25: // kKillEaterEventType_Faceless_MultiChrono
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Faceless_MultiChrono",
        ability_name: 'faceless_void_chronosphere',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Faceless_MultiChrono',
    },
    26: // kKillEaterEventType_Faceless_ChronoKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Faceless_ChronoKills",
        ability_name: 'faceless_void_chronosphere',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Faceless_ChronoKills',
    },
    27: // kKillEaterEventType_Ursa_MultiShocks
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Ursa_MultiShocks",
        ability_name: 'ursa_earthshock',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Ursa_MultiShocks',
    },
    29: // kKillEaterEventType_Lion_FingerKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Lion_FingerKills",
        ability_name: 'lion_finger_of_death',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Lion_FingerKills',
    },
    32: // kKillEaterEventType_Riki_SmokedHeroKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Riki_SmokedHeroKills",
        ability_name: 'riki_smoke_screen',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Riki_SmokedHeroKills',
    },
    33: // kKillEaterEventType_HeroesRevealedWithDust
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_HeroesRevealedWithDust",
        icon: 's2r://panorama/images/challenges/icon_challenges_totaldust.png',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_HeroesRevealedWithDust',
    },
    34: // kKillEaterEventType_SkeletonKing_ReincarnationKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_SkeletonKing_ReincarnationKills",
        ability_name: 'skeleton_king_reincarnation',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_SkeletonKing_ReincarnationKills',
    },
    35: // kKillEaterEventType_Skywrath_FlareKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Skywrath_FlareKills",
        ability_name: 'skywrath_mage_mystic_flare',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Skywrath_FlareKills',
    },
    36: // kKillEaterEventType_Leshrac_SplitEarthStuns
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Leshrac_SplitEarthStuns",
        ability_name: 'leshrac_split_earth',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Leshrac_SplitEarthStuns',
    },
    37: // kKillEaterEventType_Mirana_MaxStunArrows
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Mirana_MaxStunArrows",
        ability_name: 'mirana_arrow',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Mirana_MaxStunArrows',
    },
    38: // kKillEaterEventType_PhantomAssassin_CoupdeGraceCrits
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_PhantomAssassin_CoupdeGraceCrits",
        ability_name: 'phantom_assassin_coup_de_grace',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_PhantomAssassin_CoupdeGraceCrits',
    },
    39: // kKillEaterEventType_PhantomAssassin_DaggerCrits
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_PhantomAssassin_DaggerCrits",
        ability_name: 'phantom_assassin_stifling_dagger',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_PhantomAssassin_DaggerCrits',
    },
    40: // kKillEaterEventType_Meepo_Earthbinds
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Meepo_Earthbinds",
        ability_name: 'meepo_earthbind',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Meepo_Earthbinds',
    },
    41: // kKillEaterEventType_Bloodseeker_RuptureKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Bloodseeker_RuptureKills",
        ability_name: 'bloodseeker_rupture',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Bloodseeker_RuptureKills',
    },
    42: // kKillEaterEventType_Slark_LeashedEnemies
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Slark_LeashedEnemies",
        ability_name: 'slark_pounce',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Slark_LeashedEnemies',
    },
    43: // kKillEaterEventType_Disruptor_FountainGlimpses
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Disruptor_FountainGlimpses",
        ability_name: 'disruptor_glimpse',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Disruptor_FountainGlimpses',
    },
    44: // kKillEaterEventType_Rubick_SpellsStolen
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Rubick_SpellsStolen",
        ability_name: 'rubick_spell_steal',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Rubick_SpellsStolen',
    },
    45: // kKillEaterEventType_Rubick_UltimatesStolen
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Rubick_UltimatesStolen",
        ability_name: 'rubick_spell_steal',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Rubick_UltimatesStolen',
    },
    46: // kKillEaterEventType_Doom_EnemiesDoomed
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Doom_EnemiesDoomed",
        ability_name: 'doom_bringer_doom',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Doom_EnemiesDoomed',
    },
    47: // kKillEaterEventType_Omniknight_Purifications
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Omniknight_Purifications",
        ability_name: 'omniknight_purification',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Omniknight_Purifications',
    },
    48: // kKillEaterEventType_Omniknight_AlliesRepelled
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Omniknight_AlliesRepelled",
        ability_name: 'omniknight_repel',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Omniknight_AlliesRepelled',
    },
    49: // kKillEaterEventType_Omniknight_EnemiesRepelled
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Omniknight_EnemiesRepelled",
        ability_name: 'omniknight_repel',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Omniknight_EnemiesRepelled',
    },
    50: // kKillEaterEventType_Warlock_FiveHeroFatalBonds
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Warlock_FiveHeroFatalBonds",
        ability_name: 'warlock_fatal_bonds',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Warlock_FiveHeroFatalBonds',
    },
    51: // kKillEaterEventType_CrystalMaiden_FrostbittenEnemies
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_CrystalMaiden_FrostbittenEnemies",
        ability_name: 'crystal_maiden_frostbite',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_CrystalMaiden_FrostbittenEnemies',
    },
    52: // kKillEaterEventType_CrystalMaiden_CrystalNovas
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_CrystalMaiden_CrystalNovas",
        ability_name: 'crystal_maiden_crystal_nova',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_CrystalMaiden_CrystalNovas',
    },
    53: // kKillEaterEventType_Kunkka_DoubleHeroTorrents
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Kunkka_DoubleHeroTorrents",
        ability_name: 'kunkka_torrent',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Kunkka_DoubleHeroTorrents',
    },
    54: // kKillEaterEventType_Kunkka_TripleHeroGhostShips
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Kunkka_TripleHeroGhostShips",
        ability_name: 'kunkka_ghostship',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Kunkka_TripleHeroGhostShips',
    },
    55: // kKillEaterEventType_NagaSiren_EnemiesEnsnared
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_NagaSiren_EnemiesEnsnared",
        ability_name: 'naga_siren_ensnare',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_NagaSiren_EnemiesEnsnared',
    },
    56: // kKillEaterEventType_NagaSiren_TripleHeroRipTides
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_NagaSiren_TripleHeroRipTides",
        ability_name: 'naga_siren_rip_tide',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_NagaSiren_TripleHeroRipTides',
    },
    57: // kKillEaterEventType_Lycan_KillsDuringShapeshift
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Lycan_KillsDuringShapeshift",
        ability_name: 'lycan_shapeshift',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Lycan_KillsDuringShapeshift',
    },
    58: // kKillEaterEventType_Pudge_DismemberKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Pudge_DismemberKills",
        ability_name: 'pudge_dismember',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Pudge_DismemberKills',
    },
    59: // kKillEaterEventType_Pudge_EnemyHeroesHooked
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Pudge_EnemyHeroesHooked",
        ability_name: 'pudge_meat_hook',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Pudge_EnemyHeroesHooked',
    },
    60: // kKillEaterEventType_Pudge_HookKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Pudge_HookKills",
        ability_name: 'pudge_meat_hook',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Pudge_HookKills',
    },
    61: // kKillEaterEventType_Pudge_UnseenEnemyHeroesHooked
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Pudge_UnseenEnemyHeroesHooked",
        ability_name: 'pudge_meat_hook',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Pudge_UnseenEnemyHeroesHooked',
    },
    62: // kKillEaterEventType_DrowRanger_EnemiesSilenced
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_DrowRanger_EnemiesSilenced",
        ability_name: 'drow_ranger_silence',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_DrowRanger_EnemiesSilenced',
    },
    63: // kKillEaterEventType_DrowRanger_MultiHeroSilences
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_DrowRanger_MultiHeroSilences",
        ability_name: 'drow_ranger_silence',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_DrowRanger_MultiHeroSilences',
    },
    64: // kKillEaterEventType_DrowRanger_SilencedKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_DrowRanger_SilencedKills",
        ability_name: 'drow_ranger_silence',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_DrowRanger_SilencedKills',
    },
    65: // kKillEaterEventType_DrowRanger_FrostArrowKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_DrowRanger_FrostArrowKills",
        ability_name: 'drow_ranger_frost_arrows',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_DrowRanger_FrostArrowKills',
    },
    66: // kKillEaterEventType_DragonKnight_KillsInDragonForm
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_DragonKnight_KillsInDragonForm",
        ability_name: 'dragon_knight_elder_dragon_form',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_DragonKnight_KillsInDragonForm',
    },
    67: // kKillEaterEventType_DragonKnight_BreatheFireKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_DragonKnight_BreatheFireKills",
        ability_name: 'dragon_knight_breathe_fire',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_DragonKnight_BreatheFireKills',
    },
    68: // kKillEaterEventType_DragonKnight_SplashKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_DragonKnight_SplashKills",
        ability_name: 'dragon_knight_elder_dragon_form',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_DragonKnight_SplashKills',
    },
    69: // kKillEaterEventType_WitchDoctor_CaskStuns
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_WitchDoctor_CaskStuns",
        ability_name: 'witch_doctor_paralyzing_cask',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_WitchDoctor_CaskStuns',
    },
    70: // kKillEaterEventType_WitchDoctor_MaledictKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_WitchDoctor_MaledictKills",
        ability_name: 'witch_doctor_maledict',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_WitchDoctor_MaledictKills',
    },
    71: // kKillEaterEventType_WitchDoctor_MultiHeroMaledicts
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_WitchDoctor_MultiHeroMaledicts",
        ability_name: 'witch_doctor_maledict',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_WitchDoctor_MultiHeroMaledicts',
    },
    72: // kKillEaterEventType_WitchDoctor_DeathWardKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_WitchDoctor_DeathWardKills",
        ability_name: 'witch_doctor_death_ward',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_WitchDoctor_DeathWardKills',
    },
    73: // kKillEaterEventType_Disruptor_ThunderStrikeKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Disruptor_ThunderStrikeKills",
        ability_name: 'disruptor_thunder_strike',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Disruptor_ThunderStrikeKills',
    },
    74: // kKillEaterEventType_Disruptor_HeroesGlimpsed
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Disruptor_HeroesGlimpsed",
        ability_name: 'disruptor_glimpse',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Disruptor_HeroesGlimpsed',
    },
    75: // kKillEaterEventType_CrystalMaiden_FreezingFieldKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_CrystalMaiden_FreezingFieldKills",
        ability_name: 'crystal_maiden_freezing_field',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_CrystalMaiden_FreezingFieldKills',
    },
    77: // kKillEaterEventType_Medusa_EnemiesPetrified
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Medusa_EnemiesPetrified",
        ability_name: 'medusa_stone_gaze',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Medusa_EnemiesPetrified',
    },
    78: // kKillEaterEventType_Warlock_FatalBondsKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Warlock_FatalBondsKills",
        ability_name: 'warlock_fatal_bonds',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Warlock_FatalBondsKills',
    },
    79: // kKillEaterEventType_Warlock_GolemKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Warlock_GolemKills",
        ability_name: 'warlock_golem_flaming_fists',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Warlock_GolemKills',
    },
    80: // kKillEaterEventType_Tusk_WalrusPunches
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Tusk_WalrusPunches",
        ability_name: 'tusk_walrus_punch',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Tusk_WalrusPunches',
    },
    81: // kKillEaterEventType_Tusk_SnowballStuns
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Tusk_SnowballStuns",
        ability_name: 'tusk_snowball',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Tusk_SnowballStuns',
    },
    82: // kKillEaterEventType_Earthshaker_FissureStuns
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Earthshaker_FissureStuns",
        ability_name: 'earthshaker_fissure',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Earthshaker_FissureStuns',
    },
    83: // kKillEaterEventType_Earthshaker_3HeroEchoslams
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Earthshaker_3HeroEchoslams",
        ability_name: 'earthshaker_echo_slam',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_Earthshaker_3HeroEchoslams',
    },
    84: // kKillEaterEventType_SandKing_BurrowstrikeStuns
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_SandKing_BurrowstrikeStuns",
        ability_name: 'sandking_burrowstrike',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_SandKing_BurrowstrikeStuns',
    },
    85: // kKillEaterEventType_SandKing_EpicenterKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_SandKing_EpicenterKills",
        ability_name: 'sandking_epicenter',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_SandKing_EpicenterKills',
    },
    86: // kKillEaterEventType_SkywrathMage_AncientSealKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_SkywrathMage_AncientSealKills",
        ability_name: 'skywrath_mage_ancient_seal',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_SkywrathMage_AncientSealKills',
    },
    87: // kKillEaterEventType_SkywrathMage_ConcussiveShotKills
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_SkywrathMage_ConcussiveShotKills",
        ability_name: 'skywrath_mage_concussive_shot',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEventType_SkywrathMage_ConcussiveShotKills',
    },
    88: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Luna_LucentBeamKills",
        ability_name: "luna_lucent_beam",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Luna_LucentBeamKills",
    },
    89: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Luna_EclipseKills",
        ability_name: "luna_eclipse",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Luna_EclipseKills",
    },
    90: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_KeeperOfTheLight_IlluminateKills",
        ability_name: "keeper_of_the_light_illuminate",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_KeeperOfTheLight_IlluminateKills",
    },
    91: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_KeeperOfTheLight_ManaLeakStuns",
        ability_name: "keeper_of_the_light_mana_leak",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_KeeperOfTheLight_ManaLeakStuns",
    },
    92: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_KeeperOfTheLight_TeammatesRecalled",
        ability_name: "keeper_of_the_light_blinding_light",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_KeeperOfTheLight_TeammatesRecalled",
    },
    93: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_LegionCommander_DuelsWon",
        ability_name: "legion_commander_duel",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_LegionCommander_DuelsWon",
    },
    94: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Beastmaster_RoarKills",
        ability_name: "beastmaster_primal_roar",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Beastmaster_RoarKills",
    },
    95: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Beastmaster_RoarMultiKills",
        ability_name: "beastmaster_primal_roar",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Beastmaster_RoarMultiKills",
    },
    96: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Windrunner_FocusFireBuildings",
        ability_name: "windrunner_focusfire",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Windrunner_FocusFireBuildings",
    },
    97: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Windrunner_PowershotKills",
        ability_name: "windrunner_powershot",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Windrunner_PowershotKills",
    },
    98: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_PhantomAssassin_DaggerLastHits",
        ability_name: "phantom_assassin_stifling_dagger",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_PhantomAssassin_DaggerLastHits",
    },
    99: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_PhantomAssassin_PhantomStrikeKills",
        ability_name: "phantom_assassin_phantom_strike",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_PhantomAssassin_PhantomStrikeKills",
    },
    100: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_DeathProphet_CryptSwarmKills",
        ability_name: "death_prophet_carrion_swarm",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_DeathProphet_CryptSwarmKills",
    },
    101: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_DeathProphet_ExorcismBuildingKills",
        ability_name: "death_prophet_exorcism",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_DeathProphet_ExorcismBuildingKills",
    },
    102: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_DeathProphet_ExorcismSpiritsSummoned",
        ability_name: "death_prophet_exorcism",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_DeathProphet_ExorcismSpiritsSummoned",
    },
    103: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_DeathProphet_MultiHeroSilences",
        ability_name: "death_prophet_silence",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_DeathProphet_MultiHeroSilences",
    },
    104: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Abaddon_MistCoilKills",
        ability_name: "abaddon_death_coil",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Abaddon_MistCoilKills",
    },
    105: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Abaddon_MistCoilHealed",
        ability_name: "abaddon_death_coil",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Abaddon_MistCoilHealed",
    },
    106: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Abaddon_AphoticShieldKills",
        ability_name: "abaddon_aphotic_shield",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Abaddon_AphoticShieldKills",
    },
    107: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Lich_ChainFrostTripleKills",
        ability_name: "lich_chain_frost",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Lich_ChainFrostTripleKills",
    },
    108: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Lich_ChainFrostMultiKills",
        ability_name: "lich_chain_frost",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Lich_ChainFrostMultiKills",
    },
    109: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Lich_ChainFrostBounces",
        ability_name: "lich_chain_frost",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Lich_ChainFrostBounces",
    },
    110: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Ursa_EnragedKills",
        ability_name: "enraged_wildkin_tornado",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Ursa_EnragedKills",
    },
    111: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Ursa_EarthshockKills",
        ability_name: "ursa_earthshock",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Ursa_EarthshockKills",
    },
    112: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Lina_LagunaBladeKills",
        ability_name: "lina_laguna_blade",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Lina_LagunaBladeKills",
    },
    113: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Lina_DragonSlaveKills",
        ability_name: "lina_dragon_slave",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Lina_DragonSlaveKills",
    },
    114: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Lina_LightStrikeArrayStuns",
        ability_name: "lina_light_strike_array",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Lina_LightStrikeArrayStuns",
    },
    115: // kKillEaterEvent_Barracks_Destroyed
    {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_Barracks_Destroyed",
        icon: 's2r://panorama/images/challenges/icon_challenges_barracksdestroyed.png',
        gradient: 'red',
        detail_loc_token: '#DOTA_mvp2_accolade_detail_kKillEaterEvent_Barracks_Destroyed',
    },
    116: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_TemplarAssassin_MeldKills",
        ability_name: "templar_assassin_meld",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_TemplarAssassin_MeldKills",
    },
    117: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_TemplarAssassin_HeroesSlowed",
        ability_name: "special_bonus_unique_templar_assassin",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_TemplarAssassin_HeroesSlowed",
    },
    118: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_Sniper_AssassinationKills",
        ability_name: "sniper_assassinate",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_Sniper_AssassinationKills",
    },
    119: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_Sniper_HeadshotStuns",
        ability_name: "sniper_headshot",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_Sniper_HeadshotStuns",
    },
    120: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_EarthSpirit_SmashStuns",
        ability_name: "earth_spirit_boulder_smash",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_EarthSpirit_SmashStuns",
    },
    121: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_EarthSpirit_GripSilences",
        ability_name: "earth_spirit_geomagnetic_grip",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_EarthSpirit_GripSilences",
    },
    122: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_ShadowShaman_ShackleKills",
        ability_name: "shadow_shaman_shackles",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_ShadowShaman_ShackleKills",
    },
    123: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_ShadowShaman_HexKills",
        ability_name: "shadow_shaman_ether_shock",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_ShadowShaman_HexKills",
    },
    124: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_Centaur_EnemiesStomped",
        ability_name: "centaur_double_edge",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_Centaur_EnemiesStomped",
    },
    125: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_Centaur_DoubleEdgeKills",
        ability_name: "centaur_double_edge",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_Centaur_DoubleEdgeKills",
    },
    126: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_Centaur_ReturnKills",
        ability_name: "centaur_return",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_Centaur_ReturnKills",
    },
    127: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_EmberSpirit_EnemiesChained",
        ability_name: "ember_spirit_searing_chains",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_EmberSpirit_EnemiesChained",
    },
    128: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_EmberSpirit_SleightOfFistMultiKills",
        ability_name: "ember_spirit_sleight_of_fist",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_EmberSpirit_SleightOfFistMultiKills",
    },
    129: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_Puck_OrbKills",
        ability_name: "puck_illusory_orb",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_Puck_OrbKills",
    },
    130: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_VengefulSpirit_EnemiesStunned",
        ability_name: "special_bonus_unique_vengeful_spirit_1",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_VengefulSpirit_EnemiesStunned",
    },
    131: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_Lifestealer_RageKills",
        ability_name: "life_stealer_rage",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_Lifestealer_RageKills",
    },
    132: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_Lifestealer_OpenWoundsKills",
        ability_name: "life_stealer_open_wounds",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_Lifestealer_OpenWoundsKills",
    },
    133: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_Lifestealer_InfestKills",
        ability_name: "life_stealer_infest",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_Lifestealer_InfestKills",
    },
    134: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_ElderTitan_SpiritKills",
        ability_name: "elder_titan_ancestral_spirit",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_ElderTitan_SpiritKills",
    },
    135: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_ElderTitan_GoodStomps",
        ability_name: "elder_titan_ancestral_spirit",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_ElderTitan_GoodStomps",
    },
    136: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_Clockwerk_RocketKills",
        ability_name: "gyrocopter_rocket_barrage",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_Clockwerk_RocketKills",
    },
    137: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_Clockwerk_BlindRocketKills",
        ability_name: "gyrocopter_rocket_barrage",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_Clockwerk_BlindRocketKills",
    },
    138: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_StormSpirit_BallKills",
        ability_name: "storm_spirit_ball_lightning",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_StormSpirit_BallKills",
    },
    139: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_StormSpirit_DoubleRemnantKills",
        ability_name: "storm_spirit_static_remnant",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_StormSpirit_DoubleRemnantKills",
    },
    140: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_StormSpirit_VortexKills",
        ability_name: "storm_spirit_electric_vortex",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_StormSpirit_VortexKills",
    },
    141: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_Tinker_DoubleMissileKills",
        ability_name: "tinker_heat_seeking_missile",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_Tinker_DoubleMissileKills",
    },
    142: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_Tinker_LaserKills",
        ability_name: "tinker_laser",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_Tinker_LaserKills",
    },
    143: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_Techies_SuicideKills",
        ability_name: "techies_suicide",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_Techies_SuicideKills",
    },
    144: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_Techies_LandMineKills",
        ability_name: "techies_land_mines",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_Techies_LandMineKills",
    },
    145: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_Techies_StatisTrapStuns",
        ability_name: "techies_stasis_trap",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_Techies_StatisTrapStuns",
    },
    146: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_Techies_RemoteMineKills",
        ability_name: "techies_remote_mines",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_Techies_RemoteMineKills",
    },
    147: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_ShadowFiend_TripleRazeKills",
        ability_name: "nevermore_shadowraze1",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_ShadowFiend_TripleRazeKills",
    },
    148: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_ShadowFiend_RequiemMultiKills",
        ability_name: "nevermore_requiem",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_ShadowFiend_RequiemMultiKills",
    },
    149: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_ShadowFiend_QRazeKills",
        ability_name: "nevermore_shadowraze1",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_ShadowFiend_QRazeKills",
    },
    150: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_ShadowFiend_WRazeKills",
        ability_name: "nevermore_shadowraze2",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_ShadowFiend_WRazeKills",
    },
    151: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_ShadowFiend_ERazeKills",
        ability_name: "nevermore_shadowraze3",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_ShadowFiend_ERazeKills",
    },
    152: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_Oracle_FatesEdictKills",
        ability_name: "oracle_fates_edict",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_Oracle_FatesEdictKills",
    },
    153: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_Oracle_FalsePromiseSaves",
        ability_name: "oracle_false_promise",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_Oracle_FalsePromiseSaves",
    },
    154: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEvent_Juggernaut_OmnislashKills",
        ability_name: "juggernaut_blade_dance",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEvent_Juggernaut_OmnislashKills",
    },
    157: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_SkeletonKing_SkeletonHeroKills",
        ability_name: "skeleton_king_hellfire_blast",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_SkeletonKing_SkeletonHeroKills",
    },
    158: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_DarkWillow_CursedCrownTripleStuns",
        ability_name: "dark_willow_cursed_crown",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_DarkWillow_CursedCrownTripleStuns",
    },
    159: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Dazzle_ShallowGraveSaves",
        ability_name: "dazzle_shallow_grave",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Dazzle_ShallowGraveSaves",
    },
    160: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Dazzle_PoisonTouchKills",
        ability_name: "dazzle_poison_touch",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Dazzle_PoisonTouchKills",
    },
    162: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Viper_PoisonAttackKills",
        ability_name: "viper_poison_attack",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Viper_PoisonAttackKills",
    },
    163: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Viper_CorrosiveSkinKills",
        ability_name: "viper_corrosive_skin",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Viper_CorrosiveSkinKills",
    },
    165: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Viper_KillsDuringViperStrike",
        ability_name: "viper_viper_strike",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Viper_KillsDuringViperStrike",
    },
    167: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Tiny_TreeThrowKills",
        ability_name: "tiny_toss_tree",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Tiny_TreeThrowKills",
    },
    168: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Riki_BackstabKills",
        ability_name: "riki_backstab",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Riki_BackstabKills",
    },
    169: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Phoenix_ThreeHeroSupernovaStuns",
        ability_name: "phoenix_supernova",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Phoenix_ThreeHeroSupernovaStuns",
    },
    170: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Terrorblade_MetamorphosisKills",
        ability_name: "terrorblade_metamorphosis",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Terrorblade_MetamorphosisKills",
    },
    171: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Lion_GreatFingerKills",
        ability_name: "lion_finger_of_death",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Lion_GreatFingerKills",
    },
    172: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Antimage_SpellsBlockedWithAghanims",
        ability_name: "antimage_blink",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Antimage_SpellsBlockedWithAghanims",
    },
    173: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Antimage_ThreeManManaVoids",
        ability_name: "antimage_mana_break",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Antimage_ThreeManManaVoids",
    },
    174: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_ArcWarden_TempestDoubleKills",
        ability_name: "arc_warden_tempest_double",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_ArcWarden_TempestDoubleKills",
    },
    175: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_ArcWarden_SparkWraithKills",
        ability_name: "arc_warden_spark_wraith",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_ArcWarden_SparkWraithKills",
    },
    176: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Bane_BrainSapKills",
        ability_name: "bane_brain_sap",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Bane_BrainSapKills",
    },
    177: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Bane_FiendsGripKills",
        ability_name: "bane_fiends_grip",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Bane_FiendsGripKills",
    },
    178: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Batrider_TripleHeroFlamebreaks",
        ability_name: "batrider_firefly",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Batrider_TripleHeroFlamebreaks",
    },
    179: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Batrider_DoubleHeroLassoes",
        ability_name: "arc_warden_tempest_double",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Batrider_DoubleHeroLassoes",
    },
    180: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Brewmaster_KillsDuringPrimalSplit",
        ability_name: "brewmaster_primal_split",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Brewmaster_KillsDuringPrimalSplit",
    },
    181: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Bristleback_KillsUnderFourQuillStacks",
        ability_name: "bristleback_quill_spray",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Bristleback_KillsUnderFourQuillStacks",
    },
    182: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Bristleback_TripleHeroNasalGoo",
        ability_name: "bristleback_viscous_nasal_goo",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Bristleback_TripleHeroNasalGoo",
    },
    183: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Broodmother_SpiderlingHeroKills",
        ability_name: "broodmother_spawn_spiderlings",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Broodmother_SpiderlingHeroKills",
    },
    184: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Broodmother_KillsInsideWeb",
        ability_name: "broodmother_spin_web",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Broodmother_KillsInsideWeb",
    },
    185: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Centaur_ThreeHeroStampede",
        ability_name: "centaur_stampede",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Centaur_ThreeHeroStampede",
    },
    186: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_ChaosKnight_RealityRiftKills",
        ability_name: "chaos_knight_reality_rift",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_ChaosKnight_RealityRiftKills",
    },
    187: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Chen_KillsWithPenitence",
        ability_name: "chen_penitence",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Chen_KillsWithPenitence",
    },
    188: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_CrystalMaiden_TwoHeroCrystalNovas",
        ability_name: "crystal_maiden_brilliance_aura",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_CrystalMaiden_TwoHeroCrystalNovas",
    },
    189: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_CrystalMaiden_ThreeHeroFreezingFields",
        ability_name: "crystal_maiden_freezing_field",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_CrystalMaiden_ThreeHeroFreezingFields",
    },
    190: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Dazzle_ShadowWaveKills",
        ability_name: "dazzle_shadow_wave",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Dazzle_ShadowWaveKills",
    },
    191: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_DeathProphet_SiphonKills",
        ability_name: "death_prophet_spirit_siphon",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_DeathProphet_SiphonKills",
    },
    192: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_DeathProphet_ExorcismKillsDuringEuls",
        ability_name: "death_prophet_exorcism",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_DeathProphet_ExorcismKillsDuringEuls",
    },
    193: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Disruptor_ThreeHeroKineticFieldStaticStorm",
        ability_name: "disruptor_kinetic_field",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Disruptor_ThreeHeroKineticFieldStaticStorm",
    },
    194: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Doom_InfernalBladeBurnKills",
        ability_name: "doom_bringer_infernal_blade",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Doom_InfernalBladeBurnKills",
    },
    195: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_DrowRanger_PrecisionAuraCreepTowerKills",
        ability_name: "drow_ranger_frost_arrows",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_DrowRanger_PrecisionAuraCreepTowerKills",
    },
    196: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_EmberSpirit_RemnantKills",
        ability_name: "ember_spirit_activate_fire_remnant",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_EmberSpirit_RemnantKills",
    },
    197: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_EmberSpirit_SleightOfFistKills",
        ability_name: "ember_spirit_sleight_of_fist",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_EmberSpirit_SleightOfFistKills",
    },
    198: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Enigma_MidnightPulseBlackHoleCombos",
        ability_name: "enigma_black_hole",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Enigma_MidnightPulseBlackHoleCombos",
    },
    199: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Enigma_ThreeManBlackHoles",
        ability_name: "enigma_black_hole",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Enigma_ThreeManBlackHoles",
    },
    200: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_FacelessVoid_MultiHeroTimeDilation",
        ability_name: "faceless_void_time_dilation",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_FacelessVoid_MultiHeroTimeDilation",
    },
    201: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Gyrocopter_ThreeHeroFlakCannon",
        ability_name: "gyrocopter_flak_cannon",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Gyrocopter_ThreeHeroFlakCannon",
    },
    202: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Gyrocopter_HomingMissileKills",
        ability_name: "gyrocopter_homing_missile",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Gyrocopter_HomingMissileKills",
    },
    203: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Gyrocopter_RocketBarrageKills",
        ability_name: "gyrocopter_rocket_barrage",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Gyrocopter_RocketBarrageKills",
    },
    204: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Huskar_KillsDuringLifeBreak",
        ability_name: "huskar_life_break",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Huskar_KillsDuringLifeBreak",
    },
    205: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Huskar_BurningSpearKills",
        ability_name: "huskar_burning_spear",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Huskar_BurningSpearKills",
    },
    206: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Invoker_MultiHeroIceWall",
        ability_name: "invoker_ice_wall",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Invoker_MultiHeroIceWall",
    },
    207: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Invoker_ThreeHeroEMP",
        ability_name: "invoker_emp",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Invoker_ThreeHeroEMP",
    },
    208: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Invoker_ThreeHeroDeafeningBlast",
        ability_name: "invoker_deafening_blast",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Invoker_ThreeHeroDeafeningBlast",
    },
    209: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Invoker_MultiHeroChaosMeteor",
        ability_name: "invoker_chaos_meteor",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Invoker_MultiHeroChaosMeteor",
    },
    210: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Jakiro_MultiHeroDualBreath",
        ability_name: "jakiro_dual_breath",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Jakiro_MultiHeroDualBreath",
    },
    211: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Jakiro_IcePathMacropyreCombos",
        ability_name: "jakiro_ice_path",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Jakiro_IcePathMacropyreCombos",
    },
    212: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Leshrac_PulseNovaKills",
        ability_name: "leshrac_pulse_nova",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Leshrac_PulseNovaKills",
    },
    213: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Leshrac_ThreeHeroLightningStorm",
        ability_name: "leshrac_lightning_storm",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Leshrac_ThreeHeroLightningStorm",
    },
    214: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Lion_ThreeHeroFingerOfDeath",
        ability_name: "lion_finger_of_death",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Lion_ThreeHeroFingerOfDeath",
    },
    215: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Meepo_PoofKills",
        ability_name: "meepo_poof",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Meepo_PoofKills",
    },
    216: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Meepo_MultiHeroEarthbinds",
        ability_name: "drow_ranger_multishot",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Meepo_MultiHeroEarthbinds",
    },
    217: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_NightStalker_NighttimeKills",
        ability_name: "night_stalker_crippling_fear",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_NightStalker_NighttimeKills",
    },
    218: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Morphling_KillsDuringReplicate",
        ability_name: "morphling_morph_replicate",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Morphling_KillsDuringReplicate",
    },
    219: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_OgreMagi_FireblastKills",
        ability_name: "ogre_magi_fireblast",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_OgreMagi_FireblastKills",
    },
    220: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_OgreMagi_IgniteKills",
        ability_name: "ogre_magi_ignite",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_OgreMagi_IgniteKills",
    },
    221: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_DominatingKillStreaks",
        ability_name: "None",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_DominatingKillStreaks",
    },
    223: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Alchemist_AghanimsGiven",
        ability_name: "alchemist_acid_spray",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Alchemist_AghanimsGiven",
    },
    226: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_WitchDoctor_MultiHeroCaskStuns",
        ability_name: "witch_doctor_paralyzing_cask",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_WitchDoctor_MultiHeroCaskStuns",
    },
    227: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Weaver_ShukuchiKills",
        ability_name: "weaver_shukuchi",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Weaver_ShukuchiKills",
    },
    228: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Windrunner_ShackleFocusFireKills",
        ability_name: "windrunner_focusfire",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Windrunner_ShackleFocusFireKills",
    },
    229: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_VengefulSpirit_VengeanceAuraIllusionKills",
        ability_name: "vengefulspirit_command_aura",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_VengefulSpirit_VengeanceAuraIllusionKills",
    },
    230: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Tusk_WalrusPunchKills",
        ability_name: "tusk_walrus_punch",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Tusk_WalrusPunchKills",
    },
    231: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Tinker_TripleHeroLasers",
        ability_name: "special_bonus_unique_tinker",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Tinker_TripleHeroLasers",
    },
    232: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_TemplarAssassin_MultiHeroPsiBlades",
        ability_name: "templar_assassin_psi_blades",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_TemplarAssassin_MultiHeroPsiBlades",
    },
    233: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Sven_KillsDuringGodsStrength",
        ability_name: "sven_gods_strength",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Sven_KillsDuringGodsStrength",
    },
    234: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Sniper_ThreeHeroShrapnels",
        ability_name: "sniper_assassinate",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Sniper_ThreeHeroShrapnels",
    },
    235: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Slark_KillsDuringShadowDance",
        ability_name: "slark_shadow_dance",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Slark_KillsDuringShadowDance",
    },
    236: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_ShadowShaman_MultiHeroEtherShocks",
        ability_name: "shadow_shaman_ether_shock",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_ShadowShaman_MultiHeroEtherShocks",
    },
    237: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_ShadowShaman_SerpentWardShackleKills",
        ability_name: "shadow_shaman_mass_serpent_ward",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_ShadowShaman_SerpentWardShackleKills",
    },
    238: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Riki_ThreeHeroTricksOfTheTrade",
        ability_name: "riki_tricks_of_the_trade",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Riki_ThreeHeroTricksOfTheTrade",
    },
    239: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Razor_EyeOfTheStormKills",
        ability_name: "razor_eye_of_the_storm",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Razor_EyeOfTheStormKills",
    },
    240: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Pugna_LifeDrainKills",
        ability_name: "pugna_life_drain",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Pugna_LifeDrainKills",
    },
    241: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_ObsidianDestroyer_SanitysEclipseKills",
        ability_name: "obsidian_destroyer_sanity_eclipse",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_ObsidianDestroyer_SanitysEclipseKills",
    },
    242: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Oracle_MultiHeroFortunesEnd",
        ability_name: "oracle_fortunes_end",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Oracle_MultiHeroFortunesEnd",
    },
    243: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Omniknight_PurificationKills",
        ability_name: "omniknight_purification",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Omniknight_PurificationKills",
    },
    244: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_NightStalker_EnemyMissesUnderCripplingFear",
        ability_name: "night_stalker_crippling_fear",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_NightStalker_EnemyMissesUnderCripplingFear",
    },
    245: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Warlock_ThreeHeroFatalBonds",
        ability_name: "warlock_fatal_bonds",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Warlock_ThreeHeroFatalBonds",
    },
    246: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Riki_TricksOfTheTradeKills",
        ability_name: "riki_tricks_of_the_trade",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Riki_TricksOfTheTradeKills",
    },
    247: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Earthshaker_AftershockHits10",
        ability_name: "earthshaker_aftershock",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Earthshaker_AftershockHits10",
    },
    248: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Earthshaker_5HeroEchoslams",
        ability_name: "ad_special_bonus_gold_150_l",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Earthshaker_5HeroEchoslams",
    },
    249: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Lina_LagunaBladeHeroKills",
        ability_name: "lina_laguna_blade",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Lina_LagunaBladeHeroKills",
    },
    250: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Lina_LightStrikeHeroStuns",
        ability_name: "lina_light_strike_array",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Lina_LightStrikeHeroStuns",
    },
    251: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Earthshaker_FissureMultiStuns",
        ability_name: "earthshaker_fissure",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Earthshaker_FissureMultiStuns",
    },
    252: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Earthshaker_TotemKills",
        ability_name: "earthshaker_enchant_totem",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Earthshaker_TotemKills",
    },
    253: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Pangolier_SwashbuckleKills",
        ability_name: "pangolier_swashbuckle",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Pangolier_SwashbuckleKills",
    },
    254: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Furion_EnemyHeroesTrapped",
        ability_name: "furion_sprout",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Furion_EnemyHeroesTrapped",
    },
    255: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Pangolier_HeartpiercerKills",
        ability_name: "pangolier_lucky_shot",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Pangolier_HeartpiercerKills",
    },
    256: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Medusa_MultiHeroStoneGaze",
        ability_name: "medusa_stone_gaze",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Medusa_MultiHeroStoneGaze",
    },
    257: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Medusa_SplitShotKills",
        ability_name: "medusa_split_shot",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Medusa_SplitShotKills",
    },
    258: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Mirana_MultiHeroStarstorm",
        ability_name: "drow_ranger_multishot",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Mirana_MultiHeroStarstorm",
    },
    259: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Mirana_KillsFromMoonlightShadow",
        ability_name: "mirana_invis",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Mirana_KillsFromMoonlightShadow",
    },
    260: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Magnus_MultiHeroSkewers",
        ability_name: "drow_ranger_multishot",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Magnus_MultiHeroSkewers",
    },
    261: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Magnus_MultiHeroReversePolarity",
        ability_name: "magnataur_reverse_polarity",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Magnus_MultiHeroReversePolarity",
    },
    262: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Magnus_HeroesSlowedWithShockwave",
        ability_name: "magnataur_shockwave",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Magnus_HeroesSlowedWithShockwave",
    },
    263: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_NagaSiren_MultiHeroSong",
        ability_name: "naga_siren_song_of_the_siren",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_NagaSiren_MultiHeroSong",
    },
    264: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_NagaSiren_AlliesHealedBySong",
        ability_name: "naga_siren_song_of_the_siren",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_NagaSiren_AlliesHealedBySong",
    },
    265: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_LoneDruid_MultiHeroRoar",
        ability_name: "lone_druid_savage_roar",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_LoneDruid_MultiHeroRoar",
    },
    266: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_LoneDruid_BattleCryKills",
        ability_name: "lone_druid_true_form_battle_cry",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_LoneDruid_BattleCryKills",
    },
    267: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_WinterWyvern_ThreeHeroCurses",
        ability_name: "special_bonus_unique_winter_wyvern_1",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_WinterWyvern_ThreeHeroCurses",
    },
    268: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Antimage_SpellsBlockedWithCounterspell",
        ability_name: "antimage_counterspell",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Antimage_SpellsBlockedWithCounterspell",
    },
    269: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Mars_EnemiesKilledInArena",
        ability_name: "mars_arena_of_blood",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Mars_EnemiesKilledInArena",
    },
    270: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Mars_MultiHeroGodsRebuke",
        ability_name: "mars_gods_rebuke",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Mars_MultiHeroGodsRebuke",
    },
    271: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Mars_GodsRebukeKills",
        ability_name: "mars_gods_rebuke",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Mars_GodsRebukeKills",
    },
    272: {
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Snapfire_LizardBlobsKills",
        ability_name: "snapfire_mortimer_kisses",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Snapfire_LizardBlobsKills",
    },
    273: {
        // kKillEaterEventType_Snapfire_TwoHeroCookieStuns
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Snapfire_TwoHeroCookieStuns",
        ability_name: "snapfire_firesnap_cookie",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Snapfire_TwoHeroCookieStuns",
    },
    275: {
        // kKillEaterEventType_Muerta_DeadShotKills
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Muerta_DeadShotKills",
        ability_name: "muerta_dead_shot",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Muerta_DeadShotKills",
    },
    276: {
        // kKillEaterEventType_Muerta_PierceTheVeilKills
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Muerta_PierceTheVeilKills",
        ability_name: "muerta_pierce_the_veil",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Muerta_PierceTheVeilKills",
    },
    277: {
        // kKillEaterEventType_Muerta_MultiHeroDeadShot
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Muerta_MultiHeroDeadShot",
        ability_name: "muerta_dead_shot",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Muerta_MultiHeroDeadShot",
    },
    278: {
        // kKillEaterEventType_Muerta_DeadShotsIntoTheCalling
        title_loc_token: "#DOTA_mvp2_accolade_title_kKillEaterEventType_Muerta_DeadShotsIntoTheCalling",
        ability_name: "muerta_the_calling",
        gradient: "red",
        detail_loc_token: "#DOTA_mvp2_accolade_detail_kKillEaterEventType_Muerta_DeadShotsIntoTheCalling",
    },
};
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoibXZwX2FjY29sYWRlX3R5cGVfbWFwLmpzIiwic291cmNlUm9vdCI6IiIsInNvdXJjZXMiOlsibXZwX2FjY29sYWRlX3R5cGVfbWFwLnRzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiJBQUFBLGtDQUFrQztBQVdsQyxpRkFBaUY7QUFDakYsTUFBTSxzQkFBc0IsR0FBd0M7SUFDbkUsWUFBWTtJQUNaLENBQUMsRUFBRSxjQUFjO0lBQ2pCO1FBQ0MsZUFBZSxFQUFFLHVDQUF1QztRQUN4RCxJQUFJLEVBQUUsNERBQTREO1FBQ2xFLFFBQVEsRUFBRSxLQUFLO1FBQ2YsZ0JBQWdCLEVBQUUsd0NBQXdDO0tBQzFEO0lBQ0QsQ0FBQyxFQUFFLGVBQWU7SUFDbEI7UUFDQyxlQUFlLEVBQUUsd0NBQXdDO1FBQ3pELElBQUksRUFBRSxnRUFBZ0U7UUFDdEUsUUFBUSxFQUFFLEtBQUs7UUFDZixnQkFBZ0IsRUFBRSx5Q0FBeUM7S0FDM0Q7SUFDRCxDQUFDLEVBQUUsZ0JBQWdCO0lBQ25CO1FBQ0MsZUFBZSxFQUFFLHlDQUF5QztRQUMxRCxJQUFJLEVBQUUsK0RBQStEO1FBQ3JFLFFBQVEsRUFBRSxLQUFLO1FBQ2YsZ0JBQWdCLEVBQUUsMENBQTBDO0tBQzVEO0lBQ0QsQ0FBQyxFQUFFLGtCQUFrQjtJQUNyQjtRQUNDLGVBQWUsRUFBRSwyQ0FBMkM7UUFDNUQsSUFBSSxFQUFFLCtEQUErRDtRQUNyRSxRQUFRLEVBQUUsS0FBSztRQUNmLGdCQUFnQixFQUFFLDRDQUE0QztLQUM5RDtJQUNELENBQUMsRUFBRSwyQkFBMkI7SUFDOUI7UUFDQyxlQUFlLEVBQUUsb0RBQW9EO1FBQ3JFLElBQUksRUFBRSxpRUFBaUU7UUFDdkUsUUFBUSxFQUFFLEtBQUs7UUFDZixnQkFBZ0IsRUFBRSxxREFBcUQ7S0FDdkU7SUFDRCxDQUFDLEVBQUUscUJBQXFCO0lBQ3hCO1FBQ0MsZUFBZSxFQUFFLDhDQUE4QztRQUMvRCxJQUFJLEVBQUUsMkRBQTJEO1FBQ2pFLFFBQVEsRUFBRSxLQUFLO1FBQ2Ys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