#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    class CDOTA_Modifier_Mirana_SolarFlare : public client::CDOTA_Buff
    {
    public:
        float duration; // 0x1708        
        float smoothness; // 0x170c        
        float increase_rate; // 0x1710        
        int32_t max_total_increase; // 0x1714        
        entity2::GameTime_t flMaxDamageGameTime; // 0x1718        
        int32_t evasion; // 0x171c        
        int32_t m_iTotalAmount; // 0x1720        
        int32_t ally_pct; // 0x1724        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Mirana_SolarFlare because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Mirana_SolarFlare) == 0x1728);
};
