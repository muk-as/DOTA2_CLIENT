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
    // Size: 0x16f8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Special_Bonus_Mana_Break : public client::CDOTA_Buff
    {
    public:
        int32_t value; // 0x16e8        
        int32_t burn_illusions_ranged; // 0x16ec        
        int32_t burn_illusions_melee; // 0x16f0        
        float damage_per_burn; // 0x16f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Special_Bonus_Mana_Break because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Special_Bonus_Mana_Break) == 0x16f8);
};
