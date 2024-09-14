#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class ParticleTraceSet_t : std::uint32_t
    {
        // MPropertyFriendlyName "Everything"
        PARTICLE_TRACE_SET_ALL = 0x0,
        // MPropertyFriendlyName "Static World Only"
        PARTICLE_TRACE_SET_STATIC = 0x1,
        // MPropertyFriendlyName "Static World and Kinematic/Keyframed Only"
        PARTICLE_TRACE_SET_STATIC_AND_KEYFRAMED = 0x2,
        // MPropertyFriendlyName "Dynamic Entities Only"
        PARTICLE_TRACE_SET_DYNAMIC = 0x3,
    };
};
