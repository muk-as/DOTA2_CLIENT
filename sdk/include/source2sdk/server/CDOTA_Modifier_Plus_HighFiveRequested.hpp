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
    class CDOTA_Modifier_Plus_HighFiveRequested : public client::CDOTA_Buff
    {
    public:
        int32_t acknowledge_range; // 0x16e8        
        float think_interval; // 0x16ec        
        float acknowledged_cooldown; // 0x16f0        
        bool m_bAcknowledged; // 0x16f4        
        bool m_bFirstThink; // 0x16f5        
        [[maybe_unused]] std::uint8_t pad_0x16f6[0x2]; // 0x16f6
        int32_t high_five_level; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Plus_HighFiveRequested because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Plus_HighFiveRequested) == 0x1700);
};
