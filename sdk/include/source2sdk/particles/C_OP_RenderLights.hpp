#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/AnimationType_t.hpp"
#include "source2sdk/particles/C_OP_RenderPoints.hpp"

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
        // static metadata: MObsoleteParticleFunction
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RenderLights : public source2sdk::particles::C_OP_RenderPoints
        {
        public:
            // metadata: MPropertyFriendlyName "animation rate"
            float m_flAnimationRate; // 0x_            
            // metadata: MPropertyFriendlyName "animation type"
            source2sdk::particles::AnimationType_t m_nAnimationType; // 0x_            
            // metadata: MPropertyFriendlyName "set animation value in FPS"
            bool m_bAnimateInFPS; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "minimum visual size"
            float m_flMinSize; // 0x_            
            // metadata: MPropertyFriendlyName "maximum visual size"
            float m_flMaxSize; // 0x_            
            // metadata: MPropertyFriendlyName "size at which to start fading"
            float m_flStartFadeSize; // 0x_            
            // metadata: MPropertyFriendlyName "size at which to fade away"
            float m_flEndFadeSize; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RenderLights because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RenderLights) == 0x_);
    };
};
