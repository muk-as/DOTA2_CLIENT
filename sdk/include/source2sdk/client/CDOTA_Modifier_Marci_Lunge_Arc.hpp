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
    // Size: 0x1748
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Marci_Lunge_Arc : public client::CDOTA_Buff
    {
    public:
        bool m_bTriggeredLandingAnim; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x1709[0x3]; // 0x1709
        int32_t m_nMaxJumpDistance; // 0x170c        
        int32_t min_jump_distance; // 0x1710        
        int32_t max_jump_distance; // 0x1714        
        float min_lob_travel_time; // 0x1718        
        float max_lob_travel_time; // 0x171c        
        int32_t landing_radius; // 0x1720        
        float debuff_duration; // 0x1724        
        float min_height_above_lowest; // 0x1728        
        float min_height_above_highest; // 0x172c        
        float min_acceleration; // 0x1730        
        float max_acceleration; // 0x1734        
        float impact_damage; // 0x1738        
        int32_t impact_position_offset; // 0x173c        
        float ally_buff_duration; // 0x1740        
        [[maybe_unused]] std::uint8_t pad_0x1744[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Marci_Lunge_Arc because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Marci_Lunge_Arc) == 0x1748);
};
