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
    class CDOTA_Modifier_Sniper_Shrapnel_Thinker : public client::CDOTA_Buff
    {
    public:
        float radius; // 0x16e8        
        bool m_bExploded; // 0x16ec        
        [[maybe_unused]] std::uint8_t pad_0x16ed[0xb]; // 0x16ed
        bool m_bGrantedGem; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16f9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Sniper_Shrapnel_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Sniper_Shrapnel_Thinker) == 0x1700);
};
