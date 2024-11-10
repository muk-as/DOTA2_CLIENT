#pragma once
#include "source2sdk/server/CDOTA_Modifier_Stacking_Multiple_Buff_Base.hpp"
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
    class CDOTA_Modifier_Slark_EssenceShift_Debuff : public server::CDOTA_Modifier_Stacking_Multiple_Buff_Base
    {
    public:
        int32_t stat_loss; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1714[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Slark_EssenceShift_Debuff because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Slark_EssenceShift_Debuff) == 0x1718);
};
