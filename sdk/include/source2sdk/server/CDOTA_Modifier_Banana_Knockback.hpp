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
        // Size: 0x18c8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Banana_Knockback : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vCenter; // 0x1878            
            std::int32_t knockback_distance; // 0x1884            
            std::int32_t knockback_height; // 0x1888            
            float knockback_duration; // 0x188c            
            Vector m_vHorizOffset; // 0x1890            
            Vector m_vStartPosition; // 0x189c            
            Vector m_vDir; // 0x18a8            
            float m_fCurrentTimeHoriz; // 0x18b4            
            float m_fCurrentTimeVert; // 0x18b8            
            bool m_bShouldStun; // 0x18bc            
            uint8_t _pad18bd[0x3]; // 0x18bd
            float flTimeSinceChange; // 0x18c0            
            uint8_t _pad18c4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Banana_Knockback because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Banana_Knockback) == 0x18c8);
    };
};
