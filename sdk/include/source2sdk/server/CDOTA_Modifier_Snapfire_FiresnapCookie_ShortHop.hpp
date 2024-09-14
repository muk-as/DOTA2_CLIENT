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
    // Size: 0x1728
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Snapfire_FiresnapCookie_ShortHop : public client::CDOTA_Buff
    {
    public:
        float jump_duration; // 0x16e8        
        int32_t jump_height; // 0x16ec        
        int32_t jump_horizontal_distance; // 0x16f0        
        float pre_land_anim_time; // 0x16f4        
        float landing_gesture_duration; // 0x16f8        
        int32_t impact_radius; // 0x16fc        
        int32_t impact_damage; // 0x1700        
        float impact_stun_duration; // 0x1704        
        float m_flStartZ; // 0x1708        
        float m_flCurTime; // 0x170c        
        float m_flJumpDuration; // 0x1710        
        float m_flJumpHeight; // 0x1714        
        Vector m_vTargetHorizontalDirection; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Snapfire_FiresnapCookie_ShortHop because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Snapfire_FiresnapCookie_ShortHop) == 0x1728);
};
