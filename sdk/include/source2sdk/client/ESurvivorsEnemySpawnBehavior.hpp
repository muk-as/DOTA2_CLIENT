#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 8
    // Alignment: 4
    // Size: 0x4
    enum class ESurvivorsEnemySpawnBehavior : std::uint32_t
    {
        INVALID_SPAWN_BEHAVIOR = 0xffffffff,
        FIXED_DIRECTION = 0x0,
        FIXED_DIRECTION_PERPENDICULAR_WALL = 0x1,
        OVAL_AROUND_PLAYER = 0x2,
        STATIC_IN_MAP = 0x3,
        STATIC_IN_MAP_IGNORE_PLAYER_RADIUS = 0x4,
        RANDOM_DIRECTION = 0x5,
        SPAWNER_ORIGIN_RADIUS = 0x6,
    };
};
