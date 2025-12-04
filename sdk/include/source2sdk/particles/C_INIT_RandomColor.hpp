#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleColorBlendMode_t.hpp"

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
        class C_INIT_RandomColor : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "color1"
            Color m_ColorMin; // 0x_            
            // metadata: MPropertyFriendlyName "color2"
            Color m_ColorMax; // 0x_            
            // metadata: MPropertyFriendlyName "tint clamp min"
            Color m_TintMin; // 0x_            
            // metadata: MPropertyFriendlyName "tint clamp max"
            Color m_TintMax; // 0x_            
            // metadata: MPropertyFriendlyName "tint perc"
            float m_flTintPerc; // 0x_            
            // metadata: MPropertyFriendlyName "tint update movement threshold"
            float m_flUpdateThreshold; // 0x_            
            // metadata: MPropertyFriendlyName "tint control point"
            std::int32_t m_nTintCP; // 0x_            
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x_            
            // metadata: MPropertyFriendlyName "tint blend mode"
            source2sdk::particles::ParticleColorBlendMode_t m_nTintBlendMode; // 0x_            
            // metadata: MPropertyFriendlyName "light amplification amount"
            float m_flLightAmplification; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_RandomColor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_RandomColor) == 0x_);
    };
};
