#pragma once
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
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
    class C_OP_ChooseRandomChildrenInGroup : public particles::CParticleFunctionPreEmission
    {
    public:
        // metadata: MPropertyFriendlyName "group ID to affect"
        int32_t m_nChildGroupID; // 0x1c8        
        [[maybe_unused]] std::uint8_t pad_0x1cc[0x4]; // 0x1cc
        // metadata: MPropertyFriendlyName "Number of Children to Use"
        particleslib::CParticleCollectionFloatInput m_flNumberOfChildren; // 0x1d0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_ChooseRandomChildrenInGroup because it is not a standard-layout class
    static_assert(sizeof(C_OP_ChooseRandomChildrenInGroup) == 0x330);
};
