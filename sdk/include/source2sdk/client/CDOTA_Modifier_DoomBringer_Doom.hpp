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
    class CDOTA_Modifier_DoomBringer_Doom : public client::CDOTA_Buff
    {
    public:
        int32_t damage; // 0x16e8        
        float duration; // 0x16ec        
        int32_t deniable_pct; // 0x16f0        
        float flElapsedTime; // 0x16f4        
        int32_t damage_amp; // 0x16f8        
        bool m_bDoesBreak; // 0x16fc        
        bool m_bDoesMute; // 0x16fd        
        [[maybe_unused]] std::uint8_t pad_0x16fe[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_DoomBringer_Doom because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_DoomBringer_Doom) == 0x1700);
};
