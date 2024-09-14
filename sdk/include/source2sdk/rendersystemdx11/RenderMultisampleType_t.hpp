#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: rendersystemdx11
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::rendersystemdx11
{
    // Enumerator count: 8
    // Alignment: 1
    // Size: 0x1
    enum class RenderMultisampleType_t : std::uint8_t
    {
        RENDER_MULTISAMPLE_INVALID = 255,
        RENDER_MULTISAMPLE_NONE = 0,
        RENDER_MULTISAMPLE_2X = 1,
        RENDER_MULTISAMPLE_4X = 2,
        RENDER_MULTISAMPLE_6X = 3,
        RENDER_MULTISAMPLE_8X = 4,
        RENDER_MULTISAMPLE_16X = 5,
        RENDER_MULTISAMPLE_TYPE_COUNT = 6,
    };
};
