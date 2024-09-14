#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x200
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_RampScalarSplineSimple : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "ramp rate"
        float m_Rate; // 0x1c0        
        // metadata: MPropertyFriendlyName "start time"
        float m_flStartTime; // 0x1c4        
        // metadata: MPropertyFriendlyName "end time"
        float m_flEndTime; // 0x1c8        
        [[maybe_unused]] std::uint8_t pad_0x1cc[0x24]; // 0x1cc
        // metadata: MPropertyFriendlyName "ramp field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        particles::ParticleAttributeIndex_t m_nField; // 0x1f0        
        // metadata: MPropertyFriendlyName "ease out"
        bool m_bEaseOut; // 0x1f4        
        [[maybe_unused]] std::uint8_t pad_0x1f5[0xb];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RampScalarSplineSimple because it is not a standard-layout class
    static_assert(sizeof(C_OP_RampScalarSplineSimple) == 0x200);
};
