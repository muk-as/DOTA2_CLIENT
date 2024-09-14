#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 5
    // Alignment: 4
    // Size: 0x4
    enum class AnimLoopMode_t : std::uint32_t
    {
        // MPropertySuppressEnumerator
        ANIM_LOOP_MODE_INVALID = 0xffffffff,
        ANIM_LOOP_MODE_NOT_LOOPING = 0x0,
        ANIM_LOOP_MODE_LOOPING = 0x1,
        ANIM_LOOP_MODE_USE_SEQUENCE_SETTINGS = 0x2,
        // MPropertySuppressEnumerator
        ANIM_LOOP_MODE_COUNT = 0x3,
    };
};
