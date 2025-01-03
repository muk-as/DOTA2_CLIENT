#pragma once
#include "source2sdk/client/CDOTA_Modifier_Stunned.hpp"
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
    #pragma pack(push, 1)
    class CDOTA_Modifier_Necrolyte_ReapersScythe : public client::CDOTA_Modifier_Stunned
    {
    public:
        float stun_duration; // 0x1708        
        bool m_bIllusion; // 0x170c        
        bool m_bArcWardenClone; // 0x170d        
        bool m_bSpiritBear; // 0x170e        
        [[maybe_unused]] std::uint8_t pad_0x170f[0x1];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Necrolyte_ReapersScythe because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Necrolyte_ReapersScythe) == 0x1710);
};
