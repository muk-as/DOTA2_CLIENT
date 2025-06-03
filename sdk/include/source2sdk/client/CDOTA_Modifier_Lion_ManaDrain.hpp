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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Lion_ManaDrain : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t mana_per_second; // 0x1878            
            std::int32_t break_distance; // 0x187c            
            float tick_interval; // 0x1880            
            std::int32_t movespeed; // 0x1884            
            std::int32_t damage_pct; // 0x1888            
            std::int32_t ally_pct; // 0x188c            
            std::int32_t movespeed_bonus_when_empty_pct; // 0x1890            
            uint8_t _pad1894[0x14];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Lion_ManaDrain because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Lion_ManaDrain) == 0x18a8);
    };
};
