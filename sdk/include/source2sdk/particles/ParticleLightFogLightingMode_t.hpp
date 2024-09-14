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
    enum class ParticleLightFogLightingMode_t : std::uint32_t
    {
        // MPropertyFriendlyName "None"
        PARTICLE_LIGHT_FOG_LIGHTING_MODE_NONE = 0x0,
        // MPropertyFriendlyName "Dynamic Fog with Shadows"
        PARTICLE_LIGHT_FOG_LIGHTING_MODE_DYNAMIC = 0x2,
        // MPropertyFriendlyName "Dynamic Fog No Shadows"
        PARTICLE_LIGHT_FOG_LIGHTING_MODE_DYNAMIC_NOSHADOWS = 0x4,
    };
};
