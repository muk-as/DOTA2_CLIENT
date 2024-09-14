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
    class CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_Effect : public client::CDOTA_Buff
    {
    public:
        int32_t damage_reduction_pct; // 0x16e8        
        float bonus_damage_duration; // 0x16ec        
        float bonus_damage_from_creep; // 0x16f0        
        float bonus_damage_from_hero; // 0x16f4        
        bool m_bWasHidden; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16f9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_Effect because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_Effect) == 0x1700);
};
