#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Enumerator count: 4
        // Alignment: 4
        // Size: 0x_
        enum class BloodType : std::uint32_t
        {
            None = 0xffffffff,
            ColorRed = 0x0,
            ColorYellow = 0x1,
            ColorGreen = 0x2,
        };
    };
};
