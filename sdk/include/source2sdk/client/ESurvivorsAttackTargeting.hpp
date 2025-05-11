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
        // Enumerator count: 6
        // Alignment: 4
        // Size: 0x4
        enum class ESurvivorsAttackTargeting : std::uint32_t
        {
            INVALID_TARGET = 0xffffffff,
            CLOSEST_TARGET = 0x0,
            RANDOM_TARGET_IN_RANGE = 0x1,
            STRONGEST_TARGET_IN_RANGE = 0x2,
            RANDOM_TARGET_AT_RANGE = 0x3,
            PLAYER_FACING = 0x4,
        };
    };
};
