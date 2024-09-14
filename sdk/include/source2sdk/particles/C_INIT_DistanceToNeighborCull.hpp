#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x330
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_DistanceToNeighborCull : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "cull distance"
        particleslib::CPerParticleFloatInput m_flDistance; // 0x1c8        
        // metadata: MPropertyFriendlyName "include particle radius"
        bool m_bIncludeRadii; // 0x328        
        [[maybe_unused]] std::uint8_t pad_0x329[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_DistanceToNeighborCull because it is not a standard-layout class
    static_assert(sizeof(C_INIT_DistanceToNeighborCull) == 0x330);
};
