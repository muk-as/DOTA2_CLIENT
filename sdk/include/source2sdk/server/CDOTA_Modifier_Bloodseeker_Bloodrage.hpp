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
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Bloodseeker_Bloodrage : public client::CDOTA_Buff
    {
    public:
        int32_t attack_speed; // 0x1708        
        int32_t spell_amp; // 0x170c        
        float shard_max_health_dmg; // 0x1710        
        float damage_pct; // 0x1714        
        float flTickRate; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Bloodseeker_Bloodrage because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Bloodseeker_Bloodrage) == 0x1720);
};
