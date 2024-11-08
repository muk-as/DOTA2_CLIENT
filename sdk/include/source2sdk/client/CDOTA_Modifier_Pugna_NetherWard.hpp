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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Pugna_NetherWard : public client::CDOTA_Buff
    {
    public:
        float radius; // 0x1708        
        float mana_multiplier; // 0x170c        
        float mana_drained_per_attack; // 0x1710        
        int32_t attacks_to_destroy; // 0x1714        
        int32_t health_restore_pct; // 0x1718        
        int32_t mana_restore_pct; // 0x171c        
        int32_t self_restoration_range; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Pugna_NetherWard because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Pugna_NetherWard) == 0x1728);
};
