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
        class CDOTA_Modifier_Disruptor_KineticWall_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vWallDirection; // 0x1878            
            Vector m_vWallRight; // 0x1884            
            float slow_duration; // 0x1890            
            float formation_time; // 0x1894            
            uint8_t _pad1898[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Disruptor_KineticWall_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Disruptor_KineticWall_Thinker) == 0x18b0);
    };
};
