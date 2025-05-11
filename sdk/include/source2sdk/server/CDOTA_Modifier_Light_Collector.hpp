#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Buff_Item.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1810
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Light_Collector : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            bool m_bActive; // 0x17f8            
            uint8_t _pad17f9[0x3]; // 0x17f9
            std::int32_t health_regen; // 0x17fc            
            std::int32_t mana_regen; // 0x1800            
            std::int32_t radius; // 0x1804            
            std::int32_t movespeed_pct; // 0x1808            
            std::int32_t penalty; // 0x180c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Light_Collector because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Light_Collector) == 0x1810);
    };
};
