#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_voicecontainers
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_voicecontainers
{
    // Enumerator count: 4
    // Alignment: 1
    // Size: 0x1
    enum class CVSoundFormat_t : std::uint8_t
    {
        PCM16 = 0,
        PCM8 = 1,
        MP3 = 2,
        ADPCM = 3,
    };
};
