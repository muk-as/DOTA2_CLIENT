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
    class CDOTA_Modifier_Jakiro_Macropyre_Thinker : public client::CDOTA_Buff
    {
    public:
        Vector m_vPathDir; // 0x16e8        
        float burn_interval; // 0x16f4        
        int32_t path_radius; // 0x16f8        
        int32_t cast_range; // 0x16fc        
        float linger_duration; // 0x1700        
        bool m_bTestedGem; // 0x1704        
        [[maybe_unused]] std::uint8_t pad_0x1705[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Jakiro_Macropyre_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Jakiro_Macropyre_Thinker) == 0x1708);
};
