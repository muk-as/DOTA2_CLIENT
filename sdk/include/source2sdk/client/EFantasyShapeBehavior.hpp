#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 7
    // Alignment: 4
    // Size: 0x4
    enum class EFantasyShapeBehavior : std::uint32_t
    {
        // MPropertySuppressEnumerator
        k_eFantasyShapeBehavior_Invalid = 0x0,
        k_eFantasyShapeBehavior_MinQuality = 0x1,
        k_eFantasyShapeBehavior_AdjBonus = 0x2,
        k_eFantasyShapeBehavior_StealBonus = 0x3,
        k_eFantasyShapeBehavior_OnlyOne = 0x4,
        k_eFantasyShapeBehavior_NeedMultiples = 0x5,
        // MPropertySuppressEnumerator
        k_eFantasyShapeBehavior_COUNT = 0x6,
    };
};
