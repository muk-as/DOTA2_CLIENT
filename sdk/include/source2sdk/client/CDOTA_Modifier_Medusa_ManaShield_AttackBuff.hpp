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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Medusa_ManaShield_AttackBuff : public client::CDOTA_Buff
    {
    public:
        float aspd_increase_buff_duration; // 0x16e8        
        float aspd_increase_smoothness; // 0x16ec        
        int32_t aspd_increase_mana_cost_pct; // 0x16f0        
        float aspd_increase_rate_pct; // 0x16f4        
        entity2::GameTime_t flMaxAspdGameTime; // 0x16f8        
        int32_t m_iTotalAmount; // 0x16fc        
        float m_flStartingAttackSpeed; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1704[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Medusa_ManaShield_AttackBuff because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Medusa_ManaShield_AttackBuff) == 0x1708);
};
