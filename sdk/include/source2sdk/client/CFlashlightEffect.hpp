#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CFlashlightEffect
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            bool m_bIsOn; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool m_bMuzzleFlashEnabled; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flMuzzleFlashBrightness; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Quaternion m_quatMuzzleFlashOrientation; // 0x_            
            Vector m_vecMuzzleFlashOrigin; // 0x_            
            float m_flFov; // 0x_            
            float m_flFarZ; // 0x_            
            float m_flLinearAtten; // 0x_            
            bool m_bCastsShadows; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flCurrentPullBackDist; // 0x_            
            // m_FlashlightTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_FlashlightTexture;
            char m_FlashlightTexture[0x_]; // 0x_            
            // m_MuzzleFlashTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_MuzzleFlashTexture;
            char m_MuzzleFlashTexture[0x_]; // 0x_            
            char m_textureName[64]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CFlashlightEffect, m_bIsOn) == 0x_);
        static_assert(offsetof(source2sdk::client::CFlashlightEffect, m_bMuzzleFlashEnabled) == 0x_);
        static_assert(offsetof(source2sdk::client::CFlashlightEffect, m_flMuzzleFlashBrightness) == 0x_);
        static_assert(offsetof(source2sdk::client::CFlashlightEffect, m_quatMuzzleFlashOrientation) == 0x_);
        static_assert(offsetof(source2sdk::client::CFlashlightEffect, m_vecMuzzleFlashOrigin) == 0x_);
        static_assert(offsetof(source2sdk::client::CFlashlightEffect, m_flFov) == 0x_);
        static_assert(offsetof(source2sdk::client::CFlashlightEffect, m_flFarZ) == 0x_);
        static_assert(offsetof(source2sdk::client::CFlashlightEffect, m_flLinearAtten) == 0x_);
        static_assert(offsetof(source2sdk::client::CFlashlightEffect, m_bCastsShadows) == 0x_);
        static_assert(offsetof(source2sdk::client::CFlashlightEffect, m_flCurrentPullBackDist) == 0x_);
        static_assert(offsetof(source2sdk::client::CFlashlightEffect, m_FlashlightTexture) == 0x_);
        static_assert(offsetof(source2sdk::client::CFlashlightEffect, m_MuzzleFlashTexture) == 0x_);
        static_assert(offsetof(source2sdk::client::CFlashlightEffect, m_textureName) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CFlashlightEffect) == 0x_);
    };
};
