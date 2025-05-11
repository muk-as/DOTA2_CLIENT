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
        // Size: 0x1d8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_Noise : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0            
            // metadata: MPropertyFriendlyName "output minimum"
            float m_flOutputMin; // 0x1c4            
            // metadata: MPropertyFriendlyName "output maximum"
            float m_flOutputMax; // 0x1c8            
            // metadata: MPropertyFriendlyName "noise coordinate scale"
            float m_fl4NoiseScale; // 0x1cc            
            // metadata: MPropertyFriendlyName "additive"
            bool m_bAdditive; // 0x1d0            
            uint8_t _pad01d1[0x3]; // 0x1d1
            // metadata: MPropertyFriendlyName "Noise animation time scale"
            float m_flNoiseAnimationTimeScale; // 0x1d4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_Noise because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_Noise) == 0x1d8);
    };
};
