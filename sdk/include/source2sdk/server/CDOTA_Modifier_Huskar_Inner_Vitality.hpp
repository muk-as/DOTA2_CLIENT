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
    class CDOTA_Modifier_Huskar_Inner_Vitality : public client::CDOTA_Buff
    {
    public:
        int32_t heal; // 0x16e8        
        float attrib_bonus; // 0x16ec        
        float hurt_attrib_bonus; // 0x16f0        
        float hurt_percent; // 0x16f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Huskar_Inner_Vitality because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Huskar_Inner_Vitality) == 0x16f8);
};
