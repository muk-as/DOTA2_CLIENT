#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particleslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particleslib
{
    // Enumerator count: 6
    // Alignment: 4
    // Size: 0x4
    enum class PFNoiseTurbulence_t : std::uint32_t
    {
        PF_NOISE_TURB_NONE = 0x0,
        PF_NOISE_TURB_HIGHLIGHT = 0x1,
        PF_NOISE_TURB_FEEDBACK = 0x2,
        PF_NOISE_TURB_LOOPY = 0x3,
        PF_NOISE_TURB_CONTRAST = 0x4,
        PF_NOISE_TURB_ALTERNATE = 0x5,
    };
};
