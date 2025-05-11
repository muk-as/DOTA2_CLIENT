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
        // Size: 0x4
        enum class ESurvivorsEnemySeparationLayer : std::uint32_t
        {
            OFF = 0xffffffff,
            SMALL = 0x1,
            LARGE = 0x2,
            ELITE = 0x3,
        };
    };
};
