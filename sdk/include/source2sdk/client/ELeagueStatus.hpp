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
    enum class ELeagueStatus : std::uint32_t
    {
        LEAGUE_STATUS_UNSET = 0x0,
        LEAGUE_STATUS_UNSUBMITTED = 0x1,
        LEAGUE_STATUS_SUBMITTED = 0x2,
        LEAGUE_STATUS_ACCEPTED = 0x3,
        LEAGUE_STATUS_REJECTED = 0x4,
        LEAGUE_STATUS_CONCLUDED = 0x5,
        LEAGUE_STATUS_DELETED = 0x6,
    };
};
