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
    class CDOTA_Modifier_Sniper_Shrapnel_Thinker : public client::CDOTA_Buff
    {
    public:
        float radius; // 0x1708        
        bool m_bExploded; // 0x170c        
        [[maybe_unused]] std::uint8_t pad_0x170d[0xb]; // 0x170d
        bool m_bGrantedGem; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x1719[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Sniper_Shrapnel_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Sniper_Shrapnel_Thinker) == 0x1720);
};
