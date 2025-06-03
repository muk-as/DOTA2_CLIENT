#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/CountdownTimer.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_QueenOfPain_ShadowStrike : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t duration_damage; // 0x1878            
            std::int32_t duration_heal; // 0x187c            
            std::int32_t movement_slow; // 0x1880            
            uint8_t _pad1884[0x4]; // 0x1884
            source2sdk::client::CountdownTimer m_SlowInterval; // 0x1888            
            float m_flSlowStep; // 0x18a0            
            float m_flSlowStepStep; // 0x18a4            
            float attack_buff_duration; // 0x18a8            
            uint8_t _pad18ac[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_QueenOfPain_ShadowStrike because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_QueenOfPain_ShadowStrike) == 0x18b0);
    };
};
