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
    // Size: 0x1730
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Crystal_Maiden_Crystal_Clone : public client::CDOTA_Buff
    {
    public:
        float hop_duration; // 0x1708        
        int32_t hop_distance; // 0x170c        
        float m_flCurTime; // 0x1710        
        float m_flEndTime; // 0x1714        
        float target_x; // 0x1718        
        float target_y; // 0x171c        
        Vector m_vTargetHorizontalDirection; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x172c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Crystal_Maiden_Crystal_Clone because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Crystal_Maiden_Crystal_Clone) == 0x1730);
};
