#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Enumerator count: 8
        // Alignment: 4
        // Size: 0x_
        enum class MovementCapability_t : std::uint32_t
        {
            // MPropertyFriendlyName "Strafe"
            eStrafe = 0x0,
            // MPropertyFriendlyName "Turn"
            eIdleTurn = 0x1,
            // MPropertyFriendlyName "Start"
            eStart = 0x2,
            // MPropertyFriendlyName "Stop"
            eStop = 0x3,
            // MPropertyFriendlyName "Instant Stop"
            eInstantStop = 0x4,
            // MPropertyFriendlyName "Shuffle"
            eShuffle = 0x5,
            // MPropertyFriendlyName "Planted Turn"
            ePlantedTurn = 0x6,
            eCount = 0x7,
        };
    };
};
