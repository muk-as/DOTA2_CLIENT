#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1820
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Juggernaut_BladeFury : public source2sdk::client::CDOTA_Buff
        {
        public:
            float blade_fury_radius; // 0x17f8            
            std::int32_t blade_fury_damage_per_tick; // 0x17fc            
            float blade_fury_aspd_multiplier; // 0x1800            
            float m_flTotalAppliedDamage; // 0x1804            
            std::int32_t can_crit; // 0x1808            
            std::int32_t bonus_movespeed; // 0x180c            
            source2sdk::entity2::GameTime_t m_flNextAttack; // 0x1810            
            bool m_bIgnoreAttackRestriction; // 0x1814            
            uint8_t _pad1815[0xb];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Juggernaut_BladeFury because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Juggernaut_BladeFury) == 0x1820);
    };
};
