#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Size: 0x1728
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Aghsfort_Minor_Stats_Upgrade : public client::CDOTA_Buff
    {
    public:
        int32_t bonus_all_stats; // 0x16e8        
        int32_t bonus_primary_stat; // 0x16ec        
        int32_t bonus_movespeed; // 0x16f0        
        int32_t bonus_hp_regen; // 0x16f4        
        int32_t bonus_armor; // 0x16f8        
        int32_t bonus_attack_damage; // 0x16fc        
        int32_t bonus_cast_range; // 0x1700        
        int32_t bonus_spell_amp; // 0x1704        
        int32_t bonus_health; // 0x1708        
        int32_t bonus_mana; // 0x170c        
        int32_t bonus_attack_speed; // 0x1710        
        int32_t bonus_heal_amp; // 0x1714        
        int32_t bonus_mana_regen; // 0x1718        
        int32_t bonus_evasion; // 0x171c        
        int32_t bonus_magic_resist; // 0x1720        
        int32_t bonus_lifesteal; // 0x1724        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Aghsfort_Minor_Stats_Upgrade because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Aghsfort_Minor_Stats_Upgrade) == 0x1728);
};
