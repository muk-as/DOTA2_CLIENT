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
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Samurai_Tabi_Int : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t stat_per_tick; // 0x1888            
            float base_interval; // 0x188c            
            std::int32_t max_tick_count; // 0x1890            
            float int_damage_interval; // 0x1894            
            float int_damage_range; // 0x1898            
            float int_damage; // 0x189c            
            std::int32_t iCurrentTickCount; // 0x18a0            
            std::int32_t int_max_targets; // 0x18a4            
            source2sdk::entity2::GameTime_t m_flNextHit; // 0x18a8            
            std::int32_t bonus_all_stats; // 0x18ac            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Samurai_Tabi_Int because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Samurai_Tabi_Int) == 0x18b0);
    };
};
