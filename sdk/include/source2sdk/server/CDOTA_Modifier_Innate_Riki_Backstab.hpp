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
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Innate_Riki_Backstab : public client::CDOTA_Buff
    {
    public:
        int32_t backstab_angle; // 0x1708        
        float damage_multiplier; // 0x170c        
        float bonus_xp_kill; // 0x1710        
        float bonus_xp_assist; // 0x1714        
        bool m_bBackstab; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x1719[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Innate_Riki_Backstab because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Innate_Riki_Backstab) == 0x1720);
};
