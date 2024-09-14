#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 10
    // Alignment: 4
    // Size: 0x4
    enum class ELeagueTier : std::uint32_t
    {
        LEAGUE_TIER_UNSET = 0x0,
        LEAGUE_TIER_AMATEUR = 0x1,
        LEAGUE_TIER_PROFESSIONAL = 0x2,
        LEAGUE_TIER_MINOR = 0x3,
        LEAGUE_TIER_MAJOR = 0x4,
        LEAGUE_TIER_INTERNATIONAL = 0x5,
        LEAGUE_TIER_DPC_QUALIFIER = 0x6,
        LEAGUE_TIER_DPC_LEAGUE_QUALIFIER = 0x7,
        LEAGUE_TIER_DPC_LEAGUE = 0x8,
        LEAGUE_TIER_DPC_LEAGUE_FINALS = 0x9,
    };
};
