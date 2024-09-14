#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 10
    // Alignment: 2
    // Size: 0x2
    enum class SoundFlags_t : std::uint16_t
    {
        // MPropertySuppressEnumerator
        // MEnumeratorIsNotAFlag
        SOUND_FLAGS_NONE = 0x0,
        SOUND_FLAG_GUNFIRE = 0x1,
        SOUND_FLAG_COMBINE_ONLY = 0x2,
        SOUND_FLAG_REACT_TO_SOURCE = 0x4,
        SOUND_FLAG_EXPLOSION = 0x8,
        SOUND_FLAG_EXCLUDE_COMBINE = 0x10,
        SOUND_FLAG_DANGER_APPROACH = 0x20,
        SOUND_FLAG_ALLIES_ONLY = 0x40,
        SOUND_FLAG_PANIC_NPCS = 0x80,
        SOUND_FLAG_SQUAD_ONLY = 0x100,
    };
};
