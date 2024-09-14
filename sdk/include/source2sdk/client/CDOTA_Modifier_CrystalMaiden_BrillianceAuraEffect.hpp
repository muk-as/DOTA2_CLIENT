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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_CrystalMaiden_BrillianceAuraEffect : public client::CDOTA_Buff
    {
    public:
        float base_mana_regen; // 0x16e8        
        float proximity_bonus_factor; // 0x16ec        
        float aoe_bonus; // 0x16f0        
        float proximity_bonus_radius; // 0x16f4        
        int32_t self_cast_range_bonus; // 0x16f8        
        int32_t mana_battery_mana_pct; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_CrystalMaiden_BrillianceAuraEffect because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_CrystalMaiden_BrillianceAuraEffect) == 0x1700);
};
