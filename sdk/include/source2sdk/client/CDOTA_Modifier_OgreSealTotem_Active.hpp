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
    // Size: 0x1730
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_OgreSealTotem_Active : public client::CDOTA_Buff
    {
    public:
        int32_t m_nCurrentBounce; // 0x1708        
        int32_t leap_distance; // 0x170c        
        float leap_speed; // 0x1710        
        float leap_acceleration; // 0x1714        
        int32_t leap_radius; // 0x1718        
        float leap_bonus_duration; // 0x171c        
        bool m_bLaunched; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1721[0x3]; // 0x1721
        float m_flFacingTarget; // 0x1724        
        float movement_turn_rate; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x172c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_OgreSealTotem_Active because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_OgreSealTotem_Active) == 0x1730);
};
