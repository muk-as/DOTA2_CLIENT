#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x1730
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Brewmaster_Primal_Companion : public client::CDOTA_Buff
    {
    public:
        float cooldown_on_death; // 0x1708        
        float cooldown_on_take_damage; // 0x170c        
        int32_t disable_distance; // 0x1710        
        int32_t movement_slow_when_out_of_range; // 0x1714        
        bool m_bCanAttack; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x1719[0x3]; // 0x1719
        client::ParticleIndex_t m_nFxIndex; // 0x171c        
        int32_t cooldown_penalty_pct; // 0x1720        
        int32_t bonus_brewling_hp; // 0x1724        
        int32_t bonus_damage; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x172c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Brewmaster_Primal_Companion because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Brewmaster_Primal_Companion) == 0x1730);
};
