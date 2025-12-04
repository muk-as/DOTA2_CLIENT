#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/CParticleMassCalculationParameters.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_BasicMovement : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "gravity"
            // metadata: MVectorIsCoordinate
            source2sdk::particleslib::CParticleCollectionVecInput m_Gravity; // 0x_            
            // metadata: MPropertyFriendlyName "drag"
            // metadata: MPropertyAttributeRange "-1 1"
            source2sdk::particleslib::CParticleCollectionFloatInput m_fDrag; // 0x_            
            // metadata: MPropertyFriendlyName "Mass controls"
            source2sdk::particles::CParticleMassCalculationParameters m_massControls; // 0x_            
            // metadata: MPropertyFriendlyName "max constraint passes"
            std::int32_t m_nMaxConstraintPasses; // 0x_            
            // metadata: MPropertyFriendlyName "use new code"
            bool m_bUseNewCode; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_BasicMovement because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_BasicMovement) == 0x_);
    };
};
