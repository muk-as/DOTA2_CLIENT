#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CDOTA_Buff;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Elder_Titan_EarthSplitter_Thinker : public client::CDOTA_Buff
    {
    public:
        int32_t crack_width; // 0x16e8        
        int32_t damage_pct; // 0x16ec        
        float slow_duration; // 0x16f0        
        float slow_duration_scepter; // 0x16f4        
        client::CDOTA_Buff* m_pParentModifier; // 0x16f8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Elder_Titan_EarthSplitter_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Elder_Titan_EarthSplitter_Thinker) == 0x1700);
};
