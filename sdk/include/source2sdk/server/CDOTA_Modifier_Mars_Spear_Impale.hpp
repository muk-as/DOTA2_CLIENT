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
    // Size: 0x1710
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Mars_Spear_Impale : public client::CDOTA_Buff
    {
    public:
        int32_t m_nProjectileHandle; // 0x1708        
        bool m_bLatched; // 0x170c        
        bool m_bHitArenaOfBlood; // 0x170d        
        [[maybe_unused]] std::uint8_t pad_0x170e[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Mars_Spear_Impale because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Mars_Spear_Impale) == 0x1710);
};
