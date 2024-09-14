#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class ConfigurationHandleShape_t : std::uint32_t
    {
        // MPropertyFriendlyName "None"
        NONE = 0x0,
        // MPropertyFriendlyName "Square"
        SQUARE = 0x1,
        // MPropertyFriendlyName "Circle"
        CIRCLE = 0x2,
        // MPropertyFriendlyName "Diamond"
        DIAMOND = 0x3,
    };
};
