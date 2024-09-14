#pragma once
#include "source2sdk/client/CDOTA_Modifier_Stacking_Base.hpp"
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
    class CDOTA_Modifier_Slark_EssenceShift : public client::CDOTA_Modifier_Stacking_Base
    {
    public:
        int32_t agi_gain; // 0x16e8        
        float duration; // 0x16ec        
        int32_t max_stacks_per_hero; // 0x16f0        
        [[maybe_unused]] std::uint8_t pad_0x16f4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Slark_EssenceShift because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Slark_EssenceShift) == 0x16f8);
};
