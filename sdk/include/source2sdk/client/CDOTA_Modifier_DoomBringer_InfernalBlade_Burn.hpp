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
    class CDOTA_Modifier_DoomBringer_InfernalBlade_Burn : public client::CDOTA_Buff
    {
    public:
        int32_t burn_damage; // 0x16e8        
        float burn_damage_pct; // 0x16ec        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_DoomBringer_InfernalBlade_Burn because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_DoomBringer_InfernalBlade_Burn) == 0x16f0);
};
