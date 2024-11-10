#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x1730
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Juggernaut_BladeFury : public client::CDOTA_Buff
    {
    public:
        float blade_fury_radius; // 0x1708        
        int32_t blade_fury_damage_per_tick; // 0x170c        
        float blade_fury_aspd_multiplier; // 0x1710        
        float m_flTotalAppliedDamage; // 0x1714        
        int32_t can_crit; // 0x1718        
        int32_t bonus_movespeed; // 0x171c        
        entity2::GameTime_t m_flNextAttack; // 0x1720        
        bool m_bIgnoreAttackRestriction; // 0x1724        
        [[maybe_unused]] std::uint8_t pad_0x1725[0xb];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Juggernaut_BladeFury because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Juggernaut_BladeFury) == 0x1730);
};
