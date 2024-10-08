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
    class CDOTA_Modifier_DarkWillow_BrambleMaze_Creation_Thinker : public client::CDOTA_Buff
    {
    public:
        float latch_creation_interval; // 0x16e8        
        float initial_creation_delay; // 0x16ec        
        int32_t placement_count; // 0x16f0        
        float placement_duration; // 0x16f4        
        float extra_brambles_placement_duration; // 0x16f8        
        int32_t m_iBramblesIndex; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_DarkWillow_BrambleMaze_Creation_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_DarkWillow_BrambleMaze_Creation_Thinker) == 0x1700);
};
