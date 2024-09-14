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
    class CDOTA_Modifier_Invoker_ChaosMeteor_Burn : public client::CDOTA_Buff
    {
    public:
        float spell_amp; // 0x16e8        
        float spell_lifesteal; // 0x16ec        
        float m_flDamagePerSecond; // 0x16f0        
        [[maybe_unused]] std::uint8_t pad_0x16f4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Invoker_ChaosMeteor_Burn because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Invoker_ChaosMeteor_Burn) == 0x16f8);
};
