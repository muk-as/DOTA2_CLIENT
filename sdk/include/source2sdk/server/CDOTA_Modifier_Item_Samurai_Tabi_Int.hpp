#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTA_Buff_Item.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1710
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Samurai_Tabi_Int : public server::CDOTA_Buff_Item
    {
    public:
        int32_t stat_per_tick; // 0x16e8        
        float base_interval; // 0x16ec        
        int32_t max_tick_count; // 0x16f0        
        float int_damage_interval; // 0x16f4        
        float int_damage_range; // 0x16f8        
        float int_damage; // 0x16fc        
        int32_t iCurrentTickCount; // 0x1700        
        int32_t int_max_targets; // 0x1704        
        entity2::GameTime_t m_flNextHit; // 0x1708        
        int32_t bonus_all_stats; // 0x170c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Samurai_Tabi_Int because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Samurai_Tabi_Int) == 0x1710);
};
