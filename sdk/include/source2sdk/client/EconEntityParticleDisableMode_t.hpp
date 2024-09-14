#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class EconEntityParticleDisableMode_t : std::uint32_t
    {
        ECON_ENTITY_PARTICLES_ENABLED = 0x0,
        ECON_ENTITY_PARTICLES_DISABLED = 0x1,
        ECON_ENTITY_PARTICLES_DISABLED_BUT_PLAY_ENDCAPS_TO_STOP = 0x2,
    };
};
