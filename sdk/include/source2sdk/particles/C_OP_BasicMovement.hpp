#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/CParticleMassCalculationParameters.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
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
    // Size: 0xdc8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_BasicMovement : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "gravity"
        // metadata: MVectorIsCoordinate
        particleslib::CParticleCollectionVecInput m_Gravity; // 0x1c0        
        // metadata: MPropertyFriendlyName "drag"
        // metadata: MPropertyAttributeRange "-1 1"
        particleslib::CParticleCollectionFloatInput m_fDrag; // 0x838        
        // metadata: MPropertyFriendlyName "Mass controls"
        particles::CParticleMassCalculationParameters m_massControls; // 0x998        
        // metadata: MPropertyFriendlyName "max constraint passes"
        int32_t m_nMaxConstraintPasses; // 0xdc0        
        // metadata: MPropertyFriendlyName "use new code"
        bool m_bUseNewCode; // 0xdc4        
        [[maybe_unused]] std::uint8_t pad_0xdc5[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_BasicMovement because it is not a standard-layout class
    static_assert(sizeof(C_OP_BasicMovement) == 0xdc8);
};
