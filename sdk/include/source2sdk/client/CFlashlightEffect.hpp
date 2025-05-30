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
        // Alignment: 0x10
        // Standard-layout class: true
        // Size: 0x2e0
        // Has VTable
        #pragma pack(push, 1)
        class CFlashlightEffect
        {
        public:
            uint8_t _pad0000[0x10]; // 0x0
            bool m_bIsOn; // 0x10            
            uint8_t _pad0011[0xf]; // 0x11
            bool m_bMuzzleFlashEnabled; // 0x20            
            uint8_t _pad0021[0x3]; // 0x21
            float m_flMuzzleFlashBrightness; // 0x24            
            uint8_t _pad0028[0x8]; // 0x28
            Quaternion m_quatMuzzleFlashOrientation; // 0x30            
            Vector m_vecMuzzleFlashOrigin; // 0x40            
            float m_flFov; // 0x4c            
            float m_flFarZ; // 0x50            
            float m_flLinearAtten; // 0x54            
            bool m_bCastsShadows; // 0x58            
            uint8_t _pad0059[0x3]; // 0x59
            float m_flCurrentPullBackDist; // 0x5c            
            // m_FlashlightTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_FlashlightTexture;
            char m_FlashlightTexture[0x8]; // 0x60            
            // m_MuzzleFlashTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_MuzzleFlashTexture;
            char m_MuzzleFlashTexture[0x8]; // 0x68            
            char m_textureName[64]; // 0x70            
            uint8_t _pad00b0[0x230];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CFlashlightEffect, m_bIsOn) == 0x10);
        static_assert(offsetof(source2sdk::client::CFlashlightEffect, m_bMuzzleFlashEnabled) == 0x20);
        static_assert(offsetof(source2sdk::client::CFlashlightEffect, m_flMuzzleFlashBrightness) == 0x24);
        static_assert(offsetof(source2sdk::client::CFlashlightEffect, m_quatMuzzleFlashOrientation) == 0x30);
        static_assert(offsetof(source2sdk::client::CFlashlightEffect, m_vecMuzzleFlashOrigin) == 0x40);
        static_assert(offsetof(source2sdk::client::CFlashlightEffect, m_flFov) == 0x4c);
        static_assert(offsetof(source2sdk::client::CFlashlightEffect, m_flFarZ) == 0x50);
        static_assert(offsetof(source2sdk::client::CFlashlightEffect, m_flLinearAtten) == 0x54);
        static_assert(offsetof(source2sdk::client::CFlashlightEffect, m_bCastsShadows) == 0x58);
        static_assert(offsetof(source2sdk::client::CFlashlightEffect, m_flCurrentPullBackDist) == 0x5c);
        static_assert(offsetof(source2sdk::client::CFlashlightEffect, m_FlashlightTexture) == 0x60);
        static_assert(offsetof(source2sdk::client::CFlashlightEffect, m_MuzzleFlashTexture) == 0x68);
        static_assert(offsetof(source2sdk::client::CFlashlightEffect, m_textureName) == 0x70);
        
        static_assert(sizeof(source2sdk::client::CFlashlightEffect) == 0x2e0);
    };
};
