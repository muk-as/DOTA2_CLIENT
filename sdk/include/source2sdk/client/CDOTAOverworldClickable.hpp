#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x20
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTAOverworldClickable
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            CUtlString m_sSnippet; // 0x8            
            Vector2D m_vPos; // 0x10            
            bool m_bBackground; // 0x18            
            uint8_t _pad0019[0x7];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAOverworldClickable, m_sSnippet) == 0x8);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldClickable, m_vPos) == 0x10);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldClickable, m_bBackground) == 0x18);
        
        static_assert(sizeof(source2sdk::client::CDOTAOverworldClickable) == 0x20);
    };
};
