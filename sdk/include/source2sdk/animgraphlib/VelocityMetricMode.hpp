#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Enumerator count: 3
    // Alignment: 1
    // Size: 0x1
    enum class VelocityMetricMode : std::uint8_t
    {
        // MPropertyFriendlyName "Direction Only"
        DirectionOnly = 0,
        // MPropertyFriendlyName "Magnitude Only"
        MagnitudeOnly = 1,
        // MPropertyFriendlyName "Direction and Magnitude"
        DirectionAndMagnitude = 2,
    };
};
