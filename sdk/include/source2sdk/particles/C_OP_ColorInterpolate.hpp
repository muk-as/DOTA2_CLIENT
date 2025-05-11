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
        class C_OP_ColorInterpolate : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "color fade"
            Color m_ColorFade; // 0x1c0            
            uint8_t _pad01c4[0xc]; // 0x1c4
            // metadata: MPropertyFriendlyName "fade start time"
            float m_flFadeStartTime; // 0x1d0            
            // metadata: MPropertyFriendlyName "fade end time"
            float m_flFadeEndTime; // 0x1d4            
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1d8            
            // metadata: MPropertyFriendlyName "ease in and out"
            bool m_bEaseInOut; // 0x1dc            
            uint8_t _pad01dd[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_ColorInterpolate because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_ColorInterpolate) == 0x1e0);
    };
};
