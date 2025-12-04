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
        // Enumerator count: 3
        // Alignment: 4
        // Size: 0x_
        enum class ELeagueTierCategory : std::uint32_t
        {
            LEAGUE_TIER_CATEGORY_AMATEUR = 0x1,
            LEAGUE_TIER_CATEGORY_PROFESSIONAL = 0x2,
            LEAGUE_TIER_CATEGORY_DPC = 0x3,
        };
    };
};
