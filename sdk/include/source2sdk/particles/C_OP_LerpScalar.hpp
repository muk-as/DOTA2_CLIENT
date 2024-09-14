#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
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
    class C_OP_LerpScalar : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "output field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0        
        [[maybe_unused]] std::uint8_t pad_0x1c4[0x4]; // 0x1c4
        // metadata: MPropertyFriendlyName "value to lerp to"
        particleslib::CPerParticleFloatInput m_flOutput; // 0x1c8        
        // metadata: MPropertyFriendlyName "start time"
        float m_flStartTime; // 0x328        
        // metadata: MPropertyFriendlyName "end time"
        float m_flEndTime; // 0x32c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_LerpScalar because it is not a standard-layout class
    static_assert(sizeof(C_OP_LerpScalar) == 0x330);
};
