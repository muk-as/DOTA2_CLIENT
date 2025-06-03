#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Juggernaut_BladeFury : public source2sdk::client::CDOTA_Buff
        {
        public:
            float blade_fury_radius; // 0x1878            
            std::int32_t blade_fury_damage; // 0x187c            
            float blade_fury_damage_tick; // 0x1880            
            float m_flTotalAppliedDamage; // 0x1884            
            std::int32_t can_crit; // 0x1888            
            std::int32_t bonus_movespeed; // 0x188c            
            source2sdk::entity2::GameTime_t m_flNextAttack; // 0x1890            
            bool m_bIgnoreAttackRestriction; // 0x1894            
            uint8_t _pad1895[0x1b];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Juggernaut_BladeFury because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Juggernaut_BladeFury) == 0x18b0);
    };
};
