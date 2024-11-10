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
    // Size: 0x1730
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Hoodwink_Sharpshooter_Recoil : public client::CDOTA_Buff
    {
    public:
        float recoil_duration; // 0x1708        
        int32_t recoil_height; // 0x170c        
        int32_t recoil_distance; // 0x1710        
        float m_flStartZ; // 0x1714        
        float m_flCurTime; // 0x1718        
        float m_flJumpDuration; // 0x171c        
        float m_flJumpHeight; // 0x1720        
        Vector m_vTargetHorizontalDirection; // 0x1724        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Hoodwink_Sharpshooter_Recoil because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Hoodwink_Sharpshooter_Recoil) == 0x1730);
};
