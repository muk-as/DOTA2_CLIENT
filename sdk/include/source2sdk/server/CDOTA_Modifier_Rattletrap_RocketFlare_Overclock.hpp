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
    class CDOTA_Modifier_Rattletrap_RocketFlare_Overclock : public client::CDOTA_Buff
    {
    public:
        float rocket_flare_interval; // 0x1708        
        int32_t rocket_flare_offset_pct; // 0x170c        
        int32_t rocket_flare_rockets; // 0x1710        
        int32_t m_nRocketsFired; // 0x1714        
        int32_t radius; // 0x1718        
        Vector m_vOriginalTarget; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Rattletrap_RocketFlare_Overclock because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Rattletrap_RocketFlare_Overclock) == 0x1728);
};
