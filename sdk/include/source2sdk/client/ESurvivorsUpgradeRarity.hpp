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
        enum class ESurvivorsUpgradeRarity : std::uint32_t
        {
            RARITY_INVALID = 0xffffffff,
            RARITY_COMMON = 0x0,
            RARITY_COUNT = 0x1,
        };
    };
};
