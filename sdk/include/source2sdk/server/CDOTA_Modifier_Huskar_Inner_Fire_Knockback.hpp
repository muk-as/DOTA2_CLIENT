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
    #pragma pack(push, 1)
    class CDOTA_Modifier_Huskar_Inner_Fire_Knockback : public client::CDOTA_Buff
    {
    public:
        Vector m_vDirection; // 0x1708        
        float m_flEndTime; // 0x1714        
        float m_flCurTime; // 0x1718        
        float knockback_distance; // 0x171c        
        float knockback_duration; // 0x1720        
        float effective_distance; // 0x1724        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Huskar_Inner_Fire_Knockback because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Huskar_Inner_Fire_Knockback) == 0x1728);
};
