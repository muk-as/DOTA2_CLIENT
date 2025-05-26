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
        class CDOTA_Modifier_Pudge_Dismember_Pull : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vDestination; // 0x1878            
            std::int32_t pull_units_per_second; // 0x1884            
            float pull_distance_limit; // 0x1888            
            uint8_t _pad188c[0x14]; // 0x188c
            float animation_rate; // 0x18a0            
            uint8_t _pad18a4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Pudge_Dismember_Pull because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Pudge_Dismember_Pull) == 0x18a8);
    };
};
