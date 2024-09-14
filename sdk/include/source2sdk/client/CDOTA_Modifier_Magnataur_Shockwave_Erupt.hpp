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
    class CDOTA_Modifier_Magnataur_Shockwave_Erupt : public client::CDOTA_Buff
    {
    public:
        int32_t scepter_width; // 0x16e8        
        float scepter_duration; // 0x16ec        
        bool play_particle; // 0x16f0        
        [[maybe_unused]] std::uint8_t pad_0x16f1[0x3]; // 0x16f1
        Vector m_vStart; // 0x16f4        
        Vector m_vEnd; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x170c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Magnataur_Shockwave_Erupt because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Magnataur_Shockwave_Erupt) == 0x1710);
};
