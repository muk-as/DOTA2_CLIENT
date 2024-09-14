#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particleslib/CPerParticleVecInput.hpp"
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
    // Size: 0xeb8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_RemapCrossProductOfTwoVectorsToVector : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "input vector 1"
        particleslib::CPerParticleVecInput m_InputVec1; // 0x1c0        
        // metadata: MPropertyFriendlyName "input vector 2"
        particleslib::CPerParticleVecInput m_InputVec2; // 0x838        
        // metadata: MPropertyFriendlyName "output field"
        // metadata: MPropertyAttributeChoiceName "particlefield_vector"
        particles::ParticleAttributeIndex_t m_nFieldOutput; // 0xeb0        
        // metadata: MPropertyFriendlyName "normalize output"
        bool m_bNormalize; // 0xeb4        
        [[maybe_unused]] std::uint8_t pad_0xeb5[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RemapCrossProductOfTwoVectorsToVector because it is not a standard-layout class
    static_assert(sizeof(C_OP_RemapCrossProductOfTwoVectorsToVector) == 0xeb8);
};
