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
        class CDOTA_Modifier_Phoenix_IcarusDiveBurn : public source2sdk::client::CDOTA_Buff
        {
        public:
            float burn_tick_interval; // 0x1888            
            float blind_duration; // 0x188c            
            float blind_per_second; // 0x1890            
            std::int32_t damage_per_second; // 0x1894            
            std::int32_t slow_movement_speed_pct; // 0x1898            
            uint8_t _pad189c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Phoenix_IcarusDiveBurn because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Phoenix_IcarusDiveBurn) == 0x18a0);
    };
};
