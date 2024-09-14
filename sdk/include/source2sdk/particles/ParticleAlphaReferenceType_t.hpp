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
    enum class ParticleAlphaReferenceType_t : std::uint32_t
    {
        // MPropertyFriendlyName "Texel Alpha & Particle Alpha & Alpha Reference"
        PARTICLE_ALPHA_REFERENCE_ALPHA_ALPHA = 0x0,
        // MPropertyFriendlyName "Particle Alpha & Alpha Reference"
        PARTICLE_ALPHA_REFERENCE_OPAQUE_ALPHA = 0x1,
        // MPropertyFriendlyName "Texel Alpha & Alpha Reference"
        PARTICLE_ALPHA_REFERENCE_ALPHA_OPAQUE = 0x2,
        // MPropertyFriendlyName "Alpha Reference"
        PARTICLE_ALPHA_REFERENCE_OPAQUE_OPAQUE = 0x3,
    };
};
