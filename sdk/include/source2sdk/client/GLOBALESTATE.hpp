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
        // Enumerator count: 3
        // Alignment: 1
        // Size: 0x_
        enum class GLOBALESTATE : std::uint8_t
        {
            GLOBAL_OFF = 0x0,
            GLOBAL_ON = 0x1,
            GLOBAL_DEAD = 0x2,
        };
    };
};
