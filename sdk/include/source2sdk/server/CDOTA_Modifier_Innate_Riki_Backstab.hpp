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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Innate_Riki_Backstab : public client::CDOTA_Buff
    {
    public:
        int32_t backstab_angle; // 0x16e8        
        float damage_multiplier; // 0x16ec        
        float bonus_xp_kill; // 0x16f0        
        float bonus_xp_assist; // 0x16f4        
        bool m_bBackstab; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16f9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Innate_Riki_Backstab because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Innate_Riki_Backstab) == 0x1700);
};
