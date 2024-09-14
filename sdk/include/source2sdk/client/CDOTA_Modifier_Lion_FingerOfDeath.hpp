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
    // Size: 0x16f0
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Lion_FingerOfDeath : public client::CDOTA_Buff
    {
    public:
        bool m_bIgnoreBonus; // 0x16e8        
        [[maybe_unused]] std::uint8_t pad_0x16e9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Lion_FingerOfDeath because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Lion_FingerOfDeath) == 0x16f0);
};
