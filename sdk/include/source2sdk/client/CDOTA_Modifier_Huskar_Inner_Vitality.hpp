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
    class CDOTA_Modifier_Huskar_Inner_Vitality : public client::CDOTA_Buff
    {
    public:
        int32_t heal; // 0x1708        
        float attrib_bonus; // 0x170c        
        float hurt_attrib_bonus; // 0x1710        
        float hurt_percent; // 0x1714        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Huskar_Inner_Vitality because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Huskar_Inner_Vitality) == 0x1718);
};
