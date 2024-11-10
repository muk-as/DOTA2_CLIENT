#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: toolscene
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::toolscene
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class LightRigType_t : std::uint32_t
    {
        PREVIEW = 0x0,
        THUMBNAIL = 0x1,
        MATERIAL_THUMBNAIL = 0x2,
        NUM_TYPES = 0x3,
    };
};
