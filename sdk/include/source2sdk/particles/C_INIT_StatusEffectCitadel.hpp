#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/DetailCombo_t.hpp"

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
        class C_INIT_StatusEffectCitadel : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "$SFXColorWarpAmount"
            float m_flSFXColorWarpAmount; // 0x_            
            // metadata: MPropertyFriendlyName "$SFXNormalAmount"
            float m_flSFXNormalAmount; // 0x_            
            // metadata: MPropertyFriendlyName "$SFXMetalnessAmount"
            float m_flSFXMetalnessAmount; // 0x_            
            // metadata: MPropertyFriendlyName "$SFXRoughnessAmount"
            float m_flSFXRoughnessAmount; // 0x_            
            // metadata: MPropertyFriendlyName "$SFXSelfIllumAmount"
            float m_flSFXSelfIllumAmount; // 0x_            
            // metadata: MPropertyFriendlyName "$SFXTextureScale"
            float m_flSFXSScale; // 0x_            
            // metadata: MPropertyFriendlyName "$SFXTextureScrollX"
            float m_flSFXSScrollX; // 0x_            
            // metadata: MPropertyFriendlyName "$SFXTextureScrollY"
            float m_flSFXSScrollY; // 0x_            
            // metadata: MPropertyFriendlyName "$SFXTextureScrollZ"
            float m_flSFXSScrollZ; // 0x_            
            // metadata: MPropertyFriendlyName "$SFXTextureOffsetX"
            float m_flSFXSOffsetX; // 0x_            
            // metadata: MPropertyFriendlyName "$SFXTextureOffsetY"
            float m_flSFXSOffsetY; // 0x_            
            // metadata: MPropertyFriendlyName "$SFXTextureOffsetZ"
            float m_flSFXSOffsetZ; // 0x_            
            // metadata: MPropertyFriendlyName "D_DETAIL"
            source2sdk::particles::DetailCombo_t m_nDetailCombo; // 0x_            
            // metadata: MPropertyFriendlyName "$SFXDetailAmount"
            float m_flSFXSDetailAmount; // 0x_            
            // metadata: MPropertyFriendlyName "$SFXDetailTextureScale"
            float m_flSFXSDetailScale; // 0x_            
            // metadata: MPropertyFriendlyName "$SFXDetailTextureScrollX"
            float m_flSFXSDetailScrollX; // 0x_            
            // metadata: MPropertyFriendlyName "$SFXDetailTextureScrollY"
            float m_flSFXSDetailScrollY; // 0x_            
            // metadata: MPropertyFriendlyName "$SFXDetailTextureScrollZ"
            float m_flSFXSDetailScrollZ; // 0x_            
            // metadata: MPropertyFriendlyName "$SFXUseModelUVs"
            float m_flSFXSUseModelUVs; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_StatusEffectCitadel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_StatusEffectCitadel) == 0x_);
    };
};
