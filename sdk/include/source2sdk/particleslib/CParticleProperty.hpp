#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particleslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particleslib
{
    // Registered alignment: unknown
    // Alignment: 0x1
    // Standard-layout class: true
    // Size: 0x28
    // MNetworkNoBase
    #pragma pack(push, 1)
    class CParticleProperty
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x28];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CParticleProperty) == 0x28);
};
