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
    // Size: 0x210
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_RampScalarLinear : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "ramp rate min"
        float m_RateMin; // 0x1c0        
        // metadata: MPropertyFriendlyName "ramp rate max"
        float m_RateMax; // 0x1c4        
        // metadata: MPropertyFriendlyName "start time min"
        float m_flStartTime_min; // 0x1c8        
        // metadata: MPropertyFriendlyName "start time max"
        float m_flStartTime_max; // 0x1cc        
        // metadata: MPropertyFriendlyName "end time min"
        float m_flEndTime_min; // 0x1d0        
        // metadata: MPropertyFriendlyName "end time max"
        float m_flEndTime_max; // 0x1d4        
        [[maybe_unused]] std::uint8_t pad_0x1d8[0x28]; // 0x1d8
        // metadata: MPropertyFriendlyName "ramp field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        particles::ParticleAttributeIndex_t m_nField; // 0x200        
        // metadata: MPropertyFriendlyName "start/end proportional"
        bool m_bProportionalOp; // 0x204        
        [[maybe_unused]] std::uint8_t pad_0x205[0xb];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RampScalarLinear because it is not a standard-layout class
    static_assert(sizeof(C_OP_RampScalarLinear) == 0x210);
};
