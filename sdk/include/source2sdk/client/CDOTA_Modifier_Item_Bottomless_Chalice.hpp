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
        // Size: 0x1810
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Bottomless_Chalice : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t max_charges_per_kill; // 0x17f8            
            float recharge_time; // 0x17fc            
            bool m_bFull; // 0x1800            
            uint8_t _pad1801[0x3]; // 0x1801
            std::int32_t bonus_intellect; // 0x1804            
            std::int32_t movement_speed; // 0x1808            
            uint8_t _pad180c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Bottomless_Chalice because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Bottomless_Chalice) == 0x1810);
    };
};
