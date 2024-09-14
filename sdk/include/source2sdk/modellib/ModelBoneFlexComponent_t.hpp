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
    enum class ModelBoneFlexComponent_t : std::uint32_t
    {
        MODEL_BONE_FLEX_INVALID = 0xffffffff,
        MODEL_BONE_FLEX_TX = 0x0,
        MODEL_BONE_FLEX_TY = 0x1,
        MODEL_BONE_FLEX_TZ = 0x2,
    };
};
