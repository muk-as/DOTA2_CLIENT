#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"

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
        class C_OP_RenderScreenShake : public source2sdk::particles::CParticleFunctionRenderer
        {
        public:
            // metadata: MPropertyFriendlyName "duration scale"
            float m_flDurationScale; // 0x_            
            // metadata: MPropertyFriendlyName "radius scale"
            float m_flRadiusScale; // 0x_            
            // metadata: MPropertyFriendlyName "frequence scale"
            float m_flFrequencyScale; // 0x_            
            // metadata: MPropertyFriendlyName "amplitude scale"
            float m_flAmplitudeScale; // 0x_            
            // metadata: MPropertyFriendlyName "radius field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nRadiusField; // 0x_            
            // metadata: MPropertyFriendlyName "duration field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nDurationField; // 0x_            
            // metadata: MPropertyFriendlyName "frequency field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nFrequencyField; // 0x_            
            // metadata: MPropertyFriendlyName "amplitude field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nAmplitudeField; // 0x_            
            // metadata: MPropertyFriendlyName "control point of shake recipient (-1 = global)"
            std::int32_t m_nFilterCP; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RenderScreenShake because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RenderScreenShake) == 0x_);
    };
};
