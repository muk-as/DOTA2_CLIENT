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
    // Size: 0x1738
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Rubick_SpellSteal : public client::CDOTA_Buff
    {
    public:
        CUtlString m_strActivityModifier; // 0x1708        
        // m_vecAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecAbilities;
        char m_vecAbilities[0x18]; // 0x1710        
        bool m_bUsesTwoSlots; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x1729[0x3]; // 0x1729
        int32_t stolen_debuff_amp; // 0x172c        
        float stolen_mana_reduction; // 0x1730        
        [[maybe_unused]] std::uint8_t pad_0x1734[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Rubick_SpellSteal because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Rubick_SpellSteal) == 0x1738);
};
