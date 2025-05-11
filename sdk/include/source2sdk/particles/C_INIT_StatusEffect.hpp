#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/Detail2Combo_t.hpp"

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
        // Size: 0x228
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_StatusEffect : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "D_DETAIL_2"
            source2sdk::particles::Detail2Combo_t m_nDetail2Combo; // 0x1c8            
            // metadata: MPropertyFriendlyName "$DETAIL2ROTATION"
            float m_flDetail2Rotation; // 0x1cc            
            // metadata: MPropertyFriendlyName "$DETAIL2SCALE"
            float m_flDetail2Scale; // 0x1d0            
            // metadata: MPropertyFriendlyName "$DETAIL2BLENDFACTOR"
            float m_flDetail2BlendFactor; // 0x1d4            
            // metadata: MPropertyFriendlyName "$COLORWARPINTENSITY"
            float m_flColorWarpIntensity; // 0x1d8            
            // metadata: MPropertyFriendlyName "$DIFFUSEWARPBLENDTOFULL"
            float m_flDiffuseWarpBlendToFull; // 0x1dc            
            // metadata: MPropertyFriendlyName "$ENVMAPINTENSITY"
            float m_flEnvMapIntensity; // 0x1e0            
            // metadata: MPropertyFriendlyName "$AMBIENTSCALE"
            float m_flAmbientScale; // 0x1e4            
            // metadata: MPropertyFriendlyName "$SPECULARCOLOR"
            Color m_specularColor; // 0x1e8            
            // metadata: MPropertyFriendlyName "$SPECULARSCALE"
            float m_flSpecularScale; // 0x1ec            
            // metadata: MPropertyFriendlyName "$SPECULAREXPONENT"
            float m_flSpecularExponent; // 0x1f0            
            // metadata: MPropertyFriendlyName "$SPECULAREXPONENTBLENDTOFULL"
            float m_flSpecularExponentBlendToFull; // 0x1f4            
            // metadata: MPropertyFriendlyName "$SPECULARBLENDTOFULL"
            float m_flSpecularBlendToFull; // 0x1f8            
            // metadata: MPropertyFriendlyName "$RIMLIGHTCOLOR"
            Color m_rimLightColor; // 0x1fc            
            // metadata: MPropertyFriendlyName "$RIMLIGHTSCALE"
            float m_flRimLightScale; // 0x200            
            // metadata: MPropertyFriendlyName "$REFLECTIONSTINTBYBASEBLENDTONONE"
            float m_flReflectionsTintByBaseBlendToNone; // 0x204            
            // metadata: MPropertyFriendlyName "$METALNESSBLENDTOFULL"
            float m_flMetalnessBlendToFull; // 0x208            
            // metadata: MPropertyFriendlyName "$SELFILLUMBLENDTOFULL"
            float m_flSelfIllumBlendToFull; // 0x20c            
            uint8_t _pad0210[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_StatusEffect because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_StatusEffect) == 0x228);
    };
};
