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
        class CDOTA_Modifier_PrimalBeast_Onslaught_Windup : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t max_distance; // 0x1878            
            float max_charge_time; // 0x187c            
            float turn_rate; // 0x1880            
            float base_power; // 0x1884            
            std::int32_t charge_speed; // 0x1888            
            uint8_t _pad188c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_PrimalBeast_Onslaught_Windup because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_PrimalBeast_Onslaught_Windup) == 0x1890);
    };
};
