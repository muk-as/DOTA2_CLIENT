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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Disruptor_KineticFieldThinker : public client::CDOTA_Buff
    {
    public:
        float radius; // 0x16e8        
        float formation_time; // 0x16ec        
        bool m_bActive; // 0x16f0        
        [[maybe_unused]] std::uint8_t pad_0x16f1[0xf];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Disruptor_KineticFieldThinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Disruptor_KineticFieldThinker) == 0x1700);
};
