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
    class CDOTA_Modifier_Alchemist_Scepter_Bonus_Damage : public client::CDOTA_Buff
    {
    public:
        int32_t scepter_bonus_damage; // 0x16e8        
        int32_t scepter_spell_amp; // 0x16ec        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Alchemist_Scepter_Bonus_Damage because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Alchemist_Scepter_Bonus_Damage) == 0x16f0);
};
