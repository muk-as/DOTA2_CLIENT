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
    class CDOTA_Modifier_DragonKnight_Inherited_Vigor : public client::CDOTA_Buff
    {
    public:
        float base_health_regen; // 0x1708        
        float base_armor; // 0x170c        
        float level_mult; // 0x1710        
        float regen_and_armor_multiplier_during_dragon_form; // 0x1714        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_DragonKnight_Inherited_Vigor because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_DragonKnight_Inherited_Vigor) == 0x1718);
};
