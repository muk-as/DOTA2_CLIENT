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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Spirit_Bear_Attack_Damage : public client::CDOTA_Buff
    {
    public:
        float bear_bat; // 0x16e8        
        int32_t bear_magic_resistance; // 0x16ec        
        int32_t bonus_bear_hp; // 0x16f0        
        int32_t bear_movespeed; // 0x16f4        
        int32_t bonus_bear_armor; // 0x16f8        
        int32_t hp_gain_per_druid_level; // 0x16fc        
        int32_t damage_gain_per_druid_level; // 0x1700        
        float model_scale; // 0x1704        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Spirit_Bear_Attack_Damage because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Spirit_Bear_Attack_Damage) == 0x1708);
};
