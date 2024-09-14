#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Enumerator count: 5
    // Alignment: 4
    // Size: 0x4
    enum class ParticleTopology_t : std::uint32_t
    {
        // MPropertyFriendlyName "Points"
        PARTICLE_TOPOLOGY_POINTS = 0x0,
        // MPropertyFriendlyName "Line segments"
        PARTICLE_TOPOLOGY_LINES = 0x1,
        // MPropertyFriendlyName "Triangles"
        PARTICLE_TOPOLOGY_TRIS = 0x2,
        // MPropertyFriendlyName "Quadrilaterals"
        PARTICLE_TOPOLOGY_QUADS = 0x3,
        // MPropertyFriendlyName "Cubes"
        PARTICLE_TOPOLOGY_CUBES = 0x4,
    };
};
