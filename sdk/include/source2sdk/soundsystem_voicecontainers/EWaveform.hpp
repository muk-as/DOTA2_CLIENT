#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_voicecontainers
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_voicecontainers
{
    // Enumerator count: 5
    // Alignment: 1
    // Size: 0x1
    enum class EWaveform : std::uint8_t
    {
        Sine = 0,
        Square = 1,
        Saw = 2,
        Triangle = 3,
        Noise = 4,
    };
};
