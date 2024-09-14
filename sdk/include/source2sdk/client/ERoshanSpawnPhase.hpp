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
    enum class ERoshanSpawnPhase : std::uint32_t
    {
        ROSHAN_SPAWN_PHASE_ALIVE = 0x0,
        ROSHAN_SPAWN_PHASE_BASE_TIMER = 0x1,
        ROSHAN_SPAWN_PHASE_VISIBLE_TIMER = 0x2,
    };
};
