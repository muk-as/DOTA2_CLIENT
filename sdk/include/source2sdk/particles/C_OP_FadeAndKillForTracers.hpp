#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"

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
        class C_OP_FadeAndKillForTracers : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "start fade in time"
            float m_flStartFadeInTime; // 0x_            
            // metadata: MPropertyFriendlyName "end fade in time"
            float m_flEndFadeInTime; // 0x_            
            // metadata: MPropertyFriendlyName "start fade out time"
            float m_flStartFadeOutTime; // 0x_            
            // metadata: MPropertyFriendlyName "end fade out time"
            float m_flEndFadeOutTime; // 0x_            
            // metadata: MPropertyFriendlyName "start alpha"
            float m_flStartAlpha; // 0x_            
            // metadata: MPropertyFriendlyName "end alpha"
            float m_flEndAlpha; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_FadeAndKillForTracers because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_FadeAndKillForTracers) == 0x_);
    };
};
