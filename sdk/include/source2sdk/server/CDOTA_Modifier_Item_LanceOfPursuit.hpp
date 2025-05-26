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
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_LanceOfPursuit : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_mana; // 0x1878            
            std::int32_t bonus_strength; // 0x187c            
            std::int32_t backstab_damage; // 0x1880            
            std::int32_t backstab_angle; // 0x1884            
            float slow_duration; // 0x1888            
            bool m_bBackstab; // 0x188c            
            uint8_t _pad188d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_LanceOfPursuit because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_LanceOfPursuit) == 0x1890);
    };
};
