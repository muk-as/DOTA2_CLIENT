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
    // Size: 0x1718
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Tower_Aura_Bonus : public client::CDOTA_Buff
    {
    public:
        int32_t bonus_armor; // 0x1708        
        float hp_regen; // 0x170c        
        bool m_bOverrideArmor; // 0x1710        
        bool m_bOverrideRegen; // 0x1711        
        bool m_bSentFirstRefresh; // 0x1712        
        [[maybe_unused]] std::uint8_t pad_0x1713[0x5];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Tower_Aura_Bonus because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Tower_Aura_Bonus) == 0x1718);
};
