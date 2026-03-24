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
        // Enumerator count: 5
        // Alignment: 4
        // Size: 0x_
        enum class InteractionPriority_t : std::uint32_t
        {
            INTERACT_PRIORITY_NONE = 0x0,
            INTERACT_PRIORITY_PASSIVE = 0x1,
            INTERACT_PRIORITY_LOW = 0x2,
            INTERACT_PRIORITY_MED = 0x3,
            INTERACT_PRIORITY_HIGH = 0x4,
        };
    };
};
