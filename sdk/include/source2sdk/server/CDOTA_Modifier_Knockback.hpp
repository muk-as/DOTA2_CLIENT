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
    // Size: 0x1718
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Knockback : public client::CDOTA_Buff
    {
    public:
        float knockback_distance; // 0x16e8        
        int32_t knockback_height; // 0x16ec        
        float knockback_duration; // 0x16f0        
        Vector m_vHorizOffset; // 0x16f4        
        Vector m_vStartPosition; // 0x1700        
        float m_fCurrentTimeHoriz; // 0x170c        
        float m_fCurrentTimeVert; // 0x1710        
        bool m_bShouldStun; // 0x1714        
        bool m_bRespectLeash; // 0x1715        
        bool m_bReversePolarity; // 0x1716        
        [[maybe_unused]] std::uint8_t pad_0x1717[0x1];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Knockback because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Knockback) == 0x1718);
};
