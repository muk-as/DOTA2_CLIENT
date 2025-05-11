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
        // Size: 0x1830
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_QueenOfPain_ShadowStrike : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t duration_damage; // 0x17f8            
            std::int32_t duration_heal; // 0x17fc            
            std::int32_t movement_slow; // 0x1800            
            uint8_t _pad1804[0x4]; // 0x1804
            source2sdk::client::CountdownTimer m_SlowInterval; // 0x1808            
            float m_flSlowStep; // 0x1820            
            float m_flSlowStepStep; // 0x1824            
            float attack_buff_duration; // 0x1828            
            uint8_t _pad182c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_QueenOfPain_ShadowStrike because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_QueenOfPain_ShadowStrike) == 0x1830);
    };
};
