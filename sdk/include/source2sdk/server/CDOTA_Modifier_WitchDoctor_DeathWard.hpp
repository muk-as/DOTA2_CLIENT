#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1760
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_WitchDoctor_DeathWard : public client::CDOTA_Buff
    {
    public:
        int32_t bonus_damage; // 0x1708        
        int32_t m_iBounceRadius; // 0x170c        
        int32_t bonus_accuracy; // 0x1710        
        int32_t bonus_attack_range; // 0x1714        
        bool m_bFirstAttack; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x1719[0x3]; // 0x1719
        int32_t initial_target_count; // 0x171c        
        int32_t secondary_attack_damage_pct; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x3c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_WitchDoctor_DeathWard because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_WitchDoctor_DeathWard) == 0x1760);
};
