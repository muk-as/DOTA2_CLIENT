#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Enumerator count: 6
    // Alignment: 4
    // Size: 0x4
    enum class ParticleSetMethod_t : std::uint32_t
    {
        // MPropertyFriendlyName "Set Value"
        PARTICLE_SET_REPLACE_VALUE = 0x0,
        // MPropertyFriendlyName "Scale Initial Value"
        PARTICLE_SET_SCALE_INITIAL_VALUE = 0x1,
        // MPropertyFriendlyName "Add to Initial Value"
        PARTICLE_SET_ADD_TO_INITIAL_VALUE = 0x2,
        // MPropertyFriendlyName "Ramp Current Value at Input Rate Per Second"
        PARTICLE_SET_RAMP_CURRENT_VALUE = 0x3,
        // MPropertyFriendlyName "Scale Current Value Raw"
        PARTICLE_SET_SCALE_CURRENT_VALUE = 0x4,
        // MPropertyFriendlyName "Add to Current Value Raw"
        PARTICLE_SET_ADD_TO_CURRENT_VALUE = 0x5,
    };
};
