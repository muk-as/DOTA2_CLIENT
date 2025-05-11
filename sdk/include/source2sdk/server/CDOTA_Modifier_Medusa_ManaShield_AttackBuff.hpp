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
        // Size: 0x1818
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Medusa_ManaShield_AttackBuff : public source2sdk::client::CDOTA_Buff
        {
        public:
            float aspd_increase_buff_duration; // 0x17f8            
            float aspd_increase_smoothness; // 0x17fc            
            std::int32_t aspd_increase_mana_cost_pct; // 0x1800            
            float aspd_increase_rate_pct; // 0x1804            
            source2sdk::entity2::GameTime_t flMaxAspdGameTime; // 0x1808            
            std::int32_t m_iTotalAmount; // 0x180c            
            float m_flStartingAttackSpeed; // 0x1810            
            uint8_t _pad1814[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Medusa_ManaShield_AttackBuff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Medusa_ManaShield_AttackBuff) == 0x1818);
    };
};
