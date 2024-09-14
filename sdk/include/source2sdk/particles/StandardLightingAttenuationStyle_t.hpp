#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Enumerator count: 2
    // Alignment: 4
    // Size: 0x4
    enum class StandardLightingAttenuationStyle_t : std::uint32_t
    {
        // MPropertyFriendlyName "Quadratic/Linear Bias"
        LIGHT_STYLE_OLD = 0x0,
        // MPropertyFriendlyName "Fifty Percent/Zero Percent Distance"
        LIGHT_STYLE_NEW = 0x1,
    };
};
