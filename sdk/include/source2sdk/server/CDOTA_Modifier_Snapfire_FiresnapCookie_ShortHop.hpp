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
        class CDOTA_Modifier_Snapfire_FiresnapCookie_ShortHop : public source2sdk::client::CDOTA_Buff
        {
        public:
            float jump_duration; // 0x1888            
            std::int32_t jump_height; // 0x188c            
            std::int32_t jump_horizontal_distance; // 0x1890            
            float pre_land_anim_time; // 0x1894            
            float landing_gesture_duration; // 0x1898            
            float impact_radius; // 0x189c            
            std::int32_t impact_damage; // 0x18a0            
            float impact_stun_duration; // 0x18a4            
            float m_flStartZ; // 0x18a8            
            float m_flCurTime; // 0x18ac            
            float m_flJumpDuration; // 0x18b0            
            float m_flJumpHeight; // 0x18b4            
            Vector m_vTargetHorizontalDirection; // 0x18b8            
            uint8_t _pad18c4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Snapfire_FiresnapCookie_ShortHop because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Snapfire_FiresnapCookie_ShortHop) == 0x18c8);
    };
};
