#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 6
    // Alignment: 4
    // Size: 0x4
    enum class LatchDirtyPermission_t : std::uint32_t
    {
        LATCH_DIRTY_DISALLOW = 0x0,
        LATCH_DIRTY_SERVER_CONTROLLED = 0x1,
        LATCH_DIRTY_CLIENT_SIMULATED = 0x2,
        LATCH_DIRTY_PREDICTION = 0x3,
        LATCH_DIRTY_FRAMESIMULATE = 0x4,
        LATCH_DIRTY_PARTICLE_SIMULATE = 0x5,
    };
};
