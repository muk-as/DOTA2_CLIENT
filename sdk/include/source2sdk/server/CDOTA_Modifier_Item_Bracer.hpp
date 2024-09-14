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
    class CDOTA_Modifier_Item_Bracer : public server::CDOTA_Buff_Item
    {
    public:
        int32_t bonus_strength; // 0x16e8        
        int32_t bonus_agility; // 0x16ec        
        int32_t bonus_intellect; // 0x16f0        
        int32_t clock_time; // 0x16f4        
        float bonus_health_regen; // 0x16f8        
        int32_t bonus_damage; // 0x16fc        
        int32_t bonus_slow_resistance; // 0x1700        
        int32_t bonus_health; // 0x1704        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Bracer because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Bracer) == 0x1708);
};
