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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1c8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_SetCPtoVector : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "input control point number"
        int32_t m_nCPInput; // 0x1c0        
        // metadata: MPropertyFriendlyName "output field"
        // metadata: MPropertyAttributeChoiceName "particlefield_vector"
        particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_SetCPtoVector because it is not a standard-layout class
    static_assert(sizeof(C_OP_SetCPtoVector) == 0x1c8);
};
