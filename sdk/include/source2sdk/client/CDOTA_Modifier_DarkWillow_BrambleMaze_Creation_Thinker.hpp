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
    class CDOTA_Modifier_DarkWillow_BrambleMaze_Creation_Thinker : public client::CDOTA_Buff
    {
    public:
        float latch_creation_interval; // 0x1708        
        float initial_creation_delay; // 0x170c        
        int32_t placement_count; // 0x1710        
        float placement_duration; // 0x1714        
        float extra_brambles_placement_duration; // 0x1718        
        int32_t m_iBramblesIndex; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_DarkWillow_BrambleMaze_Creation_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_DarkWillow_BrambleMaze_Creation_Thinker) == 0x1720);
};
