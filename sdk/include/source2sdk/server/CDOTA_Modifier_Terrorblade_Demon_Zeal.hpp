#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Terrorblade_Demon_Zeal : public client::CDOTA_Buff
    {
    public:
        int32_t berserk_bonus_attack_speed; // 0x1708        
        int32_t berserk_bonus_movement_speed; // 0x170c        
        int32_t berserk_bonus_armor; // 0x1710        
        int32_t hp_regen; // 0x1714        
        int32_t reflection_pct; // 0x1718        
        int32_t melee_bonus; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Terrorblade_Demon_Zeal because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Terrorblade_Demon_Zeal) == 0x1720);
};
