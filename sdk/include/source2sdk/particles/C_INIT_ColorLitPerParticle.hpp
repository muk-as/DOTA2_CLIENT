#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/ParticleColorBlendMode_t.hpp"

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
        // Size: 0x200
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_ColorLitPerParticle : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            uint8_t _pad01c8[0x18]; // 0x1c8
            // metadata: MPropertyFriendlyName "color1"
            Color m_ColorMin; // 0x1e0            
            // metadata: MPropertyFriendlyName "color2"
            Color m_ColorMax; // 0x1e4            
            // metadata: MPropertyFriendlyName "tint clamp min"
            Color m_TintMin; // 0x1e8            
            // metadata: MPropertyFriendlyName "tint clamp max"
            Color m_TintMax; // 0x1ec            
            // metadata: MPropertyFriendlyName "light bias"
            float m_flTintPerc; // 0x1f0            
            // metadata: MPropertyFriendlyName "tint blend mode"
            source2sdk::particles::ParticleColorBlendMode_t m_nTintBlendMode; // 0x1f4            
            // metadata: MPropertyFriendlyName "light amplification amount"
            float m_flLightAmplification; // 0x1f8            
            uint8_t _pad01fc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_ColorLitPerParticle because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_ColorLitPerParticle) == 0x200);
    };
};
