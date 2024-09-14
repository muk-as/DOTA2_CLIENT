#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 7
    // Alignment: 4
    // Size: 0x4
    enum class ObserverMode_t : std::uint32_t
    {
        OBS_MODE_NONE = 0x0,
        OBS_MODE_FIXED = 0x1,
        OBS_MODE_IN_EYE = 0x2,
        OBS_MODE_CHASE = 0x3,
        OBS_MODE_ROAMING = 0x4,
        OBS_MODE_DIRECTED = 0x5,
        NUM_OBSERVER_MODES = 0x6,
    };
};
