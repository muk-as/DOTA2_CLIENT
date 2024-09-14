#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 5
    // Alignment: 4
    // Size: 0x4
    enum class LifeState_t : std::uint32_t
    {
        LIFE_ALIVE = 0x0,
        LIFE_DYING = 0x1,
        LIFE_DEAD = 0x2,
        LIFE_RESPAWNABLE = 0x3,
        LIFE_RESPAWNING = 0x4,
    };
};
