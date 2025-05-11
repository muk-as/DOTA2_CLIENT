#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Enumerator count: 2
        // Alignment: 1
        // Size: 0x1
        enum class CNmRootMotionData_SamplingMode_t : std::uint8_t
        {
            Delta = 0x0,
            WorldSpace = 0x1,
        };
    };
};
