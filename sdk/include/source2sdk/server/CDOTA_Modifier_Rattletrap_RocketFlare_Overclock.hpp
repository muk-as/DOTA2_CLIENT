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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Rattletrap_RocketFlare_Overclock : public client::CDOTA_Buff
    {
    public:
        float rocket_flare_interval; // 0x16e8        
        int32_t rocket_flare_offset_pct; // 0x16ec        
        int32_t rocket_flare_rockets; // 0x16f0        
        int32_t m_nRocketsFired; // 0x16f4        
        int32_t radius; // 0x16f8        
        Vector m_vOriginalTarget; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Rattletrap_RocketFlare_Overclock because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Rattletrap_RocketFlare_Overclock) == 0x1708);
};
