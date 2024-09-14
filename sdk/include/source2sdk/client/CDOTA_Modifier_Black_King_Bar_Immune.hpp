#pragma once
#include "source2sdk/client/CDOTA_Modifier_DebuffImmune.hpp"
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
    class CDOTA_Modifier_Black_King_Bar_Immune : public client::CDOTA_Modifier_DebuffImmune
    {
    public:
        int32_t model_scale; // 0x16e8        
        int32_t magic_resist; // 0x16ec        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Black_King_Bar_Immune because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Black_King_Bar_Immune) == 0x16f0);
};
