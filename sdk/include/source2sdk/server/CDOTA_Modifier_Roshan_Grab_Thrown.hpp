#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Modifier_Knockback.hpp"

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
        // Size: 0x18e0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Roshan_Grab_Thrown : public source2sdk::server::CDOTA_Modifier_Knockback
        {
        public:
            float m_flDamage; // 0x18c0            
            QAngle m_vStartAngle; // 0x18c4            
            QAngle m_vEndAngle; // 0x18d0            
            float m_flAngleAnimDuration; // 0x18dc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Roshan_Grab_Thrown because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Roshan_Grab_Thrown) == 0x18e0);
    };
};
