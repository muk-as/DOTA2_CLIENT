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
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Jakiro_Macropyre_Ice_EdgeThinker : public client::CDOTA_Buff
    {
    public:
        Vector m_vPathDir; // 0x1708        
        int32_t ice_edge_path_radius; // 0x1714        
        int32_t cast_range; // 0x1718        
        float ice_edge_linger_duration; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Jakiro_Macropyre_Ice_EdgeThinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Jakiro_Macropyre_Ice_EdgeThinker) == 0x1720);
};
