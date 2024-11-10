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
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Ringmaster_WhoopeeCushion_Active : public client::CDOTA_Buff
    {
    public:
        int32_t leap_distance; // 0x1708        
        float leap_speed; // 0x170c        
        float leap_acceleration; // 0x1710        
        int32_t leap_radius; // 0x1714        
        float leap_bonus_duration; // 0x1718        
        bool m_bLaunched; // 0x171c        
        [[maybe_unused]] std::uint8_t pad_0x171d[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Ringmaster_WhoopeeCushion_Active because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Ringmaster_WhoopeeCushion_Active) == 0x1720);
};
