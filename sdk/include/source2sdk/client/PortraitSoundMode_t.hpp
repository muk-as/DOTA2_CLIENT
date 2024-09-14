#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class PortraitSoundMode_t : std::uint32_t
    {
        PORTRAIT_SOUND_MODE_INVALID = 0xffffffff,
        PORTRAIT_SOUND_MODE_NO_SOUNDS = 0x0,
        PORTRAIT_SOUND_MODE_ONLY_TAUNT_SOUNDS = 0x1,
        PORTRAIT_SOUND_MODE_ALL_SOUNDS = 0x2,
    };
};
