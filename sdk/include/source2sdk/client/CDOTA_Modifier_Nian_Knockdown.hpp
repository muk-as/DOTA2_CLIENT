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
    // Size: 0x16f8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Nian_Knockdown : public client::CDOTA_Buff
    {
    public:
        float m_flStandUpDuration; // 0x16e8        
        float m_flKnockDownDuration; // 0x16ec        
        bool m_bDebuff; // 0x16f0        
        bool m_bStandingUp; // 0x16f1        
        [[maybe_unused]] std::uint8_t pad_0x16f2[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Nian_Knockdown because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Nian_Knockdown) == 0x16f8);
};
