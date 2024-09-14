#pragma once
#include "source2sdk/server/CDOTA_Modifier_Stacking_Base.hpp"
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
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Slark_EssenceShift : public server::CDOTA_Modifier_Stacking_Base
    {
    public:
        int32_t agi_gain; // 0x1708        
        float duration; // 0x170c        
        int32_t max_stacks_per_hero; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1714[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Slark_EssenceShift because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Slark_EssenceShift) == 0x1718);
};
