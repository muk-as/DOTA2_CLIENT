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
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Winter_Wyvern_Cold_Embrace : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad1888[0x14]; // 0x1888
            std::int32_t heal_additive; // 0x189c            
            float heal_percentage; // 0x18a0            
            float tick_interval; // 0x18a4            
            float damage_buff_pct; // 0x18a8            
            float damage_buff_duration; // 0x18ac            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Winter_Wyvern_Cold_Embrace because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Winter_Wyvern_Cold_Embrace) == 0x18b0);
    };
};
