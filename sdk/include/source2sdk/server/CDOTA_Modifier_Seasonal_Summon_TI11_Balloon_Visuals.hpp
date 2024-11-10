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
    // Size: 0x1710
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Seasonal_Summon_TI11_Balloon_Visuals : public client::CDOTA_Buff
    {
    public:
        float model_scale_per_stack; // 0x1708        
        bool m_bIsRadiant; // 0x170c        
        [[maybe_unused]] std::uint8_t pad_0x170d[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Seasonal_Summon_TI11_Balloon_Visuals because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Seasonal_Summon_TI11_Balloon_Visuals) == 0x1710);
};
