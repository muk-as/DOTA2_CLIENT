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
        // Size: 0x1820
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Lion_ManaDrain : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t mana_per_second; // 0x17f8            
            std::int32_t break_distance; // 0x17fc            
            float tick_interval; // 0x1800            
            std::int32_t movespeed; // 0x1804            
            std::int32_t damage_pct; // 0x1808            
            std::int32_t ally_pct; // 0x180c            
            std::int32_t movespeed_bonus_when_empty_pct; // 0x1810            
            uint8_t _pad1814[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Lion_ManaDrain because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Lion_ManaDrain) == 0x1820);
    };
};
