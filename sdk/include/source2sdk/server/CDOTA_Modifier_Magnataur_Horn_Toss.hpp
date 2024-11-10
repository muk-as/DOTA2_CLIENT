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
    // Size: 0x1740
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Magnataur_Horn_Toss : public client::CDOTA_Buff
    {
    public:
        float air_duration; // 0x1708        
        int32_t air_height; // 0x170c        
        int32_t travel_distance; // 0x1710        
        Vector m_vDestination; // 0x1714        
        float m_flStartZ; // 0x1720        
        float m_flCurTime; // 0x1724        
        float m_flJumpDuration; // 0x1728        
        float m_flJumpHeight; // 0x172c        
        Vector m_vTargetHorizontalDirection; // 0x1730        
        [[maybe_unused]] std::uint8_t pad_0x173c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Magnataur_Horn_Toss because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Magnataur_Horn_Toss) == 0x1740);
};
