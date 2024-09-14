#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 11
    // Alignment: 4
    // Size: 0x4
    enum class ERankType : std::uint32_t
    {
        k_ERankType_Invalid = 0x0,
        k_ERankType_Casual = 0x1,
        k_ERankType_Ranked = 0x2,
        k_ERankType_CasualLegacy = 0x3,
        k_ERankType_RankedLegacy = 0x4,
        k_ERankType_CasualGlicko = 0x5,
        k_ERankType_RankedGlicko = 0x6,
        k_ERankType_RankMax = 0x7,
        k_ERankType_BehaviorPrivate = 0x64,
        k_ERankType_BehaviorPublic = 0x65,
        k_ERankType_Max = 0x66,
    };
};
