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
    class CDOTA_Modifier_Axe_Coat_Of_Blood : public client::CDOTA_Buff
    {
    public:
        float armor_per_kill; // 0x16e8        
        int32_t culling_blade_multiplier; // 0x16ec        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Axe_Coat_Of_Blood because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Axe_Coat_Of_Blood) == 0x16f0);
};
