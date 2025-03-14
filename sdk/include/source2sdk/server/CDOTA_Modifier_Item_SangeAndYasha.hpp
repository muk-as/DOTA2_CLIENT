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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_SangeAndYasha : public server::CDOTA_Buff_Item
    {
    public:
        int32_t bonus_agility; // 0x1708        
        int32_t bonus_attack_speed; // 0x170c        
        int32_t movement_speed_percent_bonus; // 0x1710        
        int32_t bonus_strength; // 0x1714        
        int32_t hp_regen_amp; // 0x1718        
        int32_t status_resistance; // 0x171c        
        int32_t slow_resistance; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_SangeAndYasha because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_SangeAndYasha) == 0x1728);
};
