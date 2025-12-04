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
        enum class ESurvivorsEnemySpawnPositionsLayer : std::uint32_t
        {
            INVALID = 0xffffffff,
            ENEMY_MAIN = 0x1,
            DESTRUCTIBLE_MAIN = 0x2,
            ENEMY_BOSS_ROOM = 0x3,
        };
    };
};
