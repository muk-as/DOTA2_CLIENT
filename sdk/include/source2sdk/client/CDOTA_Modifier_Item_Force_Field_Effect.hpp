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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Force_Field_Effect : public client::CDOTA_Buff
    {
    public:
        float bonus_aoe_armor; // 0x16e8        
        float bonus_aoe_ms; // 0x16ec        
        float bonus_aoe_mres; // 0x16f0        
        float self_mres; // 0x16f4        
        float self_armor; // 0x16f8        
        int32_t active_reflection_pct; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Force_Field_Effect because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Force_Field_Effect) == 0x1700);
};
