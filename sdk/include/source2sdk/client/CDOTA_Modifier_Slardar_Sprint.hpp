#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    class CDOTA_Modifier_Slardar_Sprint : public client::CDOTA_Buff
    {
    public:
        float bonus_speed; // 0x1708        
        int32_t speed_burst_percent; // 0x170c        
        float speed_burst_duration; // 0x1710        
        float speed_burst_max_duration; // 0x1714        
        entity2::GameTime_t m_fStartTime; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Slardar_Sprint because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Slardar_Sprint) == 0x1720);
};
