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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Medusa_ManaShield_AttackBuff : public source2sdk::client::CDOTA_Buff
        {
        public:
            float aspd_increase_buff_duration; // 0x1888            
            float aspd_increase_smoothness; // 0x188c            
            std::int32_t aspd_increase_mana_cost_pct; // 0x1890            
            float aspd_increase_rate_pct; // 0x1894            
            source2sdk::entity2::GameTime_t flMaxAspdGameTime; // 0x1898            
            std::int32_t m_iTotalAmount; // 0x189c            
            float m_flStartingAttackSpeed; // 0x18a0            
            uint8_t _pad18a4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Medusa_ManaShield_AttackBuff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Medusa_ManaShield_AttackBuff) == 0x18a8);
    };
};
