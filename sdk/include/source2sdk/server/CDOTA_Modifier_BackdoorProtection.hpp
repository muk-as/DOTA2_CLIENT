#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
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
    // Size: 0x1718
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_BackdoorProtection : public client::CDOTA_Buff
    {
    public:
        bool m_bActivated; // 0x16e8        
        [[maybe_unused]] std::uint8_t pad_0x16e9[0x3]; // 0x16e9
        float m_flHealthToRestore; // 0x16ec        
        int32_t radius; // 0x16f0        
        float activation_time; // 0x16f4        
        int32_t regen_rate; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4]; // 0x16fc
        server::CountdownTimer m_TimerToActivate; // 0x1700        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_BackdoorProtection because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_BackdoorProtection) == 0x1718);
};
