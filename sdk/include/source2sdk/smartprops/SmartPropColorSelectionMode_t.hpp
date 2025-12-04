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
        // Enumerator count: 4
        // Alignment: 4
        // Size: 0x_
        enum class SmartPropColorSelectionMode_t : std::uint32_t
        {
            // MPropertyFriendlyName "Specific Color"
            // MPropertyDescription "Specify a specific color value (may be linked to a variable"
            SPECIFIC_COLOR = 0x0,
            // MPropertyFriendlyName "Gradient Random"
            // MPropertyDescription "Pick a random color from anywhere on the authored color gradient"
            GRADIENT_RANDOM = 0x1,
            // MPropertyFriendlyName "Gradient Random Stop"
            // MPropertyDescription "Randomly select one of the color stops specified on the gradient. Never picks a value between stops."
            GRADIENT_RANDOM_STOP = 0x2,
            // MPropertyFriendlyName "Gradient Specific Value"
            // MPropertyDescription "Use a color value from a specified location on the gradient"
            GRADIENT_LOCATION = 0x3,
        };
    };
};
