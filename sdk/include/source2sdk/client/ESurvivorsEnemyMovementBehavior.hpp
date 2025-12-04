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
        enum class ESurvivorsEnemyMovementBehavior : std::uint32_t
        {
            ENEMY_MOVEMENT_BEHAVIOR_INVALID = 0xffffffff,
            ENEMY_MOVEMENT_BEHAVIOR_TRACKING = 0x0,
            ENEMY_MOVEMENT_BEHAVIOR_LINEAR = 0x1,
            ENEMY_MOVEMENT_BEHAVIOR_LINEAR_SIN_WAVE = 0x2,
            ENEMY_MOVEMENT_BEHAVIOR_STATIONARY = 0x3,
        };
    };
};
