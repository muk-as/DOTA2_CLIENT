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
    // Size: 0x1738
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
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Disruptor_KineticField because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Disruptor_KineticField) == 0x1738);
};
