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
        // Enumerator count: 5
        // Alignment: 4
        // Size: 0x4
        enum class C_BaseCombatCharacter_WaterWakeMode_t : std::uint32_t
        {
            WATER_WAKE_NONE = 0x0,
            WATER_WAKE_IDLE = 0x1,
            WATER_WAKE_WALKING = 0x2,
            WATER_WAKE_RUNNING = 0x3,
            WATER_WAKE_WATER_OVERHEAD = 0x4,
        };
    };
};
