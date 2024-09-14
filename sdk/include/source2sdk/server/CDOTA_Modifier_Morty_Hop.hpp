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
    class CDOTA_Modifier_Morty_Hop : public client::CDOTA_Buff
    {
    public:
        Vector m_vStartPosition; // 0x16e8        
        Vector m_vTargetPosition; // 0x16f4        
        float m_flCurrentTimeHoriz; // 0x1700        
        float m_flCurrentTimeVert; // 0x1704        
        float m_flZCoefficientA; // 0x1708        
        float m_flZCoefficientB; // 0x170c        
        bool m_bInterrupted; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1711[0x3]; // 0x1711
        float duration; // 0x1714        
        int32_t height; // 0x1718        
        int32_t damage; // 0x171c        
        int32_t damage_radius; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Morty_Hop because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Morty_Hop) == 0x1728);
};
