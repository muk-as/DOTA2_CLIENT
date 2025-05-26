#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff_Item.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Light_Collector : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            bool m_bActive; // 0x1878            
            uint8_t _pad1879[0x3]; // 0x1879
            std::int32_t health_regen; // 0x187c            
            std::int32_t mana_regen; // 0x1880            
            std::int32_t radius; // 0x1884            
            std::int32_t movespeed_pct; // 0x1888            
            std::int32_t penalty; // 0x188c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Light_Collector because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Light_Collector) == 0x1890);
    };
};
