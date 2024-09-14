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
    // Size: 0x16f8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Hoodwink_Sharpshooter_Windup : public client::CDOTA_Buff
    {
    public:
        int32_t arrow_vision; // 0x16e8        
        float max_charge_time; // 0x16ec        
        float turn_rate; // 0x16f0        
        float base_power; // 0x16f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Hoodwink_Sharpshooter_Windup because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Hoodwink_Sharpshooter_Windup) == 0x16f8);
};
