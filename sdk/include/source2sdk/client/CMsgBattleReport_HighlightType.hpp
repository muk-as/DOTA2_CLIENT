#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 67
    // Alignment: 4
    // Size: 0x4
    enum class CMsgBattleReport_HighlightType : std::uint32_t
    {
        // MPropertySuppressEnumerator
        k_eHighlightTypeInvalid = 0xffffffff,
        // MPropertyFriendlyName "Game Winrate"
        k_eGameWinrate = 0x0,
        // MPropertyFriendlyName "Lane Winrate"
        k_eLaneWinrate = 0x1,
        // MPropertyFriendlyName "Ranked MMR Delta"
        k_eMMRDelta = 0x2,
        // MPropertyFriendlyName "Number of Heroes Played"
        k_eNumHeroesPlayed = 0x3,
        // MPropertyFriendlyName "Number of Games Played"
        k_eNumGamesPlayed = 0x4,
        // MPropertyFriendlyName "Average Power Runes Taken"
        k_eAveragePowerRunesTaken = 0x5,
        // MPropertyFriendlyName "Average Bounty Runes Taken"
        k_eAverageBountyRunesTaken = 0x6,
        // MPropertyFriendlyName "Total Enemy T1 Destroyed First"
        k_eTotalKillEnemyT1First = 0x7,
        // MPropertyFriendlyName "Total Roshan Kills"
        k_eTotalRoshanKills = 0x8,
        // MPropertyFriendlyName "Total Dewards"
        k_eTotalDewards = 0x9,
        // MPropertyFriendlyName "Total Camps Stacked"
        k_eTotalCampsStacked = 0xa,
        // MPropertyFriendlyName "Max Win Streak"
        k_eMaxWinstreak = 0xb,
        // MPropertyFriendlyName "Average Dewards"
        k_eAverageDewards = 0xc,
        // MPropertyFriendlyName "Average Kills"
        k_eAverageKills = 0xd,
        // MPropertyFriendlyName "Max Kills"
        k_eMaxKills = 0xe,
        // MPropertyFriendlyName "Average Assists"
        k_eAverageAssists = 0xf,
        // MPropertyFriendlyName "Max Assists"
        k_eMaxAssists = 0x10,
        // MPropertyFriendlyName "Average Deaths"
        k_eAverageDeaths = 0x11,
        // MPropertyFriendlyName "Min Deaths"
        k_eMinDeaths = 0x12,
        // MPropertyFriendlyName "Average Camps Stacked"
        k_eAverageCampsStacked = 0x13,
        // MPropertyFriendlyName "Total Last Hits"
        k_eTotalLastHits = 0x14,
        // MPropertyFriendlyName "Average Last Hits"
        k_eAverageLastHits = 0x15,
        // MPropertyFriendlyName "Total Denies"
        k_eTotalDenies = 0x16,
        // MPropertyFriendlyName "Average Denies"
        k_eAverageDenies = 0x17,
        // MPropertyFriendlyName "Total Games With Roshan Advantage (Player team killed Roshan more times)"
        k_eTotalGamesWithRoshanAdvantage = 0x18,
        // MPropertyFriendlyName "Pct Games With Roshan Advantage (Player team killed Roshan more times)"
        k_ePercentGamesWithRoshanAdvantage = 0x19,
        // MPropertyFriendlyName "Average Stun Duration"
        k_eAverageStunDuration = 0x1a,
        // MPropertyFriendlyName "Total Stun Duration"
        k_eTotalStunDuration = 0x1b,
        // MPropertyFriendlyName "Average Teleports Used"
        k_eAverageTeleportsUsed = 0x1c,
        // MPropertyFriendlyName "Total Teleports Used"
        k_eTotalTeleportsUsed = 0x1d,
        // MPropertyFriendlyName "Average Hero Damage"
        k_eAverageHeroDamage = 0x1e,
        // MPropertyFriendlyName "Total Hero Damage"
        k_eTotalHeroDamage = 0x1f,
        // MPropertyFriendlyName "Average Hero Healing"
        k_eAverageHeroHealing = 0x20,
        // MPropertyFriendlyName "Total Hero Healing"
        k_eTotalHeroHealing = 0x21,
        // MPropertyFriendlyName "Average Tower Damage"
        k_eAverageTowerDamage = 0x22,
        // MPropertyFriendlyName "Total Tower Damage"
        k_eTotalTowerDamage = 0x23,
        // MPropertyFriendlyName "Max Loss Streak"
        k_eMaxLossStreak = 0x24,
        // MPropertyFriendlyName "Average Game Duration"
        k_eAverageGameDuration = 0x25,
        // MPropertyFriendlyName "Max Game Duration"
        k_eMaxGameDuration = 0x26,
        // MPropertyFriendlyName "Min Game Duration"
        k_eMinGameDuration = 0x27,
        // MPropertyFriendlyName "Average Win Duration"
        k_eAverageWinDuration = 0x28,
        // MPropertyFriendlyName "Max Win Duration"
        k_eMaxWinDuration = 0x29,
        // MPropertyFriendlyName "Min Win Duration"
        k_eMinWinDuration = 0x2a,
        // MPropertyFriendlyName "Average Loss Duration"
        k_eAverageLossDuration = 0x2b,
        // MPropertyFriendlyName "Max Loss Duration"
        k_eMaxLossDuration = 0x2c,
        // MPropertyFriendlyName "Min Loss Duration"
        k_eMinLossDuration = 0x2d,
        // MPropertyFriendlyName "Pct Games With Enemy Lane T1 Taken First"
        k_ePctGamesEnemyT1TakenFirst = 0x2e,
        // MPropertyFriendlyName "Max Camps Stacked"
        k_eMaxCampsStacked = 0x2f,
        // MPropertyFriendlyName "Max Dewards"
        k_eMaxDewards = 0x30,
        // MPropertyFriendlyName "Max Roshan Kills"
        k_eMaxRoshanKills = 0x31,
        // MPropertyFriendlyName "Max Bounty Runes Taken"
        k_eMaxBountyRunesTaken = 0x32,
        // MPropertyFriendlyName "Max Power Runes Taken"
        k_eMaxPowerRunesTaken = 0x33,
        // MPropertyFriendlyName "Max Deaths"
        k_eMaxDeaths = 0x34,
        // MPropertyFriendlyName "Max Last Hits"
        k_eMaxLastHits = 0x35,
        // MPropertyFriendlyName "Max Denies"
        k_eMaxDenies = 0x36,
        // MPropertyFriendlyName "Radiant Winrate"
        k_eRadiantWinRate = 0x37,
        // MPropertyFriendlyName "Dire Winrate"
        k_eDireWinRate = 0x38,
        // MPropertyFriendlyName "Radiant Game Count"
        k_eRadiantGameCount = 0x39,
        // MPropertyFriendlyName "Dire Game Count"
        k_eDireGameCount = 0x3a,
        // MPropertyFriendlyName "Max Hero Damage"
        k_eMaxDamage = 0x3b,
        // MPropertyFriendlyName "Max Healing"
        k_eMaxHealing = 0x3c,
        // MPropertyFriendlyName "Max Tower Damage"
        k_eMaxTowerDamage = 0x3d,
        // MPropertyFriendlyName "Average GPM"
        k_eAverageGPM = 0x3e,
        // MPropertyFriendlyName "Max GPM"
        k_eMaxGPM = 0x3f,
        // MPropertyFriendlyName "Average XPM"
        k_eAverageXPM = 0x40,
        // MPropertyFriendlyName "Max XPM"
        k_eMaxXPM = 0x41,
    };
};
