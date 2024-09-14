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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Ringmaster_WhoopeeCushion_Active : public client::CDOTA_Buff
    {
    public:
        int32_t leap_distance; // 0x16e8        
        float leap_speed; // 0x16ec        
        float leap_acceleration; // 0x16f0        
        int32_t leap_radius; // 0x16f4        
        float leap_bonus_duration; // 0x16f8        
        bool m_bLaunched; // 0x16fc        
        [[maybe_unused]] std::uint8_t pad_0x16fd[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Ringmaster_WhoopeeCushion_Active because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Ringmaster_WhoopeeCushion_Active) == 0x1700);
};
