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
    // Size: 0x1738
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_BackdoorProtection : public client::CDOTA_Buff
    {
    public:
        bool m_bActivated; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x1709[0x3]; // 0x1709
        float m_flHealthToRestore; // 0x170c        
        int32_t radius; // 0x1710        
        float activation_time; // 0x1714        
        int32_t regen_rate; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4]; // 0x171c
        server::CountdownTimer m_TimerToActivate; // 0x1720        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_BackdoorProtection because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_BackdoorProtection) == 0x1738);
};
