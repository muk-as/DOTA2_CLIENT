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
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Plus_HighFiveRequested : public client::CDOTA_Buff
    {
    public:
        int32_t acknowledge_range; // 0x1708        
        float think_interval; // 0x170c        
        float acknowledged_cooldown; // 0x1710        
        bool m_bAcknowledged; // 0x1714        
        bool m_bWithEnemy; // 0x1715        
        bool m_bFirstThink; // 0x1716        
        [[maybe_unused]] std::uint8_t pad_0x1717[0x1]; // 0x1717
        int32_t high_five_level; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Plus_HighFiveRequested because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Plus_HighFiveRequested) == 0x1720);
};
