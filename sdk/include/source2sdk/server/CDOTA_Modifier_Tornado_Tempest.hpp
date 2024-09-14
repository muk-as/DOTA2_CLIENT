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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Tornado_Tempest : public client::CDOTA_Buff
    {
    public:
        int32_t near_radius; // 0x16e8        
        int32_t near_damage; // 0x16ec        
        float far_radius; // 0x16f0        
        int32_t far_damage; // 0x16f4        
        float tick_rate; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Tornado_Tempest because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Tornado_Tempest) == 0x1708);
};
