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
        // Size: 0x18d8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Banana_Knockback : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vCenter; // 0x1888            
            std::int32_t knockback_distance; // 0x1894            
            std::int32_t knockback_height; // 0x1898            
            float knockback_duration; // 0x189c            
            Vector m_vHorizOffset; // 0x18a0            
            Vector m_vStartPosition; // 0x18ac            
            Vector m_vDir; // 0x18b8            
            float m_fCurrentTimeHoriz; // 0x18c4            
            float m_fCurrentTimeVert; // 0x18c8            
            bool m_bShouldStun; // 0x18cc            
            uint8_t _pad18cd[0x3]; // 0x18cd
            float flTimeSinceChange; // 0x18d0            
            uint8_t _pad18d4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Banana_Knockback because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Banana_Knockback) == 0x18d8);
    };
};
