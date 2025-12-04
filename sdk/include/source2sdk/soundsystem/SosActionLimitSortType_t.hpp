#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem
    {
        // Enumerator count: 2
        // Alignment: 4
        // Size: 0x_
        enum class SosActionLimitSortType_t : std::uint32_t
        {
            // MPropertyFriendlyName "Stop Highest"
            SOS_LIMIT_SORTTYPE_HIGHEST = 0x0,
            // MPropertyFriendlyName "Stop Lowest"
            SOS_LIMIT_SORTTYPE_LOWEST = 0x1,
        };
    };
};
