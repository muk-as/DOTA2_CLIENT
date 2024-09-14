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
    enum class SmartPropGridPlacementMode_t : std::uint32_t
    {
        // MPropertyFriendlyName "Array"
        // MPropertyDescription "Generate the grid by placing N x N children."
        SEGMENT = 0x0,
        // MPropertyFriendlyName "Fill"
        // MPropertyDescription "Fill the area based on the largest bounds of child elements as specified in their selection criteria."
        FILL = 0x1,
    };
};
