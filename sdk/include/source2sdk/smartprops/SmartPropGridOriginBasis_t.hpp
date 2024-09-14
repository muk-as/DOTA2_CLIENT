#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
    // Enumerator count: 2
    // Alignment: 4
    // Size: 0x4
    enum class SmartPropGridOriginBasis_t : std::uint32_t
    {
        // MPropertyFriendlyName "Center"
        // MPropertyDescription "Lay out child elements with their origin at the center of each grid cell."
        CENTER = 0x0,
        // MPropertyFriendlyName "Corner"
        // MPropertyDescription "Lay out child elements with their origin at the corner of each grid cell."
        CORNER = 0x1,
    };
};
