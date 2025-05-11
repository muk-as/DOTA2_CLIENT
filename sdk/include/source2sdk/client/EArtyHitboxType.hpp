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
        // Alignment: 1
        // Size: 0x1
        enum class EArtyHitboxType : std::uint8_t
        {
            k_eAABB = 0x0,
            k_eCircle = 0x1,
            k_eLine = 0x2,
            k_eRay = 0x3,
        };
    };
};
