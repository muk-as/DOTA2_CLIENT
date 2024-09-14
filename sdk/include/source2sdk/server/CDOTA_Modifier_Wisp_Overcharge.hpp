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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Wisp_Overcharge : public client::CDOTA_Buff
    {
    public:
        int32_t bonus_attack_speed; // 0x16e8        
        int32_t bonus_spell_amp; // 0x16ec        
        int32_t bonus_armor; // 0x16f0        
        int32_t bonus_mres; // 0x16f4        
        int32_t shard_bonus_slow_resistance; // 0x16f8        
        float hp_regen; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Wisp_Overcharge because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Wisp_Overcharge) == 0x1700);
};
