#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class ETeamFanContentStatus : std::uint32_t
    {
        TEAM_FAN_CONTENT_STATUS_INVALID = 0x0,
        TEAM_FAN_CONTENT_STATUS_PENDING = 0x1,
        TEAM_FAN_CONTENT_STATUS_EVALUATED = 0x2,
    };
};
