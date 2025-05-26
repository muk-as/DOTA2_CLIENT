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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Witch_Blade : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_intellect; // 0x1878            
            std::int32_t bonus_attack_speed; // 0x187c            
            std::int32_t bonus_armor; // 0x1880            
            float slow_duration; // 0x1884            
            float bonus_mana_regen; // 0x1888            
            std::int32_t projectile_speed; // 0x188c            
            // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_InFlightAttackRecords;
            char m_InFlightAttackRecords[0x18]; // 0x1890            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Witch_Blade because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Witch_Blade) == 0x18a8);
    };
};
