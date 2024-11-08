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
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Heal : public client::CDOTA_Buff
    {
    public:
        int32_t heal; // 0x1708        
        float mana_per_second; // 0x170c        
        float heal_interval; // 0x1710        
        int32_t does_heal_all_allies; // 0x1714        
        int32_t does_damage; // 0x1718        
        int32_t self_only_heal_percentage; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Heal because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Heal) == 0x1720);
};
