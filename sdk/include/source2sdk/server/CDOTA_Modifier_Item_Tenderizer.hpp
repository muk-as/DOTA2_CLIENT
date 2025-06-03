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
        // Size: 0x18b8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Tenderizer : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_strength; // 0x1878            
            std::int32_t bonus_agility; // 0x187c            
            std::int32_t bash_chance_melee; // 0x1880            
            std::int32_t bash_chance_ranged; // 0x1884            
            float bash_duration; // 0x1888            
            float bash_cooldown; // 0x188c            
            std::int32_t bonus_chance_damage; // 0x1890            
            std::int32_t bonus_damage; // 0x1894            
            std::int32_t weaken_per_hit; // 0x1898            
            float weaken_duration; // 0x189c            
            // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_InFlightAttackRecords;
            char m_InFlightAttackRecords[0x18]; // 0x18a0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Tenderizer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Tenderizer) == 0x18b8);
    };
};
