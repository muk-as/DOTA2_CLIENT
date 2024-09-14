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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Pugna_NetherWard : public client::CDOTA_Buff
    {
    public:
        float radius; // 0x16e8        
        float mana_multiplier; // 0x16ec        
        float mana_drained_per_attack; // 0x16f0        
        int32_t attacks_to_destroy; // 0x16f4        
        int32_t health_restore_pct; // 0x16f8        
        int32_t mana_restore_pct; // 0x16fc        
        int32_t self_restoration_range; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1704[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Pugna_NetherWard because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Pugna_NetherWard) == 0x1708);
};
