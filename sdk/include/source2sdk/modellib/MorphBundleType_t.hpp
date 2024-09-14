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
    enum class MorphBundleType_t : std::uint32_t
    {
        MORPH_BUNDLE_TYPE_NONE = 0x0,
        MORPH_BUNDLE_TYPE_POSITION_SPEED = 0x1,
        MORPH_BUNDLE_TYPE_NORMAL_WRINKLE = 0x2,
        MORPH_BUNDLE_TYPE_COUNT = 0x3,
    };
};
