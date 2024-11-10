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
    class CDOTA_Modifier_Disruptor_KineticField : public client::CDOTA_Buff
    {
    public:
        float radius; // 0x1708        
        Vector m_vOriginLoc; // 0x170c        
        bool m_bTruesight; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x1719[0x3]; // 0x1719
        float damage_per_second; // 0x171c        
        Vector m_vOrigin; // 0x1720        
        Vector m_vWallRight; // 0x172c        
        [[maybe_unused]] std::uint8_t pad_0x1738[0x4]; // 0x1738
        bool is_wall; // 0x173c        
        [[maybe_unused]] std::uint8_t pad_0x173d[0x3]; // 0x173d
        float m_flWallThickness; // 0x1740        
        [[maybe_unused]] std::uint8_t pad_0x1744[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Disruptor_KineticField because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Disruptor_KineticField) == 0x1748);
};
