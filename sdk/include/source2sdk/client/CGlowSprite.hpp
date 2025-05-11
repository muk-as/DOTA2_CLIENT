#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x20
        #pragma pack(push, 1)
        class CGlowSprite
        {
        public:
            Vector m_vColor; // 0x0            
            float m_flHorzSize; // 0xc            
            float m_flVertSize; // 0x10            
            uint8_t _pad0014[0x4]; // 0x14
            // m_hMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hMaterial;
            char m_hMaterial[0x8]; // 0x18            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CGlowSprite, m_vColor) == 0x0);
        static_assert(offsetof(source2sdk::client::CGlowSprite, m_flHorzSize) == 0xc);
        static_assert(offsetof(source2sdk::client::CGlowSprite, m_flVertSize) == 0x10);
        static_assert(offsetof(source2sdk::client::CGlowSprite, m_hMaterial) == 0x18);
        
        static_assert(sizeof(source2sdk::client::CGlowSprite) == 0x20);
    };
};
