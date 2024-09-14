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
    enum class ELeagueRegion : std::uint32_t
    {
        LEAGUE_REGION_UNSET = 0x0,
        LEAGUE_REGION_NA = 0x1,
        LEAGUE_REGION_SA = 0x2,
        LEAGUE_REGION_WEU = 0x3,
        LEAGUE_REGION_EEU = 0x4,
        LEAGUE_REGION_CHINA = 0x5,
        LEAGUE_REGION_SEA = 0x6,
    };
};
