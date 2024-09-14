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
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Marci_Lunge_Arc : public client::CDOTA_Buff
    {
    public:
        bool m_bTriggeredLandingAnim; // 0x16e8        
        [[maybe_unused]] std::uint8_t pad_0x16e9[0x3]; // 0x16e9
        int32_t m_nMaxJumpDistance; // 0x16ec        
        int32_t min_jump_distance; // 0x16f0        
        int32_t max_jump_distance; // 0x16f4        
        float min_lob_travel_time; // 0x16f8        
        float max_lob_travel_time; // 0x16fc        
        int32_t landing_radius; // 0x1700        
        float debuff_duration; // 0x1704        
        float min_height_above_lowest; // 0x1708        
        float min_height_above_highest; // 0x170c        
        float min_acceleration; // 0x1710        
        float max_acceleration; // 0x1714        
        float impact_damage; // 0x1718        
        int32_t impact_position_offset; // 0x171c        
        float ally_buff_duration; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Marci_Lunge_Arc because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Marci_Lunge_Arc) == 0x1728);
};
