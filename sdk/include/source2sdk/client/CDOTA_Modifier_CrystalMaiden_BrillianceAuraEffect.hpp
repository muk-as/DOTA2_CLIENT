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
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_CrystalMaiden_BrillianceAuraEffect : public client::CDOTA_Buff
    {
    public:
        float base_mana_regen; // 0x1708        
        float proximity_bonus_factor; // 0x170c        
        float aoe_bonus; // 0x1710        
        float proximity_bonus_radius; // 0x1714        
        int32_t self_cast_range_bonus; // 0x1718        
        int32_t mana_battery_mana_pct; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_CrystalMaiden_BrillianceAuraEffect because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_CrystalMaiden_BrillianceAuraEffect) == 0x1720);
};
