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
    // Size: 0x1720
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Magnataur_Horn_Toss : public client::CDOTA_Buff
    {
    public:
        float air_duration; // 0x16e8        
        int32_t air_height; // 0x16ec        
        int32_t travel_distance; // 0x16f0        
        Vector m_vDestination; // 0x16f4        
        float m_flStartZ; // 0x1700        
        float m_flCurTime; // 0x1704        
        float m_flJumpDuration; // 0x1708        
        float m_flJumpHeight; // 0x170c        
        Vector m_vTargetHorizontalDirection; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Magnataur_Horn_Toss because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Magnataur_Horn_Toss) == 0x1720);
};
