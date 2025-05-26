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
        class CDOTA_Modifier_Disruptor_Thunder_Strike : public source2sdk::client::CDOTA_Buff
        {
        public:
            float strike_interval; // 0x1878            
            float radius; // 0x187c            
            std::int32_t strike_damage; // 0x1880            
            std::int32_t strike_damage_bonus; // 0x1884            
            std::int32_t hits_units_inside_kinetic; // 0x1888            
            uint8_t _pad188c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Disruptor_Thunder_Strike because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Disruptor_Thunder_Strike) == 0x1890);
    };
};
