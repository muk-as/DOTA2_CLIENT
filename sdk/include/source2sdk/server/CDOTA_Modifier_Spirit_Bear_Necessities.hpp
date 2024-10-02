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
    // Size: 0x1718
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Spirit_Bear_Necessities : public client::CDOTA_Buff
    {
    public:
        float bonus_int; // 0x16e8        
        float bonus_str; // 0x16ec        
        float bonus_agi; // 0x16f0        
        int32_t bonus_attack_speed; // 0x16f4        
        int32_t bonus_attack_damage; // 0x16f8        
        float bonus_health_regen; // 0x16fc        
        float bonus_health_regen_percent; // 0x1700        
        float bonus_mana_regen; // 0x1704        
        int32_t bonus_health; // 0x1708        
        int32_t bonus_mana; // 0x170c        
        float bonus_evasion; // 0x1710        
        int32_t item_slots; // 0x1714        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Spirit_Bear_Necessities because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Spirit_Bear_Necessities) == 0x1718);
};
