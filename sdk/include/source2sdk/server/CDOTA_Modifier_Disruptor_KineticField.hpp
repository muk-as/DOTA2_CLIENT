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
    class CDOTA_Modifier_Disruptor_KineticField : public client::CDOTA_Buff
    {
    public:
        float radius; // 0x16e8        
        Vector m_vOriginLoc; // 0x16ec        
        bool m_bTruesight; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16f9[0x3]; // 0x16f9
        float damage_per_second; // 0x16fc        
        Vector m_vOrigin; // 0x1700        
        Vector m_vWallRight; // 0x170c        
        [[maybe_unused]] std::uint8_t pad_0x1718[0x4]; // 0x1718
        bool is_wall; // 0x171c        
        [[maybe_unused]] std::uint8_t pad_0x171d[0x3]; // 0x171d
        float m_flWallThickness; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Disruptor_KineticField because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Disruptor_KineticField) == 0x1728);
};
