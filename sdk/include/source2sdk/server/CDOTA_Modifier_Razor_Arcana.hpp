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
    class CDOTA_Modifier_Razor_Arcana : public client::CDOTA_Buff
    {
    public:
        bool m_bIsMeleeAttack; // 0x1708        
        bool m_bTauntQueued; // 0x1709        
        [[maybe_unused]] std::uint8_t pad_0x170a[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Razor_Arcana because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Razor_Arcana) == 0x1710);
};
