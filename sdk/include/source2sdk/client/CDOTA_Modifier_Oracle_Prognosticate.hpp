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
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Oracle_Prognosticate : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t current_rune_location; // 0x1878            
            std::int32_t next_rune_location; // 0x187c            
            std::int32_t current_rune_type; // 0x1880            
            std::int32_t next_rune_type; // 0x1884            
            bool started_spawning; // 0x1888            
            uint8_t _pad1889[0x3]; // 0x1889
            float next_rune_spawn_time; // 0x188c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Oracle_Prognosticate because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Oracle_Prognosticate) == 0x1890);
    };
};
