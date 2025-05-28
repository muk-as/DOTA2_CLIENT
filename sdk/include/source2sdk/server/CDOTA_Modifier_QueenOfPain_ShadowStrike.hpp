#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/server/CountdownTimer.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18c0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_QueenOfPain_ShadowStrike : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t duration_damage; // 0x1888            
            std::int32_t duration_heal; // 0x188c            
            std::int32_t movement_slow; // 0x1890            
            uint8_t _pad1894[0x4]; // 0x1894
            source2sdk::server::CountdownTimer m_SlowInterval; // 0x1898            
            float m_flSlowStep; // 0x18b0            
            float m_flSlowStepStep; // 0x18b4            
            float attack_buff_duration; // 0x18b8            
            uint8_t _pad18bc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_QueenOfPain_ShadowStrike because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_QueenOfPain_ShadowStrike) == 0x18c0);
    };
};
