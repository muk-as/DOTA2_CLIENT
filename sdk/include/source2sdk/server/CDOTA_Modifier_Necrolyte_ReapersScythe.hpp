#pragma once
#include "source2sdk/server/CDOTA_Modifier_Stunned.hpp"
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
    // Size: 0x16f0
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Necrolyte_ReapersScythe : public server::CDOTA_Modifier_Stunned
    {
    public:
        float stun_duration; // 0x16e8        
        bool m_bIllusion; // 0x16ec        
        bool m_bArcWardenClone; // 0x16ed        
        bool m_bSpiritBear; // 0x16ee        
        [[maybe_unused]] std::uint8_t pad_0x16ef[0x1];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Necrolyte_ReapersScythe because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Necrolyte_ReapersScythe) == 0x16f0);
};
