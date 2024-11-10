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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Psychic_Headband : public client::CDOTA_Buff
    {
    public:
        Vector m_vDirection; // 0x1708        
        float m_flEndTime; // 0x1714        
        float m_flCurTime; // 0x1718        
        float push_length; // 0x171c        
        float push_duration; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Psychic_Headband because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Psychic_Headband) == 0x1728);
};
