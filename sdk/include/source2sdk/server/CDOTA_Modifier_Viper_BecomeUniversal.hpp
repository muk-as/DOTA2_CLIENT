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
    // Size: 0x16f0
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Viper_BecomeUniversal : public client::CDOTA_Buff
    {
    public:
        int32_t bonus_magic_resistance; // 0x16e8        
        int32_t is_universal; // 0x16ec        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Viper_BecomeUniversal because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Viper_BecomeUniversal) == 0x16f0);
};
