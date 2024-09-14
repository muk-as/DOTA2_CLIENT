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
    // Size: 0x1710
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_OgreSealTotem_Active : public client::CDOTA_Buff
    {
    public:
        int32_t m_nCurrentBounce; // 0x16e8        
        int32_t leap_distance; // 0x16ec        
        float leap_speed; // 0x16f0        
        float leap_acceleration; // 0x16f4        
        int32_t leap_radius; // 0x16f8        
        float leap_bonus_duration; // 0x16fc        
        bool m_bLaunched; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1701[0x3]; // 0x1701
        float m_flFacingTarget; // 0x1704        
        float movement_turn_rate; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x170c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_OgreSealTotem_Active because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_OgreSealTotem_Active) == 0x1710);
};
