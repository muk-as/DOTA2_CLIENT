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
    enum class ParticleTraceMissBehavior_t : std::uint32_t
    {
        // MPropertyFriendlyName "Do Nothing"
        PARTICLE_TRACE_MISS_BEHAVIOR_NONE = 0x0,
        // MPropertyFriendlyName "Kill Particle"
        PARTICLE_TRACE_MISS_BEHAVIOR_KILL = 0x1,
        // MPropertyFriendlyName "Place Particle at Trace End"
        PARTICLE_TRACE_MISS_BEHAVIOR_TRACE_END = 0x2,
    };
};
