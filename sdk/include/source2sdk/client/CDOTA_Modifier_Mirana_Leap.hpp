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
    // Size: 0x1718
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Mirana_Leap : public client::CDOTA_Buff
    {
    public:
        int32_t leap_distance; // 0x16e8        
        float shard_radius; // 0x16ec        
        float shard_radius_end; // 0x16f0        
        float shard_damage; // 0x16f4        
        float shard_slow_pct; // 0x16f8        
        float shard_slow_duration; // 0x16fc        
        float leap_speed; // 0x1700        
        float leap_acceleration; // 0x1704        
        int32_t leap_radius; // 0x1708        
        float leap_bonus_duration; // 0x170c        
        bool m_bLaunched; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1711[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Mirana_Leap because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Mirana_Leap) == 0x1718);
};
