#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Enumerator count: 3
        // Alignment: 4
        // Size: 0x4
        enum class SimpleConstraintSoundProfile_SimpleConstraintsSoundProfileKeypoints_t : std::uint32_t
        {
            kMIN_THRESHOLD = 0x0,
            kMIN_FULL = 0x1,
            kHIGHWATER = 0x2,
        };
    };
};
