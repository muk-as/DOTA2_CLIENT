#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 22
    // Alignment: 4
    // Size: 0x4
    enum class EHeroStatType : std::uint32_t
    {
        k_EHeroStatType_None = 0x0,
        k_EHeroStatType_AxeTotalDamage = 0x7d0,
        k_EHeroStatType_BattleHungerDamage = 0x7d1,
        k_EHeroStatType_CounterHelixDamage = 0x7d2,
        k_EHeroStatType_CullingBladeDamage = 0x7d3,
        k_EHeroStatType_BerserkersCallCastCount = 0x7d4,
        k_EHeroStatType_BerserkersCallHeroesHitAverage = 0x7d5,
        k_EHeroStatType_BerserkersCallOtherUnitsHit = 0x7d6,
        k_EHeroStatType_BerserkersCallHeroAttacksTaken = 0x7d7,
        k_EHeroStatType_BerserkersCallOtherAttacksTaken = 0x7d8,
        k_EHeroStatType_BattleHungerCastCount = 0x7d9,
        k_EHeroStatType_BattleHungerPotentialDuration = 0x7da,
        k_EHeroStatType_BattleHungerAverageDuration = 0x7db,
        k_EHeroStatType_CounterHelixProcCount = 0x7dc,
        k_EHeroStatType_CounterHelixHeroProcCount = 0x7dd,
        k_EHeroStatType_CounterHelixHeroesHitAverage = 0x7de,
        k_EHeroStatType_CounterHelixOtherUnitsHitCount = 0x7df,
        k_EHeroStatType_CullingBladeCastCount = 0x7e0,
        k_EHeroStatType_CullingBladeKillCount = 0x7e1,
        k_EHeroStatType_CullingBladeAverageHealthCulled = 0x7e2,
        k_EHeroStatType_CullingBladeAverageDamageAvailable = 0x7e3,
        k_EHeroStatType_CullingBladeHeroBuffAverage = 0x7e4,
    };
};
