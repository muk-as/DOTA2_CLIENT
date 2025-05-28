#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Roshan_Moving : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t move_pits_bonus_speed_per_interrupt; // 0x1888            
            std::int32_t move_pits_max_bonus_speed; // 0x188c            
            std::int32_t move_pits_slow_resistance; // 0x1890            
            bool m_bReachedMidpoint; // 0x1894            
            uint8_t _pad1895[0x3]; // 0x1895
            std::int32_t m_nInterruptCount; // 0x1898            
            float m_flGrabAttemptTime; // 0x189c            
            source2sdk::entity2::GameTime_t m_flLastInterrupted; // 0x18a0            
            uint8_t _pad18a4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Roshan_Moving because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Roshan_Moving) == 0x18a8);
    };
};
