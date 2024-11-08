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
    class CDOTA_Modifier_MonkeyKing_ArcToGround : public client::CDOTA_Buff
    {
    public:
        float leap_speed; // 0x1708        
        float give_up_distance; // 0x170c        
        float attackspeed_duration; // 0x1710        
        float m_flOriginalZDelta; // 0x1714        
        float m_flZDelta; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_MonkeyKing_ArcToGround because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_MonkeyKing_ArcToGround) == 0x1720);
};
