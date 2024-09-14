#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particleslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particleslib
{
    // Enumerator count: 9
    // Alignment: 4
    // Size: 0x4
    enum class ParticleFloatMapType_t : std::uint32_t
    {
        PF_MAP_TYPE_INVALID = 0xffffffff,
        PF_MAP_TYPE_DIRECT = 0x0,
        PF_MAP_TYPE_MULT = 0x1,
        PF_MAP_TYPE_REMAP = 0x2,
        PF_MAP_TYPE_REMAP_BIASED = 0x3,
        PF_MAP_TYPE_CURVE = 0x4,
        PF_MAP_TYPE_NOTCHED = 0x5,
        PF_MAP_TYPE_ROUND = 0x6,
        PF_MAP_TYPE_COUNT = 0x7,
    };
};
