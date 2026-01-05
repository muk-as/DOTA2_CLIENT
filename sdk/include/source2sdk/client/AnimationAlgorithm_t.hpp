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
        // Alignment: 1
        // Size: 0x_
        enum class AnimationAlgorithm_t : std::uint8_t
        {
            eInvalid = 0xff,
            eNone = 0x0,
            eSequence = 0x1,
            eAnimGraph2 = 0x2,
            eAnimGraph1 = 0x3,
        };
    };
};
