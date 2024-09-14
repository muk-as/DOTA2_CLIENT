#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class ELeaguePhase : std::uint32_t
    {
        LEAGUE_PHASE_UNSET = 0x0,
        LEAGUE_PHASE_REGIONAL_QUALIFIER = 0x1,
        LEAGUE_PHASE_GROUP_STAGE = 0x2,
        LEAGUE_PHASE_MAIN_EVENT = 0x3,
    };
};
