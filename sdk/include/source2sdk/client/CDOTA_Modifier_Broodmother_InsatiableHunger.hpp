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
    class CDOTA_Modifier_Broodmother_InsatiableHunger : public client::CDOTA_Buff
    {
    public:
        int32_t bonus_damage; // 0x16e8        
        int32_t lifesteal_pct; // 0x16ec        
        float slow_duration; // 0x16f0        
        float bat_bonus; // 0x16f4        
        float shard_damage_tick_interval; // 0x16f8        
        int32_t damage_tick_count; // 0x16fc        
        int32_t shard_damage_per_tick; // 0x1700        
        int32_t creep_lifesteal_reduction_pct; // 0x1704        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Broodmother_InsatiableHunger because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Broodmother_InsatiableHunger) == 0x1708);
};
