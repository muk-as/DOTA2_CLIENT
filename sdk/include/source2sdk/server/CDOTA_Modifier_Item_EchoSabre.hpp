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
    class CDOTA_Modifier_Item_EchoSabre : public server::CDOTA_Buff_Item
    {
    public:
        int32_t bonus_intellect; // 0x1708        
        int32_t bonus_attack_speed; // 0x170c        
        int32_t bonus_damage; // 0x1710        
        float bonus_mana_regen; // 0x1714        
        int32_t bonus_strength; // 0x1718        
        float slow_duration; // 0x171c        
        bool bonus_speed; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1721[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_EchoSabre because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_EchoSabre) == 0x1728);
};
