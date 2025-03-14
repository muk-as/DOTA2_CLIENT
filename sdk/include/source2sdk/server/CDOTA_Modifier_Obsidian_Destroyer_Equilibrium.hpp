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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Obsidian_Destroyer_Equilibrium : public client::CDOTA_Buff
    {
    public:
        int32_t proc_chance; // 0x1708        
        int32_t mana_restore; // 0x170c        
        float scepter_barrier_threshold; // 0x1710        
        float scepter_barrier_duration; // 0x1714        
        float scepter_barrier_cooldown; // 0x1718        
        float scepter_max_mana_barrier_pct; // 0x171c        
        float mana_increase_duration; // 0x1720        
        float mana_as_ms; // 0x1724        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Obsidian_Destroyer_Equilibrium because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Obsidian_Destroyer_Equilibrium) == 0x1728);
};
