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
        // Size: 0x1848
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Banana_Knockback : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vCenter; // 0x17f8            
            std::int32_t knockback_distance; // 0x1804            
            std::int32_t knockback_height; // 0x1808            
            float knockback_duration; // 0x180c            
            Vector m_vHorizOffset; // 0x1810            
            Vector m_vStartPosition; // 0x181c            
            Vector m_vDir; // 0x1828            
            float m_fCurrentTimeHoriz; // 0x1834            
            float m_fCurrentTimeVert; // 0x1838            
            bool m_bShouldStun; // 0x183c            
            uint8_t _pad183d[0x3]; // 0x183d
            float flTimeSinceChange; // 0x1840            
            uint8_t _pad1844[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Banana_Knockback because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Banana_Knockback) == 0x1848);
    };
};
