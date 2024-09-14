#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class MorphFlexControllerRemapType_t : std::uint32_t
    {
        MORPH_FLEXCONTROLLER_REMAP_PASSTHRU = 0x0,
        MORPH_FLEXCONTROLLER_REMAP_2WAY = 0x1,
        MORPH_FLEXCONTROLLER_REMAP_NWAY = 0x2,
        MORPH_FLEXCONTROLLER_REMAP_EYELID = 0x3,
    };
};
