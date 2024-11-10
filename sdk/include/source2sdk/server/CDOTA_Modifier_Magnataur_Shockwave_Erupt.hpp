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
    // Size: 0x1730
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Magnataur_Shockwave_Erupt : public client::CDOTA_Buff
    {
    public:
        int32_t scepter_width; // 0x1708        
        float scepter_duration; // 0x170c        
        bool play_particle; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1711[0x3]; // 0x1711
        Vector m_vStart; // 0x1714        
        Vector m_vEnd; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x172c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Magnataur_Shockwave_Erupt because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Magnataur_Shockwave_Erupt) == 0x1730);
};
