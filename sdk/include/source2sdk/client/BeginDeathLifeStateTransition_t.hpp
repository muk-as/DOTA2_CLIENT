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
        // Enumerator count: 2
        // Alignment: 1
        // Size: 0x_
        enum class BeginDeathLifeStateTransition_t : std::uint8_t
        {
            TRANSITION_TO_LIFESTATE_DYING = 0x0,
            TRANSITION_TO_LIFESTATE_DEAD = 0x1,
        };
    };
};
