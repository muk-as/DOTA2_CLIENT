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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Samurai_Tabi_Int : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            std::int32_t stat_per_tick; // 0x1878            
            float base_interval; // 0x187c            
            std::int32_t max_tick_count; // 0x1880            
            float int_damage_interval; // 0x1884            
            float int_damage_range; // 0x1888            
            float int_damage; // 0x188c            
            std::int32_t iCurrentTickCount; // 0x1890            
            std::int32_t int_max_targets; // 0x1894            
            source2sdk::entity2::GameTime_t m_flNextHit; // 0x1898            
            std::int32_t bonus_all_stats; // 0x189c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Samurai_Tabi_Int because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Samurai_Tabi_Int) == 0x18a0);
    };
};
