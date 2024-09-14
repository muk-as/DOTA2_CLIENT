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
    // Size: 0x16f0
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Crystal_Maiden_Innate_Mana_Battery : public client::CDOTA_Buff
    {
    public:
        int32_t mana_battery_mana_pct; // 0x16e8        
        int32_t proximity_radius; // 0x16ec        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Crystal_Maiden_Innate_Mana_Battery because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Crystal_Maiden_Innate_Mana_Battery) == 0x16f0);
};
