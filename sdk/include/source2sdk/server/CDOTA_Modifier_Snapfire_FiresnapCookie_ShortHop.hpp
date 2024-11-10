#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1748
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Snapfire_FiresnapCookie_ShortHop : public client::CDOTA_Buff
    {
    public:
        float jump_duration; // 0x1708        
        int32_t jump_height; // 0x170c        
        int32_t jump_horizontal_distance; // 0x1710        
        float pre_land_anim_time; // 0x1714        
        float landing_gesture_duration; // 0x1718        
        int32_t impact_radius; // 0x171c        
        int32_t impact_damage; // 0x1720        
        float impact_stun_duration; // 0x1724        
        float m_flStartZ; // 0x1728        
        float m_flCurTime; // 0x172c        
        float m_flJumpDuration; // 0x1730        
        float m_flJumpHeight; // 0x1734        
        Vector m_vTargetHorizontalDirection; // 0x1738        
        [[maybe_unused]] std::uint8_t pad_0x1744[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Snapfire_FiresnapCookie_ShortHop because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Snapfire_FiresnapCookie_ShortHop) == 0x1748);
};
