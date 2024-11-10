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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Invoker_ChaosMeteor_Land : public client::CDOTA_Buff
    {
    public:
        Vector m_vDir; // 0x1708        
        int32_t travel_speed; // 0x1714        
        int32_t travel_distance; // 0x1718        
        int32_t vision_distance; // 0x171c        
        float spell_amp; // 0x1720        
        float spell_lifesteal; // 0x1724        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Invoker_ChaosMeteor_Land because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Invoker_ChaosMeteor_Land) == 0x1728);
};
