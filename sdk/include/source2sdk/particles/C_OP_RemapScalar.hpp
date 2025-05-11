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
        // Size: 0x1e0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RemapScalar : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "input field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldInput; // 0x1c0            
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4            
            // metadata: MPropertyFriendlyName "input minimum"
            float m_flInputMin; // 0x1c8            
            // metadata: MPropertyFriendlyName "input maximum"
            float m_flInputMax; // 0x1cc            
            // metadata: MPropertyFriendlyName "output minimum"
            float m_flOutputMin; // 0x1d0            
            // metadata: MPropertyFriendlyName "output maximum"
            float m_flOutputMax; // 0x1d4            
            // metadata: MPropertyFriendlyName "use old code"
            bool m_bOldCode; // 0x1d8            
            uint8_t _pad01d9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RemapScalar because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RemapScalar) == 0x1e0);
    };
};
