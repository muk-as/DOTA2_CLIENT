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
    class CDOTA_Modifier_DoomBringer_Doom : public client::CDOTA_Buff
    {
    public:
        int32_t damage; // 0x1708        
        float duration; // 0x170c        
        int32_t deniable_pct; // 0x1710        
        float flElapsedTime; // 0x1714        
        int32_t damage_amp; // 0x1718        
        bool m_bDoesBreak; // 0x171c        
        bool m_bDoesMute; // 0x171d        
        [[maybe_unused]] std::uint8_t pad_0x171e[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_DoomBringer_Doom because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_DoomBringer_Doom) == 0x1720);
};
