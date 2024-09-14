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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Sand_King_Scorpion_Strike_Attack_Bonus : public client::CDOTA_Buff
    {
    public:
        int32_t attack_damage; // 0x16e8        
        int32_t creep_damage_penalty; // 0x16ec        
        int32_t inner_radius_bonus_damage_pct; // 0x16f0        
        bool m_bIsInnerRadiusHit; // 0x16f4        
        [[maybe_unused]] std::uint8_t pad_0x16f5[0x3]; // 0x16f5
        float damage_pct; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Sand_King_Scorpion_Strike_Attack_Bonus because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Sand_King_Scorpion_Strike_Attack_Bonus) == 0x1700);
};
