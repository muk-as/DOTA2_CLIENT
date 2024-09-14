#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class ApplyColorMode_t : std::uint32_t
    {
        // MPropertyFriendlyName "Mulitply object tint"
        // MPropertyDescription "Multiply with the object level color tint and replace the current color value."
        MULTIPLY_OBJECT = 0x0,
        // MPropertyFriendlyName "Multiply current tint"
        // MPropertyDescription "Multiply with the current color tint value."
        MULTIPLY_CURRENT = 0x1,
        // MPropertyFriendlyName "Replace tint"
        // MPropertyDescription "Replace the current color tint value completely, overwriting any object level tint."
        REPLACE = 0x2,
    };
};
