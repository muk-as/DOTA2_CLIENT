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
    // Size: 0x1740
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_WitchDoctor_DeathWard : public client::CDOTA_Buff
    {
    public:
        int32_t bonus_damage; // 0x16e8        
        int32_t m_iBounceRadius; // 0x16ec        
        int32_t bonus_accuracy; // 0x16f0        
        int32_t bonus_attack_range; // 0x16f4        
        bool m_bFirstAttack; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16f9[0x3]; // 0x16f9
        int32_t initial_target_count; // 0x16fc        
        int32_t secondary_attack_damage_pct; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1704[0x3c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_WitchDoctor_DeathWard because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_WitchDoctor_DeathWard) == 0x1740);
};
