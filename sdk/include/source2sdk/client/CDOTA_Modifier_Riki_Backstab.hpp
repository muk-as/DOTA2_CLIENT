#pragma once
#include "source2sdk/client/CDOTA_Modifier_PersistentInvisibility.hpp"
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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Riki_Backstab : public client::CDOTA_Modifier_PersistentInvisibility
    {
    public:
        int32_t cleave; // 0x16f8        
        float bonus_health_regen; // 0x16fc        
        float bonus_mana_regen; // 0x1700        
        int32_t creep_bonus_damage; // 0x1704        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Riki_Backstab because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Riki_Backstab) == 0x1708);
};
