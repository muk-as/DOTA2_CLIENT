#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 6
    // Alignment: 4
    // Size: 0x4
    enum class EPlayerTrackedStatImpl : std::uint32_t
    {
        k_ePlayerTrackedStatImpl_Invalid = 0x0,
        k_ePlayerTrackedStatImpl_Direct = 0x1,
        k_ePlayerTrackedStatImpl_KillEater = 0x2,
        k_ePlayerTrackedStatImpl_CombatQuery = 0x3,
        k_ePlayerTrackedStatImpl_Expression = 0x4,
        k_ePlayerTrackedStatImpl_HeroAdjective = 0x5,
    };
};
