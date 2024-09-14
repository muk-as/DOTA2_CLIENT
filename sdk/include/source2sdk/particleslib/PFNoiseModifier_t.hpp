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
    enum class PFNoiseModifier_t : std::uint32_t
    {
        PF_NOISE_MODIFIER_NONE = 0x0,
        PF_NOISE_MODIFIER_LINES = 0x1,
        PF_NOISE_MODIFIER_CLUMPS = 0x2,
        PF_NOISE_MODIFIER_RINGS = 0x3,
    };
};
