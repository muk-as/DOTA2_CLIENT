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
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Sand_King_Scorpion_Strike_Attack_Bonus : public client::CDOTA_Buff
    {
    public:
        int32_t attack_damage; // 0x1708        
        int32_t creep_damage_penalty; // 0x170c        
        int32_t inner_radius_bonus_damage_pct; // 0x1710        
        bool m_bIsInnerRadiusHit; // 0x1714        
        [[maybe_unused]] std::uint8_t pad_0x1715[0x3]; // 0x1715
        float damage_pct; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Sand_King_Scorpion_Strike_Attack_Bonus because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Sand_King_Scorpion_Strike_Attack_Bonus) == 0x1720);
};
