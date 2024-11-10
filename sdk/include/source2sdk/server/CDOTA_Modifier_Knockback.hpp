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
    // Size: 0x1738
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Knockback : public client::CDOTA_Buff
    {
    public:
        float knockback_distance; // 0x1708        
        int32_t knockback_height; // 0x170c        
        float knockback_duration; // 0x1710        
        Vector m_vHorizOffset; // 0x1714        
        Vector m_vStartPosition; // 0x1720        
        float m_fCurrentTimeHoriz; // 0x172c        
        float m_fCurrentTimeVert; // 0x1730        
        bool m_bShouldStun; // 0x1734        
        bool m_bRespectLeash; // 0x1735        
        bool m_bReversePolarity; // 0x1736        
        [[maybe_unused]] std::uint8_t pad_0x1737[0x1];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Knockback because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Knockback) == 0x1738);
};
