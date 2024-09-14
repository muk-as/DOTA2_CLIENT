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
    // Size: 0x16f8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Tower_Aura_Bonus : public client::CDOTA_Buff
    {
    public:
        int32_t bonus_armor; // 0x16e8        
        float hp_regen; // 0x16ec        
        bool m_bOverrideArmor; // 0x16f0        
        bool m_bOverrideRegen; // 0x16f1        
        bool m_bSentFirstRefresh; // 0x16f2        
        [[maybe_unused]] std::uint8_t pad_0x16f3[0x5];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Tower_Aura_Bonus because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Tower_Aura_Bonus) == 0x16f8);
};
