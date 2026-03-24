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
        // Size: 0x_
        enum class InteractionPassive_t : std::uint32_t
        {
            INTERACT_PASSIVE_NONE = 0x0,
            INTERACT_PASSIVE_LOOKAT = 0x1,
            INTERACT_PASSIVE_SPEAK = 0x2,
        };
    };
};
