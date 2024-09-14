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
    class CDOTA_Modifier_DragonKnight_Inherited_Vigor : public client::CDOTA_Buff
    {
    public:
        float base_health_regen; // 0x16e8        
        float base_armor; // 0x16ec        
        float level_mult; // 0x16f0        
        float regen_and_armor_multiplier_during_dragon_form; // 0x16f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_DragonKnight_Inherited_Vigor because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_DragonKnight_Inherited_Vigor) == 0x16f8);
};
