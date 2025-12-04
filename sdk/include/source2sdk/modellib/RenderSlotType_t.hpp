#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Enumerator count: 3
        // Alignment: 1
        // Size: 0x_
        enum class RenderSlotType_t : std::uint8_t
        {
            RENDER_SLOT_INVALID = 0xff,
            RENDER_SLOT_PER_VERTEX = 0x0,
            RENDER_SLOT_PER_INSTANCE = 0x1,
        };
    };
};
