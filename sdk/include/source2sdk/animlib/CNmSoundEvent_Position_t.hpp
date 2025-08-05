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
        // Enumerator count: 5
        // Alignment: 4
        // Size: 0x4
        enum class CNmSoundEvent_Position_t : std::uint32_t
        {
            None = 0x0,
            World = 0x1,
            EntityPos = 0x2,
            EntityEyePos = 0x3,
            EntityAttachment = 0x4,
        };
    };
};
