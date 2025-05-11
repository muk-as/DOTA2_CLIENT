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
        // Size: 0x1820
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Samurai_Tabi_Int : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            std::int32_t stat_per_tick; // 0x17f8            
            float base_interval; // 0x17fc            
            std::int32_t max_tick_count; // 0x1800            
            float int_damage_interval; // 0x1804            
            float int_damage_range; // 0x1808            
            float int_damage; // 0x180c            
            std::int32_t iCurrentTickCount; // 0x1810            
            std::int32_t int_max_targets; // 0x1814            
            source2sdk::entity2::GameTime_t m_flNextHit; // 0x1818            
            std::int32_t bonus_all_stats; // 0x181c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Samurai_Tabi_Int because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Samurai_Tabi_Int) == 0x1820);
    };
};
