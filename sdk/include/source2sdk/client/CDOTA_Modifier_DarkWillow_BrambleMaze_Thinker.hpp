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
        class CDOTA_Modifier_DarkWillow_BrambleMaze_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t latch_range; // 0x1888            
            std::int32_t latch_vision; // 0x188c            
            float latch_creation_delay; // 0x1890            
            float latch_duration; // 0x1894            
            uint8_t _pad1898[0x14]; // 0x1898
            bool m_bActive; // 0x18ac            
            uint8_t _pad18ad[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_DarkWillow_BrambleMaze_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_DarkWillow_BrambleMaze_Thinker) == 0x18b0);
    };
};
