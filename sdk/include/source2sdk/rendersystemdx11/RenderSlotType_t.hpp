#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: rendersystemdx11
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::rendersystemdx11
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class RenderSlotType_t : std::uint32_t
    {
        RENDER_SLOT_INVALID = 0xffffffff,
        RENDER_SLOT_PER_VERTEX = 0x0,
        RENDER_SLOT_PER_INSTANCE = 0x1,
    };
};
