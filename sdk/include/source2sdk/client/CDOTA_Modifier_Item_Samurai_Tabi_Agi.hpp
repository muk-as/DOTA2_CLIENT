#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff_Item.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x1818
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Samurai_Tabi_Agi : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t stat_per_tick; // 0x17f8            
            float base_interval; // 0x17fc            
            std::int32_t max_tick_count; // 0x1800            
            std::int32_t bonus_all_stats; // 0x1804            
            std::int32_t agi_counter_chance; // 0x1808            
            float agi_counter_cooldown; // 0x180c            
            source2sdk::entity2::GameTime_t m_flLastCounterTime; // 0x1810            
            std::int32_t iCurrentTickCount; // 0x1814            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Samurai_Tabi_Agi because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Samurai_Tabi_Agi) == 0x1818);
    };
};
