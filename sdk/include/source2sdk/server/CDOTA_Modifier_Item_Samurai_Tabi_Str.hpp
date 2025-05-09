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
    // Size: 0x1748
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Samurai_Tabi_Str : public server::CDOTA_Buff_Item
    {
    public:
        int32_t stat_per_tick; // 0x1708        
        int32_t bonus_all_stats; // 0x170c        
        float base_interval; // 0x1710        
        int32_t max_tick_count; // 0x1714        
        float str_root_duration; // 0x1718        
        float str_root_cooldown; // 0x171c        
        int32_t str_root_chance; // 0x1720        
        float str_bonus_damage; // 0x1724        
        int32_t iCurrentTickCount; // 0x1728        
        entity2::GameTime_t m_flLastRootTime; // 0x172c        
        // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_InFlightAttackRecords;
        char m_InFlightAttackRecords[0x18]; // 0x1730        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Samurai_Tabi_Str because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Samurai_Tabi_Str) == 0x1748);
};
