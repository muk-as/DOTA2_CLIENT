#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace smartprops
    {
        // Enumerator count: 6
        // Alignment: 4
        // Size: 0x_
        enum class SmartPropDetailFadeLevel_t : std::uint32_t
        {
            // MPropertyFriendlyName "None"
            // MPropertyDescription "No fade out. The object will not fade out, but will still be culled when below the minimum size and will pop at that that point."
            NONE = 0x0,
            // MPropertyFriendlyName "Most Aggressive"
            // MPropertyDescription "Most aggressive fade out. The object will fade out while still quite large on screen."
            MOST_AGGRESSIVE = 0x1,
            // MPropertyFriendlyName "More Aggressive"
            // MPropertyDescription "More aggressive fade out. The object will fade out while larger on screen than normal."
            MORE_AGGRESSIVE = 0x2,
            // MPropertyFriendlyName "Normal"
            // MPropertyDescription "Normal fade out. The object will fade at when at the standard size on screen."
            NORMAL = 0x3,
            // MPropertyFriendlyName "Less Aggressive"
            // MPropertyDescription "Less aggressive fade out. The object will not fade out until it is smaller on screen than normal."
            LESS_AGGRESSIVE = 0x4,
            // MPropertyFriendlyName "Least Aggressive"
            // MPropertyDescription "Least aggressive fade out. The object will be quite small before fading out. Fade out will only complete at the size cull limit."
            LEAST_AGGRESSIVE = 0x5,
        };
    };
};
