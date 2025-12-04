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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
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
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            float m_flMinX; // 0x_            
            // metadata: MNetworkEnable
            float m_flMaxX; // 0x_            
            // metadata: MNetworkEnable
            float m_flMinY; // 0x_            
            // metadata: MNetworkEnable
            float m_flMaxY; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::FowBlockerShape_t m_fowBlockerShape; // 0x_            
            // metadata: MNetworkEnable
            bool m_bClearRegion; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::FowBlocker_t, m_flMinX) == 0x_);
        static_assert(offsetof(source2sdk::server::FowBlocker_t, m_flMaxX) == 0x_);
        static_assert(offsetof(source2sdk::server::FowBlocker_t, m_flMinY) == 0x_);
        static_assert(offsetof(source2sdk::server::FowBlocker_t, m_flMaxY) == 0x_);
        static_assert(offsetof(source2sdk::server::FowBlocker_t, m_fowBlockerShape) == 0x_);
        static_assert(offsetof(source2sdk::server::FowBlocker_t, m_bClearRegion) == 0x_);
        
        static_assert(sizeof(source2sdk::server::FowBlocker_t) == 0x_);
    };
};
