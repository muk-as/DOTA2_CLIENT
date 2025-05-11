#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
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
        class C_OP_LerpEndCapScalar : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0            
            // metadata: MPropertyFriendlyName "value to lerp to"
            float m_flOutput; // 0x1c4            
            // metadata: MPropertyFriendlyName "lerp time"
            float m_flLerpTime; // 0x1c8            
            uint8_t _pad01cc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_LerpEndCapScalar because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_LerpEndCapScalar) == 0x1d0);
    };
};
