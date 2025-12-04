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
        // Enumerator count: 6
        // Alignment: 4
        // Size: 0x_
        enum class EFlappySkywrathInputAction : std::uint32_t
        {
            Jump = 0x0,
            Dash = 0x1,
            Dive = 0x2,
            Glide = 0x3,
            COUNT = 0x4,
            None = 0xffffffff,
        };
    };
};
