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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Knockback : public source2sdk::client::CDOTA_Buff
        {
        public:
            float knockback_distance; // 0x_            
            std::int32_t knockback_height; // 0x_            
            float knockback_duration; // 0x_            
            Vector m_vHorizOffset; // 0x_            
            Vector m_vStartPosition; // 0x_            
            float m_flZDelta; // 0x_            
            float m_fCurrentTimeHoriz; // 0x_            
            float m_fCurrentTimeVert; // 0x_            
            bool m_bShouldStun; // 0x_            
            bool m_bRespectLeash; // 0x_            
            bool m_bReversePolarity; // 0x_            
            bool m_bRelativeToGround; // 0x_            
            bool m_bFindClearSpace; // 0x_            
            bool m_bDestroyTreesOnRoute; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Knockback because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Knockback) == 0x_);
    };
};
