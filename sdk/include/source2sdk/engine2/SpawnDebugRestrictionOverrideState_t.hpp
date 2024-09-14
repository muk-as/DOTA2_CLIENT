#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: engine2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::engine2
{
    // Enumerator count: 5
    // Alignment: 4
    // Size: 0x4
    enum class SpawnDebugRestrictionOverrideState_t : std::uint32_t
    {
        SPAWN_DEBUG_RESTRICT_NONE = 0x0,
        SPAWN_DEBUG_RESTRICT_IGNORE_MANAGER_DISTANCE_REQS = 0x1,
        SPAWN_DEBUG_RESTRICT_IGNORE_TEMPLATE_DISTANCE_LOS_REQS = 0x2,
        SPAWN_DEBUG_RESTRICT_IGNORE_TEMPLATE_COOLDOWN_LIMITS = 0x4,
        SPAWN_DEBUG_RESTRICT_IGNORE_TARGET_COOLDOWN_LIMITS = 0x8,
    };
};
