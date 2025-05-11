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
        // Alignment: 4
        // Size: 0x4
        enum class EntityDistanceMode_t : std::uint32_t
        {
            eOriginToOrigin = 0x0,
            eCenterToCenter = 0x1,
            eAxisToAxis = 0x2,
        };
    };
};
