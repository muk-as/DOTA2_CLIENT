#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x1710
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Juggernaut_BladeFury : public client::CDOTA_Buff
    {
    public:
        float blade_fury_radius; // 0x16e8        
        int32_t blade_fury_damage_per_tick; // 0x16ec        
        float blade_fury_aspd_multiplier; // 0x16f0        
        float m_flTotalAppliedDamage; // 0x16f4        
        int32_t can_crit; // 0x16f8        
        int32_t bonus_movespeed; // 0x16fc        
        entity2::GameTime_t m_flNextAttack; // 0x1700        
        bool m_bIgnoreAttackRestriction; // 0x1704        
        [[maybe_unused]] std::uint8_t pad_0x1705[0xb];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Juggernaut_BladeFury because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Juggernaut_BladeFury) == 0x1710);
};
