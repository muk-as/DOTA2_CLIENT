#pragma once
#include "source2sdk/client/CDOTA_Buff_Item.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Giants_Ring : public client::CDOTA_Buff_Item
    {
    public:
        int32_t bonus_strength; // 0x1708        
        int32_t movement_speed; // 0x170c        
        int32_t model_scale; // 0x1710        
        float damage_radius; // 0x1714        
        int32_t pct_str_damage_per_second; // 0x1718        
        float tick_rate; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Giants_Ring because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Giants_Ring) == 0x1720);
};
