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
    // Size: 0x1718
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Aghsfort_Elemental_Wisp_Tether_Haste : public client::CDOTA_Buff
    {
    public:
        int32_t movement_speed; // 0x1708        
        int32_t attack_speed; // 0x170c        
        int32_t health_regen; // 0x1710        
        int32_t status_resist; // 0x1714        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Aghsfort_Elemental_Wisp_Tether_Haste because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Aghsfort_Elemental_Wisp_Tether_Haste) == 0x1718);
};
