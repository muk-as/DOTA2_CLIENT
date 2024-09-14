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
    enum class ParticleEndcapMode_t : std::uint32_t
    {
        // MPropertyFriendlyName "Always Enabled"
        PARTICLE_ENDCAP_ALWAYS_ON = 0xffffffff,
        // MPropertyFriendlyName "Disabled During Endcap"
        PARTICLE_ENDCAP_ENDCAP_OFF = 0x0,
        // MPropertyFriendlyName "Only Enabled During Endcap"
        PARTICLE_ENDCAP_ENDCAP_ON = 0x1,
    };
};
