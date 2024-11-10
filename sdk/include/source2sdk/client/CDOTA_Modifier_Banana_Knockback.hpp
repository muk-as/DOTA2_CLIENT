#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1758
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Banana_Knockback : public client::CDOTA_Buff
    {
    public:
        Vector m_vCenter; // 0x1708        
        int32_t knockback_distance; // 0x1714        
        int32_t knockback_height; // 0x1718        
        float knockback_duration; // 0x171c        
        Vector m_vHorizOffset; // 0x1720        
        Vector m_vStartPosition; // 0x172c        
        Vector m_vDir; // 0x1738        
        float m_fCurrentTimeHoriz; // 0x1744        
        float m_fCurrentTimeVert; // 0x1748        
        bool m_bShouldStun; // 0x174c        
        [[maybe_unused]] std::uint8_t pad_0x174d[0x3]; // 0x174d
        float flTimeSinceChange; // 0x1750        
        [[maybe_unused]] std::uint8_t pad_0x1754[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Banana_Knockback because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Banana_Knockback) == 0x1758);
};
