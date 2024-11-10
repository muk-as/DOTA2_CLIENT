#pragma once
#include "source2sdk/server/CDOTA_Modifier_PersistentInvisibility.hpp"
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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Riki_Backstab : public server::CDOTA_Modifier_PersistentInvisibility
    {
    public:
        int32_t cleave; // 0x1718        
        float bonus_health_regen; // 0x171c        
        float bonus_mana_regen; // 0x1720        
        int32_t creep_bonus_damage; // 0x1724        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Riki_Backstab because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Riki_Backstab) == 0x1728);
};
