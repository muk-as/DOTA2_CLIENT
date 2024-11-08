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
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_AghsFort_ShadowShaman_Shackles : public client::CDOTA_Buff
    {
    public:
        float tick_interval; // 0x1708        
        float total_damage; // 0x170c        
        float channel_time; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1714[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_ShadowShaman_Shackles because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_AghsFort_ShadowShaman_Shackles) == 0x1720);
};
