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
    // Size: 0x1710
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Slark_ShadowDance_PassiveRegen : public client::CDOTA_Buff
    {
    public:
        int32_t bonus_movement_speed; // 0x1708        
        float bonus_regen; // 0x170c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Slark_ShadowDance_PassiveRegen because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Slark_ShadowDance_PassiveRegen) == 0x1710);
};
