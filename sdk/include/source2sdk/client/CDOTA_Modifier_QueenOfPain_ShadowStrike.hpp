#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
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
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_QueenOfPain_ShadowStrike : public client::CDOTA_Buff
    {
    public:
        int32_t duration_damage; // 0x16e8        
        int32_t duration_heal; // 0x16ec        
        int32_t movement_slow; // 0x16f0        
        [[maybe_unused]] std::uint8_t pad_0x16f4[0x4]; // 0x16f4
        client::CountdownTimer m_SlowInterval; // 0x16f8        
        float m_flSlowStep; // 0x1710        
        float m_flSlowStepStep; // 0x1714        
        float attack_buff_duration; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_QueenOfPain_ShadowStrike because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_QueenOfPain_ShadowStrike) == 0x1720);
};
