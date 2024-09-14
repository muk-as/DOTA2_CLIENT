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
    // Size: 0x16f0
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Seasonal_Summon_TI11_Balloon_Visuals : public client::CDOTA_Buff
    {
    public:
        float model_scale_per_stack; // 0x16e8        
        bool m_bIsRadiant; // 0x16ec        
        [[maybe_unused]] std::uint8_t pad_0x16ed[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Seasonal_Summon_TI11_Balloon_Visuals because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Seasonal_Summon_TI11_Balloon_Visuals) == 0x16f0);
};
