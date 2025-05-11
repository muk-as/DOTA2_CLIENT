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
        // Size: 0x1838
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Snapfire_FiresnapCookie_ShortHop : public source2sdk::client::CDOTA_Buff
        {
        public:
            float jump_duration; // 0x17f8            
            std::int32_t jump_height; // 0x17fc            
            std::int32_t jump_horizontal_distance; // 0x1800            
            float pre_land_anim_time; // 0x1804            
            float landing_gesture_duration; // 0x1808            
            float impact_radius; // 0x180c            
            std::int32_t impact_damage; // 0x1810            
            float impact_stun_duration; // 0x1814            
            float m_flStartZ; // 0x1818            
            float m_flCurTime; // 0x181c            
            float m_flJumpDuration; // 0x1820            
            float m_flJumpHeight; // 0x1824            
            Vector m_vTargetHorizontalDirection; // 0x1828            
            uint8_t _pad1834[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Snapfire_FiresnapCookie_ShortHop because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Snapfire_FiresnapCookie_ShortHop) == 0x1838);
    };
};
