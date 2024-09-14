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
    // Size: 0x490
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_QuantizeCPComponent : public particles::CParticleFunctionPreEmission
    {
    public:
        // metadata: MPropertyFriendlyName "input"
        particleslib::CParticleCollectionFloatInput m_flInputValue; // 0x1c8        
        // metadata: MPropertyFriendlyName "output control point"
        int32_t m_nCPOutput; // 0x328        
        // metadata: MPropertyFriendlyName "output component"
        // metadata: MPropertyAttributeChoiceName "vector_component"
        int32_t m_nOutVectorField; // 0x32c        
        // metadata: MPropertyFriendlyName "interval to snap to"
        particleslib::CParticleCollectionFloatInput m_flQuantizeValue; // 0x330        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_QuantizeCPComponent because it is not a standard-layout class
    static_assert(sizeof(C_OP_QuantizeCPComponent) == 0x490);
};
