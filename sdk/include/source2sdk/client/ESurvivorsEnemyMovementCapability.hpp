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
    enum class ESurvivorsEnemyMovementCapability : std::uint32_t
    {
        ENEMY_MOVEMENT_CAPABILITY_INVALID = 0xffffffff,
        ENEMY_MOVEMENT_CAPABILITY_GROUND = 0x0,
        ENEMY_MOVEMENT_CAPABILITY_FLYING = 0x1,
    };
};
