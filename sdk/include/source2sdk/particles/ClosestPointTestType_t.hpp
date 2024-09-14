#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class ClosestPointTestType_t : std::uint32_t
    {
        // MPropertyFriendlyName "Box"
        PARTICLE_CLOSEST_TYPE_BOX = 0x0,
        // MPropertyFriendlyName "Capsule"
        PARTICLE_CLOSEST_TYPE_CAPSULE = 0x1,
        // MPropertyFriendlyName "Hybrid Box/Capsule"
        PARTICLE_CLOSEST_TYPE_HYBRID = 0x2,
    };
};
