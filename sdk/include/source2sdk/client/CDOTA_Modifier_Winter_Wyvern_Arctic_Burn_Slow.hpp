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
    class CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Slow : public client::CDOTA_Buff
    {
    public:
        float percent_damage; // 0x16e8        
        int32_t move_slow; // 0x16ec        
        float tick_rate; // 0x16f0        
        [[maybe_unused]] std::uint8_t pad_0x16f4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Slow because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Slow) == 0x16f8);
};
