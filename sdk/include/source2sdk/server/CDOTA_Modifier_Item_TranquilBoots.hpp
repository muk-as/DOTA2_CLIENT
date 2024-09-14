#pragma once
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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_TranquilBoots : public server::CDOTA_Buff_Item
    {
    public:
        int32_t bonus_movement_speed; // 0x16e8        
        int32_t broken_movement_speed; // 0x16ec        
        int32_t bonus_armor; // 0x16f0        
        int32_t bonus_health_regen; // 0x16f4        
        int32_t break_threshold; // 0x16f8        
        int32_t break_time; // 0x16fc        
        int32_t break_count; // 0x1700        
        float m_flResetTime; // 0x1704        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_TranquilBoots because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_TranquilBoots) == 0x1708);
};
