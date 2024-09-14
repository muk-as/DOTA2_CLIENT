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
    // Size: 0x1710
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Crystal_Maiden_Crystal_Clone : public client::CDOTA_Buff
    {
    public:
        float hop_duration; // 0x16e8        
        int32_t hop_distance; // 0x16ec        
        float m_flCurTime; // 0x16f0        
        float m_flEndTime; // 0x16f4        
        float target_x; // 0x16f8        
        float target_y; // 0x16fc        
        Vector m_vTargetHorizontalDirection; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x170c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Crystal_Maiden_Crystal_Clone because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Crystal_Maiden_Crystal_Clone) == 0x1710);
};
