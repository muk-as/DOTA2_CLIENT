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
        // Size: 0x1e8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_VectorNoise : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0            
            // metadata: MPropertyFriendlyName "output minimum"
            // metadata: MVectorIsSometimesCoordinate "m_nFieldOutput"
            Vector m_vecOutputMin; // 0x1c4            
            // metadata: MPropertyFriendlyName "output maximum"
            // metadata: MVectorIsSometimesCoordinate "m_nFieldOutput"
            Vector m_vecOutputMax; // 0x1d0            
            // metadata: MPropertyFriendlyName "noise coordinate scale"
            float m_fl4NoiseScale; // 0x1dc            
            // metadata: MPropertyFriendlyName "additive"
            bool m_bAdditive; // 0x1e0            
            // metadata: MPropertyFriendlyName "offset instead of accelerate position"
            bool m_bOffset; // 0x1e1            
            uint8_t _pad01e2[0x2]; // 0x1e2
            // metadata: MPropertyFriendlyName "Noise animation time scale"
            float m_flNoiseAnimationTimeScale; // 0x1e4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_VectorNoise because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_VectorNoise) == 0x1e8);
    };
};
