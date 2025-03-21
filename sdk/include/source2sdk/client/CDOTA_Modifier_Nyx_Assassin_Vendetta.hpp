#pragma once
#include "source2sdk/client/CDOTA_Modifier_Invisible.hpp"
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
    // Size: 0x1738
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Nyx_Assassin_Vendetta : public client::CDOTA_Modifier_Invisible
    {
    public:
        int32_t bonus_damage; // 0x1718        
        int32_t movement_speed; // 0x171c        
        int32_t mana_removal_pct; // 0x1720        
        int32_t free_pathing_duration; // 0x1724        
        int32_t attack_animation_bonus; // 0x1728        
        int32_t attack_range_bonus; // 0x172c        
        int32_t free_pathing_movement_speed_bonus; // 0x1730        
        [[maybe_unused]] std::uint8_t pad_0x1734[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Nyx_Assassin_Vendetta because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Nyx_Assassin_Vendetta) == 0x1738);
};
