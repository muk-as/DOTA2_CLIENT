#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Slark_DarkPact_Pulses : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_iPulseCount; // 0x1888            
            float radius; // 0x188c            
            std::int32_t total_damage; // 0x1890            
            std::int32_t total_pulses; // 0x1894            
            std::int32_t self_damage_pct; // 0x1898            
            float pulse_interval; // 0x189c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Slark_DarkPact_Pulses because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Slark_DarkPact_Pulses) == 0x18a0);
    };
};
