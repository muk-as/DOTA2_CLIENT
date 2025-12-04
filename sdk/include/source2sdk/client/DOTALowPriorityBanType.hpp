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
        // Enumerator count: 4
        // Alignment: 4
        // Size: 0x_
        enum class DOTALowPriorityBanType : std::uint32_t
        {
            DOTA_LOW_PRIORITY_BAN_ABANDON = 0x0,
            DOTA_LOW_PRIORITY_BAN_REPORTS = 0x1,
            DOTA_LOW_PRIORITY_BAN_SECONDARY_ABANDON = 0x2,
            DOTA_LOW_PRIORITY_BAN_PRE_GAME_ROLE = 0x3,
        };
    };
};
