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
        enum class ChoreoLookAtConditions_t : std::uint32_t
        {
            // MPropertyFriendlyName "While Moving"
            WHILE_MOVING = 0x1,
            // MPropertyFriendlyName "While Animating"
            WHILE_ANIMATING = 0x2,
            // MPropertyFriendlyName "During Outro"
            DURING_OUTRO = 0x4,
        };
    };
};
