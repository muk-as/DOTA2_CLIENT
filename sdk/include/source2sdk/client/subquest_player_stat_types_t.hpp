#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Enumerator count: 5
        // Alignment: 4
        // Size: 0x_
        enum class subquest_player_stat_types_t : std::uint32_t
        {
            SUBQUEST_PLAYER_STAT_GOLD = 0x0,
            SUBQUEST_PLAYER_STAT_LEVEL = 0x1,
            SUBQUEST_PLAYER_STAT_LAST_HITS = 0x2,
            SUBQUEST_PLAYER_STAT_DENIES = 0x3,
            SUBQUEST_NUM_PLAYER_STATS = 0x4,
        };
    };
};
