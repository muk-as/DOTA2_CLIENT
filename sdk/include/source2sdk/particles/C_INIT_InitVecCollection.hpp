#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"
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
    // Size: 0x848
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_InitVecCollection : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "value"
        particleslib::CParticleCollectionVecInput m_InputValue; // 0x1c8        
        // metadata: MPropertyFriendlyName "output field"
        // metadata: MPropertyAttributeChoiceName "particlefield_vector"
        particles::ParticleAttributeIndex_t m_nOutputField; // 0x840        
        [[maybe_unused]] std::uint8_t pad_0x844[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_InitVecCollection because it is not a standard-layout class
    static_assert(sizeof(C_INIT_InitVecCollection) == 0x848);
};
