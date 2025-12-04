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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Banana_Knockback : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vCenter; // 0x_            
            std::int32_t knockback_distance; // 0x_            
            std::int32_t knockback_height; // 0x_            
            float knockback_duration; // 0x_            
            Vector m_vHorizOffset; // 0x_            
            Vector m_vStartPosition; // 0x_            
            Vector m_vDir; // 0x_            
            float m_fCurrentTimeHoriz; // 0x_            
            float m_fCurrentTimeVert; // 0x_            
            bool m_bShouldStun; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float flTimeSinceChange; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Banana_Knockback because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Banana_Knockback) == 0x_);
    };
};
