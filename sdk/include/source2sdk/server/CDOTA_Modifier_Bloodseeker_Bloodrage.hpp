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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Bloodseeker_Bloodrage : public client::CDOTA_Buff
    {
    public:
        int32_t attack_speed; // 0x16e8        
        int32_t spell_amp; // 0x16ec        
        float shard_max_health_dmg; // 0x16f0        
        float damage_pct; // 0x16f4        
        float flTickRate; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Bloodseeker_Bloodrage because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Bloodseeker_Bloodrage) == 0x1700);
};