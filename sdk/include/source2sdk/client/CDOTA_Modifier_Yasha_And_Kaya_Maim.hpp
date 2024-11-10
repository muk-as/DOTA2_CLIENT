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
    class CDOTA_Modifier_Yasha_And_Kaya_Maim : public client::CDOTA_Buff
    {
    public:
        int32_t maim_slow_movement; // 0x1708        
        int32_t maim_slow_attack; // 0x170c        
        int32_t maim_slow_movement_range; // 0x1710        
        int32_t maim_slow_attack_range; // 0x1714        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Yasha_And_Kaya_Maim because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Yasha_And_Kaya_Maim) == 0x1718);
};
