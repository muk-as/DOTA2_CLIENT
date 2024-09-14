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
    // static metadata: MParticleMaxVersion "8"
    // static metadata: MParticleReplacementOp "C_OP_InheritFromParentParticlesV2"
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_InheritFromParentParticles : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "scale"
        float m_flScale; // 0x1c0        
        // metadata: MPropertyFriendlyName "inherited field"
        // metadata: MPropertyAttributeChoiceName "particlefield"
        particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4        
        // metadata: MPropertyFriendlyName "particle increment amount"
        int32_t m_nIncrement; // 0x1c8        
        // metadata: MPropertyFriendlyName "random parent particle distribution"
        bool m_bRandomDistribution; // 0x1cc        
        [[maybe_unused]] std::uint8_t pad_0x1cd[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_InheritFromParentParticles because it is not a standard-layout class
    static_assert(sizeof(C_OP_InheritFromParentParticles) == 0x1d0);
};
