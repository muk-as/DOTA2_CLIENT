#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particleslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particleslib
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class ParticleFloatInputMode_t : std::uint32_t
    {
        PF_INPUT_MODE_INVALID = 0xffffffff,
        PF_INPUT_MODE_CLAMPED = 0x0,
        PF_INPUT_MODE_LOOPED = 0x1,
        PF_INPUT_MODE_COUNT = 0x2,
    };
};
