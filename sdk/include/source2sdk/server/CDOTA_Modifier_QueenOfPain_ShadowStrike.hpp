#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
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
    // Size: 0x1740
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_QueenOfPain_ShadowStrike : public client::CDOTA_Buff
    {
    public:
        int32_t duration_damage; // 0x1708        
        int32_t duration_heal; // 0x170c        
        int32_t movement_slow; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1714[0x4]; // 0x1714
        server::CountdownTimer m_SlowInterval; // 0x1718        
        float m_flSlowStep; // 0x1730        
        float m_flSlowStepStep; // 0x1734        
        float attack_buff_duration; // 0x1738        
        [[maybe_unused]] std::uint8_t pad_0x173c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_QueenOfPain_ShadowStrike because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_QueenOfPain_ShadowStrike) == 0x1740);
};
