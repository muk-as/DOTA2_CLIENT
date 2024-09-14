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
    enum class ParticleFogType_t : std::uint32_t
    {
        // MPropertyFriendlyName "Use Game Default"
        PARTICLE_FOG_GAME_DEFAULT = 0x0,
        // MPropertyFriendlyName "Enabled"
        PARTICLE_FOG_ENABLED = 0x1,
        // MPropertyFriendlyName "Disabled"
        PARTICLE_FOG_DISABLED = 0x2,
    };
};
