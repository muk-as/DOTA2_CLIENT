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
    class CDOTA_Modifier_Morty_Hop : public client::CDOTA_Buff
    {
    public:
        Vector m_vStartPosition; // 0x1708        
        Vector m_vTargetPosition; // 0x1714        
        float m_flCurrentTimeHoriz; // 0x1720        
        float m_flCurrentTimeVert; // 0x1724        
        float m_flZCoefficientA; // 0x1728        
        float m_flZCoefficientB; // 0x172c        
        bool m_bInterrupted; // 0x1730        
        [[maybe_unused]] std::uint8_t pad_0x1731[0x3]; // 0x1731
        float duration; // 0x1734        
        int32_t height; // 0x1738        
        int32_t damage; // 0x173c        
        int32_t damage_radius; // 0x1740        
        [[maybe_unused]] std::uint8_t pad_0x1744[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Morty_Hop because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Morty_Hop) == 0x1748);
};
