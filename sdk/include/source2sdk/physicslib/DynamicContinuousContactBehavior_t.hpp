#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace physicslib
    {
        // Enumerator count: 3
        // Alignment: 1
        // Size: 0x_
        enum class DynamicContinuousContactBehavior_t : std::uint8_t
        {
            DYNAMIC_CONTINUOUS_ALLOW_IF_REQUESTED_BY_OTHER_BODY = 0x0,
            DYNAMIC_CONTINUOUS_ALWAYS = 0x1,
            DYNAMIC_CONTINUOUS_NEVER = 0x2,
        };
    };
};
