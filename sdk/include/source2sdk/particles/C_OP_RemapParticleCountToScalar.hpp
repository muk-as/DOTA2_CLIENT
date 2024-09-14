#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleSetMethod_t.hpp"
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
    // Size: 0x750
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_RemapParticleCountToScalar : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "output field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0        
        [[maybe_unused]] std::uint8_t pad_0x1c4[0x4]; // 0x1c4
        // metadata: MPropertyFriendlyName "input minimum"
        particleslib::CParticleCollectionFloatInput m_nInputMin; // 0x1c8        
        // metadata: MPropertyFriendlyName "input maximum"
        particleslib::CParticleCollectionFloatInput m_nInputMax; // 0x328        
        // metadata: MPropertyFriendlyName "output minimum"
        particleslib::CParticleCollectionFloatInput m_flOutputMin; // 0x488        
        // metadata: MPropertyFriendlyName "output maximum"
        particleslib::CParticleCollectionFloatInput m_flOutputMax; // 0x5e8        
        // metadata: MPropertyFriendlyName
        bool m_bActiveRange; // 0x748        
        [[maybe_unused]] std::uint8_t pad_0x749[0x3]; // 0x749
        // metadata: MPropertyFriendlyName "set value method"
        particles::ParticleSetMethod_t m_nSetMethod; // 0x74c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RemapParticleCountToScalar because it is not a standard-layout class
    static_assert(sizeof(C_OP_RemapParticleCountToScalar) == 0x750);
};
