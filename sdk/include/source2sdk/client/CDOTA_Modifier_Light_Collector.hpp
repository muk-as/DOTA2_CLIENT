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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Light_Collector : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            bool m_bActive; // 0x1888            
            uint8_t _pad1889[0x3]; // 0x1889
            std::int32_t health_regen; // 0x188c            
            std::int32_t mana_regen; // 0x1890            
            std::int32_t radius; // 0x1894            
            std::int32_t movespeed_pct; // 0x1898            
            std::int32_t penalty; // 0x189c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Light_Collector because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Light_Collector) == 0x18a0);
    };
};
