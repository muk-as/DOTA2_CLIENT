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
        class CDOTA_Modifier_Knockback : public source2sdk::client::CDOTA_Buff
        {
        public:
            float knockback_distance; // 0x1878            
            std::int32_t knockback_height; // 0x187c            
            float knockback_duration; // 0x1880            
            Vector m_vHorizOffset; // 0x1884            
            Vector m_vStartPosition; // 0x1890            
            float m_flZDelta; // 0x189c            
            float m_fCurrentTimeHoriz; // 0x18a0            
            float m_fCurrentTimeVert; // 0x18a4            
            bool m_bShouldStun; // 0x18a8            
            bool m_bRespectLeash; // 0x18a9            
            bool m_bReversePolarity; // 0x18aa            
            bool m_bRelativeToGround; // 0x18ab            
            uint8_t _pad18ac[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Knockback because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Knockback) == 0x18b0);
    };
};
