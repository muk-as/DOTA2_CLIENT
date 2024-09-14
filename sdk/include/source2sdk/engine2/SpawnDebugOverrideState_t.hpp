#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: engine2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::engine2
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class SpawnDebugOverrideState_t : std::uint32_t
    {
        SPAWN_DEBUG_OVERRIDE_NONE = 0x0,
        SPAWN_DEBUG_OVERRIDE_FORCE_ENABLED = 0x1,
        SPAWN_DEBUG_OVERRIDE_FORCE_DISABLED = 0x2,
    };
};
