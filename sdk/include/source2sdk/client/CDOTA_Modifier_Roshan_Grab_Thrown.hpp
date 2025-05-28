#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Modifier_Knockback.hpp"

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
        // Size: 0x18e0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Roshan_Grab_Thrown : public source2sdk::client::CDOTA_Modifier_Knockback
        {
        public:
            QAngle m_vStartAngle; // 0x18c0            
            QAngle m_vEndAngle; // 0x18cc            
            float m_flAngleAnimDuration; // 0x18d8            
            uint8_t _pad18dc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Roshan_Grab_Thrown because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Roshan_Grab_Thrown) == 0x18e0);
    };
};
