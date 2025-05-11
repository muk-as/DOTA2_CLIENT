#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_voicecontainers
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem_voicecontainers
    {
        // Enumerator count: 4
        // Alignment: 1
        // Size: 0x1
        enum class CVSoundFormat_t : std::uint8_t
        {
            PCM16 = 0x0,
            PCM8 = 0x1,
            MP3 = 0x2,
            ADPCM = 0x3,
        };
    };
};
