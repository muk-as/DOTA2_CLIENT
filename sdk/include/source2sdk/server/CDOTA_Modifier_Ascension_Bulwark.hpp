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
    // Size: 0x1718
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Ascension_Bulwark : public client::CDOTA_Buff
    {
    public:
        float physical_damage_reduction; // 0x1708        
        float physical_damage_reduction_side; // 0x170c        
        float forward_angle; // 0x1710        
        float side_angle; // 0x1714        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Ascension_Bulwark because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Ascension_Bulwark) == 0x1718);
};
