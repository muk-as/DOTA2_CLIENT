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
    enum class SmartPropDistributionMode_t : std::uint32_t
    {
        // MPropertyFriendlyName "Random"
        // MPropertyDescription "Distribute the child elements randomly within the specified area or volume"
        RANDOM = 0x0,
        // MPropertyFriendlyName "Regular"
        // MPropertyDescription "Distribute the child element evenly within the specified area of volume"
        REGULAR = 0x1,
    };
};
