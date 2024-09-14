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
    class CDOTA_Modifier_DarkSeer_Surge : public client::CDOTA_Buff
    {
    public:
        int32_t speed_boost; // 0x16e8        
        int32_t trail_radius; // 0x16ec        
        float trail_duration; // 0x16f0        
        Vector m_vLastTrailThinkerLocation; // 0x16f4        
        bool m_bTrailStarted; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1701[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_DarkSeer_Surge because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_DarkSeer_Surge) == 0x1708);
};
