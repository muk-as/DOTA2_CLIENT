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
    // Size: 0x1718
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Rubick_SpellSteal : public client::CDOTA_Buff
    {
    public:
        CUtlString m_strActivityModifier; // 0x1708        
        int32_t stolen_debuff_amp; // 0x1710        
        float stolen_mana_reduction; // 0x1714        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Rubick_SpellSteal because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Rubick_SpellSteal) == 0x1718);
};
