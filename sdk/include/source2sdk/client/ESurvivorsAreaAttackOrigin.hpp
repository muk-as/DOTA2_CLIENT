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
    enum class ESurvivorsAreaAttackOrigin : std::uint32_t
    {
        INVALID_ORIGIN = 0xffffffff,
        PLAYER_ORIGIN = 0x0,
        RANDOM_ENEMY_ORIGIN = 0x1,
    };
};