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
    // Size: 0x16f8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Disruptor_StaticStorm : public client::CDOTA_Buff
    {
    public:
        int32_t miss_rate; // 0x16e8        
        int32_t movement_speed_reduction; // 0x16ec        
        int32_t attack_speed_reduction; // 0x16f0        
        bool m_bHasScepter; // 0x16f4        
        [[maybe_unused]] std::uint8_t pad_0x16f5[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Disruptor_StaticStorm because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Disruptor_StaticStorm) == 0x16f8);
};
