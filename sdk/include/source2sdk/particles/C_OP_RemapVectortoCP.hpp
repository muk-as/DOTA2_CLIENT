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
    // Size: 0x1d0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_RemapVectortoCP : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "output control point"
        int32_t m_nOutControlPointNumber; // 0x1c0        
        // metadata: MPropertyFriendlyName "input field"
        // metadata: MPropertyAttributeChoiceName "particlefield_vector"
        particles::ParticleAttributeIndex_t m_nFieldInput; // 0x1c4        
        // metadata: MPropertyFriendlyName "particle number to read"
        int32_t m_nParticleNumber; // 0x1c8        
        [[maybe_unused]] std::uint8_t pad_0x1cc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RemapVectortoCP because it is not a standard-layout class
    static_assert(sizeof(C_OP_RemapVectortoCP) == 0x1d0);
};
