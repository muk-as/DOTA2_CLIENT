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
        // Size: 0x1830
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Knockback : public source2sdk::client::CDOTA_Buff
        {
        public:
            float knockback_distance; // 0x17f8            
            std::int32_t knockback_height; // 0x17fc            
            float knockback_duration; // 0x1800            
            Vector m_vHorizOffset; // 0x1804            
            Vector m_vStartPosition; // 0x1810            
            float m_flZDelta; // 0x181c            
            float m_fCurrentTimeHoriz; // 0x1820            
            float m_fCurrentTimeVert; // 0x1824            
            bool m_bShouldStun; // 0x1828            
            bool m_bRespectLeash; // 0x1829            
            bool m_bReversePolarity; // 0x182a            
            bool m_bRelativeToGround; // 0x182b            
            uint8_t _pad182c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Knockback because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Knockback) == 0x1830);
    };
};
