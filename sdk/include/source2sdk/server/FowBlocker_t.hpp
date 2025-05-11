#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/FowBlockerShape_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x48
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flMinX"
        // static metadata: MNetworkVarNames "float m_flMaxX"
        // static metadata: MNetworkVarNames "float m_flMinY"
        // static metadata: MNetworkVarNames "float m_flMaxY"
        // static metadata: MNetworkVarNames "FowBlockerShape_t m_fowBlockerShape"
        // static metadata: MNetworkVarNames "bool m_bClearRegion"
        #pragma pack(push, 1)
        struct FowBlocker_t
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            // metadata: MNetworkEnable
            float m_flMinX; // 0x30            
            // metadata: MNetworkEnable
            float m_flMaxX; // 0x34            
            // metadata: MNetworkEnable
            float m_flMinY; // 0x38            
            // metadata: MNetworkEnable
            float m_flMaxY; // 0x3c            
            // metadata: MNetworkEnable
            source2sdk::client::FowBlockerShape_t m_fowBlockerShape; // 0x40            
            // metadata: MNetworkEnable
            bool m_bClearRegion; // 0x44            
            uint8_t _pad0045[0x3];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::FowBlocker_t, m_flMinX) == 0x30);
        static_assert(offsetof(source2sdk::server::FowBlocker_t, m_flMaxX) == 0x34);
        static_assert(offsetof(source2sdk::server::FowBlocker_t, m_flMinY) == 0x38);
        static_assert(offsetof(source2sdk::server::FowBlocker_t, m_flMaxY) == 0x3c);
        static_assert(offsetof(source2sdk::server::FowBlocker_t, m_fowBlockerShape) == 0x40);
        static_assert(offsetof(source2sdk::server::FowBlocker_t, m_bClearRegion) == 0x44);
        
        static_assert(sizeof(source2sdk::server::FowBlocker_t) == 0x48);
    };
};
