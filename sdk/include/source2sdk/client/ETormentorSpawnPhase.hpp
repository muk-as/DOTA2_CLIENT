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
        // Enumerator count: 3
        // Alignment: 4
        // Size: 0x4
        enum class ETormentorSpawnPhase : std::uint32_t
        {
            TORMENTOR_SPAWN_PHASE_HAS_NOT_SPAWNED = 0x0,
            TORMENTOR_SPAWN_PHASE_ALIVE = 0x1,
            TORMENTOR_SPAWN_PHASE_RESPAWNING = 0x2,
        };
    };
};
