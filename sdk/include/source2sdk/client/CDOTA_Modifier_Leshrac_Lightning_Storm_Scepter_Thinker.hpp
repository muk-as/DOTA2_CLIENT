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
    class CDOTA_Modifier_Leshrac_Lightning_Storm_Scepter_Thinker : public client::CDOTA_Buff
    {
    public:
        float pulse_nova_lightning_interval; // 0x16e8        
        [[maybe_unused]] std::uint8_t pad_0x16ec[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Leshrac_Lightning_Storm_Scepter_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Leshrac_Lightning_Storm_Scepter_Thinker) == 0x16f0);
};
