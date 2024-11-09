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
    // Size: 0x1738
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Mirana_Leap : public client::CDOTA_Buff
    {
    public:
        int32_t leap_distance; // 0x1708        
        float shard_radius; // 0x170c        
        float shard_radius_end; // 0x1710        
        float shard_damage; // 0x1714        
        float shard_slow_pct; // 0x1718        
        float shard_slow_duration; // 0x171c        
        float leap_speed; // 0x1720        
        float leap_acceleration; // 0x1724        
        int32_t leap_radius; // 0x1728        
        float leap_bonus_duration; // 0x172c        
        bool m_bLaunched; // 0x1730        
        [[maybe_unused]] std::uint8_t pad_0x1731[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Mirana_Leap because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Mirana_Leap) == 0x1738);
};
