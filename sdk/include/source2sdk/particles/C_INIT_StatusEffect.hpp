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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_StatusEffect : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "D_DETAIL_2"
            source2sdk::particles::Detail2Combo_t m_nDetail2Combo; // 0x_            
            // metadata: MPropertyFriendlyName "$DETAIL2ROTATION"
            float m_flDetail2Rotation; // 0x_            
            // metadata: MPropertyFriendlyName "$DETAIL2SCALE"
            float m_flDetail2Scale; // 0x_            
            // metadata: MPropertyFriendlyName "$DETAIL2BLENDFACTOR"
            float m_flDetail2BlendFactor; // 0x_            
            // metadata: MPropertyFriendlyName "$COLORWARPINTENSITY"
            float m_flColorWarpIntensity; // 0x_            
            // metadata: MPropertyFriendlyName "$DIFFUSEWARPBLENDTOFULL"
            float m_flDiffuseWarpBlendToFull; // 0x_            
            // metadata: MPropertyFriendlyName "$ENVMAPINTENSITY"
            float m_flEnvMapIntensity; // 0x_            
            // metadata: MPropertyFriendlyName "$AMBIENTSCALE"
            float m_flAmbientScale; // 0x_            
            // metadata: MPropertyFriendlyName "$SPECULARCOLOR"
            Color m_specularColor; // 0x_            
            // metadata: MPropertyFriendlyName "$SPECULARSCALE"
            float m_flSpecularScale; // 0x_            
            // metadata: MPropertyFriendlyName "$SPECULAREXPONENT"
            float m_flSpecularExponent; // 0x_            
            // metadata: MPropertyFriendlyName "$SPECULAREXPONENTBLENDTOFULL"
            float m_flSpecularExponentBlendToFull; // 0x_            
            // metadata: MPropertyFriendlyName "$SPECULARBLENDTOFULL"
            float m_flSpecularBlendToFull; // 0x_            
            // metadata: MPropertyFriendlyName "$RIMLIGHTCOLOR"
            Color m_rimLightColor; // 0x_            
            // metadata: MPropertyFriendlyName "$RIMLIGHTSCALE"
            float m_flRimLightScale; // 0x_            
            // metadata: MPropertyFriendlyName "$REFLECTIONSTINTBYBASEBLENDTONONE"
            float m_flReflectionsTintByBaseBlendToNone; // 0x_            
            // metadata: MPropertyFriendlyName "$METALNESSBLENDTOFULL"
            float m_flMetalnessBlendToFull; // 0x_            
            // metadata: MPropertyFriendlyName "$SELFILLUMBLENDTOFULL"
            float m_flSelfIllumBlendToFull; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_StatusEffect because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_StatusEffect) == 0x_);
    };
};
