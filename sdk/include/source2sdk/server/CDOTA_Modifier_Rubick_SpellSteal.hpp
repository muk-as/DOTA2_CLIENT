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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1718
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Rubick_SpellSteal : public client::CDOTA_Buff
    {
    public:
        CUtlString m_strActivityModifier; // 0x16e8        
        // m_vecAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecAbilities;
        char m_vecAbilities[0x18]; // 0x16f0        
        bool m_bUsesTwoSlots; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x1709[0x3]; // 0x1709
        int32_t stolen_debuff_amp; // 0x170c        
        float stolen_mana_reduction; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1714[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Rubick_SpellSteal because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Rubick_SpellSteal) == 0x1718);
};
