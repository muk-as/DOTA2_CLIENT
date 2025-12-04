#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_system
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace pulse_system
    {
        // Enumerator count: 3
        // Alignment: 4
        // Size: 0x_
        enum class PulseTestEnumShape_t : std::uint32_t
        {
            // MPropertyFriendlyName "Circle"
            CIRCLE = 0x64,
            // MPropertyFriendlyName "Square"
            SQUARE = 0xc8,
            // MPropertyFriendlyName "Triangle"
            TRIANGLE = 0x12c,
        };
    };
};
