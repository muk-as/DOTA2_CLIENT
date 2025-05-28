#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x18b8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Lion_ManaDrain : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t mana_per_second; // 0x1888            
            std::int32_t break_distance; // 0x188c            
            float tick_interval; // 0x1890            
            std::int32_t movespeed; // 0x1894            
            std::int32_t damage_pct; // 0x1898            
            std::int32_t ally_pct; // 0x189c            
            std::int32_t movespeed_bonus_when_empty_pct; // 0x18a0            
            uint8_t _pad18a4[0x14];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Lion_ManaDrain because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Lion_ManaDrain) == 0x18b8);
    };
};
