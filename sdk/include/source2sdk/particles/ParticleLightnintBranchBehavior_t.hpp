#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Enumerator count: 2
    // Alignment: 4
    // Size: 0x4
    enum class ParticleLightnintBranchBehavior_t : std::uint32_t
    {
        // MPropertyFriendlyName "Branch Towards Current Direction"
        PARTICLE_LIGHTNING_BRANCH_CURRENT_DIR = 0x0,
        // MPropertyFriendlyName "Branch Towards Endpoint"
        PARTICLE_LIGHTNING_BRANCH_ENDPOINT_DIR = 0x1,
    };
};
