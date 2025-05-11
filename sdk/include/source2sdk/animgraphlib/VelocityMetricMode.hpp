#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Enumerator count: 3
        // Alignment: 1
        // Size: 0x1
        enum class VelocityMetricMode : std::uint8_t
        {
            // MPropertyFriendlyName "Direction Only"
            DirectionOnly = 0x0,
            // MPropertyFriendlyName "Magnitude Only"
            MagnitudeOnly = 0x1,
            // MPropertyFriendlyName "Direction and Magnitude"
            DirectionAndMagnitude = 0x2,
        };
    };
};
