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
    // Size: 0x1710
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Brewmaster_Primal_Companion : public client::CDOTA_Buff
    {
    public:
        float cooldown_on_death; // 0x16e8        
        float cooldown_on_take_damage; // 0x16ec        
        int32_t disable_distance; // 0x16f0        
        int32_t movement_slow_when_out_of_range; // 0x16f4        
        bool m_bCanAttack; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16f9[0x3]; // 0x16f9
        client::ParticleIndex_t m_nFxIndex; // 0x16fc        
        int32_t cooldown_penalty_pct; // 0x1700        
        int32_t bonus_brewling_hp; // 0x1704        
        int32_t bonus_damage; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x170c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Brewmaster_Primal_Companion because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Brewmaster_Primal_Companion) == 0x1710);
};
