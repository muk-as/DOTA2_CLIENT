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
    class CDOTA_Modifier_Nian_Leap : public client::CDOTA_Buff
    {
    public:
        int32_t pounce_distance; // 0x16e8        
        float pounce_speed; // 0x16ec        
        float pounce_acceleration; // 0x16f0        
        float initial_delay; // 0x16f4        
        float landing_delay; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Nian_Leap because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Nian_Leap) == 0x1700);
};
