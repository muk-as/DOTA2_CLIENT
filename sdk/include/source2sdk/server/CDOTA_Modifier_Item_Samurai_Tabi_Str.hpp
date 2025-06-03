#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
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
        class CDOTA_Modifier_Item_Samurai_Tabi_Str : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            std::int32_t stat_per_tick; // 0x1878            
            std::int32_t bonus_all_stats; // 0x187c            
            float base_interval; // 0x1880            
            std::int32_t max_tick_count; // 0x1884            
            float str_root_duration; // 0x1888            
            float str_root_cooldown; // 0x188c            
            std::int32_t str_root_chance; // 0x1890            
            float str_bonus_damage; // 0x1894            
            std::int32_t iCurrentTickCount; // 0x1898            
            source2sdk::entity2::GameTime_t m_flLastRootTime; // 0x189c            
            // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_InFlightAttackRecords;
            char m_InFlightAttackRecords[0x18]; // 0x18a0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Samurai_Tabi_Str because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Samurai_Tabi_Str) == 0x18b8);
    };
};
