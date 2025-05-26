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
        class CDOTA_Modifier_DarkWillow_BrambleMaze_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t latch_range; // 0x1878            
            std::int32_t latch_vision; // 0x187c            
            float latch_creation_delay; // 0x1880            
            float latch_duration; // 0x1884            
            uint8_t _pad1888[0x14]; // 0x1888
            bool m_bActive; // 0x189c            
            uint8_t _pad189d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_DarkWillow_BrambleMaze_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_DarkWillow_BrambleMaze_Thinker) == 0x18a0);
    };
};
