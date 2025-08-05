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
        // Size: 0x1
        enum class RenderMeshSlotType_t : std::uint8_t
        {
            RENDERMESH_SLOT_INVALID = 0xff,
            RENDERMESH_SLOT_PER_VERTEX = 0x0,
            RENDERMESH_SLOT_PER_INSTANCE = 0x1,
        };
    };
};
