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
        // Enumerator count: 5
        // Alignment: 1
        // Size: 0x1
        enum class EWaveform : std::uint8_t
        {
            Sine = 0x0,
            Square = 0x1,
            Saw = 0x2,
            Triangle = 0x3,
            Noise = 0x4,
        };
    };
};
