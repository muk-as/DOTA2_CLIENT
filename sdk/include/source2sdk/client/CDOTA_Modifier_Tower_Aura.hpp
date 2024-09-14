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
    class CDOTA_Modifier_Tower_Aura : public client::CDOTA_Buff
    {
    public:
        int32_t bonus_armor; // 0x16e8        
        bool m_bOverrideArmor; // 0x16ec        
        [[maybe_unused]] std::uint8_t pad_0x16ed[0x3]; // 0x16ed
        float hp_regen; // 0x16f0        
        bool m_bOverrideRegen; // 0x16f4        
        [[maybe_unused]] std::uint8_t pad_0x16f5[0x3]; // 0x16f5
        int32_t m_nRadius; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Tower_Aura because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Tower_Aura) == 0x1700);
};
